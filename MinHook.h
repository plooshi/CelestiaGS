#pragma once

#include <windows.h>
#include <tlhelp32.h>

class MinHook
{
#ifndef ARRAYSIZE
#define ARRAYSIZE(A) (sizeof(A) / sizeof((A)[0]))
#endif

#define INITIAL_HOOK_CAPACITY 32

#define INITIAL_THREAD_CAPACITY 128

#define INVALID_HOOK_POS UINT_MAX
#define ALL_HOOKS_POS UINT_MAX

#define ACTION_DISABLE 0
#define ACTION_ENABLE 1
#define ACTION_APPLY_QUEUED 2

#define THREAD_ACCESS \
    (THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT | THREAD_QUERY_INFORMATION | THREAD_SET_CONTEXT)

    typedef struct _HOOK_ENTRY
    {
        LPVOID pTarget;
        LPVOID pDetour;
        LPVOID pTrampoline;
        UINT8 backup[8];
        UINT8 patchAbove : 1;
        UINT8 isEnabled : 1;
        UINT8 queueEnable : 1;
        UINT nIP : 4;
        UINT8 oldIPs[8];
        UINT8 newIPs[8];
    } HOOK_ENTRY, *PHOOK_ENTRY;

    typedef struct _FROZEN_THREADS
    {
        LPDWORD pItems;
        UINT capacity;
        UINT size;
    } FROZEN_THREADS, *PFROZEN_THREADS;

    static inline volatile LONG g_isLocked = FALSE;

    static inline HANDLE g_hHeap = NULL;

    static inline struct
    {
        PHOOK_ENTRY pItems;
        UINT capacity;
        UINT size;
    } g_hooks;

    typedef enum MH_STATUS
    {
        MH_UNKNOWN = -1,

        MH_OK = 0,

        MH_ERROR_ALREADY_INITIALIZED,

        MH_ERROR_NOT_INITIALIZED,

        MH_ERROR_ALREADY_CREATED,

        MH_ERROR_NOT_CREATED,

        MH_ERROR_ENABLED,

        MH_ERROR_DISABLED,

        MH_ERROR_NOT_EXECUTABLE,

        MH_ERROR_UNSUPPORTED_FUNCTION,

        MH_ERROR_MEMORY_ALLOC,

        MH_ERROR_MEMORY_PROTECT,

        MH_ERROR_MODULE_NOT_FOUND,

        MH_ERROR_FUNCTION_NOT_FOUND
    } MH_STATUS;

#pragma pack(push, 1)

    typedef struct _JMP_REL_SHORT
    {
        UINT8 opcode;
        UINT8 operand;
    } JMP_REL_SHORT, *PJMP_REL_SHORT;

    typedef struct _JMP_REL
    {
        UINT8 opcode;
        UINT32 operand;
    } JMP_REL, *PJMP_REL, CALL_REL;

    typedef struct _JMP_ABS
    {
        UINT8 opcode0;
        UINT8 opcode1;
        UINT32 dummy;
        UINT64 address;
    } JMP_ABS, *PJMP_ABS;

    typedef struct _CALL_ABS
    {
        UINT8 opcode0;
        UINT8 opcode1;
        UINT32 dummy0;
        UINT8 dummy1;
        UINT8 dummy2;
        UINT64 address;
    } CALL_ABS;

    typedef struct _JCC_REL
    {
        UINT8 opcode0;
        UINT8 opcode1;
        UINT32 operand;
    } JCC_REL;

    typedef struct _JCC_ABS
    {
        UINT8 opcode;
        UINT8 dummy0;
        UINT8 dummy1;
        UINT8 dummy2;
        UINT32 dummy3;
        UINT64 address;
    } JCC_ABS;

#pragma pack(pop)

    typedef struct _TRAMPOLINE
    {
        LPVOID pTarget;
        LPVOID pDetour;
        LPVOID pTrampoline;
        LPVOID pRelay;
        BOOL patchAbove;
        UINT nIP;
        UINT8 oldIPs[8];
        UINT8 newIPs[8];
    } TRAMPOLINE, *PTRAMPOLINE;

    static UINT FindHookEntry(LPVOID pTarget)
    {
        UINT i;
        for (i = 0; i < g_hooks.size; ++i)
        {
            if ((ULONG_PTR)pTarget == (ULONG_PTR)g_hooks.pItems[i].pTarget)
                return i;
        }

        return INVALID_HOOK_POS;
    }

    static PHOOK_ENTRY AddHookEntry()
    {
        if (g_hooks.pItems == NULL)
        {
            g_hooks.capacity = INITIAL_HOOK_CAPACITY;
            g_hooks.pItems = (PHOOK_ENTRY)HeapAlloc(
                g_hHeap, 0, g_hooks.capacity * sizeof(HOOK_ENTRY));
            if (g_hooks.pItems == NULL)
                return NULL;
        }
        else if (g_hooks.size >= g_hooks.capacity)
        {
            PHOOK_ENTRY p = (PHOOK_ENTRY)HeapReAlloc(
                g_hHeap, 0, g_hooks.pItems, (g_hooks.capacity * 2) * sizeof(HOOK_ENTRY));
            if (p == NULL)
                return NULL;

            g_hooks.capacity *= 2;
            g_hooks.pItems = p;
        }

        return &g_hooks.pItems[g_hooks.size++];
    }

    static void DeleteHookEntry(UINT pos)
    {
        if (pos < g_hooks.size - 1)
            g_hooks.pItems[pos] = g_hooks.pItems[g_hooks.size - 1];

        g_hooks.size--;

        if (g_hooks.capacity / 2 >= INITIAL_HOOK_CAPACITY && g_hooks.capacity / 2 >= g_hooks.size)
        {
            PHOOK_ENTRY p = (PHOOK_ENTRY)HeapReAlloc(
                g_hHeap, 0, g_hooks.pItems, (g_hooks.capacity / 2) * sizeof(HOOK_ENTRY));
            if (p == NULL)
                return;

            g_hooks.capacity /= 2;
            g_hooks.pItems = p;
        }
    }

    static DWORD_PTR FindOldIP(PHOOK_ENTRY pHook, DWORD_PTR ip)
    {
        UINT i;

        if (pHook->patchAbove && ip == ((DWORD_PTR)pHook->pTarget - sizeof(JMP_REL)))
            return (DWORD_PTR)pHook->pTarget;

        for (i = 0; i < pHook->nIP; ++i)
        {
            if (ip == ((DWORD_PTR)pHook->pTrampoline + pHook->newIPs[i]))
                return (DWORD_PTR)pHook->pTarget + pHook->oldIPs[i];
        }

        if (ip == (DWORD_PTR)pHook->pDetour)
            return (DWORD_PTR)pHook->pTarget;

        return 0;
    }

    static DWORD_PTR FindNewIP(PHOOK_ENTRY pHook, DWORD_PTR ip)
    {
        UINT i;
        for (i = 0; i < pHook->nIP; ++i)
        {
            if (ip == ((DWORD_PTR)pHook->pTarget + pHook->oldIPs[i]))
                return (DWORD_PTR)pHook->pTrampoline + pHook->newIPs[i];
        }

        return 0;
    }

    static void ProcessThreadIPs(HANDLE hThread, UINT pos, UINT action)
    {

        CONTEXT c;
        DWORD64 *pIP = &c.Rip;
        UINT count;

        c.ContextFlags = CONTEXT_CONTROL;
        if (!GetThreadContext(hThread, &c))
            return;

        if (pos == ALL_HOOKS_POS)
        {
            pos = 0;
            count = g_hooks.size;
        }
        else
        {
            count = pos + 1;
        }

        for (; pos < count; ++pos)
        {
            PHOOK_ENTRY pHook = &g_hooks.pItems[pos];
            BOOL enable;
            DWORD_PTR ip;

            switch (action)
            {
            case ACTION_DISABLE:
                enable = FALSE;
                break;

            case ACTION_ENABLE:
                enable = TRUE;
                break;

            default:
                enable = pHook->queueEnable;
                break;
            }
            if (pHook->isEnabled == enable)
                continue;

            if (enable)
                ip = FindNewIP(pHook, *pIP);
            else
                ip = FindOldIP(pHook, *pIP);

            if (ip != 0)
            {
                *pIP = ip;
                SetThreadContext(hThread, &c);
            }
        }
    }

    static VOID EnumerateThreads(PFROZEN_THREADS pThreads)
    {
        HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
        if (hSnapshot != INVALID_HANDLE_VALUE)
        {
            THREADENTRY32 te;
            te.dwSize = sizeof(THREADENTRY32);
            if (Thread32First(hSnapshot, &te))
            {
                do
                {
                    if (te.dwSize >= (FIELD_OFFSET(THREADENTRY32, th32OwnerProcessID) + sizeof(DWORD)) && te.th32OwnerProcessID == GetCurrentProcessId() && te.th32ThreadID != GetCurrentThreadId())
                    {
                        if (pThreads->pItems == NULL)
                        {
                            pThreads->capacity = INITIAL_THREAD_CAPACITY;
                            pThreads->pItems = (LPDWORD)HeapAlloc(g_hHeap, 0, pThreads->capacity * sizeof(DWORD));
                            if (pThreads->pItems == NULL)
                                break;
                        }
                        else if (pThreads->size >= pThreads->capacity)
                        {
                            LPDWORD p = (LPDWORD)HeapReAlloc(
                                g_hHeap, 0, pThreads->pItems, (pThreads->capacity * 2) * sizeof(DWORD));
                            if (p == NULL)
                                break;

                            pThreads->capacity *= 2;
                            pThreads->pItems = p;
                        }
                        pThreads->pItems[pThreads->size++] = te.th32ThreadID;
                    }

                    te.dwSize = sizeof(THREADENTRY32);
                } while (Thread32Next(hSnapshot, &te));
            }
            CloseHandle(hSnapshot);
        }
    }

    static VOID Freeze(PFROZEN_THREADS pThreads, UINT pos, UINT action)
    {
        pThreads->pItems = NULL;
        pThreads->capacity = 0;
        pThreads->size = 0;
        EnumerateThreads(pThreads);

        if (pThreads->pItems != NULL)
        {
            UINT i;
            for (i = 0; i < pThreads->size; ++i)
            {
                HANDLE hThread = OpenThread(THREAD_ACCESS, FALSE, pThreads->pItems[i]);
                if (hThread != NULL)
                {
                    SuspendThread(hThread);
                    ProcessThreadIPs(hThread, pos, action);
                    CloseHandle(hThread);
                }
            }
        }
    }

    static VOID Unfreeze(PFROZEN_THREADS pThreads)
    {
        if (pThreads->pItems != NULL)
        {
            UINT i;
            for (i = 0; i < pThreads->size; ++i)
            {
                HANDLE hThread = OpenThread(THREAD_ACCESS, FALSE, pThreads->pItems[i]);
                if (hThread != NULL)
                {
                    ResumeThread(hThread);
                    CloseHandle(hThread);
                }
            }

            HeapFree(g_hHeap, 0, pThreads->pItems);
        }
    }

    static VOID EnterSpinLock(VOID)
    {
        SIZE_T spinCount = 0;

        while (InterlockedCompareExchange(&g_isLocked, TRUE, FALSE) != FALSE)
        {

            if (spinCount < 32)
                Sleep(0);
            else
                Sleep(1);

            spinCount++;
        }
    }

    static VOID LeaveSpinLock(VOID)
    {

        InterlockedExchange(&g_isLocked, FALSE);
    }

#define MEMORY_SLOT_SIZE 64

#define MEMORY_BLOCK_SIZE 0x1000

#define MAX_MEMORY_RANGE 0x40000000

#define PAGE_EXECUTE_FLAGS \
    (PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY)

    typedef struct _MEMORY_SLOT
    {
        union
        {
            struct _MEMORY_SLOT *pNext;
            UINT8 buffer[MEMORY_SLOT_SIZE];
        };
    } MEMORY_SLOT, *PMEMORY_SLOT;

    typedef struct _MEMORY_BLOCK
    {
        struct _MEMORY_BLOCK *pNext;
        PMEMORY_SLOT pFree;
        UINT usedCount;
    } MEMORY_BLOCK, *PMEMORY_BLOCK;

    static inline PMEMORY_BLOCK g_pMemoryBlocks;

    static VOID InitializeBuffer(VOID)
    {
    }

    static VOID UninitializeBuffer(VOID)
    {
        PMEMORY_BLOCK pBlock = g_pMemoryBlocks;
        g_pMemoryBlocks = NULL;

        while (pBlock)
        {
            PMEMORY_BLOCK pNext = pBlock->pNext;
            VirtualFree(pBlock, 0, MEM_RELEASE);
            pBlock = pNext;
        }
    }

    static MH_STATUS EnableHookLL(UINT pos, BOOL enable)
    {
        PHOOK_ENTRY pHook = &g_hooks.pItems[pos];
        DWORD oldProtect;
        SIZE_T patchSize = sizeof(JMP_REL);
        LPBYTE pPatchTarget = (LPBYTE)pHook->pTarget;

        if (pHook->patchAbove)
        {
            pPatchTarget -= sizeof(JMP_REL);
            patchSize += sizeof(JMP_REL_SHORT);
        }

        if (!VirtualProtect(pPatchTarget, patchSize, PAGE_EXECUTE_READWRITE, &oldProtect))
            return MH_ERROR_MEMORY_PROTECT;

        if (enable)
        {
            PJMP_REL pJmp = (PJMP_REL)pPatchTarget;
            pJmp->opcode = 0xE9;
            pJmp->operand = (UINT32)((LPBYTE)pHook->pDetour - (pPatchTarget + sizeof(JMP_REL)));

            if (pHook->patchAbove)
            {
                PJMP_REL_SHORT pShortJmp = (PJMP_REL_SHORT)pHook->pTarget;
                pShortJmp->opcode = 0xEB;
                pShortJmp->operand = (UINT8)(0 - (sizeof(JMP_REL_SHORT) + sizeof(JMP_REL)));
            }
        }
        else
        {
            if (pHook->patchAbove)
                __movsb(pPatchTarget, pHook->backup, sizeof(JMP_REL) + sizeof(JMP_REL_SHORT));
            else
                __movsb(pPatchTarget, pHook->backup, sizeof(JMP_REL));
        }

        VirtualProtect(pPatchTarget, patchSize, oldProtect, &oldProtect);

        FlushInstructionCache(GetCurrentProcess(), pPatchTarget, patchSize);

        pHook->isEnabled = enable;
        pHook->queueEnable = enable;

        return MH_OK;
    }

    static MH_STATUS EnableAllHooksLL(BOOL enable)
    {
        MH_STATUS status = MH_OK;
        UINT i, first = INVALID_HOOK_POS;

        for (i = 0; i < g_hooks.size; ++i)
        {
            if (g_hooks.pItems[i].isEnabled != enable)
            {
                first = i;
                break;
            }
        }

        if (first != INVALID_HOOK_POS)
        {
            FROZEN_THREADS threads;
            Freeze(&threads, ALL_HOOKS_POS, enable ? ACTION_ENABLE : ACTION_DISABLE);

            for (i = first; i < g_hooks.size; ++i)
            {
                if (g_hooks.pItems[i].isEnabled != enable)
                {
                    status = EnableHookLL(i, enable);
                    if (status != MH_OK)
                        break;
                }
            }

            Unfreeze(&threads);
        }

        return status;
    }

    static LPVOID FindPrevFreeRegion(LPVOID pAddress, LPVOID pMinAddr, DWORD dwAllocationGranularity)
    {
        ULONG_PTR tryAddr = (ULONG_PTR)pAddress;

        tryAddr -= tryAddr % dwAllocationGranularity;

        tryAddr -= dwAllocationGranularity;

        while (tryAddr >= (ULONG_PTR)pMinAddr)
        {
            MEMORY_BASIC_INFORMATION mbi;
            if (VirtualQuery((LPVOID)tryAddr, &mbi, sizeof(mbi)) == 0)
                break;

            if (mbi.State == MEM_FREE)
                return (LPVOID)tryAddr;

            if ((ULONG_PTR)mbi.AllocationBase < dwAllocationGranularity)
                break;

            tryAddr = (ULONG_PTR)mbi.AllocationBase - dwAllocationGranularity;
        }

        return NULL;
    }

    static LPVOID FindNextFreeRegion(LPVOID pAddress, LPVOID pMaxAddr, DWORD dwAllocationGranularity)
    {
        ULONG_PTR tryAddr = (ULONG_PTR)pAddress;

        tryAddr -= tryAddr % dwAllocationGranularity;

        tryAddr += dwAllocationGranularity;

        while (tryAddr <= (ULONG_PTR)pMaxAddr)
        {
            MEMORY_BASIC_INFORMATION mbi;
            if (VirtualQuery((LPVOID)tryAddr, &mbi, sizeof(mbi)) == 0)
                break;

            if (mbi.State == MEM_FREE)
                return (LPVOID)tryAddr;

            tryAddr = (ULONG_PTR)mbi.BaseAddress + mbi.RegionSize;

            tryAddr += dwAllocationGranularity - 1;
            tryAddr -= tryAddr % dwAllocationGranularity;
        }

        return NULL;
    }

    static PMEMORY_BLOCK GetMemoryBlock(LPVOID pOrigin)
    {
        PMEMORY_BLOCK pBlock;
        ULONG_PTR minAddr;
        ULONG_PTR maxAddr;

        SYSTEM_INFO si;
        GetSystemInfo(&si);
        minAddr = (ULONG_PTR)si.lpMinimumApplicationAddress;
        maxAddr = (ULONG_PTR)si.lpMaximumApplicationAddress;

        if ((ULONG_PTR)pOrigin > MAX_MEMORY_RANGE && minAddr < (ULONG_PTR)pOrigin - MAX_MEMORY_RANGE)
            minAddr = (ULONG_PTR)pOrigin - MAX_MEMORY_RANGE;

        if (maxAddr > (ULONG_PTR)pOrigin + MAX_MEMORY_RANGE)
            maxAddr = (ULONG_PTR)pOrigin + MAX_MEMORY_RANGE;

        maxAddr -= MEMORY_BLOCK_SIZE - 1;

        for (pBlock = g_pMemoryBlocks; pBlock != NULL; pBlock = pBlock->pNext)
        {
            if ((ULONG_PTR)pBlock < minAddr || (ULONG_PTR)pBlock >= maxAddr)
                continue;
            if (pBlock->pFree != NULL)
                return pBlock;
        }

        {
            LPVOID pAlloc = pOrigin;
            while ((ULONG_PTR)pAlloc >= minAddr)
            {
                pAlloc = FindPrevFreeRegion(pAlloc, (LPVOID)minAddr, si.dwAllocationGranularity);
                if (pAlloc == NULL)
                    break;

                pBlock = (PMEMORY_BLOCK)VirtualAlloc(
                    pAlloc, MEMORY_BLOCK_SIZE, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
                if (pBlock != NULL)
                    break;
            }
        }

        if (pBlock == NULL)
        {
            LPVOID pAlloc = pOrigin;
            while ((ULONG_PTR)pAlloc <= maxAddr)
            {
                pAlloc = FindNextFreeRegion(pAlloc, (LPVOID)maxAddr, si.dwAllocationGranularity);
                if (pAlloc == NULL)
                    break;

                pBlock = (PMEMORY_BLOCK)VirtualAlloc(
                    pAlloc, MEMORY_BLOCK_SIZE, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
                if (pBlock != NULL)
                    break;
            }
        }

        if (pBlock != NULL)
        {
            PMEMORY_SLOT pSlot = (PMEMORY_SLOT)pBlock + 1;
            pBlock->pFree = NULL;
            pBlock->usedCount = 0;
            do
            {
                pSlot->pNext = pBlock->pFree;
                pBlock->pFree = pSlot;
                pSlot++;
            } while ((ULONG_PTR)pSlot - (ULONG_PTR)pBlock <= MEMORY_BLOCK_SIZE - MEMORY_SLOT_SIZE);

            pBlock->pNext = g_pMemoryBlocks;
            g_pMemoryBlocks = pBlock;
        }

        return pBlock;
    }

    static LPVOID AllocateBuffer(LPVOID pOrigin)
    {
        PMEMORY_SLOT pSlot;
        PMEMORY_BLOCK pBlock = GetMemoryBlock(pOrigin);
        if (pBlock == NULL)
            return NULL;

        pSlot = pBlock->pFree;
        pBlock->pFree = pSlot->pNext;
        pBlock->usedCount++;
#ifdef _DEBUG
        memset(pSlot, 0xCC, sizeof(MEMORY_SLOT));
#endif
        return pSlot;
    }

    static VOID FreeBuffer(LPVOID pBuffer)
    {
        PMEMORY_BLOCK pBlock = g_pMemoryBlocks;
        PMEMORY_BLOCK pPrev = NULL;
        ULONG_PTR pTargetBlock = ((ULONG_PTR)pBuffer / MEMORY_BLOCK_SIZE) * MEMORY_BLOCK_SIZE;

        while (pBlock != NULL)
        {
            if ((ULONG_PTR)pBlock == pTargetBlock)
            {
                PMEMORY_SLOT pSlot = (PMEMORY_SLOT)pBuffer;
#ifdef _DEBUG
                memset(pSlot, 0x00, sizeof(*pSlot));
#endif
                pSlot->pNext = pBlock->pFree;
                pBlock->pFree = pSlot;
                pBlock->usedCount--;

                if (pBlock->usedCount == 0)
                {
                    if (pPrev)
                        pPrev->pNext = pBlock->pNext;
                    else
                        g_pMemoryBlocks = pBlock->pNext;

                    VirtualFree(pBlock, 0, MEM_RELEASE);
                }

                break;
            }

            pPrev = pBlock;
            pBlock = pBlock->pNext;
        }
    }

    static BOOL IsExecutableAddress(LPVOID pAddress)
    {
        MEMORY_BASIC_INFORMATION mi;
        VirtualQuery(pAddress, &mi, sizeof(mi));

        return (mi.State == MEM_COMMIT && (mi.Protect & PAGE_EXECUTE_FLAGS));
    }

    //-------------------------------------------------------------------------
    static BOOL IsCodePadding(LPBYTE pInst, UINT size)
    {
        UINT i;

        if (pInst[0] != 0x00 && pInst[0] != 0x90 && pInst[0] != 0xCC)
            return FALSE;

        for (i = 1; i < size; ++i)
        {
            if (pInst[i] != pInst[0])
                return FALSE;
        }
        return TRUE;
    }

#define C_NONE 0x00
#define C_MODRM 0x01
#define C_IMM8 0x02
#define C_IMM16 0x04
#define C_IMM_P66 0x10
#define C_REL8 0x20
#define C_REL32 0x40
#define C_GROUP 0x80
#define C_ERROR 0xff

#define PRE_ANY 0x00
#define PRE_NONE 0x01
#define PRE_F2 0x02
#define PRE_F3 0x04
#define PRE_66 0x08
#define PRE_67 0x10
#define PRE_LOCK 0x20
#define PRE_SEG 0x40
#define PRE_ALL 0xff

#define DELTA_OPCODES 0x4a
#define DELTA_FPU_REG 0xfd
#define DELTA_FPU_MODRM 0x104
#define DELTA_PREFIXES 0x13c
#define DELTA_OP_LOCK_OK 0x1ae
#define DELTA_OP2_LOCK_OK 0x1c6
#define DELTA_OP_ONLY_MEM 0x1d8
#define DELTA_OP2_ONLY_MEM 0x1e7

    static inline unsigned char hde64_table[] = {
        0xa5, 0xaa, 0xa5, 0xb8, 0xa5, 0xaa, 0xa5, 0xaa, 0xa5, 0xb8, 0xa5, 0xb8, 0xa5, 0xb8, 0xa5,
        0xb8, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xac, 0xc0, 0xcc, 0xc0, 0xa1, 0xa1,
        0xa1, 0xa1, 0xb1, 0xa5, 0xa5, 0xa6, 0xc0, 0xc0, 0xd7, 0xda, 0xe0, 0xc0, 0xe4, 0xc0, 0xea,
        0xea, 0xe0, 0xe0, 0x98, 0xc8, 0xee, 0xf1, 0xa5, 0xd3, 0xa5, 0xa5, 0xa1, 0xea, 0x9e, 0xc0,
        0xc0, 0xc2, 0xc0, 0xe6, 0x03, 0x7f, 0x11, 0x7f, 0x01, 0x7f, 0x01, 0x3f, 0x01, 0x01, 0xab,
        0x8b, 0x90, 0x64, 0x5b, 0x5b, 0x5b, 0x5b, 0x5b, 0x92, 0x5b, 0x5b, 0x76, 0x90, 0x92, 0x92,
        0x5b, 0x5b, 0x5b, 0x5b, 0x5b, 0x5b, 0x5b, 0x5b, 0x5b, 0x5b, 0x5b, 0x5b, 0x6a, 0x73, 0x90,
        0x5b, 0x52, 0x52, 0x52, 0x52, 0x5b, 0x5b, 0x5b, 0x5b, 0x77, 0x7c, 0x77, 0x85, 0x5b, 0x5b,
        0x70, 0x5b, 0x7a, 0xaf, 0x76, 0x76, 0x5b, 0x5b, 0x5b, 0x5b, 0x5b, 0x5b, 0x5b, 0x5b, 0x5b,
        0x5b, 0x5b, 0x86, 0x01, 0x03, 0x01, 0x04, 0x03, 0xd5, 0x03, 0xd5, 0x03, 0xcc, 0x01, 0xbc,
        0x03, 0xf0, 0x03, 0x03, 0x04, 0x00, 0x50, 0x50, 0x50, 0x50, 0xff, 0x20, 0x20, 0x20, 0x20,
        0x01, 0x01, 0x01, 0x01, 0xc4, 0x02, 0x10, 0xff, 0xff, 0xff, 0x01, 0x00, 0x03, 0x11, 0xff,
        0x03, 0xc4, 0xc6, 0xc8, 0x02, 0x10, 0x00, 0xff, 0xcc, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
        0x00, 0x01, 0x01, 0x03, 0x01, 0xff, 0xff, 0xc0, 0xc2, 0x10, 0x11, 0x02, 0x03, 0x01, 0x01,
        0x01, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x10,
        0x10, 0x10, 0x10, 0x02, 0x10, 0x00, 0x00, 0xc6, 0xc8, 0x02, 0x02, 0x02, 0x02, 0x06, 0x00,
        0x04, 0x00, 0x02, 0xff, 0x00, 0xc0, 0xc2, 0x01, 0x01, 0x03, 0x03, 0x03, 0xca, 0x40, 0x00,
        0x0a, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x33, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xff, 0xbf, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0xff, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
        0x00, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00,
        0xff, 0x40, 0x40, 0x40, 0x40, 0x41, 0x49, 0x40, 0x40, 0x40, 0x40, 0x4c, 0x42, 0x40, 0x40,
        0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x4f, 0x44, 0x53, 0x40, 0x40, 0x40, 0x44, 0x57, 0x43,
        0x5c, 0x40, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
        0x40, 0x40, 0x64, 0x66, 0x6e, 0x6b, 0x40, 0x40, 0x6a, 0x46, 0x40, 0x40, 0x44, 0x46, 0x40,
        0x40, 0x5b, 0x44, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x01, 0x06,
        0x06, 0x02, 0x06, 0x06, 0x00, 0x06, 0x00, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x07, 0x07,
        0x06, 0x02, 0x0d, 0x06, 0x06, 0x06, 0x0e, 0x05, 0x05, 0x02, 0x02, 0x00, 0x00, 0x04, 0x04,
        0x04, 0x04, 0x05, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x08, 0x00, 0x10,
        0x00, 0x18, 0x00, 0x20, 0x00, 0x28, 0x00, 0x30, 0x00, 0x80, 0x01, 0x82, 0x01, 0x86, 0x00,
        0xf6, 0xcf, 0xfe, 0x3f, 0xab, 0x00, 0xb0, 0x00, 0xb1, 0x00, 0xb3, 0x00, 0xba, 0xf8, 0xbb,
        0x00, 0xc0, 0x00, 0xc1, 0x00, 0xc7, 0xbf, 0x62, 0xff, 0x00, 0x8d, 0xff, 0x00, 0xc4, 0xff,
        0x00, 0xc5, 0xff, 0x00, 0xff, 0xff, 0xeb, 0x01, 0xff, 0x0e, 0x12, 0x08, 0x00, 0x13, 0x09,
        0x00, 0x16, 0x08, 0x00, 0x17, 0x09, 0x00, 0x2b, 0x09, 0x00, 0xae, 0xff, 0x07, 0xb2, 0xff,
        0x00, 0xb4, 0xff, 0x00, 0xb5, 0xff, 0x00, 0xc3, 0x01, 0x00, 0xc7, 0xff, 0xbf, 0xe7, 0x08,
        0x00, 0xf0, 0x02, 0x00};

#define F_MODRM 0x00000001
#define F_SIB 0x00000002
#define F_IMM8 0x00000004
#define F_IMM16 0x00000008
#define F_IMM32 0x00000010
#define F_IMM64 0x00000020
#define F_DISP8 0x00000040
#define F_DISP16 0x00000080
#define F_DISP32 0x00000100
#define F_RELATIVE 0x00000200
#define F_ERROR 0x00001000
#define F_ERROR_OPCODE 0x00002000
#define F_ERROR_LENGTH 0x00004000
#define F_ERROR_LOCK 0x00008000
#define F_ERROR_OPERAND 0x00010000
#define F_PREFIX_REPNZ 0x01000000
#define F_PREFIX_REPX 0x02000000
#define F_PREFIX_REP 0x03000000
#define F_PREFIX_66 0x04000000
#define F_PREFIX_67 0x08000000
#define F_PREFIX_LOCK 0x10000000
#define F_PREFIX_SEG 0x20000000
#define F_PREFIX_REX 0x40000000
#define F_PREFIX_ANY 0x7f000000

#define PREFIX_SEGMENT_CS 0x2e
#define PREFIX_SEGMENT_SS 0x36
#define PREFIX_SEGMENT_DS 0x3e
#define PREFIX_SEGMENT_ES 0x26
#define PREFIX_SEGMENT_FS 0x64
#define PREFIX_SEGMENT_GS 0x65
#define PREFIX_LOCK 0xf0
#define PREFIX_REPNZ 0xf2
#define PREFIX_REPX 0xf3
#define PREFIX_OPERAND_SIZE 0x66
#define PREFIX_ADDRESS_SIZE 0x67

#pragma pack(push, 1)

    typedef struct
    {
        uint8_t len;
        uint8_t p_rep;
        uint8_t p_lock;
        uint8_t p_seg;
        uint8_t p_66;
        uint8_t p_67;
        uint8_t rex;
        uint8_t rex_w;
        uint8_t rex_r;
        uint8_t rex_x;
        uint8_t rex_b;
        uint8_t opcode;
        uint8_t opcode2;
        uint8_t modrm;
        uint8_t modrm_mod;
        uint8_t modrm_reg;
        uint8_t modrm_rm;
        uint8_t sib;
        uint8_t sib_scale;
        uint8_t sib_index;
        uint8_t sib_base;
        union
        {
            uint8_t imm8;
            uint16_t imm16;
            uint32_t imm32;
            uint64_t imm64;
        } imm;
        union
        {
            uint8_t disp8;
            uint16_t disp16;
            uint32_t disp32;
        } disp;
        uint32_t flags;
    } hde64s;

    static unsigned int hde64_disasm(const void *code, hde64s *hs)
    {
        uint8_t x, c, *p = (uint8_t *)code, cflags, opcode, pref = 0;
        uint8_t m_mod, m_reg, m_rm, disp_size = 0;
        const uint8_t *ht = hde64_table;
        uint8_t op64 = 0;

#ifndef _MSC_VER
        memset((LPBYTE)hs, 0, sizeof(hde64s));
#else
        __stosb((LPBYTE)hs, 0, sizeof(hde64s));
#endif

        for (x = 16; x; x--)
            switch (c = *p++)
            {
            case 0xf3:
                hs->p_rep = c;
                pref |= PRE_F3;
                break;
            case 0xf2:
                hs->p_rep = c;
                pref |= PRE_F2;
                break;
            case 0xf0:
                hs->p_lock = c;
                pref |= PRE_LOCK;
                break;
            case 0x26:
            case 0x2e:
            case 0x36:
            case 0x3e:
            case 0x64:
            case 0x65:
                hs->p_seg = c;
                pref |= PRE_SEG;
                break;
            case 0x66:
                hs->p_66 = c;
                pref |= PRE_66;
                break;
            case 0x67:
                hs->p_67 = c;
                pref |= PRE_67;
                break;
            default:
                goto pref_done;
            }
    pref_done:

        hs->flags = (uint32_t)pref << 23;

        if (!pref)
            pref |= PRE_NONE;

        if ((c & 0xf0) == 0x40)
        {
            hs->flags |= F_PREFIX_REX;
            if ((hs->rex_w = (c & 0xf) >> 3) && (*p & 0xf8) == 0xb8)
                op64++;
            hs->rex_r = (c & 7) >> 2;
            hs->rex_x = (c & 3) >> 1;
            hs->rex_b = c & 1;
            if (((c = *p++) & 0xf0) == 0x40)
            {
                opcode = c;
                goto error_opcode;
            }
        }

        if ((hs->opcode = c) == 0x0f)
        {
            hs->opcode2 = c = *p++;
            ht += DELTA_OPCODES;
        }
        else if (c >= 0xa0 && c <= 0xa3)
        {
            op64++;
            if (pref & PRE_67)
                pref |= PRE_66;
            else
                pref &= ~PRE_66;
        }

        opcode = c;
        cflags = ht[ht[opcode / 4] + (opcode % 4)];

        if (cflags == C_ERROR)
        {
        error_opcode:
            hs->flags |= F_ERROR | F_ERROR_OPCODE;
            cflags = 0;
            if ((opcode & -3) == 0x24)
                cflags++;
        }

        x = 0;
        if (cflags & C_GROUP)
        {
            uint16_t t;
            t = *(uint16_t *)(ht + (cflags & 0x7f));
            cflags = (uint8_t)t;
            x = (uint8_t)(t >> 8);
        }

        if (hs->opcode2)
        {
            ht = hde64_table + DELTA_PREFIXES;
            if (ht[ht[opcode / 4] + (opcode % 4)] & pref)
                hs->flags |= F_ERROR | F_ERROR_OPCODE;
        }

        if (cflags & C_MODRM)
        {
            hs->flags |= F_MODRM;
            hs->modrm = c = *p++;
            hs->modrm_mod = m_mod = c >> 6;
            hs->modrm_rm = m_rm = c & 7;
            hs->modrm_reg = m_reg = (c & 0x3f) >> 3;

            if (x && ((x << m_reg) & 0x80))
                hs->flags |= F_ERROR | F_ERROR_OPCODE;

            if (!hs->opcode2 && opcode >= 0xd9 && opcode <= 0xdf)
            {
                uint8_t t = opcode - 0xd9;
                if (m_mod == 3)
                {
                    ht = hde64_table + DELTA_FPU_MODRM + t * 8;
                    t = ht[m_reg] << m_rm;
                }
                else
                {
                    ht = hde64_table + DELTA_FPU_REG;
                    t = ht[t] << m_reg;
                }
                if (t & 0x80)
                    hs->flags |= F_ERROR | F_ERROR_OPCODE;
            }

            if (pref & PRE_LOCK)
            {
                if (m_mod == 3)
                {
                    hs->flags |= F_ERROR | F_ERROR_LOCK;
                }
                else
                {
                    const uint8_t *table_end;
                    uint8_t op = opcode;
                    if (hs->opcode2)
                    {
                        ht = hde64_table + DELTA_OP2_LOCK_OK;
                        table_end = ht + DELTA_OP_ONLY_MEM - DELTA_OP2_LOCK_OK;
                    }
                    else
                    {
                        ht = hde64_table + DELTA_OP_LOCK_OK;
                        table_end = ht + DELTA_OP2_LOCK_OK - DELTA_OP_LOCK_OK;
                        op &= -2;
                    }
                    for (; ht != table_end; ht++)
                        if (*ht++ == op)
                        {
                            if (!((*ht << m_reg) & 0x80))
                                goto no_lock_error;
                            else
                                break;
                        }
                    hs->flags |= F_ERROR | F_ERROR_LOCK;
                no_lock_error:;
                }
            }

            if (hs->opcode2)
            {
                switch (opcode)
                {
                case 0x20:
                case 0x22:
                    m_mod = 3;
                    if (m_reg > 4 || m_reg == 1)
                        goto error_operand;
                    else
                        goto no_error_operand;
                case 0x21:
                case 0x23:
                    m_mod = 3;
                    if (m_reg == 4 || m_reg == 5)
                        goto error_operand;
                    else
                        goto no_error_operand;
                }
            }
            else
            {
                switch (opcode)
                {
                case 0x8c:
                    if (m_reg > 5)
                        goto error_operand;
                    else
                        goto no_error_operand;
                case 0x8e:
                    if (m_reg == 1 || m_reg > 5)
                        goto error_operand;
                    else
                        goto no_error_operand;
                }
            }

            if (m_mod == 3)
            {
                const uint8_t *table_end;
                if (hs->opcode2)
                {
                    ht = hde64_table + DELTA_OP2_ONLY_MEM;
                    table_end = ht + sizeof(hde64_table) - DELTA_OP2_ONLY_MEM;
                }
                else
                {
                    ht = hde64_table + DELTA_OP_ONLY_MEM;
                    table_end = ht + DELTA_OP2_ONLY_MEM - DELTA_OP_ONLY_MEM;
                }
                for (; ht != table_end; ht += 2)
                    if (*ht++ == opcode)
                    {
                        if (*ht++ & pref && !((*ht << m_reg) & 0x80))
                            goto error_operand;
                        else
                            break;
                    }
                goto no_error_operand;
            }
            else if (hs->opcode2)
            {
                switch (opcode)
                {
                case 0x50:
                case 0xd7:
                case 0xf7:
                    if (pref & (PRE_NONE | PRE_66))
                        goto error_operand;
                    break;
                case 0xd6:
                    if (pref & (PRE_F2 | PRE_F3))
                        goto error_operand;
                    break;
                case 0xc5:
                    goto error_operand;
                }
                goto no_error_operand;
            }
            else
                goto no_error_operand;

        error_operand:
            hs->flags |= F_ERROR | F_ERROR_OPERAND;
        no_error_operand:

            c = *p++;
            if (m_reg <= 1)
            {
                if (opcode == 0xf6)
                    cflags |= C_IMM8;
                else if (opcode == 0xf7)
                    cflags |= C_IMM_P66;
            }

            switch (m_mod)
            {
            case 0:
                if (pref & PRE_67)
                {
                    if (m_rm == 6)
                        disp_size = 2;
                }
                else if (m_rm == 5)
                    disp_size = 4;
                break;
            case 1:
                disp_size = 1;
                break;
            case 2:
                disp_size = 2;
                if (!(pref & PRE_67))
                    disp_size <<= 1;
            }

            if (m_mod != 3 && m_rm == 4)
            {
                hs->flags |= F_SIB;
                p++;
                hs->sib = c;
                hs->sib_scale = c >> 6;
                hs->sib_index = (c & 0x3f) >> 3;
                if ((hs->sib_base = c & 7) == 5 && !(m_mod & 1))
                    disp_size = 4;
            }

            p--;
            switch (disp_size)
            {
            case 1:
                hs->flags |= F_DISP8;
                hs->disp.disp8 = *p;
                break;
            case 2:
                hs->flags |= F_DISP16;
                hs->disp.disp16 = *(uint16_t *)p;
                break;
            case 4:
                hs->flags |= F_DISP32;
                hs->disp.disp32 = *(uint32_t *)p;
            }
            p += disp_size;
        }
        else if (pref & PRE_LOCK)
            hs->flags |= F_ERROR | F_ERROR_LOCK;

        if (cflags & C_IMM_P66)
        {
            if (cflags & C_REL32)
            {
                if (pref & PRE_66)
                {
                    hs->flags |= F_IMM16 | F_RELATIVE;
                    hs->imm.imm16 = *(uint16_t *)p;
                    p += 2;
                    goto disasm_done;
                }
                goto rel32_ok;
            }
            if (op64)
            {
                hs->flags |= F_IMM64;
                hs->imm.imm64 = *(uint64_t *)p;
                p += 8;
            }
            else if (!(pref & PRE_66))
            {
                hs->flags |= F_IMM32;
                hs->imm.imm32 = *(uint32_t *)p;
                p += 4;
            }
            else
                goto imm16_ok;
        }

        if (cflags & C_IMM16)
        {
        imm16_ok:
            hs->flags |= F_IMM16;
            hs->imm.imm16 = *(uint16_t *)p;
            p += 2;
        }
        if (cflags & C_IMM8)
        {
            hs->flags |= F_IMM8;
            hs->imm.imm8 = *p++;
        }

        if (cflags & C_REL32)
        {
        rel32_ok:
            hs->flags |= F_IMM32 | F_RELATIVE;
            hs->imm.imm32 = *(uint32_t *)p;
            p += 4;
        }
        else if (cflags & C_REL8)
        {
            hs->flags |= F_IMM8 | F_RELATIVE;
            hs->imm.imm8 = *p++;
        }

    disasm_done:

        if ((hs->len = (uint8_t)(p - (uint8_t *)code)) > 15)
        {
            hs->flags |= F_ERROR | F_ERROR_LENGTH;
            hs->len = 15;
        }

        return (unsigned int)hs->len;
    }

#define TRAMPOLINE_MAX_SIZE (MEMORY_SLOT_SIZE - sizeof(JMP_ABS))

    static BOOL CreateTrampolineFunction(PTRAMPOLINE ct)
    {
        CALL_ABS call = {
            0xFF, 0x15, 0x00000002, 0xEB, 0x08, 0x0000000000000000ULL};
        JMP_ABS jmp = {
            0xFF, 0x25, 0x00000000, 0x0000000000000000ULL};
        JCC_ABS jcc = {
            0x70, 0x0E, 0xFF, 0x25, 0x00000000, 0x0000000000000000ULL};

        UINT8 oldPos = 0;
        UINT8 newPos = 0;
        ULONG_PTR jmpDest = 0;
        BOOL finished = FALSE;
        UINT8 instBuf[16];

        ct->patchAbove = FALSE;
        ct->nIP = 0;

        do
        {
            hde64s hs;
            UINT copySize;
            LPVOID pCopySrc;
            ULONG_PTR pOldInst = (ULONG_PTR)ct->pTarget + oldPos;
            ULONG_PTR pNewInst = (ULONG_PTR)ct->pTrampoline + newPos;

            copySize = hde64_disasm((LPVOID)pOldInst, &hs);
            if (hs.flags & F_ERROR)
                return FALSE;

            pCopySrc = (LPVOID)pOldInst;
            if (oldPos >= sizeof(JMP_REL))
            {
                jmp.address = pOldInst;
                pCopySrc = &jmp;
                copySize = sizeof(jmp);

                finished = TRUE;
            }
            else if ((hs.modrm & 0xC7) == 0x05)
            {

                PUINT32 pRelAddr;

                __movsb(instBuf, (LPBYTE)pOldInst, copySize);
                pCopySrc = instBuf;

                pRelAddr = (PUINT32)(instBuf + hs.len - ((hs.flags & 0x3C) >> 2) - 4);
                *pRelAddr = (UINT32)((pOldInst + hs.len + (INT32)hs.disp.disp32) - (pNewInst + hs.len));

                if (hs.opcode == 0xFF && hs.modrm_reg == 4)
                    finished = TRUE;
            }
            else if (hs.opcode == 0xE8)
            {
                ULONG_PTR dest = pOldInst + hs.len + (INT32)hs.imm.imm32;
                call.address = dest;
                pCopySrc = &call;
                copySize = sizeof(call);
            }
            else if ((hs.opcode & 0xFD) == 0xE9)
            {
                ULONG_PTR dest = pOldInst + hs.len;

                if (hs.opcode == 0xEB)
                    dest += (INT8)hs.imm.imm8;
                else
                    dest += (INT32)hs.imm.imm32;

                if ((ULONG_PTR)ct->pTarget <= dest && dest < ((ULONG_PTR)ct->pTarget + sizeof(JMP_REL)))
                {
                    if (jmpDest < dest)
                        jmpDest = dest;
                }
                else
                {
                    jmp.address = dest;
                    pCopySrc = &jmp;
                    copySize = sizeof(jmp);

                    finished = (pOldInst >= jmpDest);
                }
            }
            else if ((hs.opcode & 0xF0) == 0x70 || (hs.opcode & 0xFC) == 0xE0 || (hs.opcode2 & 0xF0) == 0x80)
            {
                ULONG_PTR dest = pOldInst + hs.len;

                if ((hs.opcode & 0xF0) == 0x70 || (hs.opcode & 0xFC) == 0xE0)
                    dest += (INT8)hs.imm.imm8;
                else
                    dest += (INT32)hs.imm.imm32;

                if ((ULONG_PTR)ct->pTarget <= dest && dest < ((ULONG_PTR)ct->pTarget + sizeof(JMP_REL)))
                {
                    if (jmpDest < dest)
                        jmpDest = dest;
                }
                else if ((hs.opcode & 0xFC) == 0xE0)
                {
                    return FALSE;
                }
                else
                {
                    UINT8 cond = ((hs.opcode != 0x0F ? hs.opcode : hs.opcode2) & 0x0F);
                    jcc.opcode = 0x71 ^ cond;
                    jcc.address = dest;
                    pCopySrc = &jcc;
                    copySize = sizeof(jcc);
                }
            }
            else if ((hs.opcode & 0xFE) == 0xC2)
            {

                finished = (pOldInst >= jmpDest);
            }

            if (pOldInst < jmpDest && copySize != hs.len)
                return FALSE;

            if ((newPos + copySize) > TRAMPOLINE_MAX_SIZE)
                return FALSE;

            if (ct->nIP >= ARRAYSIZE(ct->oldIPs))
                return FALSE;

            ct->oldIPs[ct->nIP] = oldPos;
            ct->newIPs[ct->nIP] = newPos;
            ct->nIP++;

            __movsb((LPBYTE)ct->pTrampoline + newPos, (const BYTE *)pCopySrc, copySize);
            newPos += copySize;
            oldPos += hs.len;
        } while (!finished);

        if (oldPos < sizeof(JMP_REL) && !IsCodePadding((LPBYTE)ct->pTarget + oldPos, sizeof(JMP_REL) - oldPos))
        {
            if (oldPos < sizeof(JMP_REL_SHORT) && !IsCodePadding((LPBYTE)ct->pTarget + oldPos, sizeof(JMP_REL_SHORT) - oldPos))
            {
                return FALSE;
            }

            if (!IsExecutableAddress((LPBYTE)ct->pTarget - sizeof(JMP_REL)))
                return FALSE;

            if (!IsCodePadding((LPBYTE)ct->pTarget - sizeof(JMP_REL), sizeof(JMP_REL)))
                return FALSE;

            ct->patchAbove = TRUE;
        }

        jmp.address = (ULONG_PTR)ct->pDetour;

        ct->pRelay = (LPBYTE)ct->pTrampoline + newPos;
        __movsb((PBYTE)ct->pRelay, (const PBYTE)&jmp, sizeof(jmp));

        return TRUE;
    }

#define MH_ALL_HOOKS NULL

    static MH_STATUS EnableHook(LPVOID pTarget, BOOL enable)
    {
        MH_STATUS status = MH_OK;

        EnterSpinLock();

        if (g_hHeap != NULL)
        {
            if (pTarget == MH_ALL_HOOKS)
            {
                status = EnableAllHooksLL(enable);
            }
            else
            {
                FROZEN_THREADS threads;
                UINT pos = FindHookEntry(pTarget);
                if (pos != INVALID_HOOK_POS)
                {
                    if (g_hooks.pItems[pos].isEnabled != enable)
                    {
                        Freeze(&threads, pos, ACTION_ENABLE);

                        status = EnableHookLL(pos, enable);

                        Unfreeze(&threads);
                    }
                    else
                    {
                        status = enable ? MH_ERROR_ENABLED : MH_ERROR_DISABLED;
                    }
                }
                else
                {
                    status = MH_ERROR_NOT_CREATED;
                }
            }
        }
        else
        {
            status = MH_ERROR_NOT_INITIALIZED;
        }

        LeaveSpinLock();

        return status;
    }

    static MH_STATUS QueueHook(LPVOID pTarget, BOOL queueEnable)
    {
        MH_STATUS status = MH_OK;

        EnterSpinLock();

        if (g_hHeap != NULL)
        {
            if (pTarget == MH_ALL_HOOKS)
            {
                UINT i;
                for (i = 0; i < g_hooks.size; ++i)
                    g_hooks.pItems[i].queueEnable = queueEnable;
            }
            else
            {
                UINT pos = FindHookEntry(pTarget);
                if (pos != INVALID_HOOK_POS)
                {
                    g_hooks.pItems[pos].queueEnable = queueEnable;
                }
                else
                {
                    status = MH_ERROR_NOT_CREATED;
                }
            }
        }
        else
        {
            status = MH_ERROR_NOT_INITIALIZED;
        }

        LeaveSpinLock();

        return status;
    }

public:
    static MH_STATUS WINAPI MH_Initialize(VOID)
    {
        MH_STATUS status = MH_OK;

        EnterSpinLock();

        if (g_hHeap == NULL)
        {
            g_hHeap = HeapCreate(0, 0, 0);
            if (g_hHeap != NULL)
            {
                InitializeBuffer();
            }
            else
            {
                status = MH_ERROR_MEMORY_ALLOC;
            }
        }
        else
        {
            status = MH_ERROR_ALREADY_INITIALIZED;
        }

        LeaveSpinLock();

        return status;
    }

    static MH_STATUS WINAPI MH_Uninitialize(VOID)
    {
        MH_STATUS status = MH_OK;

        EnterSpinLock();

        if (g_hHeap != NULL)
        {
            status = EnableAllHooksLL(FALSE);
            if (status == MH_OK)
            {

                UninitializeBuffer();

                HeapFree(g_hHeap, 0, g_hooks.pItems);
                HeapDestroy(g_hHeap);

                g_hHeap = NULL;

                g_hooks.pItems = NULL;
                g_hooks.capacity = 0;
                g_hooks.size = 0;
            }
        }
        else
        {
            status = MH_ERROR_NOT_INITIALIZED;
        }

        LeaveSpinLock();

        return status;
    }

    static MH_STATUS WINAPI MH_CreateHook(LPVOID pTarget, LPVOID pDetour, LPVOID *ppOriginal)
    {
        MH_STATUS status = MH_OK;

        EnterSpinLock();

        if (g_hHeap != NULL)
        {
            if (IsExecutableAddress(pTarget) && IsExecutableAddress(pDetour))
            {
                UINT pos = FindHookEntry(pTarget);
                if (pos == INVALID_HOOK_POS)
                {
                    LPVOID pBuffer = AllocateBuffer(pTarget);
                    if (pBuffer != NULL)
                    {
                        TRAMPOLINE ct;

                        ct.pTarget = pTarget;
                        ct.pDetour = pDetour;
                        ct.pTrampoline = pBuffer;
                        if (CreateTrampolineFunction(&ct))
                        {
                            PHOOK_ENTRY pHook = AddHookEntry();
                            if (pHook != NULL)
                            {
                                pHook->pTarget = ct.pTarget;
                                pHook->pDetour = ct.pRelay;
                                pHook->pTrampoline = ct.pTrampoline;
                                pHook->patchAbove = ct.patchAbove;
                                pHook->isEnabled = FALSE;
                                pHook->queueEnable = FALSE;
                                pHook->nIP = ct.nIP;
                                __movsb(pHook->oldIPs, ct.oldIPs, ARRAYSIZE(ct.oldIPs));
                                __movsb(pHook->newIPs, ct.newIPs, ARRAYSIZE(ct.newIPs));

                                if (ct.patchAbove)
                                {
                                    __movsb(
                                        pHook->backup,
                                        (LPBYTE)pTarget - sizeof(JMP_REL),
                                        sizeof(JMP_REL) + sizeof(JMP_REL_SHORT));
                                }
                                else
                                {
                                    __movsb(pHook->backup, (const PBYTE)pTarget, sizeof(JMP_REL));
                                }

                                if (ppOriginal != NULL)
                                    *ppOriginal = pHook->pTrampoline;
                            }
                            else
                            {
                                status = MH_ERROR_MEMORY_ALLOC;
                            }
                        }
                        else
                        {
                            status = MH_ERROR_UNSUPPORTED_FUNCTION;
                        }

                        if (status != MH_OK)
                        {
                            FreeBuffer(pBuffer);
                        }
                    }
                    else
                    {
                        status = MH_ERROR_MEMORY_ALLOC;
                    }
                }
                else
                {
                    status = MH_ERROR_ALREADY_CREATED;
                }
            }
            else
            {
                status = MH_ERROR_NOT_EXECUTABLE;
            }
        }
        else
        {
            status = MH_ERROR_NOT_INITIALIZED;
        }

        LeaveSpinLock();

        return status;
    }

    static MH_STATUS WINAPI MH_CreateHookApiEx(LPCWSTR pszModule, LPCSTR pszProcName, LPVOID pDetour, LPVOID *ppOriginal, LPVOID *ppTarget)
    {
        HMODULE hModule;
        LPVOID pTarget;

        hModule = GetModuleHandleW(pszModule);
        if (hModule == NULL)
            return MH_ERROR_MODULE_NOT_FOUND;

        pTarget = (LPVOID)GetProcAddress(hModule, pszProcName);
        if (pTarget == NULL)
            return MH_ERROR_FUNCTION_NOT_FOUND;

        if (ppTarget != NULL)
            *ppTarget = pTarget;

        return MH_CreateHook(pTarget, pDetour, ppOriginal);
    }

    static MH_STATUS WINAPI MH_CreateHookApi(LPCWSTR pszModule, LPCSTR pszProcName, LPVOID pDetour, LPVOID *ppOriginal)
    {
        return MH_CreateHookApiEx(pszModule, pszProcName, pDetour, ppOriginal, NULL);
    }

    static MH_STATUS WINAPI MH_RemoveHook(LPVOID pTarget)
    {
        MH_STATUS status = MH_OK;

        EnterSpinLock();

        if (g_hHeap != NULL)
        {
            UINT pos = FindHookEntry(pTarget);
            if (pos != INVALID_HOOK_POS)
            {
                if (g_hooks.pItems[pos].isEnabled)
                {
                    FROZEN_THREADS threads;
                    Freeze(&threads, pos, ACTION_DISABLE);

                    status = EnableHookLL(pos, FALSE);

                    Unfreeze(&threads);
                }

                if (status == MH_OK)
                {
                    FreeBuffer(g_hooks.pItems[pos].pTrampoline);
                    DeleteHookEntry(pos);
                }
            }
            else
            {
                status = MH_ERROR_NOT_CREATED;
            }
        }
        else
        {
            status = MH_ERROR_NOT_INITIALIZED;
        }

        LeaveSpinLock();

        return status;
    }

    static MH_STATUS WINAPI MH_EnableHook(LPVOID pTarget)
    {
        return EnableHook(pTarget, TRUE);
    }

    static MH_STATUS WINAPI MH_DisableHook(LPVOID pTarget)
    {
        return EnableHook(pTarget, FALSE);
    }

    static MH_STATUS WINAPI MH_QueueEnableHook(LPVOID pTarget)
    {
        return QueueHook(pTarget, TRUE);
    }

    static MH_STATUS WINAPI MH_QueueDisableHook(LPVOID pTarget)
    {
        return QueueHook(pTarget, FALSE);
    }

    static MH_STATUS WINAPI MH_ApplyQueued(VOID)
    {
        MH_STATUS status = MH_OK;
        UINT i, first = INVALID_HOOK_POS;

        EnterSpinLock();

        if (g_hHeap != NULL)
        {
            for (i = 0; i < g_hooks.size; ++i)
            {
                if (g_hooks.pItems[i].isEnabled != g_hooks.pItems[i].queueEnable)
                {
                    first = i;
                    break;
                }
            }

            if (first != INVALID_HOOK_POS)
            {
                FROZEN_THREADS threads;
                Freeze(&threads, ALL_HOOKS_POS, ACTION_APPLY_QUEUED);

                for (i = first; i < g_hooks.size; ++i)
                {
                    PHOOK_ENTRY pHook = &g_hooks.pItems[i];
                    if (pHook->isEnabled != pHook->queueEnable)
                    {
                        status = EnableHookLL(i, pHook->queueEnable);
                        if (status != MH_OK)
                            break;
                    }
                }

                Unfreeze(&threads);
            }
        }
        else
        {
            status = MH_ERROR_NOT_INITIALIZED;
        }

        LeaveSpinLock();

        return status;
    }

    static const char *WINAPI MH_StatusToString(MH_STATUS status)
    {
#define MH_ST2STR(x) \
    case x:          \
        return #x;

        switch (status)
        {
            MH_ST2STR(MH_UNKNOWN)
            MH_ST2STR(MH_OK)
            MH_ST2STR(MH_ERROR_ALREADY_INITIALIZED)
            MH_ST2STR(MH_ERROR_NOT_INITIALIZED)
            MH_ST2STR(MH_ERROR_ALREADY_CREATED)
            MH_ST2STR(MH_ERROR_NOT_CREATED)
            MH_ST2STR(MH_ERROR_ENABLED)
            MH_ST2STR(MH_ERROR_DISABLED)
            MH_ST2STR(MH_ERROR_NOT_EXECUTABLE)
            MH_ST2STR(MH_ERROR_UNSUPPORTED_FUNCTION)
            MH_ST2STR(MH_ERROR_MEMORY_ALLOC)
            MH_ST2STR(MH_ERROR_MEMORY_PROTECT)
            MH_ST2STR(MH_ERROR_MODULE_NOT_FOUND)
            MH_ST2STR(MH_ERROR_FUNCTION_NOT_FOUND)
        }

#undef MH_ST2STR

        return "(unknown)";
    }
};
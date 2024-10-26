#pragma once

#include "pch.h"
#include <fstream>
#include "Globals.h"

class Utils
{
public:
    static inline ofstream OutputFile = ofstream("CelestiaLog.txt");
    static inline basic_stringstream<char, char_traits<char>, TMemoryAllocator<char>> ss;

private:
    static void Log() {
        ss << endl;
        xstring str = ss.str();
        cout << "LogCelestia: Display: ";
        cout << str;
        OutputFile << str;
        OutputFile.flush();
        ss.str(xstring());
        ss.clear();
    }

public:
    template <typename... Args>
    static __forceinline void Log(Args &&...args)
    {
        (ss << ... << args);
        Log();
    }

    template <typename T = AActor>
    static TArray<T *> GetAll(UClass *Class)
    {
        TArray<AActor *> ret;
        UGameplayStatics::GetAllActorsOfClass(UWorld::Get(), Class, &ret);
        return ret;
    }

    template <typename T = AActor>
    static TArray<T *> GetAll()
    {
        return GetAll<T>(T::StaticClass());
    }

    template <typename T>
    static TArray<T *> GetAllObjectsOfClass(UClass *Class)
    {
        TArray<UObject *> Objects;

        for (int i = 0; i < UObject::GObjects->Num(); ++i)
        {
            UObject *Object = UObject::GObjects->GetByIndex(i);

            if (!Object)
                continue;

            if (Object->IsA(Class) && !Object->IsDefaultObject())
            {
                Objects.Add((T *)Object);
            }
        }

        return Objects;
    }

    template <typename T>
    static TArray<T *> GetAllObjectsOfClass()
    {
        return GetAllObjectsOfClass<T>(T::StaticClass());
    }

    struct FParseConditionResult
    {
        bool bMatch;
        size_t NextStart;
    };

    static FParseConditionResult ParseCondition(xstring Condition, const FGameplayTagContainer &TargetTags, const FGameplayTagContainer &SourceTags, const FGameplayTagContainer &ContextTags)
    {
        size_t CondTypeStart = -1, CondTypeEnd = -1, NextCond = -1;

        for (auto &c : Condition)
        {
            if (c == '>' || c == '<' || c == '=' || c == '&')
            {
                CondTypeStart = __int64(&c - Condition.data());
            }
            else if (CondTypeStart != -1 && (c != '>' && c != '<' && c != '=' && c != '&'))
            {
                CondTypeEnd = __int64(&c - Condition.data());
            }
            else if (CondTypeEnd != -1 && (c == '=' || c == '&'))
            {
                NextCond = __int64(&c - Condition.data());
            }

            if (CondTypeStart != -1 && CondTypeEnd != -1 && NextCond != -1)
                break;
        }

        if (CondTypeStart == Condition.npos)
        {
            CondTypeStart = Condition.find(" ");

            if (CondTypeStart == Condition.npos)
                return {false, NextCond};

            CondTypeStart++;

            if (CondTypeEnd == Condition.npos)
                CondTypeEnd = Condition.find(" ", CondTypeStart);

            NextCond = Condition.find("&&", CondTypeEnd + 1);
            if (NextCond == Condition.npos)
                NextCond = Condition.find("||", CondTypeEnd + 1);
        }
        else if (CondTypeEnd == Condition.npos)
        {
            CondTypeEnd = CondTypeStart + 1;
        }

        auto Left = Condition.substr(0, CondTypeStart - 1);
        auto CondType = Condition.substr(CondTypeStart, CondTypeEnd - CondTypeStart);
        auto Right = Condition.substr(CondTypeEnd + 1, NextCond == Condition.npos ? NextCond : (Condition.substr(NextCond - 1, 1) == " " ? NextCond - 1 : NextCond) - CondTypeEnd - 1);

        if (CondType == "HasTag" || CondType == "MissingTag")
        {
            FGameplayTagContainer Container;

            if (Left == "Target.Tags")
            {
                Container = TargetTags;
            }
            else if (Left == "Source.Tags")
            {
                Container = SourceTags;
            }
            else if (Left == "Context.Tags")
            {
                Container = ContextTags;
            }
            else
            {
                return {false, NextCond};
            }

            FGameplayTag Tag(FName(xwstring(Right.begin(), Right.end()).c_str()));

            if (CondType == "HasTag")
            {
                return {Container.HasTag(Tag), NextCond};
            }
            else
            {
                return {!Container.HasTag(Tag), NextCond};
            }
        }
        else
        {
            Utils::Log("Hit unimplemented condition: ", Left, " ", CondType, " ", Right);
        }
        return {false, NextCond};
    }

    static bool IsConditionMet(const FString &InCondition, const FGameplayTagContainer &TargetTags, const FGameplayTagContainer &SourceTags, const FGameplayTagContainer &ContextTags)
    {
        auto Condition = InCondition.ToString();

        if (Condition.empty())
            return true;

        FParseConditionResult Result = ParseCondition(Condition, TargetTags, SourceTags, ContextTags);

        if (Result.NextStart != Condition.npos)
        {
        loop:
            if (Result.NextStart == Condition.npos)
                return Result.bMatch;
            auto Start = Condition.substr(Result.NextStart, 2);

            if (Start == "&&")
            {
                Condition = Condition.substr(Result.NextStart + 2);

                if (Condition.substr(0, 1) == " ")
                    Condition = Condition.substr(1);

                auto LastResult = Result;

                Result = ParseCondition(Condition, TargetTags, SourceTags, ContextTags);

                if (!LastResult.bMatch || !Result.bMatch)
                    Result.bMatch = false;

                goto loop;
            }
            else if (Start == "||")
            {
                Condition = Condition.substr(Result.NextStart + 2);

                if (Condition.substr(0, 1) == " ")
                    Condition = Condition.substr(1);

                auto LastResult = Result;

                Result = ParseCondition(Condition, TargetTags, SourceTags, ContextTags);

                if (LastResult.bMatch || Result.bMatch)
                    Result.bMatch = true;

                goto loop;
            }
            else
            {
                return Result.bMatch;
            }
        }

        return Result.bMatch;
    }

    struct FActorSpawnParameters
    {
        FName Name = FName(0);
        UObject *Template = nullptr;
        UObject *Owner = nullptr;
        UObject **Instigator = nullptr;
        UObject *OverrideLevel = nullptr;
        ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::Undefined;
        uint16 bRemoteOwned : 1;
        uint16 bNoFail : 1;
        uint16 bDeferConstruction : 1;
        uint16 bAllowDuringConstructionScript : 1;
        EObjectFlags ObjectFlags;
    };

    static AActor *SpawnActor(UClass *Class, FVector& Loc, FRotator& Rot, AActor *Owner = nullptr)
    {
        FTransform Transform(Loc, Rot);

        /*FActorSpawnParameters addr{};

        addr.Owner = Owner;
        addr.bDeferConstruction = false;
        addr.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        return ((AActor * (*)(UWorld *, UClass *, FVector const*, FRotator const*, FActorSpawnParameters*))(ImageBase + 0x4a92070))(UWorld::Get(), Class, &Loc, &Rot, &addr);*/
        return UGameplayStatics::FinishSpawningActor(UGameplayStatics::BeginDeferredActorSpawnFromClass(UWorld::Get(), Class, Transform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, Owner), Transform);
    }

    static AActor *SpawnActor(UClass *Class, FTransform& Transform, AActor *Owner = nullptr)
    {
        /*FActorSpawnParameters addr{};

        addr.Owner = Owner;
        addr.bDeferConstruction = false;
        addr.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        return ((AActor * (*)(UWorld *, UClass *, FTransform const*, FActorSpawnParameters*))(ImageBase + 0x4a91050))(UWorld::Get(), Class, &Transform, &addr);*/
        return UGameplayStatics::FinishSpawningActor(UGameplayStatics::BeginDeferredActorSpawnFromClass(UWorld::Get(), Class, Transform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, Owner), Transform);
    }

    template <typename T = AActor>
    static T *SpawnActorUnfinished(UClass *Class, FVector Loc, FRotator Rot = {}, AActor *Owner = nullptr)
    {
        FTransform Transform(Loc, Rot);

        return (T *)UGameplayStatics::BeginDeferredActorSpawnFromClass(UWorld::Get(), Class, Transform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, Owner);
    }

    template <typename T = AActor>
    static T *FinishSpawnActor(AActor *Actor, FVector Loc, FRotator Rot)
    {
        FTransform Transform(Loc, Rot);

        return (T *)UGameplayStatics::FinishSpawningActor(Actor, Transform);
    }

    template <typename T = AActor>
    static T *SpawnActor(UClass *Class, FVector Loc, FRotator Rot = {}, AActor *Owner = nullptr)
    {
        return (T *)SpawnActor(Class, Loc, Rot, Owner);
    }

    template <typename T = AActor>
    static T *SpawnActor(UClass *Class, FTransform& Transform, AActor *Owner = nullptr)
    {
        return (T *)SpawnActor(Class, Transform, Owner);
    }

    template <typename T>
    static T *SpawnActor(FVector Loc, FRotator Rot, AActor *Owner = nullptr)
    {
        return (T *)SpawnActor(T::StaticClass(), Loc, Rot, Owner);
    }

    template <typename T>
    static T *SpawnActor(FTransform& Transform, AActor *Owner = nullptr)
    {
        return (T *)SpawnActor(T::StaticClass(), Transform, Owner);
    }

    static inline void *nullptrForHook = nullptr;

    template <typename T = void *>
    __forceinline static void ExecHook(UFunction *func, void *detour, T &og = nullptrForHook)
    {
        if (!func)
            return;
        if (!is_same_v<T, void *>)
            og = (T)func->ExecFunction;

        func->ExecFunction = reinterpret_cast<UFunction::FNativeFuncPtr>(detour);
    }

    template <typename T = void*>
    __forceinline static void NullExec(UFunction* func) // for when u just cba to get the offset
    {
        static auto NullHook = []()
            {
                return;
            }; // we dont need 500 lambdas generated max

        Utils::ExecHook(func, NullHook);
    }

    template <typename T = void *>
    __forceinline static void Hook(uintptr_t ptr, void *detour, T &og = nullptrForHook)
    {
        MinHook::MH_CreateHook(LPVOID(ptr), detour, is_same_v<T, void *> ? nullptr : (LPVOID *)&og);
    }

    template <typename U, typename T = void *>
    __forceinline static void Hook(uint32_t idx, void *detour, T &og = nullptrForHook)
    {
        auto VTable = (void **)U::GetDefaultObj()->VTable;
        if (!is_same_v<T, void *>)
            og = (T)VTable[idx];

        DWORD vpog;
        VirtualProtect(VTable + idx, 8, PAGE_EXECUTE_READWRITE, &vpog);
        VTable[idx] = detour;
        VirtualProtect(VTable + idx, 8, vpog, &vpog);
    }

    template <typename U>
    __forceinline static void HookEvery(uint32_t idx, void *detour)
    {
        for (int i = 0; i < UObject::GObjects->Num(); i++)
        {
            auto Obj = UObject::GObjects->GetByIndex(i);
            if (Obj->IsA<U>())
            {
                auto VTable = Obj->VTable;

                DWORD vpog;
                VirtualProtect(VTable + idx, 8, PAGE_EXECUTE_READWRITE, &vpog);
                VTable[idx] = detour;
                VirtualProtect(VTable + idx, 8, vpog, &vpog);
            }
        }
    }

    __forceinline static void PatchByte(uintptr_t ptr, uint8_t byte)
    {
        DWORD og;
        VirtualProtect(LPVOID(ptr), 1, PAGE_EXECUTE_READWRITE, &og);
        *(uint8_t *)(ptr) = byte;
        VirtualProtect(LPVOID(ptr), 1, og, &og);
    }

    __forceinline static void PatchU32(uintptr_t ptr, uint32_t u32)
    {
        DWORD og;
        VirtualProtect(LPVOID(ptr), 4, PAGE_EXECUTE_READWRITE, &og);
        *(uint32_t *)(ptr) = u32;
        VirtualProtect(LPVOID(ptr), 4, og, &og);
    }

    static void NullCall(uint64_t Offset)
    {
        for (int i = 0; i < 5; i++)
            PatchByte(ImageBase + Offset + i, 0x90); // call -> nop
    }

    __forceinline static UObject *InternalFindObject(xstring ObjectPath, UClass *Class)
    {
        UObject *(*StaticFindObjectInternal)(UClass *Class, UObject *Package, const wchar_t *OrigInName, bool ExactClass) = decltype(StaticFindObjectInternal)(StaticFindObject);
        return StaticFindObjectInternal(Class, nullptr, xwstring(ObjectPath.begin(), ObjectPath.end()).c_str(), false);
    }

    __forceinline static UObject *InternalLoadObject(xstring Path, UClass *InClass, UObject *Outer = nullptr)
    {
        UObject *(*StaticLoadObjectInternal)(UClass *Class, UObject *InOuter, const TCHAR *Name, const TCHAR *Filename, uint32_t LoadFlags, UObject *Sandbox, bool bAllowObjectReconciliation) = decltype(StaticLoadObjectInternal)(StaticLoadObject);
        return StaticLoadObjectInternal(InClass, Outer, xwstring(Path.begin(), Path.end()).c_str(), nullptr, 0, nullptr, false);
    }

    static UObject *FindObject(const char *ObjectPath, UClass *Class)
    {
        auto Object = InternalFindObject(ObjectPath, Class);
        return Object ? Object : InternalLoadObject(ObjectPath, Class);
    }

    template <typename T>
    static T *FindObject(const char *ObjectPath, UClass *Class = T::StaticClass())
    {
        return (T *)FindObject(ObjectPath, Class);
    }

    template <typename T>
    static T *FindObject(xstring ObjectPath, UClass *Class = T::StaticClass())
    {
        return (T *)FindObject(ObjectPath.c_str(), Class);
    }

    static float precision(float f, float places)
    {
        float n = powf(10.0f, places);
        return round(f * n) / n;
    }

    template <typename T>
    static T* GetInterface(AFortPlayerController* PC) {
        return ((T * (*)(AFortPlayerController*, UClass*)) (ImageBase + 0x351fae0))(PC, T::StaticClass());
    }

    template <typename T>
    static TScriptInterface<T> GetScriptInterface(AFortPlayerController* PC) {
        TScriptInterface<T> ScriptInterface;
        ScriptInterface.InterfacePointer = GetInterface<T>(PC);
        ScriptInterface.ObjectPointer = PC;
        return ScriptInterface;
    }

    static int32 EvaluateMinMaxPercent(FScalableFloat Min, FScalableFloat Max, int32 Count)
	{
        float AmmoSpawnMin = Min.GetValue(), AmmoSpawnMax = Max.GetValue();
        auto OutVal = (int)(AmmoSpawnMax - AmmoSpawnMin) == 0 ? 0 : Count * (rand() % (int)(AmmoSpawnMax - AmmoSpawnMin));
        OutVal += Count * (100 - (int)AmmoSpawnMax) / 100;
        return OutVal;
	}
};

template<typename FunctionSignature>
class VirtualFunction
{
};

template<typename Ret, typename... Args>
class VirtualFunction<Ret(Args...)> {
    using FT = Ret(*)(Args...);
    FT Func;
public:

    VirtualFunction(UObject* Obj, uint32 Idx) {
        Func = (FT)Obj->VTable[Idx];
    }

    Ret operator()(Args... args) {
        return Func(args...);
    }
};

class FOutputDevice
{
public:
    bool bSuppressEventTag;
    bool bAutoEmitLineTerminator;
    uint8_t _Padding1[0x6];
};

class FFrame : public FOutputDevice
{
public:
    void **VTable;
    UFunction *Node;
    UObject *Object;
    uint8 *Code;
    uint8 *Locals;
    void *MostRecentProperty;
    uint8_t *MostRecentPropertyAddress;
    uint8_t _Padding1[0x40];
    FField *PropertyChainForCompiledIn;

public:
    void StepCompiledIn(void *const Result, bool ForceExplicitProp = false)
    {
        if (Code && !ForceExplicitProp)
        {
            ((void (*)(FFrame *, UObject *, void *const))(ImageBase + 0x3531130))(this, Object, Result);
        }
        else
        {
            FField *_Prop = PropertyChainForCompiledIn;
            PropertyChainForCompiledIn = _Prop->Next;
            ((void (*)(FFrame *, void *const, FField *))(ImageBase + 0x3531160))(this, Result, _Prop);
        }
    }

    template <typename T>
    T& StepCompiledInRef()
    {
        T TempVal{};
        MostRecentPropertyAddress = nullptr;

        if (Code)
        {
            ((void (*)(FFrame*, UObject*, void* const))(ImageBase + 0x3531130))(this, Object, &TempVal);
        }
        else
        {
            FField* _Prop = PropertyChainForCompiledIn;
            PropertyChainForCompiledIn = _Prop->Next;
            ((void (*)(FFrame*, void* const, FField*))(ImageBase + 0x3531160))(this, &TempVal, _Prop);
        }

        return MostRecentPropertyAddress ? *(T*)MostRecentPropertyAddress : TempVal;
    }
};
static_assert(offsetof(FFrame, Object) == 0x18, "FFrame::Object offset is wrong!");
static_assert(offsetof(FFrame, Code) == 0x20, "FFrame::Code offset is wrong!");
static_assert(offsetof(FFrame, PropertyChainForCompiledIn) == 0x80, "FFrame::PropertyChainForCompiledIn offset is wrong!");
static_assert(offsetof(FFrame, PropertyChainForCompiledIn) == 0x80, "FFrame::PropertyChainForCompiledIn offset is wrong!");

namespace SDK
{
    UObject *InternalGet(FSoftObjectPtr *Ptr, UClass *Class)
    {
        if (!Ptr)
            return nullptr;
        auto Ret = Ptr->Get();
        if (!Ret && Ptr->ObjectID.AssetPathName.ComparisonIndex > 0) [[unlikely]]
        {
            Ret = Utils::FindObject(Ptr->ObjectID.AssetPathName.GetRawString().c_str(), Class);
            if (Ret)
            {
                Ptr->WeakPtr.ObjectIndex = Ret->Index;
                Ptr->WeakPtr.ObjectSerialNumber = UObject::GObjects->GetItemByIndex(Ret->Index)->SerialNumber;
            }
        }
        return Ret;
    }
}

FVector_NetQuantize10 FVector::Quantize10()
{
    FVector_NetQuantize10 ret;
    ret.X = Utils::precision(X, 1);
    ret.Y = Utils::precision(Y, 1);
    ret.Z = Utils::precision(Z, 1);
    return ret;
}

FVector_NetQuantize100 FVector::Quantize100()
{
    FVector_NetQuantize100 ret;
    ret.X = Utils::precision(X, 2);
    ret.Y = Utils::precision(Y, 2);
    ret.Z = Utils::precision(Z, 2);
    return ret;
}

// probably scuffed but wtv!
FVector_NetQuantizeNormal FVector::QuantizeNormal()
{
    FVector_NetQuantizeNormal ret;
    ret.X = X > 0 ? X / 100000 : -(-X / 100000);
    ret.Y = Y > 0 ? Y / 100000 : -(-Y / 100000);
    ret.Z = Z > 0 ? Z / 100000 : -(-Z / 100000);
    return ret;
}

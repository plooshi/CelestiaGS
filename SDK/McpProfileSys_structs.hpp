#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: McpProfileSys

#include "Basic.hpp"

#include "JsonUtilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct McpProfileSys.McpLootEntry
// 0x0058 (0x0058 - 0x0000)
struct FMcpLootEntry
{
public:
	class FString                                 ItemType;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ItemGuid;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Quantity;                                          // 0x0020(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43AE[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJsonObjectWrapper                     Attributes;                                        // 0x0028(0x0020)(Edit, NativeAccessSpecifierPublic)
	class FString                                 ItemProfile;                                       // 0x0048(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMcpLootEntry) == 0x000008, "Wrong alignment on FMcpLootEntry");
static_assert(sizeof(FMcpLootEntry) == 0x000058, "Wrong size on FMcpLootEntry");
static_assert(offsetof(FMcpLootEntry, ItemType) == 0x000000, "Member 'FMcpLootEntry::ItemType' has a wrong offset!");
static_assert(offsetof(FMcpLootEntry, ItemGuid) == 0x000010, "Member 'FMcpLootEntry::ItemGuid' has a wrong offset!");
static_assert(offsetof(FMcpLootEntry, Quantity) == 0x000020, "Member 'FMcpLootEntry::Quantity' has a wrong offset!");
static_assert(offsetof(FMcpLootEntry, Attributes) == 0x000028, "Member 'FMcpLootEntry::Attributes' has a wrong offset!");
static_assert(offsetof(FMcpLootEntry, ItemProfile) == 0x000048, "Member 'FMcpLootEntry::ItemProfile' has a wrong offset!");

// ScriptStruct McpProfileSys.McpChangeQuantityRequest
// 0x0018 (0x0018 - 0x0000)
struct FMcpChangeQuantityRequest final
{
public:
	class FString                                 ItemId;                                            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DeltaQuantity;                                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43AF[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMcpChangeQuantityRequest) == 0x000008, "Wrong alignment on FMcpChangeQuantityRequest");
static_assert(sizeof(FMcpChangeQuantityRequest) == 0x000018, "Wrong size on FMcpChangeQuantityRequest");
static_assert(offsetof(FMcpChangeQuantityRequest, ItemId) == 0x000000, "Member 'FMcpChangeQuantityRequest::ItemId' has a wrong offset!");
static_assert(offsetof(FMcpChangeQuantityRequest, DeltaQuantity) == 0x000010, "Member 'FMcpChangeQuantityRequest::DeltaQuantity' has a wrong offset!");

// ScriptStruct McpProfileSys.ProfileUpdateSingle
// 0x0050 (0x0050 - 0x0000)
struct FProfileUpdateSingle
{
public:
	int64                                         ProfileRevision;                                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ProfileId;                                         // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         ProfileChangesBaseRevision;                        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>             ProfileChanges;                                    // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              LockExpiration;                                    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>             Notifications;                                     // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ProfileCommandRevision;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B0[0x4];                                     // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FProfileUpdateSingle) == 0x000008, "Wrong alignment on FProfileUpdateSingle");
static_assert(sizeof(FProfileUpdateSingle) == 0x000050, "Wrong size on FProfileUpdateSingle");
static_assert(offsetof(FProfileUpdateSingle, ProfileRevision) == 0x000000, "Member 'FProfileUpdateSingle::ProfileRevision' has a wrong offset!");
static_assert(offsetof(FProfileUpdateSingle, ProfileId) == 0x000008, "Member 'FProfileUpdateSingle::ProfileId' has a wrong offset!");
static_assert(offsetof(FProfileUpdateSingle, ProfileChangesBaseRevision) == 0x000018, "Member 'FProfileUpdateSingle::ProfileChangesBaseRevision' has a wrong offset!");
static_assert(offsetof(FProfileUpdateSingle, ProfileChanges) == 0x000020, "Member 'FProfileUpdateSingle::ProfileChanges' has a wrong offset!");
static_assert(offsetof(FProfileUpdateSingle, LockExpiration) == 0x000030, "Member 'FProfileUpdateSingle::LockExpiration' has a wrong offset!");
static_assert(offsetof(FProfileUpdateSingle, Notifications) == 0x000038, "Member 'FProfileUpdateSingle::Notifications' has a wrong offset!");
static_assert(offsetof(FProfileUpdateSingle, ProfileCommandRevision) == 0x000048, "Member 'FProfileUpdateSingle::ProfileCommandRevision' has a wrong offset!");

// ScriptStruct McpProfileSys.BaseUrlContext
// 0x0080 (0x0080 - 0x0000)
struct alignas(0x10) FBaseUrlContext
{
public:
	uint8                                         Pad_43B1[0x80];                                    // 0x0000(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBaseUrlContext) == 0x000010, "Wrong alignment on FBaseUrlContext");
static_assert(sizeof(FBaseUrlContext) == 0x000080, "Wrong size on FBaseUrlContext");

// ScriptStruct McpProfileSys.McpAddItemRequest
// 0x0048 (0x0048 - 0x0000)
struct FMcpAddItemRequest final
{
public:
	class FString                                 ItemId;                                            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TemplateId;                                        // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Quantity;                                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B2[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJsonObjectWrapper                     Attributes;                                        // 0x0028(0x0020)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FMcpAddItemRequest) == 0x000008, "Wrong alignment on FMcpAddItemRequest");
static_assert(sizeof(FMcpAddItemRequest) == 0x000048, "Wrong size on FMcpAddItemRequest");
static_assert(offsetof(FMcpAddItemRequest, ItemId) == 0x000000, "Member 'FMcpAddItemRequest::ItemId' has a wrong offset!");
static_assert(offsetof(FMcpAddItemRequest, TemplateId) == 0x000010, "Member 'FMcpAddItemRequest::TemplateId' has a wrong offset!");
static_assert(offsetof(FMcpAddItemRequest, Quantity) == 0x000020, "Member 'FMcpAddItemRequest::Quantity' has a wrong offset!");
static_assert(offsetof(FMcpAddItemRequest, Attributes) == 0x000028, "Member 'FMcpAddItemRequest::Attributes' has a wrong offset!");

// ScriptStruct McpProfileSys.McpRemoveItemRequest
// 0x0010 (0x0010 - 0x0000)
struct FMcpRemoveItemRequest final
{
public:
	class FString                                 ItemId;                                            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMcpRemoveItemRequest) == 0x000008, "Wrong alignment on FMcpRemoveItemRequest");
static_assert(sizeof(FMcpRemoveItemRequest) == 0x000010, "Wrong size on FMcpRemoveItemRequest");
static_assert(offsetof(FMcpRemoveItemRequest, ItemId) == 0x000000, "Member 'FMcpRemoveItemRequest::ItemId' has a wrong offset!");

// ScriptStruct McpProfileSys.McpChangeAttributesRequest
// 0x0030 (0x0030 - 0x0000)
struct FMcpChangeAttributesRequest final
{
public:
	class FString                                 ItemId;                                            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                     Attributes;                                        // 0x0010(0x0020)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FMcpChangeAttributesRequest) == 0x000008, "Wrong alignment on FMcpChangeAttributesRequest");
static_assert(sizeof(FMcpChangeAttributesRequest) == 0x000030, "Wrong size on FMcpChangeAttributesRequest");
static_assert(offsetof(FMcpChangeAttributesRequest, ItemId) == 0x000000, "Member 'FMcpChangeAttributesRequest::ItemId' has a wrong offset!");
static_assert(offsetof(FMcpChangeAttributesRequest, Attributes) == 0x000010, "Member 'FMcpChangeAttributesRequest::Attributes' has a wrong offset!");

// ScriptStruct McpProfileSys.McpProfileChangeRequest
// 0x0058 (0x0058 - 0x0000)
struct FMcpProfileChangeRequest final
{
public:
	int32                                         BaseCommandRevision;                               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMcpAddItemRequest>             AddRequests;                                       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpRemoveItemRequest>          RemoveRequests;                                    // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpChangeQuantityRequest>      ChangeQuantityRequests;                            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpChangeAttributesRequest>    ChangeAttributesRequests;                          // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>             ChangeStatRequests;                                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMcpProfileChangeRequest) == 0x000008, "Wrong alignment on FMcpProfileChangeRequest");
static_assert(sizeof(FMcpProfileChangeRequest) == 0x000058, "Wrong size on FMcpProfileChangeRequest");
static_assert(offsetof(FMcpProfileChangeRequest, BaseCommandRevision) == 0x000000, "Member 'FMcpProfileChangeRequest::BaseCommandRevision' has a wrong offset!");
static_assert(offsetof(FMcpProfileChangeRequest, AddRequests) == 0x000008, "Member 'FMcpProfileChangeRequest::AddRequests' has a wrong offset!");
static_assert(offsetof(FMcpProfileChangeRequest, RemoveRequests) == 0x000018, "Member 'FMcpProfileChangeRequest::RemoveRequests' has a wrong offset!");
static_assert(offsetof(FMcpProfileChangeRequest, ChangeQuantityRequests) == 0x000028, "Member 'FMcpProfileChangeRequest::ChangeQuantityRequests' has a wrong offset!");
static_assert(offsetof(FMcpProfileChangeRequest, ChangeAttributesRequests) == 0x000038, "Member 'FMcpProfileChangeRequest::ChangeAttributesRequests' has a wrong offset!");
static_assert(offsetof(FMcpProfileChangeRequest, ChangeStatRequests) == 0x000048, "Member 'FMcpProfileChangeRequest::ChangeStatRequests' has a wrong offset!");

// ScriptStruct McpProfileSys.ClientUrlContext
// 0x0000 (0x0080 - 0x0080)
struct FClientUrlContext final : public FBaseUrlContext
{
};
static_assert(alignof(FClientUrlContext) == 0x000010, "Wrong alignment on FClientUrlContext");
static_assert(sizeof(FClientUrlContext) == 0x000080, "Wrong size on FClientUrlContext");

// ScriptStruct McpProfileSys.DedicatedServerUrlContext
// 0x0000 (0x0080 - 0x0080)
struct FDedicatedServerUrlContext final : public FBaseUrlContext
{
};
static_assert(alignof(FDedicatedServerUrlContext) == 0x000010, "Wrong alignment on FDedicatedServerUrlContext");
static_assert(sizeof(FDedicatedServerUrlContext) == 0x000080, "Wrong size on FDedicatedServerUrlContext");

// ScriptStruct McpProfileSys.PublicUrlContext
// 0x0000 (0x0080 - 0x0080)
struct FPublicUrlContext final : public FBaseUrlContext
{
};
static_assert(alignof(FPublicUrlContext) == 0x000010, "Wrong alignment on FPublicUrlContext");
static_assert(sizeof(FPublicUrlContext) == 0x000080, "Wrong size on FPublicUrlContext");

// ScriptStruct McpProfileSys.ProfileEntry
// 0x0020 (0x0020 - 0x0000)
struct FProfileEntry final
{
public:
	class FString                                 ProfileId;                                         // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMcpProfile*                            ProfileObject;                                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWaitingForRefreshAllProfilesResponse;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForwardUpdatesToClient;                           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B4[0x6];                                     // 0x001A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FProfileEntry) == 0x000008, "Wrong alignment on FProfileEntry");
static_assert(sizeof(FProfileEntry) == 0x000020, "Wrong size on FProfileEntry");
static_assert(offsetof(FProfileEntry, ProfileId) == 0x000000, "Member 'FProfileEntry::ProfileId' has a wrong offset!");
static_assert(offsetof(FProfileEntry, ProfileObject) == 0x000010, "Member 'FProfileEntry::ProfileObject' has a wrong offset!");
static_assert(offsetof(FProfileEntry, bWaitingForRefreshAllProfilesResponse) == 0x000018, "Member 'FProfileEntry::bWaitingForRefreshAllProfilesResponse' has a wrong offset!");
static_assert(offsetof(FProfileEntry, bForwardUpdatesToClient) == 0x000019, "Member 'FProfileEntry::bForwardUpdatesToClient' has a wrong offset!");

// ScriptStruct McpProfileSys.ProfileGroupEntry
// 0x0020 (0x0020 - 0x0000)
struct FProfileGroupEntry final
{
public:
	uint8                                         Pad_43B5[0x18];                                    // 0x0000(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class UMcpProfileGroup*                       ProfileGroup;                                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FProfileGroupEntry) == 0x000008, "Wrong alignment on FProfileGroupEntry");
static_assert(sizeof(FProfileGroupEntry) == 0x000020, "Wrong size on FProfileGroupEntry");
static_assert(offsetof(FProfileGroupEntry, ProfileGroup) == 0x000018, "Member 'FProfileGroupEntry::ProfileGroup' has a wrong offset!");

// ScriptStruct McpProfileSys.ProfileUpdateNotification
// 0x0028 (0x0028 - 0x0000)
struct FProfileUpdateNotification final
{
public:
	TArray<struct FJsonObjectWrapper>             Changes;                                           // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              LockExpiration;                                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CommandRevision;                                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B6[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         Revision;                                          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FProfileUpdateNotification) == 0x000008, "Wrong alignment on FProfileUpdateNotification");
static_assert(sizeof(FProfileUpdateNotification) == 0x000028, "Wrong size on FProfileUpdateNotification");
static_assert(offsetof(FProfileUpdateNotification, Changes) == 0x000000, "Member 'FProfileUpdateNotification::Changes' has a wrong offset!");
static_assert(offsetof(FProfileUpdateNotification, LockExpiration) == 0x000010, "Member 'FProfileUpdateNotification::LockExpiration' has a wrong offset!");
static_assert(offsetof(FProfileUpdateNotification, CommandRevision) == 0x000018, "Member 'FProfileUpdateNotification::CommandRevision' has a wrong offset!");
static_assert(offsetof(FProfileUpdateNotification, Revision) == 0x000020, "Member 'FProfileUpdateNotification::Revision' has a wrong offset!");

// ScriptStruct McpProfileSys.ProfileUpdate
// 0x0020 (0x0070 - 0x0050)
struct FProfileUpdate final : public FProfileUpdateSingle
{
public:
	int32                                         ResponseVersion;                                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B7[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              ServerTime;                                        // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProfileUpdateSingle>           MultiUpdate;                                       // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FProfileUpdate) == 0x000008, "Wrong alignment on FProfileUpdate");
static_assert(sizeof(FProfileUpdate) == 0x000070, "Wrong size on FProfileUpdate");
static_assert(offsetof(FProfileUpdate, ResponseVersion) == 0x000050, "Member 'FProfileUpdate::ResponseVersion' has a wrong offset!");
static_assert(offsetof(FProfileUpdate, ServerTime) == 0x000058, "Member 'FProfileUpdate::ServerTime' has a wrong offset!");
static_assert(offsetof(FProfileUpdate, MultiUpdate) == 0x000060, "Member 'FProfileUpdate::MultiUpdate' has a wrong offset!");

// ScriptStruct McpProfileSys.AccountIdAndProfileResponse
// 0x0080 (0x0080 - 0x0000)
struct FAccountIdAndProfileResponse final
{
public:
	class FString                                 AccountId;                                         // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProfileUpdate                         Response;                                          // 0x0010(0x0070)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FAccountIdAndProfileResponse) == 0x000008, "Wrong alignment on FAccountIdAndProfileResponse");
static_assert(sizeof(FAccountIdAndProfileResponse) == 0x000080, "Wrong size on FAccountIdAndProfileResponse");
static_assert(offsetof(FAccountIdAndProfileResponse, AccountId) == 0x000000, "Member 'FAccountIdAndProfileResponse::AccountId' has a wrong offset!");
static_assert(offsetof(FAccountIdAndProfileResponse, Response) == 0x000010, "Member 'FAccountIdAndProfileResponse::Response' has a wrong offset!");

// ScriptStruct McpProfileSys.GiftBoxInfo
// 0x0048 (0x0048 - 0x0000)
struct FGiftBoxInfo final
{
public:
	struct FDateTime                              GiftedOn;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FromAccountId;                                     // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpLootEntry>                  LootList;                                          // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                     Params;                                            // 0x0028(0x0020)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FGiftBoxInfo) == 0x000008, "Wrong alignment on FGiftBoxInfo");
static_assert(sizeof(FGiftBoxInfo) == 0x000048, "Wrong size on FGiftBoxInfo");
static_assert(offsetof(FGiftBoxInfo, GiftedOn) == 0x000000, "Member 'FGiftBoxInfo::GiftedOn' has a wrong offset!");
static_assert(offsetof(FGiftBoxInfo, FromAccountId) == 0x000008, "Member 'FGiftBoxInfo::FromAccountId' has a wrong offset!");
static_assert(offsetof(FGiftBoxInfo, LootList) == 0x000018, "Member 'FGiftBoxInfo::LootList' has a wrong offset!");
static_assert(offsetof(FGiftBoxInfo, Params) == 0x000028, "Member 'FGiftBoxInfo::Params' has a wrong offset!");

// ScriptStruct McpProfileSys.McpItemIdAndQuantity
// 0x0000 (0x0058 - 0x0058)
struct FMcpItemIdAndQuantity final : public FMcpLootEntry
{
};
static_assert(alignof(FMcpItemIdAndQuantity) == 0x000008, "Wrong alignment on FMcpItemIdAndQuantity");
static_assert(sizeof(FMcpItemIdAndQuantity) == 0x000058, "Wrong size on FMcpItemIdAndQuantity");

// ScriptStruct McpProfileSys.McpLootResult
// 0x0020 (0x0020 - 0x0000)
struct FMcpLootResult final
{
public:
	class FString                                 TierGroupName;                                     // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpLootEntry>                  Items;                                             // 0x0010(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMcpLootResult) == 0x000008, "Wrong alignment on FMcpLootResult");
static_assert(sizeof(FMcpLootResult) == 0x000020, "Wrong size on FMcpLootResult");
static_assert(offsetof(FMcpLootResult, TierGroupName) == 0x000000, "Member 'FMcpLootResult::TierGroupName' has a wrong offset!");
static_assert(offsetof(FMcpLootResult, Items) == 0x000010, "Member 'FMcpLootResult::Items' has a wrong offset!");

}

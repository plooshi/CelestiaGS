#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Structure_MANG_Spawner_PatrolsAndBotData

#include "Basic.hpp"

#include "Enum_MANG_Types_structs.hpp"
#include "Enum_MANG_Security_ID_structs.hpp"


namespace SDK
{

// UserDefinedStruct Structure_MANG_Spawner_PatrolsAndBotData.Structure_MANG_Spawner_PatrolsAndBotData
// 0x0020 (0x0020 - 0x0000)
struct FStructure_MANG_Spawner_PatrolsAndBotData final
{
public:
	class FString                                 DevNotes_12_60790F8B4C1CEA89AAFCB08E0BFBB70D;      // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class AFortAthenaPatrolPath*                  PatrolRoute_19_4FDE22694C280B652FC6A992C7FEE65B;   // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_MANG_Types                               HenchmanType_15_52DA80324EA95D9936CCD5AE4C93A298;  // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_MANG_Security_ID                         CameraID_22_FF719A1D4890236973D31782EB0CD6ED;      // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DistanceOptimizationsEnabled_24_C0CE304C42F0D1EE2E7689AF1873AF87; // 0x001A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FStructure_MANG_Spawner_PatrolsAndBotData) == 0x000008, "Wrong alignment on FStructure_MANG_Spawner_PatrolsAndBotData");
static_assert(sizeof(FStructure_MANG_Spawner_PatrolsAndBotData) == 0x000020, "Wrong size on FStructure_MANG_Spawner_PatrolsAndBotData");
static_assert(offsetof(FStructure_MANG_Spawner_PatrolsAndBotData, DevNotes_12_60790F8B4C1CEA89AAFCB08E0BFBB70D) == 0x000000, "Member 'FStructure_MANG_Spawner_PatrolsAndBotData::DevNotes_12_60790F8B4C1CEA89AAFCB08E0BFBB70D' has a wrong offset!");
static_assert(offsetof(FStructure_MANG_Spawner_PatrolsAndBotData, PatrolRoute_19_4FDE22694C280B652FC6A992C7FEE65B) == 0x000010, "Member 'FStructure_MANG_Spawner_PatrolsAndBotData::PatrolRoute_19_4FDE22694C280B652FC6A992C7FEE65B' has a wrong offset!");
static_assert(offsetof(FStructure_MANG_Spawner_PatrolsAndBotData, HenchmanType_15_52DA80324EA95D9936CCD5AE4C93A298) == 0x000018, "Member 'FStructure_MANG_Spawner_PatrolsAndBotData::HenchmanType_15_52DA80324EA95D9936CCD5AE4C93A298' has a wrong offset!");
static_assert(offsetof(FStructure_MANG_Spawner_PatrolsAndBotData, CameraID_22_FF719A1D4890236973D31782EB0CD6ED) == 0x000019, "Member 'FStructure_MANG_Spawner_PatrolsAndBotData::CameraID_22_FF719A1D4890236973D31782EB0CD6ED' has a wrong offset!");
static_assert(offsetof(FStructure_MANG_Spawner_PatrolsAndBotData, DistanceOptimizationsEnabled_24_C0CE304C42F0D1EE2E7689AF1873AF87) == 0x00001A, "Member 'FStructure_MANG_Spawner_PatrolsAndBotData::DistanceOptimizationsEnabled_24_C0CE304C42F0D1EE2E7689AF1873AF87' has a wrong offset!");

}

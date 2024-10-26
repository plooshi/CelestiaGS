#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineVolumeTrail_v1b

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "En_SplineForwardAxes_01_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C
// 0x0230 (0x0450 - 0x0220)
class ABP_SplineVolumeTrail_v1b_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        DebugArrow;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DebugRotateTimeline__Direction_A8B473E74A53FB0F346216B4D4D23AC9; // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_450E[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DebugRotateTimeline;                               // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Skeletal_Mesh;                                     // 0x0250(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   Socket_Attach_Point;                               // 0x0258(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UStaticMesh*                            SplineMeshTemplate;                                // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInterface*                     SplineMeshMaterialOverride;                        // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystem*                        Particles;                                         // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         LifeTime;                                          // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Lifetime_Buffer;                                   // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SplineSystemDuration;                              // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         LifetimeAfterCompletion;                           // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          KeepTickEnabledWhenCompleting;                     // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_450F[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberOfSplineMeshesToUpdate;                      // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Initial_Size;                                      // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4510[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USplineMeshComponent*>           SplineMeshes;                                      // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	float                                         SplineDistanceThreshold;                           // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SplineDistanceThresholdEmpty;                      // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class USplineMeshComponent*>           SplineMeshesHidden;                                // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<float>                                 SplineTimestamps;                                  // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         ArrayIndex;                                        // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SplineSystemActive;                                // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4511[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CompletionTimestamp;                               // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LifetimeAdjusted;                                  // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      SizeOverLife;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       MIDs_0;                                            // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UCurveLinearColor*                      ColorAndAlphaOverLife;                             // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticlesComponent;                                // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SplineID;                                          // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4512[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineMeshComponent*                   Current_Spline_Mesh;                               // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Initial_Rotation__Roll_;                           // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4513[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            RotationOverLife;                                  // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DebugMode;                                         // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4514[0x3];                                     // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                DebugPositionOffset;                               // 0x032C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               DebugRotationRate;                                 // 0x0338(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                         DebugTickDelta;                                    // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugPreviousTickTimestamp;                        // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4515[0x4];                                     // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Spline_System_Duration_Event_Handle;               // 0x0350(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Tick_Interval_LODs;                            // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4516[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Tick_Interval_Event_Handle;                        // 0x0360(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Tick_Interval_LOD_Check_Rate;                      // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4517[0x4];                                     // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Tick_Interval_LOD_Distances;                       // 0x0370(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<float>                                 Tick_Actor_Intervals;                              // 0x0380(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         LOD_Array_Index;                                   // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Recently_Rendered_LOD;                         // 0x0394(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4518[0x3];                                     // 0x0395(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Recently_Rendered_Check_Rate;                      // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4519[0x4];                                     // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Recently_Rendered_Event_Handle;                    // 0x03A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          RecentlyRendered;                                  // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451A[0x3];                                     // 0x03A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Recently_Rendered_Tolerance;                       // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                SplineDefaultUpVector;                             // 0x03B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SplineDefaultUpVectorInWorldSpace;                 // 0x03BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	En_SplineForwardAxes_01                       SplineMeshForwardAxis;                             // 0x03BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          CeaseAndDetachSplineUponCompletion;                // 0x03BE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          CanNewSplinePointsBeCreated;                       // 0x03BF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LinearColorOverLengthOfSpline;                     // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_451B[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 IndiciesToDelete;                                  // 0x03C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          RedistributePointsAlongSplineWhenCreated;          // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_451C[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CurveBakeMID;                                      // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              RenderTextureResolution;                           // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UCurveLinearColor*>              LinearColorCurvesToBake;                           // 0x03F8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          WriteBakedCurveDataToDisk;                         // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_451D[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 File_Path;                                         // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 File_Name;                                         // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   LinearColorArray;                                  // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          UseCheapSplines;                                   // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_451E[0x7];                                     // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               LinearColorTexture;                                // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SplineVolumeTrail_v1b(int32 EntryPoint);
	void GenerateCurveTextures();
	void ClearRenderTarget();
	void Recently_Rendered_Check();
	void Tick_Interval_LOD_Check();
	void ManuallyStopSplineSystem();
	void DebugMode_Rotate();
	void SplineSystemDurationReached();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DebugRotateTimeline__UpdateFunc();
	void DebugRotateTimeline__FinishedFunc();
	void UserConstructionScript();
	void AddSplineMesh();
	void SetStartAndEndSplineMesh(bool Update_Spline_Mesh);
	void AddSplinePoint();
	void UpdateSplinePointPosition();
	void SplineTimestampManagement();
	void ScaleSplineMesh();
	void UpdateMID();
	void UpdateParticleSystemPosition();
	void RollSplineMesh();
	void SetForwardAxisOnSplineMesh(class USplineMeshComponent* SplineMesh);
	void SetNewSplinePointsBool();
	bool AddSplineDistanceCheck();
	void SetWasRecentlyRendered();
	void TickIntervalLODCheck();
	void GetLinearColorFromCurveAtTime(class UCurveLinearColor* Curve_Linear_Color, int32 Param_Index, struct FLinearColor* LinearColorOut);
	void RedistributePointsAlongSpline();
	void SplineUpdateOnTick();
	void ReturnSplineMeshToPool(class USplineMeshComponent* SplineMesh, int32 IndexToRemove);
	void BakeLinearColor(class UCurveLinearColor* Curve_Linear_Color, int32 Pixel__X_, struct FLinearColor* LinearColorOut);
	void DestroyAllSplineMeshes();
	void SetStartAndEndAllSplineMeshes(bool Update_All_Spline_Meshes);
	void GetSocketLocationWS(class FName Socket_Name, struct FVector* Location_WS);
	void UpdateCheapSplinesWPOVectors();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SplineVolumeTrail_v1b_C">();
	}
	static class ABP_SplineVolumeTrail_v1b_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SplineVolumeTrail_v1b_C>();
	}
};
static_assert(alignof(ABP_SplineVolumeTrail_v1b_C) == 0x000008, "Wrong alignment on ABP_SplineVolumeTrail_v1b_C");
static_assert(sizeof(ABP_SplineVolumeTrail_v1b_C) == 0x000450, "Wrong size on ABP_SplineVolumeTrail_v1b_C");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, UberGraphFrame) == 0x000220, "Member 'ABP_SplineVolumeTrail_v1b_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugArrow) == 0x000228, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugArrow' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_SplineVolumeTrail_v1b_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugRotateTimeline__Direction_A8B473E74A53FB0F346216B4D4D23AC9) == 0x000238, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugRotateTimeline__Direction_A8B473E74A53FB0F346216B4D4D23AC9' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugRotateTimeline) == 0x000240, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugRotateTimeline' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Spline) == 0x000248, "Member 'ABP_SplineVolumeTrail_v1b_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Skeletal_Mesh) == 0x000250, "Member 'ABP_SplineVolumeTrail_v1b_C::Skeletal_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Socket_Attach_Point) == 0x000258, "Member 'ABP_SplineVolumeTrail_v1b_C::Socket_Attach_Point' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineMeshTemplate) == 0x000260, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineMeshTemplate' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineMeshMaterialOverride) == 0x000268, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineMeshMaterialOverride' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Particles) == 0x000270, "Member 'ABP_SplineVolumeTrail_v1b_C::Particles' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LifeTime) == 0x000278, "Member 'ABP_SplineVolumeTrail_v1b_C::LifeTime' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Lifetime_Buffer) == 0x00027C, "Member 'ABP_SplineVolumeTrail_v1b_C::Lifetime_Buffer' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineSystemDuration) == 0x000280, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineSystemDuration' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LifetimeAfterCompletion) == 0x000284, "Member 'ABP_SplineVolumeTrail_v1b_C::LifetimeAfterCompletion' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, KeepTickEnabledWhenCompleting) == 0x000288, "Member 'ABP_SplineVolumeTrail_v1b_C::KeepTickEnabledWhenCompleting' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, NumberOfSplineMeshesToUpdate) == 0x00028C, "Member 'ABP_SplineVolumeTrail_v1b_C::NumberOfSplineMeshesToUpdate' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Initial_Size) == 0x000290, "Member 'ABP_SplineVolumeTrail_v1b_C::Initial_Size' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineMeshes) == 0x000298, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineMeshes' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineDistanceThreshold) == 0x0002A8, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineDistanceThreshold' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineDistanceThresholdEmpty) == 0x0002AC, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineDistanceThresholdEmpty' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineMeshesHidden) == 0x0002B0, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineMeshesHidden' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineTimestamps) == 0x0002C0, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineTimestamps' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, ArrayIndex) == 0x0002D0, "Member 'ABP_SplineVolumeTrail_v1b_C::ArrayIndex' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineSystemActive) == 0x0002D4, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineSystemActive' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, CompletionTimestamp) == 0x0002D8, "Member 'ABP_SplineVolumeTrail_v1b_C::CompletionTimestamp' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LifetimeAdjusted) == 0x0002DC, "Member 'ABP_SplineVolumeTrail_v1b_C::LifetimeAdjusted' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SizeOverLife) == 0x0002E0, "Member 'ABP_SplineVolumeTrail_v1b_C::SizeOverLife' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, MIDs_0) == 0x0002E8, "Member 'ABP_SplineVolumeTrail_v1b_C::MIDs_0' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, ColorAndAlphaOverLife) == 0x0002F8, "Member 'ABP_SplineVolumeTrail_v1b_C::ColorAndAlphaOverLife' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, ParticlesComponent) == 0x000300, "Member 'ABP_SplineVolumeTrail_v1b_C::ParticlesComponent' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineID) == 0x000308, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineID' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Current_Spline_Mesh) == 0x000310, "Member 'ABP_SplineVolumeTrail_v1b_C::Current_Spline_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Initial_Rotation__Roll_) == 0x000318, "Member 'ABP_SplineVolumeTrail_v1b_C::Initial_Rotation__Roll_' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, RotationOverLife) == 0x000320, "Member 'ABP_SplineVolumeTrail_v1b_C::RotationOverLife' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugMode) == 0x000328, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugMode' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugPositionOffset) == 0x00032C, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugPositionOffset' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugRotationRate) == 0x000338, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugRotationRate' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugTickDelta) == 0x000344, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugTickDelta' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, DebugPreviousTickTimestamp) == 0x000348, "Member 'ABP_SplineVolumeTrail_v1b_C::DebugPreviousTickTimestamp' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Spline_System_Duration_Event_Handle) == 0x000350, "Member 'ABP_SplineVolumeTrail_v1b_C::Spline_System_Duration_Event_Handle' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Use_Tick_Interval_LODs) == 0x000358, "Member 'ABP_SplineVolumeTrail_v1b_C::Use_Tick_Interval_LODs' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Tick_Interval_Event_Handle) == 0x000360, "Member 'ABP_SplineVolumeTrail_v1b_C::Tick_Interval_Event_Handle' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Tick_Interval_LOD_Check_Rate) == 0x000368, "Member 'ABP_SplineVolumeTrail_v1b_C::Tick_Interval_LOD_Check_Rate' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Tick_Interval_LOD_Distances) == 0x000370, "Member 'ABP_SplineVolumeTrail_v1b_C::Tick_Interval_LOD_Distances' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Tick_Actor_Intervals) == 0x000380, "Member 'ABP_SplineVolumeTrail_v1b_C::Tick_Actor_Intervals' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LOD_Array_Index) == 0x000390, "Member 'ABP_SplineVolumeTrail_v1b_C::LOD_Array_Index' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Use_Recently_Rendered_LOD) == 0x000394, "Member 'ABP_SplineVolumeTrail_v1b_C::Use_Recently_Rendered_LOD' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Recently_Rendered_Check_Rate) == 0x000398, "Member 'ABP_SplineVolumeTrail_v1b_C::Recently_Rendered_Check_Rate' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Recently_Rendered_Event_Handle) == 0x0003A0, "Member 'ABP_SplineVolumeTrail_v1b_C::Recently_Rendered_Event_Handle' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, RecentlyRendered) == 0x0003A8, "Member 'ABP_SplineVolumeTrail_v1b_C::RecentlyRendered' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, Recently_Rendered_Tolerance) == 0x0003AC, "Member 'ABP_SplineVolumeTrail_v1b_C::Recently_Rendered_Tolerance' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineDefaultUpVector) == 0x0003B0, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineDefaultUpVector' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineDefaultUpVectorInWorldSpace) == 0x0003BC, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineDefaultUpVectorInWorldSpace' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, SplineMeshForwardAxis) == 0x0003BD, "Member 'ABP_SplineVolumeTrail_v1b_C::SplineMeshForwardAxis' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, CeaseAndDetachSplineUponCompletion) == 0x0003BE, "Member 'ABP_SplineVolumeTrail_v1b_C::CeaseAndDetachSplineUponCompletion' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, CanNewSplinePointsBeCreated) == 0x0003BF, "Member 'ABP_SplineVolumeTrail_v1b_C::CanNewSplinePointsBeCreated' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LinearColorOverLengthOfSpline) == 0x0003C0, "Member 'ABP_SplineVolumeTrail_v1b_C::LinearColorOverLengthOfSpline' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, IndiciesToDelete) == 0x0003C8, "Member 'ABP_SplineVolumeTrail_v1b_C::IndiciesToDelete' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, RedistributePointsAlongSplineWhenCreated) == 0x0003D8, "Member 'ABP_SplineVolumeTrail_v1b_C::RedistributePointsAlongSplineWhenCreated' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, CurveBakeMID) == 0x0003E0, "Member 'ABP_SplineVolumeTrail_v1b_C::CurveBakeMID' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, RenderTarget) == 0x0003E8, "Member 'ABP_SplineVolumeTrail_v1b_C::RenderTarget' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, RenderTextureResolution) == 0x0003F0, "Member 'ABP_SplineVolumeTrail_v1b_C::RenderTextureResolution' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LinearColorCurvesToBake) == 0x0003F8, "Member 'ABP_SplineVolumeTrail_v1b_C::LinearColorCurvesToBake' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, WriteBakedCurveDataToDisk) == 0x000408, "Member 'ABP_SplineVolumeTrail_v1b_C::WriteBakedCurveDataToDisk' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, File_Path) == 0x000410, "Member 'ABP_SplineVolumeTrail_v1b_C::File_Path' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, File_Name) == 0x000420, "Member 'ABP_SplineVolumeTrail_v1b_C::File_Name' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LinearColorArray) == 0x000430, "Member 'ABP_SplineVolumeTrail_v1b_C::LinearColorArray' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, UseCheapSplines) == 0x000440, "Member 'ABP_SplineVolumeTrail_v1b_C::UseCheapSplines' has a wrong offset!");
static_assert(offsetof(ABP_SplineVolumeTrail_v1b_C, LinearColorTexture) == 0x000448, "Member 'ABP_SplineVolumeTrail_v1b_C::LinearColorTexture' has a wrong offset!");

}


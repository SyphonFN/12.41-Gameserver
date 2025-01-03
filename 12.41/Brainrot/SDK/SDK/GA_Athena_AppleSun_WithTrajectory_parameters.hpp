#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_AppleSun_WithTrajectory

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_AppleSun_WithTrajectory.GA_Athena_AppleSun_WithTrajectory_C.ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory
// 0x02F0 (0x02F0 - 0x0000)
struct GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64A6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints; // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                        CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents; // 0x0018(0x0010)(ZeroConstructor, ReferenceParm)
	struct FHitResult                             CallFunc_GetProjectileTrajectoryPoints_OutHitResult; // 0x0028(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64A7[0x2];                                     // 0x00B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64A8[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64A9[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_ProjectVectorOnToPlane_ReturnValue;       // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaVehicle*                     K2Node_DynamicCast_AsFort_Athena_Vehicle;          // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64AA[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotFromXZ_ReturnValue;                // 0x0164(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64AB[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AWaterBody*                             K2Node_DynamicCast_AsWater_Body;                   // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64AC[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0188(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64AD[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0198(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64AE[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x01A8(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64AF[0x3];                                     // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0238(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_1;              // 0x02C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x02C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64B0[0x1];                                     // 0x02C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x02C8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFortAnalyticsEventAttribute           K2Node_MakeStruct_FortAnalyticsEventAttribute;     // 0x02D0(0x0020)()
};
static_assert(alignof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory) == 0x000008, "Wrong alignment on GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory");
static_assert(sizeof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory) == 0x0002F0, "Wrong size on GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, EntryPoint) == 0x000000, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints) == 0x000008, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents) == 0x000018, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_GetProjectileTrajectoryPoints_OutHitResult) == 0x000028, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_GetProjectileTrajectoryPoints_OutHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_bBlockingHit) == 0x0000B4, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000B5, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_Time) == 0x0000B8, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_Distance) == 0x0000BC, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_Location) == 0x0000C0, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_ImpactPoint) == 0x0000CC, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_Normal) == 0x0000D8, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_ImpactNormal) == 0x0000E4, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_PhysMat) == 0x0000F0, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_HitActor) == 0x0000F8, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_HitComponent) == 0x000100, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_HitBoneName) == 0x000108, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_HitItem) == 0x000110, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_FaceIndex) == 0x000114, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_TraceStart) == 0x000118, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BreakHitResult_TraceEnd) == 0x000124, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_AsFort_Pawn) == 0x000130, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_bSuccess) == 0x000138, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_GetActorForwardVector_ReturnValue) == 0x00013C, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_Not_PreBool_ReturnValue) == 0x000148, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_ProjectVectorOnToPlane_ReturnValue) == 0x00014C, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_ProjectVectorOnToPlane_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_AsFort_Athena_Vehicle) == 0x000158, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_AsFort_Athena_Vehicle' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_bSuccess_1) == 0x000160, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_MakeRotFromXZ_ReturnValue) == 0x000164, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_MakeRotFromXZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_Not_PreBool_ReturnValue_1) == 0x000170, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_AsWater_Body) == 0x000178, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_AsWater_Body' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_DynamicCast_bSuccess_2) == 0x000180, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_Dot_VectorVector_ReturnValue) == 0x000184, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_SelectVector_ReturnValue) == 0x000188, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000194, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_Add_VectorVector_ReturnValue) == 0x000198, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BooleanAND_ReturnValue) == 0x0001A4, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0001A8, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BooleanAND_ReturnValue_1) == 0x000234, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000238, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_SetStaticMesh_ReturnValue) == 0x0002C4, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_SetStaticMesh_ReturnValue_1) == 0x0002C5, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_SetStaticMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0002C6, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x0002C8, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory, K2Node_MakeStruct_FortAnalyticsEventAttribute) == 0x0002D0, "Member 'GA_Athena_AppleSun_WithTrajectory_C_ExecuteUbergraph_GA_Athena_AppleSun_WithTrajectory::K2Node_MakeStruct_FortAnalyticsEventAttribute' has a wrong offset!");

}


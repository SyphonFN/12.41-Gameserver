#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_ThrownConsumable

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ExecuteUbergraph_B_Prj_ThrownConsumable
// 0x0260 (0x0260 - 0x0000)
struct B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6204[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EFortTeamAffiliation>                  K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ZeroConstructor, ReferenceParm)
	uint8                                         CallFunc_GetActorTeam_ReturnValue;                 // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6205[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_Hit_1;                                // 0x005C(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6206[0x1];                                     // 0x00EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6207[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0150(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x015C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetActorTeam_ReturnValue_1;               // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6208[0x6];                                     // 0x016A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EFortTeamAffiliation>                  K2Node_MakeArray_Array_1;                          // 0x0170(0x0010)(ZeroConstructor, ReferenceParm)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6209[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x018C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_Event_HitActors;                            // 0x0198(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                     K2Node_Event_HitResults;                           // 0x01A8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x01B8(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnCollision_OutResult;                    // 0x0245(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_620A[0x2];                                     // 0x0246(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_OnCollision_OutMagnitude;                 // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_620B[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable) == 0x000008, "Wrong alignment on B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable");
static_assert(sizeof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable) == 0x000260, "Wrong size on B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, EntryPoint) == 0x000000, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000008, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00000C, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000018, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000024, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000030, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_K2_GetActorLocation_ReturnValue_4) == 0x00003C, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_K2_GetActorLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, K2Node_MakeArray_Array) == 0x000048, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_GetActorTeam_ReturnValue) == 0x000058, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, K2Node_Event_Hit_1) == 0x00005C, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::K2Node_Event_Hit_1' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_IsValid_ReturnValue) == 0x0000E8, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_bBlockingHit) == 0x0000E9, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000EA, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_Time) == 0x0000EC, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_Distance) == 0x0000F0, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_Location) == 0x0000F4, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_ImpactPoint) == 0x000100, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_Normal) == 0x00010C, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_ImpactNormal) == 0x000118, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_PhysMat) == 0x000128, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_HitActor) == 0x000130, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_HitComponent) == 0x000138, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_HitBoneName) == 0x000140, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_HitItem) == 0x000148, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_FaceIndex) == 0x00014C, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_TraceStart) == 0x000150, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_TraceEnd) == 0x00015C, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_IsValid_ReturnValue_1) == 0x000168, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_GetActorTeam_ReturnValue_1) == 0x000169, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_GetActorTeam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, K2Node_MakeArray_Array_1) == 0x000170, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_GetInstigator_ReturnValue) == 0x000180, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_IsLocallyControlled_ReturnValue) == 0x000188, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_Multiply_VectorVector_ReturnValue) == 0x00018C, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, K2Node_Event_HitActors) == 0x000198, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::K2Node_Event_HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, K2Node_Event_HitResults) == 0x0001A8, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::K2Node_Event_HitResults' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, K2Node_Event_Hit) == 0x0001B8, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000244, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_OnCollision_OutResult) == 0x000245, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_OnCollision_OutResult' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_OnCollision_OutMagnitude) == 0x000248, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_OnCollision_OutMagnitude' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000250, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x000258, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnStop
// 0x008C (0x008C - 0x0000)
struct B_Prj_ThrownConsumable_C_OnStop final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_ThrownConsumable_C_OnStop) == 0x000004, "Wrong alignment on B_Prj_ThrownConsumable_C_OnStop");
static_assert(sizeof(B_Prj_ThrownConsumable_C_OnStop) == 0x00008C, "Wrong size on B_Prj_ThrownConsumable_C_OnStop");
static_assert(offsetof(B_Prj_ThrownConsumable_C_OnStop, Hit) == 0x000000, "Member 'B_Prj_ThrownConsumable_C_OnStop::Hit' has a wrong offset!");

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnBounce
// 0x008C (0x008C - 0x0000)
struct B_Prj_ThrownConsumable_C_OnBounce final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_ThrownConsumable_C_OnBounce) == 0x000004, "Wrong alignment on B_Prj_ThrownConsumable_C_OnBounce");
static_assert(sizeof(B_Prj_ThrownConsumable_C_OnBounce) == 0x00008C, "Wrong size on B_Prj_ThrownConsumable_C_OnBounce");
static_assert(offsetof(B_Prj_ThrownConsumable_C_OnBounce, Hit) == 0x000000, "Member 'B_Prj_ThrownConsumable_C_OnBounce::Hit' has a wrong offset!");

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnExploded
// 0x0020 (0x0020 - 0x0000)
struct B_Prj_ThrownConsumable_C_OnExploded final
{
public:
	TArray<class AActor*>                         HitActors;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                     HitResults;                                        // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_ThrownConsumable_C_OnExploded) == 0x000008, "Wrong alignment on B_Prj_ThrownConsumable_C_OnExploded");
static_assert(sizeof(B_Prj_ThrownConsumable_C_OnExploded) == 0x000020, "Wrong size on B_Prj_ThrownConsumable_C_OnExploded");
static_assert(offsetof(B_Prj_ThrownConsumable_C_OnExploded, HitActors) == 0x000000, "Member 'B_Prj_ThrownConsumable_C_OnExploded::HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_OnExploded, HitResults) == 0x000010, "Member 'B_Prj_ThrownConsumable_C_OnExploded::HitResults' has a wrong offset!");

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.UserConstructionScript
// 0x0001 (0x0001 - 0x0000)
struct B_Prj_ThrownConsumable_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Prj_ThrownConsumable_C_UserConstructionScript) == 0x000001, "Wrong alignment on B_Prj_ThrownConsumable_C_UserConstructionScript");
static_assert(sizeof(B_Prj_ThrownConsumable_C_UserConstructionScript) == 0x000001, "Wrong size on B_Prj_ThrownConsumable_C_UserConstructionScript");
static_assert(offsetof(B_Prj_ThrownConsumable_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'B_Prj_ThrownConsumable_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

}

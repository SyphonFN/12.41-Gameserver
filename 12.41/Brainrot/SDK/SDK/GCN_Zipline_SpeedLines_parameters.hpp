#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Zipline_SpeedLines

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCN_Zipline_SpeedLines.GCN_Zipline_SpeedLines_C.OnBurst
// 0x0448 (0x0448 - 0x0000)
struct GCN_Zipline_SpeedLines_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x00F0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddWorldOffset_SweepHitResult;         // 0x010C(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69F7[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x019C(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0228(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0234(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0240(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69F8[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0250(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0260(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x026C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0278(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0284(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0312(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69F9[0x1];                                     // 0x0313(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x031C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0328(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0334(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0340(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69FA[0x4];                                     // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0360(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0378(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0384(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0390(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x039C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue_1;       // 0x03A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x03B4(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UDecalComponent*                        CallFunc_SpawnDecalAtLocation_ReturnValue;         // 0x0440(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Zipline_SpeedLines_C_OnBurst) == 0x000008, "Wrong alignment on GCN_Zipline_SpeedLines_C_OnBurst");
static_assert(sizeof(GCN_Zipline_SpeedLines_C_OnBurst) == 0x000448, "Wrong size on GCN_Zipline_SpeedLines_C_OnBurst");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, ParticleComponents) == 0x0000C0, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, AudioComponents) == 0x0000D0, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, BurstDecalInstance) == 0x0000E8, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, Temp_object_Variable) == 0x0000F0, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_Array_Get_Item) == 0x000100, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_Array_Length_ReturnValue) == 0x000108, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_K2_AddWorldOffset_SweepHitResult) == 0x00010C, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_K2_AddWorldOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_Greater_IntInt_ReturnValue) == 0x000198, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x00019C, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_GetForwardVector_ReturnValue) == 0x000228, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000234, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000240, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, K2Node_MakeArray_Array) == 0x000250, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_Add_VectorVector_ReturnValue) == 0x000260, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00026C, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000278, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000284, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000310, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_bBlockingHit) == 0x000311, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_bInitialOverlap) == 0x000312, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_Time) == 0x000314, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_Distance) == 0x000318, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_Location) == 0x00031C, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_ImpactPoint) == 0x000328, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_Normal) == 0x000334, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_ImpactNormal) == 0x000340, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_PhysMat) == 0x000350, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_HitActor) == 0x000358, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_HitComponent) == 0x000360, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_HitBoneName) == 0x000368, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_HitItem) == 0x000370, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_FaceIndex) == 0x000374, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_TraceStart) == 0x000378, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_BreakHitResult_TraceEnd) == 0x000384, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000390, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x00039C, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_Conv_VectorToRotator_ReturnValue_1) == 0x0003A8, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_Conv_VectorToRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x0003B4, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCN_Zipline_SpeedLines_C_OnBurst, CallFunc_SpawnDecalAtLocation_ReturnValue) == 0x000440, "Member 'GCN_Zipline_SpeedLines_C_OnBurst::CallFunc_SpawnDecalAtLocation_ReturnValue' has a wrong offset!");

}

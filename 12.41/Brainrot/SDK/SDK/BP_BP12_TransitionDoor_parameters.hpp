#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BP12_TransitionDoor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.ExecuteUbergraph_BP_BP12_TransitionDoor
// 0x00AC (0x00AC - 0x0000)
struct BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Multiply_RotatorFloat_ReturnValue;        // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0020(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor) == 0x000004, "Wrong alignment on BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor");
static_assert(sizeof(BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor) == 0x0000AC, "Wrong size on BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor");
static_assert(offsetof(BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor, EntryPoint) == 0x000000, "Member 'BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor, CallFunc_MakeRotator_ReturnValue) == 0x000004, "Member 'BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000010, "Member 'BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor, CallFunc_Multiply_RotatorFloat_ReturnValue) == 0x000014, "Member 'BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor::CallFunc_Multiply_RotatorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000020, "Member 'BP_BP12_TransitionDoor_C_ExecuteUbergraph_BP_BP12_TransitionDoor::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");

// Function BP_BP12_TransitionDoor.BP_BP12_TransitionDoor_C.UserConstructionScript
// 0x0060 (0x0060 - 0x0000)
struct BP_BP12_TransitionDoor_C_UserConstructionScript final
{
public:
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0000(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BP12_TransitionDoor_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_BP12_TransitionDoor_C_UserConstructionScript");
static_assert(sizeof(BP_BP12_TransitionDoor_C_UserConstructionScript) == 0x000060, "Wrong size on BP_BP12_TransitionDoor_C_UserConstructionScript");
static_assert(offsetof(BP_BP12_TransitionDoor_C_UserConstructionScript, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000000, "Member 'BP_BP12_TransitionDoor_C_UserConstructionScript::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BP12_TransitionDoor_C_UserConstructionScript, CallFunc_K2_GetComponentToWorld_ReturnValue_1) == 0x000030, "Member 'BP_BP12_TransitionDoor_C_UserConstructionScript::CallFunc_K2_GetComponentToWorld_ReturnValue_1' has a wrong offset!");

}

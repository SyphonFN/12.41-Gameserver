#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IronDoor_Transition1

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.ExecuteUbergraph_BP_IronDoor_Transition1
// 0x0040 (0x0040 - 0x0000)
struct BP_IronDoor_Transition1_C_ExecuteUbergraph_BP_IronDoor_Transition1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5809[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IronDoor_Transition1_C_ExecuteUbergraph_BP_IronDoor_Transition1) == 0x000010, "Wrong alignment on BP_IronDoor_Transition1_C_ExecuteUbergraph_BP_IronDoor_Transition1");
static_assert(sizeof(BP_IronDoor_Transition1_C_ExecuteUbergraph_BP_IronDoor_Transition1) == 0x000040, "Wrong size on BP_IronDoor_Transition1_C_ExecuteUbergraph_BP_IronDoor_Transition1");
static_assert(offsetof(BP_IronDoor_Transition1_C_ExecuteUbergraph_BP_IronDoor_Transition1, EntryPoint) == 0x000000, "Member 'BP_IronDoor_Transition1_C_ExecuteUbergraph_BP_IronDoor_Transition1::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_IronDoor_Transition1_C_ExecuteUbergraph_BP_IronDoor_Transition1, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000010, "Member 'BP_IronDoor_Transition1_C_ExecuteUbergraph_BP_IronDoor_Transition1::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

// Function BP_IronDoor_Transition1.BP_IronDoor_Transition1_C.UserConstructionScript
// 0x0040 (0x0040 - 0x0000)
struct BP_IronDoor_Transition1_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_580A[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_IronDoor_Transition1_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_IronDoor_Transition1_C_UserConstructionScript");
static_assert(sizeof(BP_IronDoor_Transition1_C_UserConstructionScript) == 0x000040, "Wrong size on BP_IronDoor_Transition1_C_UserConstructionScript");
static_assert(offsetof(BP_IronDoor_Transition1_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'BP_IronDoor_Transition1_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IronDoor_Transition1_C_UserConstructionScript, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000010, "Member 'BP_IronDoor_Transition1_C_UserConstructionScript::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Elevator_Transition

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Elevator_Transition.BP_Elevator_Transition_C.ExecuteUbergraph_BP_Elevator_Transition
// 0x0050 (0x0050 - 0x0000)
struct BP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46B1[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_1;               // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition) == 0x000010, "Wrong alignment on BP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition");
static_assert(sizeof(BP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition) == 0x000050, "Wrong size on BP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition");
static_assert(offsetof(BP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition, EntryPoint) == 0x000000, "Member 'BP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000010, "Member 'BP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition, CallFunc_SpawnSound2D_ReturnValue) == 0x000040, "Member 'BP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition, CallFunc_SpawnSound2D_ReturnValue_1) == 0x000048, "Member 'BP_Elevator_Transition_C_ExecuteUbergraph_BP_Elevator_Transition::CallFunc_SpawnSound2D_ReturnValue_1' has a wrong offset!");

// Function BP_Elevator_Transition.BP_Elevator_Transition_C.UserConstructionScript
// 0x00C0 (0x00C0 - 0x0000)
struct BP_Elevator_Transition_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46B2[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46B3[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Elevator_Transition_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_Elevator_Transition_C_UserConstructionScript");
static_assert(sizeof(BP_Elevator_Transition_C_UserConstructionScript) == 0x0000C0, "Wrong size on BP_Elevator_Transition_C_UserConstructionScript");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000000, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_BreakVector_X) == 0x000020, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_BreakVector_Y) == 0x000024, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_BreakVector_Z) == 0x000028, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_Add_FloatFloat_ReturnValue) == 0x00002C, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000030, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000060, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000064, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_FTrunc_ReturnValue) == 0x000068, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_Conv_IntToString_ReturnValue) == 0x000070, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue) == 0x000080, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_Conv_StringToName_ReturnValue) == 0x000090, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000098, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000A8, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0000B0, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_Transition_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x0000B8, "Member 'BP_Elevator_Transition_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");

}


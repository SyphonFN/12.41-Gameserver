#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_Desert_Ops_Camo_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function F_MED_Desert_Ops_Camo_AnimBP.F_MED_Desert_Ops_Camo_AnimBP_C.ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP
// 0x0020 (0x0020 - 0x0000)
struct F_MED_Desert_Ops_Camo_AnimBP_C_ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72EA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(F_MED_Desert_Ops_Camo_AnimBP_C_ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP) == 0x000008, "Wrong alignment on F_MED_Desert_Ops_Camo_AnimBP_C_ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP");
static_assert(sizeof(F_MED_Desert_Ops_Camo_AnimBP_C_ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP) == 0x000020, "Wrong size on F_MED_Desert_Ops_Camo_AnimBP_C_ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP");
static_assert(offsetof(F_MED_Desert_Ops_Camo_AnimBP_C_ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP, EntryPoint) == 0x000000, "Member 'F_MED_Desert_Ops_Camo_AnimBP_C_ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(F_MED_Desert_Ops_Camo_AnimBP_C_ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP, K2Node_MakeArray_Array) == 0x000008, "Member 'F_MED_Desert_Ops_Camo_AnimBP_C_ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(F_MED_Desert_Ops_Camo_AnimBP_C_ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP, CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue) == 0x000018, "Member 'F_MED_Desert_Ops_Camo_AnimBP_C_ExecuteUbergraph_F_MED_Desert_Ops_Camo_AnimBP::CallFunc_CharacterItemDefinitionHasAnyMetaTag_ReturnValue' has a wrong offset!");

// Function F_MED_Desert_Ops_Camo_AnimBP.F_MED_Desert_Ops_Camo_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct F_MED_Desert_Ops_Camo_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(F_MED_Desert_Ops_Camo_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on F_MED_Desert_Ops_Camo_AnimBP_C_AnimGraph");
static_assert(sizeof(F_MED_Desert_Ops_Camo_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on F_MED_Desert_Ops_Camo_AnimBP_C_AnimGraph");
static_assert(offsetof(F_MED_Desert_Ops_Camo_AnimBP_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'F_MED_Desert_Ops_Camo_AnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}


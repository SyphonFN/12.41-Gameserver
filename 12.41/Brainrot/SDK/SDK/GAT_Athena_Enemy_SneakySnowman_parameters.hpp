#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_Athena_Enemy_SneakySnowman

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C.ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman
// 0x0090 (0x0090 - 0x0000)
struct GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_697C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0008(0x0040)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_697D[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0058(0x0028)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0080(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman) == 0x000008, "Wrong alignment on GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman");
static_assert(sizeof(GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman) == 0x000090, "Wrong size on GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman, EntryPoint) == 0x000000, "Member 'GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman, CallFunc_K2_CommitAbility_ReturnValue) == 0x000004, "Member 'GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000048, "Member 'GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000058, "Member 'GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000080, "Member 'GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");

// Function GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C.Remove Snowman
// 0x0040 (0x0040 - 0x0000)
struct GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman final
{
public:
	class AFortPlayerPawn*                        Param_PlayerPawn;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;              // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthena_Enemy_Player_SneakySnowman_C*   K2Node_DynamicCast_AsAthena_Enemy_Player_Sneaky_Snowman; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_697E[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_697F[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman) == 0x000008, "Wrong alignment on GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman");
static_assert(sizeof(GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman) == 0x000040, "Wrong size on GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman, Param_PlayerPawn) == 0x000000, "Member 'GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman::Param_PlayerPawn' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman, CallFunc_GetAttachedActors_OutActors) == 0x000008, "Member 'GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman, Temp_int_Array_Index_Variable) == 0x000018, "Member 'GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman, CallFunc_Array_Get_Item) == 0x000020, "Member 'GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman, K2Node_DynamicCast_AsAthena_Enemy_Player_Sneaky_Snowman) == 0x000028, "Member 'GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman::K2Node_DynamicCast_AsAthena_Enemy_Player_Sneaky_Snowman' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

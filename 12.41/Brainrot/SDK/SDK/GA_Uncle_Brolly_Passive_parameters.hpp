#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Uncle_Brolly_Passive

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Uncle_Brolly_Passive.GA_Uncle_Brolly_Passive_C.ExecuteUbergraph_GA_Uncle_Brolly_Passive
// 0x0050 (0x0050 - 0x0000)
struct GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63F0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63F1[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0024(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63F2[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1; // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive) == 0x000008, "Wrong alignment on GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive");
static_assert(sizeof(GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive) == 0x000050, "Wrong size on GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive");
static_assert(offsetof(GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive, EntryPoint) == 0x000000, "Member 'GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x000008, "Member 'GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000010, "Member 'GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000020, "Member 'GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000024, "Member 'GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000030, "Member 'GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1) == 0x000038, "Member 'GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000040, "Member 'GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'GA_Uncle_Brolly_Passive_C_ExecuteUbergraph_GA_Uncle_Brolly_Passive::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}


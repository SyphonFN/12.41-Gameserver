#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Lotus_Athena_ApplyHeal

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Lotus_Athena_ApplyHeal.GA_Lotus_Athena_ApplyHeal_C.ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal
// 0x0078 (0x0078 - 0x0000)
struct GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AB8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AB9[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectContextHandle           CallFunc_GetGrantedByEffectContext_ReturnValue;    // 0x0030(0x0018)()
	float                                         CallFunc_GetMaxHealth_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ABA[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_EffectContextGetInstigatorActor_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetHealth_ReturnValue;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ABB[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue_1; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue; // 0x006C(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal) == 0x000008, "Wrong alignment on GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal");
static_assert(sizeof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal) == 0x000078, "Wrong size on GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal");
static_assert(offsetof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal, EntryPoint) == 0x000000, "Member 'GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x000010, "Member 'GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000018, "Member 'GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000020, "Member 'GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal, CallFunc_GetGrantedByEffectContext_ReturnValue) == 0x000030, "Member 'GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal::CallFunc_GetGrantedByEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal, CallFunc_GetMaxHealth_ReturnValue) == 0x000048, "Member 'GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal, CallFunc_EffectContextGetInstigatorActor_ReturnValue) == 0x000050, "Member 'GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal::CallFunc_EffectContextGetInstigatorActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal, CallFunc_GetHealth_ReturnValue) == 0x000058, "Member 'GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal, CallFunc_GetFortAbilitySystemComponent_ReturnValue_1) == 0x000060, "Member 'GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal::CallFunc_GetFortAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000068, "Member 'GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal, CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue) == 0x00006C, "Member 'GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal::CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000074, "Member 'GA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

}

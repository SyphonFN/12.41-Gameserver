#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ranged_Mustache_Attribute

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.K2_CommitExecute
// 0x00F8 (0x00F8 - 0x0000)
struct GA_Ranged_Mustache_Attribute_C_K2_CommitExecute final
{
public:
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DCD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DCE[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x001C(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DCF[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttribute_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD0[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_InventoryOwnerHasInfiniteAmmo_ReturnValue; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD1[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     CallFunc_GetEventData_GameplayEventData;           // 0x0048(0x00B0)()
};
static_assert(alignof(GA_Ranged_Mustache_Attribute_C_K2_CommitExecute) == 0x000008, "Wrong alignment on GA_Ranged_Mustache_Attribute_C_K2_CommitExecute");
static_assert(sizeof(GA_Ranged_Mustache_Attribute_C_K2_CommitExecute) == 0x0000F8, "Wrong size on GA_Ranged_Mustache_Attribute_C_K2_CommitExecute");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CommitExecute, CallFunc_IsServer_ReturnValue) == 0x000000, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CommitExecute::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CommitExecute, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CommitExecute::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CommitExecute, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000010, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CommitExecute::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CommitExecute, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CommitExecute::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CommitExecute, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x00001C, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CommitExecute::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CommitExecute, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000024, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CommitExecute::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CommitExecute, CallFunc_GetFloatAttribute_ReturnValue) == 0x000028, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CommitExecute::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CommitExecute, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CommitExecute::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CommitExecute, CallFunc_Conv_FloatToString_ReturnValue) == 0x000030, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CommitExecute::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CommitExecute, CallFunc_InventoryOwnerHasInfiniteAmmo_ReturnValue) == 0x000040, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CommitExecute::CallFunc_InventoryOwnerHasInfiniteAmmo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CommitExecute, CallFunc_GetEventData_GameplayEventData) == 0x000048, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CommitExecute::CallFunc_GetEventData_GameplayEventData' has a wrong offset!");

// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.GetEventData
// 0x0208 (0x0208 - 0x0000)
struct GA_Ranged_Mustache_Attribute_C_GetEventData final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     GameplayEventData;                                 // 0x0008(0x00B0)(Parm, OutParm)
	struct FGameplayTagContainer                  GT_TargetTags;                                     // 0x00B8(0x0020)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                  GT_InstigatorTags;                                 // 0x00D8(0x0020)(Edit, BlueprintVisible)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerState*                       K2Node_DynamicCast_AsFort_Player_State;            // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD2[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetCurrentPawn_ReturnValue;               // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD3[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWeapon*                            CallFunc_GetCurrentSourceWeapon_ReturnValue;       // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD4[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0130(0x00B0)()
	struct FGameplayTagContainer                  CallFunc_GetWeaponDataGameplayTags_GameplayTags;   // 0x01E0(0x0020)()
	bool                                          CallFunc_WeaponDataIsValid_ReturnValue;            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Ranged_Mustache_Attribute_C_GetEventData) == 0x000008, "Wrong alignment on GA_Ranged_Mustache_Attribute_C_GetEventData");
static_assert(sizeof(GA_Ranged_Mustache_Attribute_C_GetEventData) == 0x000208, "Wrong size on GA_Ranged_Mustache_Attribute_C_GetEventData");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, EventTag) == 0x000000, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::EventTag' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, GameplayEventData) == 0x000008, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, GT_TargetTags) == 0x0000B8, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::GT_TargetTags' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, GT_InstigatorTags) == 0x0000D8, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::GT_InstigatorTags' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x0000F8, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, K2Node_DynamicCast_AsFort_Player_State) == 0x000100, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::K2Node_DynamicCast_AsFort_Player_State' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, K2Node_DynamicCast_bSuccess) == 0x000108, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, CallFunc_GetCurrentPawn_ReturnValue) == 0x000110, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::CallFunc_GetCurrentPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, CallFunc_IsValid_ReturnValue) == 0x000118, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, CallFunc_GetCurrentSourceWeapon_ReturnValue) == 0x000120, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::CallFunc_GetCurrentSourceWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, CallFunc_IsValid_ReturnValue_1) == 0x000128, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, K2Node_MakeStruct_GameplayEventData) == 0x000130, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, CallFunc_GetWeaponDataGameplayTags_GameplayTags) == 0x0001E0, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::CallFunc_GetWeaponDataGameplayTags_GameplayTags' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, CallFunc_WeaponDataIsValid_ReturnValue) == 0x000200, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::CallFunc_WeaponDataIsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_GetEventData, CallFunc_BooleanAND_ReturnValue) == 0x000201, "Member 'GA_Ranged_Mustache_Attribute_C_GetEventData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.K2_CanActivateAbility
// 0x0098 (0x0098 - 0x0000)
struct GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0040(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD5[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD6[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttribute_ReturnValue;            // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD7[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_Ranged_Lotus_Mustache_C*             K2Node_DynamicCast_AsB_Ranged_Lotus_Mustache;      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility");
static_assert(sizeof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility) == 0x000098, "Wrong size on GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility, RelevantTags) == 0x000040, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility, ReturnValue) == 0x000060, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000068, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000070, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000079, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility, CallFunc_GetFloatAttribute_ReturnValue) == 0x00007C, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000080, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility, K2Node_DynamicCast_AsB_Ranged_Lotus_Mustache) == 0x000088, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility::K2Node_DynamicCast_AsB_Ranged_Lotus_Mustache' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess_1) == 0x000090, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x000091, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility, CallFunc_IsValid_ReturnValue) == 0x000092, "Member 'GA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DudeBro_Vent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.ExecuteUbergraph_GA_DudeBro_Vent
// 0x0280 (0x0280 - 0x0000)
struct GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_569A[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_HitComponent;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp;                      // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_NormalImpulse;                  // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_CustomEvent_Hit;                            // 0x003C(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ABuildingActor*                         K2Node_DynamicCast_AsBuilding_Actor;               // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_569B[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_MakeEffectContext_ReturnValue;            // 0x00E8(0x0018)()
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0100(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0108(0x00B0)(ConstParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_569C[0x2];                                     // 0x01CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x01E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_569D[0x2];                                     // 0x01E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x01E8(0x0010)(ZeroConstructor, NoDestructor)
	class ACharacter*                             K2Node_CustomEvent_Character;                      // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 K2Node_CustomEvent_PrevMovementMode;               // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         K2Node_CustomEvent_PreviousCustomMode;             // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0203(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_569E[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0208(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMovementComp_CharacterAthena*      K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena; // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsServer_ReturnValue_1;                   // 0x021A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_569F[0x1];                                     // 0x021B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56A0[0x4];                                     // 0x0224(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Athena_CheckCreativeMode_CanCompleteQuest; // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56A1[0x6];                                     // 0x023A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SendComplexCustomStatEvent_QuestActive;   // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SendComplexCustomStatEvent_QuestCompleted; // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56A2[0x6];                                     // 0x024A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1; // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid; // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted; // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted; // 0x025A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x025B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x025D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x025E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56A3[0x1];                                     // 0x025F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0260(0x0010)(ZeroConstructor, NoDestructor)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_2;  // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x0278(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent) == 0x000008, "Wrong alignment on GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent");
static_assert(sizeof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent) == 0x000280, "Wrong size on GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, EntryPoint) == 0x000000, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_HitComponent) == 0x000018, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_OtherActor) == 0x000020, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_OtherComp) == 0x000028, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_NormalImpulse) == 0x000030, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_Hit) == 0x00003C, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_DynamicCast_AsBuilding_Actor) == 0x0000C8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_DynamicCast_AsBuilding_Actor' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0000D8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetAbilitySystemComponent_ReturnValue_1) == 0x0000E0, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_MakeEffectContext_ReturnValue) == 0x0000E8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_MakeEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000100, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_Event_EventData) == 0x000108, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0001B8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0001C0, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_DynamicCast_bSuccess_1) == 0x0001C8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_IsValid_ReturnValue) == 0x0001C9, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001CC, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_BreakVector_X) == 0x0001D8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_BreakVector_Y) == 0x0001DC, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_BreakVector_Z) == 0x0001E0, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x0001E4, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_IsServer_ReturnValue) == 0x0001E5, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001E8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_Character) == 0x0001F8, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_PrevMovementMode) == 0x000200, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CustomEvent_PreviousCustomMode) == 0x000201, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CustomEvent_PreviousCustomMode' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_IsValid_ReturnValue_1) == 0x000202, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_Event_bWasCancelled) == 0x000203, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetMovementComponent_ReturnValue) == 0x000208, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena) == 0x000210, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_DynamicCast_bSuccess_2) == 0x000218, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000219, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_IsServer_ReturnValue_1) == 0x00021A, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_Array_AddUnique_ReturnValue) == 0x00021C, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_Array_Length_ReturnValue) == 0x000220, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetGameState_ReturnValue) == 0x000228, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000230, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_Athena_CheckCreativeMode_CanCompleteQuest) == 0x000238, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_Athena_CheckCreativeMode_CanCompleteQuest' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_IsValid_ReturnValue_2) == 0x000239, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetQuestManager_ReturnValue) == 0x000240, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_SendComplexCustomStatEvent_QuestActive) == 0x000248, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_SendComplexCustomStatEvent_QuestActive' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_SendComplexCustomStatEvent_QuestCompleted) == 0x000249, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_SendComplexCustomStatEvent_QuestCompleted' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1) == 0x000250, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid) == 0x000258, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted) == 0x000259, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted) == 0x00025A, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_Not_PreBool_ReturnValue) == 0x00025B, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_BooleanAND_ReturnValue) == 0x00025C, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00025D, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_BooleanAND_ReturnValue_1) == 0x00025E, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000260, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_GetAbilitySystemComponent_ReturnValue_2) == 0x000270, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_GetAbilitySystemComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000278, "Member 'GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");

// Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_DudeBro_Vent_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_DudeBro_Vent_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_DudeBro_Vent_C_K2_OnEndAbility");
static_assert(sizeof(GA_DudeBro_Vent_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_DudeBro_Vent_C_K2_OnEndAbility");
static_assert(offsetof(GA_DudeBro_Vent_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_DudeBro_Vent_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.MovementModeChangedDelegate_Event_0
// 0x0010 (0x0010 - 0x0000)
struct GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0 final
{
public:
	class ACharacter*                             Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 PrevMovementMode;                                  // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         PreviousCustomMode;                                // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0) == 0x000008, "Wrong alignment on GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0");
static_assert(sizeof(GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0) == 0x000010, "Wrong size on GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0");
static_assert(offsetof(GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0, Character) == 0x000000, "Member 'GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0::Character' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0, PrevMovementMode) == 0x000008, "Member 'GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0, PreviousCustomMode) == 0x000009, "Member 'GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0::PreviousCustomMode' has a wrong offset!");

// Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.PlayerCapsuleHit
// 0x00B0 (0x00B0 - 0x0000)
struct GA_DudeBro_Vent_C_PlayerCapsuleHit final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0024(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GA_DudeBro_Vent_C_PlayerCapsuleHit) == 0x000008, "Wrong alignment on GA_DudeBro_Vent_C_PlayerCapsuleHit");
static_assert(sizeof(GA_DudeBro_Vent_C_PlayerCapsuleHit) == 0x0000B0, "Wrong size on GA_DudeBro_Vent_C_PlayerCapsuleHit");
static_assert(offsetof(GA_DudeBro_Vent_C_PlayerCapsuleHit, HitComponent) == 0x000000, "Member 'GA_DudeBro_Vent_C_PlayerCapsuleHit::HitComponent' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_PlayerCapsuleHit, OtherActor) == 0x000008, "Member 'GA_DudeBro_Vent_C_PlayerCapsuleHit::OtherActor' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_PlayerCapsuleHit, OtherComp) == 0x000010, "Member 'GA_DudeBro_Vent_C_PlayerCapsuleHit::OtherComp' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_PlayerCapsuleHit, NormalImpulse) == 0x000018, "Member 'GA_DudeBro_Vent_C_PlayerCapsuleHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_PlayerCapsuleHit, Hit) == 0x000024, "Member 'GA_DudeBro_Vent_C_PlayerCapsuleHit::Hit' has a wrong offset!");

// Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.ActuallyCleanPlayerUp
// 0x0014 (0x0014 - 0x0000)
struct GA_DudeBro_Vent_C_ActuallyCleanPlayerUp final
{
public:
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56A4[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GA_DudeBro_Vent_C_ActuallyCleanPlayerUp) == 0x000004, "Wrong alignment on GA_DudeBro_Vent_C_ActuallyCleanPlayerUp");
static_assert(sizeof(GA_DudeBro_Vent_C_ActuallyCleanPlayerUp) == 0x000014, "Wrong size on GA_DudeBro_Vent_C_ActuallyCleanPlayerUp");
static_assert(offsetof(GA_DudeBro_Vent_C_ActuallyCleanPlayerUp, CallFunc_IsServer_ReturnValue) == 0x000000, "Member 'GA_DudeBro_Vent_C_ActuallyCleanPlayerUp::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ActuallyCleanPlayerUp, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'GA_DudeBro_Vent_C_ActuallyCleanPlayerUp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DudeBro_Vent_C_ActuallyCleanPlayerUp, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_DudeBro_Vent_C_ActuallyCleanPlayerUp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

}


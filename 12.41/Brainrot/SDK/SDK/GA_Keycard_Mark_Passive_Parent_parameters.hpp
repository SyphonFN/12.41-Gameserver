#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Keycard_Mark_Passive_Parent

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5108[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAllActorsOfClass_OutActors;            // 0x0020(0x0010)(ZeroConstructor, ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5109[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetClosestActorFromArray_ReturnValue;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_510A[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMarkerComponent*                 CallFunc_GetMarkerComponent_ReturnValue;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMarkerID                              CallFunc_MarkActorOnClient_ReturnValue;            // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0090(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_510B[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent) == 0x000008, "Wrong alignment on GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent");
static_assert(sizeof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent) == 0x0000B0, "Wrong size on GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, EntryPoint) == 0x000000, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, Temp_int_Array_Index_Variable) == 0x000014, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000018, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_GetAllActorsOfClass_OutActors) == 0x000020, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_Array_Get_Item) == 0x000030, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_GetClosestActorFromArray_ReturnValue) == 0x000040, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_GetClosestActorFromArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_GetMarkerComponent_ReturnValue) == 0x000050, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_GetMarkerComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_MarkActorOnClient_ReturnValue) == 0x000058, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_MarkActorOnClient_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000060, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00006C, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000078, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000084, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000090, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_MakeRotFromX_ReturnValue) == 0x000098, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0000A8, "Member 'GA_Keycard_Mark_Passive_Parent_C_ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");

// Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.InitAbility
// 0x00A8 (0x00A8 - 0x0000)
struct GA_Keycard_Mark_Passive_Parent_C_InitAbility final
{
public:
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_510C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0008(0x0040)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_510D[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0058(0x0028)()
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0088(0x0010)(ZeroConstructor, ReferenceParm)
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Keycard_Mark_Passive_Parent_C_InitAbility) == 0x000008, "Wrong alignment on GA_Keycard_Mark_Passive_Parent_C_InitAbility");
static_assert(sizeof(GA_Keycard_Mark_Passive_Parent_C_InitAbility) == 0x0000A8, "Wrong size on GA_Keycard_Mark_Passive_Parent_C_InitAbility");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_InitAbility, CallFunc_K2_CommitAbility_ReturnValue) == 0x000000, "Member 'GA_Keycard_Mark_Passive_Parent_C_InitAbility::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_InitAbility, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GA_Keycard_Mark_Passive_Parent_C_InitAbility::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_InitAbility, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000048, "Member 'GA_Keycard_Mark_Passive_Parent_C_InitAbility::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_InitAbility, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'GA_Keycard_Mark_Passive_Parent_C_InitAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_InitAbility, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000058, "Member 'GA_Keycard_Mark_Passive_Parent_C_InitAbility::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_InitAbility, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000080, "Member 'GA_Keycard_Mark_Passive_Parent_C_InitAbility::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_InitAbility, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000088, "Member 'GA_Keycard_Mark_Passive_Parent_C_InitAbility::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_InitAbility, K2Node_DynamicCast_AsFort_Player_Controller_Athena) == 0x000098, "Member 'GA_Keycard_Mark_Passive_Parent_C_InitAbility::K2Node_DynamicCast_AsFort_Player_Controller_Athena' has a wrong offset!");
static_assert(offsetof(GA_Keycard_Mark_Passive_Parent_C_InitAbility, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'GA_Keycard_Mark_Passive_Parent_C_InitAbility::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

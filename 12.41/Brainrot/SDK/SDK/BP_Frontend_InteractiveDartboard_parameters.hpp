#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Frontend_InteractiveDartboard

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.ExecuteUbergraph_BP_Frontend_InteractiveDartboard
// 0x03D0 (0x03D0 - 0x0000)
struct BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6214[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_ActionTag;                            // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_CameraTag;                            // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0038(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_6215[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0x00DC(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_1;               // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_2;               // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue_1;                      // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_2;  // 0x0184(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_VLerp_ReturnValue_2;                      // 0x0210(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_3;  // 0x021C(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_4;  // 0x02A8(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_5;  // 0x0334(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6216[0x3];                                     // 0x03C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x03C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard) == 0x000008, "Wrong alignment on BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard");
static_assert(sizeof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard) == 0x0003D0, "Wrong size on BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, EntryPoint) == 0x000000, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, Temp_int_Variable) == 0x000020, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, Temp_int_Variable_1) == 0x000024, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, K2Node_Event_ActionTag) == 0x000028, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::K2Node_Event_ActionTag' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, K2Node_Event_CameraTag) == 0x000030, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::K2Node_Event_CameraTag' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000038, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_SpawnSound2D_ReturnValue) == 0x0000C8, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_VLerp_ReturnValue) == 0x0000D0, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_K2_SetRelativeLocation_SweepHitResult_1) == 0x0000DC, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_K2_SetRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_SpawnSound2D_ReturnValue_1) == 0x000168, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_SpawnSound2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_SpawnSound2D_ReturnValue_2) == 0x000170, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_SpawnSound2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_VLerp_ReturnValue_1) == 0x000178, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_VLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_K2_SetRelativeLocation_SweepHitResult_2) == 0x000184, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_K2_SetRelativeLocation_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_VLerp_ReturnValue_2) == 0x000210, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_VLerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_K2_SetRelativeLocation_SweepHitResult_3) == 0x00021C, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_K2_SetRelativeLocation_SweepHitResult_3' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_K2_SetRelativeLocation_SweepHitResult_4) == 0x0002A8, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_K2_SetRelativeLocation_SweepHitResult_4' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_K2_SetRelativeLocation_SweepHitResult_5) == 0x000334, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_K2_SetRelativeLocation_SweepHitResult_5' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, K2Node_SwitchInteger_CmpSuccess) == 0x0003C0, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_Add_IntInt_ReturnValue) == 0x0003C4, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard, CallFunc_Add_IntInt_ReturnValue_1) == 0x0003C8, "Member 'BP_Frontend_InteractiveDartboard_C_ExecuteUbergraph_BP_Frontend_InteractiveDartboard::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.HandleObjectSpecialInteraction
// 0x0010 (0x0010 - 0x0000)
struct BP_Frontend_InteractiveDartboard_C_HandleObjectSpecialInteraction final
{
public:
	struct FGameplayTag                           ActionTag;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CameraTag;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Frontend_InteractiveDartboard_C_HandleObjectSpecialInteraction) == 0x000004, "Wrong alignment on BP_Frontend_InteractiveDartboard_C_HandleObjectSpecialInteraction");
static_assert(sizeof(BP_Frontend_InteractiveDartboard_C_HandleObjectSpecialInteraction) == 0x000010, "Wrong size on BP_Frontend_InteractiveDartboard_C_HandleObjectSpecialInteraction");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_HandleObjectSpecialInteraction, ActionTag) == 0x000000, "Member 'BP_Frontend_InteractiveDartboard_C_HandleObjectSpecialInteraction::ActionTag' has a wrong offset!");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_HandleObjectSpecialInteraction, CameraTag) == 0x000008, "Member 'BP_Frontend_InteractiveDartboard_C_HandleObjectSpecialInteraction::CameraTag' has a wrong offset!");

// Function BP_Frontend_InteractiveDartboard.BP_Frontend_InteractiveDartboard_C.CanCommitNavigationRequest
// 0x0001 (0x0001 - 0x0000)
struct BP_Frontend_InteractiveDartboard_C_CanCommitNavigationRequest final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Frontend_InteractiveDartboard_C_CanCommitNavigationRequest) == 0x000001, "Wrong alignment on BP_Frontend_InteractiveDartboard_C_CanCommitNavigationRequest");
static_assert(sizeof(BP_Frontend_InteractiveDartboard_C_CanCommitNavigationRequest) == 0x000001, "Wrong size on BP_Frontend_InteractiveDartboard_C_CanCommitNavigationRequest");
static_assert(offsetof(BP_Frontend_InteractiveDartboard_C_CanCommitNavigationRequest, ReturnValue) == 0x000000, "Member 'BP_Frontend_InteractiveDartboard_C_CanCommitNavigationRequest::ReturnValue' has a wrong offset!");

}

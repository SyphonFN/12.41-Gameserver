#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Mustache_LockOnWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Athena_Mustache_LockOnWidget.Athena_Mustache_LockOnWidget_C.ExecuteUbergraph_Athena_Mustache_LockOnWidget
// 0x0088 (0x0088 - 0x0000)
struct Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D85[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D86[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D87[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BroadcastPlayerImpactAtLocation_Loudness; // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BroadcastPlayerImpactAtLocation_Duration; // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue; // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D88[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget) == 0x000008, "Wrong alignment on Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget");
static_assert(sizeof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget) == 0x000088, "Wrong size on Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, EntryPoint) == 0x000000, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000030, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, CallFunc_GetViewportSize_ReturnValue) == 0x00003C, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000044, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, CallFunc_GetSocketLocation_ReturnValue) == 0x00004C, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000058, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000060, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, CallFunc_BroadcastPlayerImpactAtLocation_Loudness) == 0x000068, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::CallFunc_BroadcastPlayerImpactAtLocation_Loudness' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, CallFunc_BroadcastPlayerImpactAtLocation_Duration) == 0x00006C, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::CallFunc_BroadcastPlayerImpactAtLocation_Duration' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue) == 0x000070, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, CallFunc_PlayAnimation_ReturnValue_1) == 0x000078, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget, CallFunc_MakeVector2D_ReturnValue) == 0x000080, "Member 'Athena_Mustache_LockOnWidget_C_ExecuteUbergraph_Athena_Mustache_LockOnWidget::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}


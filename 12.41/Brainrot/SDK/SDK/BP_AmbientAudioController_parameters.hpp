#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AmbientAudioController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ExecuteUbergraph_BP_AmbientAudioController
// 0x00B0 (0x00B0 - 0x0000)
struct BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5588[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5589[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_558A[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue;             // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Trace_ReturnValue;                        // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Trace_ReturnValue_1;                      // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Trace_ReturnValue_2;                      // 0x0086(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Trace_ReturnValue_3;                      // 0x0087(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Trace_ReturnValue_4;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_558B[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_558C[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue_1;           // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_558D[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue_2;           // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBROnly_ReturnValue;                     // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController) == 0x000008, "Wrong alignment on BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController");
static_assert(sizeof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController) == 0x0000B0, "Wrong size on BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, EntryPoint) == 0x000000, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, K2Node_Event_EndPlayReason) == 0x000005, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000020, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_IsDedicatedServer_ReturnValue) == 0x000021, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_IsValid_ReturnValue_1) == 0x000022, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_GetViewTarget_ReturnValue) == 0x000028, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_GetViewTarget_ReturnValue_1) == 0x000030, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_GetViewTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_IsValid_ReturnValue_2) == 0x000038, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_GetActorUpVector_ReturnValue) == 0x00003C, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_GetActorUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_GetActorRightVector_ReturnValue) == 0x000048, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_GetActorForwardVector_ReturnValue) == 0x000054, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000060, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x00006C, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Trace_ReturnValue) == 0x000084, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Trace_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Trace_ReturnValue_1) == 0x000085, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Trace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Trace_ReturnValue_2) == 0x000086, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Trace_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Trace_ReturnValue_3) == 0x000087, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Trace_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Trace_ReturnValue_4) == 0x000088, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Trace_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, K2Node_Event_DeltaSeconds) == 0x00008C, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000090, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000094, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Conv_BoolToFloat_ReturnValue_1) == 0x000098, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Conv_BoolToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x00009C, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_FInterpTo_ReturnValue) == 0x0000A0, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_IsValid_ReturnValue_3) == 0x0000A4, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Conv_BoolToFloat_ReturnValue_2) == 0x0000A8, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Conv_BoolToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_IsBROnly_ReturnValue) == 0x0000AC, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_IsBROnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_IsMobileGame_ReturnValue) == 0x0000AD, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_BooleanAND_ReturnValue) == 0x0000AE, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AmbientAudioController_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AmbientAudioController_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_AmbientAudioController_C_ReceiveTick");
static_assert(sizeof(BP_AmbientAudioController_C_ReceiveTick) == 0x000004, "Wrong size on BP_AmbientAudioController_C_ReceiveTick");
static_assert(offsetof(BP_AmbientAudioController_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_AmbientAudioController_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_AmbientAudioController_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AmbientAudioController_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_AmbientAudioController_C_ReceiveEndPlay");
static_assert(sizeof(BP_AmbientAudioController_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_AmbientAudioController_C_ReceiveEndPlay");
static_assert(offsetof(BP_AmbientAudioController_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_AmbientAudioController_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.Trace
// 0x0160 (0x0160 - 0x0000)
struct BP_AmbientAudioController_C_Trace final
{
public:
	struct FVector                                Start;                                             // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Direction;                                         // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_558E[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0020(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0048(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_558F[0x1];                                     // 0x00D7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0144(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingActor*                         K2Node_DynamicCast_AsBuilding_Actor;               // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AmbientAudioController_C_Trace) == 0x000008, "Wrong alignment on BP_AmbientAudioController_C_Trace");
static_assert(sizeof(BP_AmbientAudioController_C_Trace) == 0x000160, "Wrong size on BP_AmbientAudioController_C_Trace");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, Start) == 0x000000, "Member 'BP_AmbientAudioController_C_Trace::Start' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, Direction) == 0x00000C, "Member 'BP_AmbientAudioController_C_Trace::Direction' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, ReturnValue) == 0x000018, "Member 'BP_AmbientAudioController_C_Trace::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, Temp_object_Variable) == 0x000020, "Member 'BP_AmbientAudioController_C_Trace::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000030, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_Add_VectorVector_ReturnValue) == 0x00003C, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_LineTraceSingle_OutHit) == 0x000048, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_LineTraceSingle_ReturnValue) == 0x0000D4, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_bBlockingHit) == 0x0000D5, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000D6, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_Time) == 0x0000D8, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_Distance) == 0x0000DC, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_Location) == 0x0000E0, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_ImpactPoint) == 0x0000EC, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_Normal) == 0x0000F8, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_ImpactNormal) == 0x000104, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_PhysMat) == 0x000110, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_HitActor) == 0x000118, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_HitComponent) == 0x000120, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_HitBoneName) == 0x000128, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_HitItem) == 0x000130, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_FaceIndex) == 0x000134, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_TraceStart) == 0x000138, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BreakHitResult_TraceEnd) == 0x000144, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, K2Node_DynamicCast_AsBuilding_Actor) == 0x000150, "Member 'BP_AmbientAudioController_C_Trace::K2Node_DynamicCast_AsBuilding_Actor' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'BP_AmbientAudioController_C_Trace::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_Trace, CallFunc_BooleanAND_ReturnValue) == 0x000159, "Member 'BP_AmbientAudioController_C_Trace::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.SetTargetLPFFreq
// 0x0004 (0x0004 - 0x0000)
struct BP_AmbientAudioController_C_SetTargetLPFFreq final
{
public:
	float                                         Target;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AmbientAudioController_C_SetTargetLPFFreq) == 0x000004, "Wrong alignment on BP_AmbientAudioController_C_SetTargetLPFFreq");
static_assert(sizeof(BP_AmbientAudioController_C_SetTargetLPFFreq) == 0x000004, "Wrong size on BP_AmbientAudioController_C_SetTargetLPFFreq");
static_assert(offsetof(BP_AmbientAudioController_C_SetTargetLPFFreq, Target) == 0x000000, "Member 'BP_AmbientAudioController_C_SetTargetLPFFreq::Target' has a wrong offset!");

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.UpdateSnowSetupBP
// 0x0040 (0x0040 - 0x0000)
struct BP_AmbientAudioController_C_UpdateSnowSetupBP final
{
public:
	float                                         CallFunc_GetGlobalSnowAltitude_ReturnValue;        // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5590[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5591[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AmbientAudioController_C_UpdateSnowSetupBP) == 0x000008, "Wrong alignment on BP_AmbientAudioController_C_UpdateSnowSetupBP");
static_assert(sizeof(BP_AmbientAudioController_C_UpdateSnowSetupBP) == 0x000040, "Wrong size on BP_AmbientAudioController_C_UpdateSnowSetupBP");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_GetGlobalSnowAltitude_ReturnValue) == 0x000000, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_GetGlobalSnowAltitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000008, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_GetViewTarget_ReturnValue) == 0x000018, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_BreakVector_X) == 0x00002C, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_BreakVector_Y) == 0x000030, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_BreakVector_Z) == 0x000034, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_Add_FloatFloat_ReturnValue) == 0x000038, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00003C, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x00003D, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

}


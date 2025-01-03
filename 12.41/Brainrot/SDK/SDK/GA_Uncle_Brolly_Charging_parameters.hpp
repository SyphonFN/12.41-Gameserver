#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Uncle_Brolly_Charging

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.ExecuteUbergraph_GA_Uncle_Brolly_Charging
// 0x05B8 (0x05B8 - 0x0000)
struct GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45FC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45FD[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0018(0x00B0)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C8(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00D8(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue_1;          // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45FE[0x3];                                     // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0194(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_45FF[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x01B0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4600[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitVelocityChange*        CallFunc_CreateWaitVelocityChange_ReturnValue;     // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x01D0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4601[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_1;         // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x01F0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4602[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_2;         // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0210(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4603[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0224(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4604[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_3;         // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0240(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4605[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_4;         // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4606[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0264(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4607[0x4];                                     // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0278(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0288(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4608[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0298(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable_1;                            // 0x0348(0x00B0)()
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4609[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1; // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_460A[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0410(0x00B0)(ConstParm)
	class UAbilityTask_NetworkSyncPoint*          CallFunc_WaitNetSync_ReturnValue;                  // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_460B[0x7];                                     // 0x04C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload_1;                      // 0x04D0(0x00B0)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0580(0x0010)(ZeroConstructor, NoDestructor)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_5;         // 0x0590(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x0598(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x05A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_460C[0x3];                                     // 0x05A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x05AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging) == 0x000008, "Wrong alignment on GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging");
static_assert(sizeof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging) == 0x0005B8, "Wrong size on GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, EntryPoint) == 0x000000, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000008, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_CustomEvent_Payload) == 0x000018, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_CreateDelegate_OutputDelegate) == 0x0000C8, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, Temp_struct_Variable) == 0x0000D8, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_WaitGameplayEvent_ReturnValue_1) == 0x000188, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_WaitGameplayEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_IsValid_ReturnValue_1) == 0x000190, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_CreateDelegate_OutputDelegate_1) == 0x000194, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x0001A8, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001B0, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_IsValid_ReturnValue_2) == 0x0001C0, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_CreateWaitVelocityChange_ReturnValue) == 0x0001C8, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_CreateWaitVelocityChange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001D0, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_IsValid_ReturnValue_3) == 0x0001E0, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_WaitGameplayTagAdd_ReturnValue_1) == 0x0001E8, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_WaitGameplayTagAdd_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001F0, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_IsValid_ReturnValue_4) == 0x000200, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_WaitGameplayTagAdd_ReturnValue_2) == 0x000208, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_WaitGameplayTagAdd_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_CreateDelegate_OutputDelegate_5) == 0x000210, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_IsValid_ReturnValue_5) == 0x000220, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_CreateDelegate_OutputDelegate_6) == 0x000224, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_WaitGameplayTagAdd_ReturnValue_3) == 0x000238, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_WaitGameplayTagAdd_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_CreateDelegate_OutputDelegate_7) == 0x000240, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_IsValid_ReturnValue_6) == 0x000250, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_WaitGameplayTagAdd_ReturnValue_4) == 0x000258, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_WaitGameplayTagAdd_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_IsValid_ReturnValue_7) == 0x000260, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_CreateDelegate_OutputDelegate_8) == 0x000264, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000278, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000280, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000288, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_Add_FloatFloat_ReturnValue) == 0x000290, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_MakeStruct_GameplayEventData) == 0x000298, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, Temp_struct_Variable_1) == 0x000348, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_IsLocallyControlled_ReturnValue) == 0x0003F8, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1) == 0x000400, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_Event_bWasCancelled) == 0x000408, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_Event_EventData) == 0x000410, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_WaitNetSync_ReturnValue) == 0x0004C0, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_WaitNetSync_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_IsValid_ReturnValue_8) == 0x0004C8, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_CustomEvent_Payload_1) == 0x0004D0, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_CustomEvent_Payload_1' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_CreateDelegate_OutputDelegate_9) == 0x000580, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_WaitGameplayTagAdd_ReturnValue_5) == 0x000590, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_WaitGameplayTagAdd_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, K2Node_CreateDelegate_OutputDelegate_10) == 0x000598, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_IsValid_ReturnValue_9) == 0x0005A8, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_GetValueAtLevel_ReturnValue) == 0x0005AC, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0005B0, "Member 'GA_Uncle_Brolly_Charging_C_ExecuteUbergraph_GA_Uncle_Brolly_Charging::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Uncle_Brolly_Charging_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Uncle_Brolly_Charging_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Uncle_Brolly_Charging_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Uncle_Brolly_Charging_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_Uncle_Brolly_Charging_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Uncle_Brolly_Charging_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Uncle_Brolly_Charging_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Uncle_Brolly_Charging_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Uncle_Brolly_Charging_C_K2_OnEndAbility");
static_assert(sizeof(GA_Uncle_Brolly_Charging_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Uncle_Brolly_Charging_C_K2_OnEndAbility");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Uncle_Brolly_Charging_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.EventReceived_B0D835B84C86D6528F32F9A0C977480E
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Uncle_Brolly_Charging_C_EventReceived_B0D835B84C86D6528F32F9A0C977480E final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Uncle_Brolly_Charging_C_EventReceived_B0D835B84C86D6528F32F9A0C977480E) == 0x000008, "Wrong alignment on GA_Uncle_Brolly_Charging_C_EventReceived_B0D835B84C86D6528F32F9A0C977480E");
static_assert(sizeof(GA_Uncle_Brolly_Charging_C_EventReceived_B0D835B84C86D6528F32F9A0C977480E) == 0x0000B0, "Wrong size on GA_Uncle_Brolly_Charging_C_EventReceived_B0D835B84C86D6528F32F9A0C977480E");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_EventReceived_B0D835B84C86D6528F32F9A0C977480E, Payload) == 0x000000, "Member 'GA_Uncle_Brolly_Charging_C_EventReceived_B0D835B84C86D6528F32F9A0C977480E::Payload' has a wrong offset!");

// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.EventReceived_07757B0D4CE517541CA873888A048F9F
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Uncle_Brolly_Charging_C_EventReceived_07757B0D4CE517541CA873888A048F9F final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Uncle_Brolly_Charging_C_EventReceived_07757B0D4CE517541CA873888A048F9F) == 0x000008, "Wrong alignment on GA_Uncle_Brolly_Charging_C_EventReceived_07757B0D4CE517541CA873888A048F9F");
static_assert(sizeof(GA_Uncle_Brolly_Charging_C_EventReceived_07757B0D4CE517541CA873888A048F9F) == 0x0000B0, "Wrong size on GA_Uncle_Brolly_Charging_C_EventReceived_07757B0D4CE517541CA873888A048F9F");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_EventReceived_07757B0D4CE517541CA873888A048F9F, Payload) == 0x000000, "Member 'GA_Uncle_Brolly_Charging_C_EventReceived_07757B0D4CE517541CA873888A048F9F::Payload' has a wrong offset!");

// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.InitAbility
// 0x0018 (0x0018 - 0x0000)
struct GA_Uncle_Brolly_Charging_C_InitAbility final
{
public:
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Uncle_Brolly_Charging_C_InitAbility) == 0x000008, "Wrong alignment on GA_Uncle_Brolly_Charging_C_InitAbility");
static_assert(sizeof(GA_Uncle_Brolly_Charging_C_InitAbility) == 0x000018, "Wrong size on GA_Uncle_Brolly_Charging_C_InitAbility");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_InitAbility, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000000, "Member 'GA_Uncle_Brolly_Charging_C_InitAbility::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_InitAbility, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000008, "Member 'GA_Uncle_Brolly_Charging_C_InitAbility::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_InitAbility, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GA_Uncle_Brolly_Charging_C_InitAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GA_Uncle_Brolly_Charging.GA_Uncle_Brolly_Charging_C.ManageChargeTags
// 0x0088 (0x0088 - 0x0000)
struct GA_Uncle_Brolly_Charging_C_ManageChargeTags final
{
public:
	struct FGameplayEffectContextHandle           K2Node_MakeStruct_GameplayEffectContextHandle;     // 0x0000(0x0018)()
	struct FGameplayEffectContextHandle           K2Node_MakeStruct_GameplayEffectContextHandle_1;   // 0x0018(0x0018)()
	struct FGameplayEffectContextHandle           K2Node_MakeStruct_GameplayEffectContextHandle_2;   // 0x0030(0x0018)()
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1; // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2; // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InRange_FloatFloat_ReturnValue;           // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_460D[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InRange_FloatFloat_ReturnValue_1;         // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_460E[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue_2;            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InRange_FloatFloat_ReturnValue_2;         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Uncle_Brolly_Charging_C_ManageChargeTags) == 0x000008, "Wrong alignment on GA_Uncle_Brolly_Charging_C_ManageChargeTags");
static_assert(sizeof(GA_Uncle_Brolly_Charging_C_ManageChargeTags) == 0x000088, "Wrong size on GA_Uncle_Brolly_Charging_C_ManageChargeTags");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, K2Node_MakeStruct_GameplayEffectContextHandle) == 0x000000, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::K2Node_MakeStruct_GameplayEffectContextHandle' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, K2Node_MakeStruct_GameplayEffectContextHandle_1) == 0x000018, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::K2Node_MakeStruct_GameplayEffectContextHandle_1' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, K2Node_MakeStruct_GameplayEffectContextHandle_2) == 0x000030, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::K2Node_MakeStruct_GameplayEffectContextHandle_2' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000048, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1) == 0x000050, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2) == 0x000058, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, CallFunc_GetValueAtLevel_ReturnValue) == 0x000060, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, CallFunc_Add_FloatFloat_ReturnValue) == 0x000064, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x000068, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, CallFunc_InRange_FloatFloat_ReturnValue) == 0x00006C, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::CallFunc_InRange_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000070, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, CallFunc_InRange_FloatFloat_ReturnValue_1) == 0x000074, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::CallFunc_InRange_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, CallFunc_GetValueAtLevel_ReturnValue_2) == 0x000078, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::CallFunc_GetValueAtLevel_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x00007C, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Uncle_Brolly_Charging_C_ManageChargeTags, CallFunc_InRange_FloatFloat_ReturnValue_2) == 0x000080, "Member 'GA_Uncle_Brolly_Charging_C_ManageChargeTags::CallFunc_InRange_FloatFloat_ReturnValue_2' has a wrong offset!");

}


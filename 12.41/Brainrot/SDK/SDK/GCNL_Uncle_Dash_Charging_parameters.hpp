#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Uncle_Dash_Charging

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCNL_Uncle_Dash_Charging.GCNL_Uncle_Dash_Charging_C.ExecuteUbergraph_GCNL_Uncle_Dash_Charging
// 0x01F0 (0x01F0 - 0x0000)
struct GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C55[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0010(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;                   // 0x00C8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;                      // 0x00D8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UCameraShake*                           K2Node_Event_BurstCameraShakeInstance;             // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;                   // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C56[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget_1;                           // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;                         // 0x0108(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_1;                 // 0x01C0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;                    // 0x01D0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging) == 0x000008, "Wrong alignment on GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging");
static_assert(sizeof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging) == 0x0001F0, "Wrong size on GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging, EntryPoint) == 0x000000, "Member 'GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging, K2Node_Event_MyTarget) == 0x000008, "Member 'GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging, K2Node_Event_Parameters) == 0x000010, "Member 'GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging, K2Node_Event_ParticleComponents) == 0x0000C8, "Member 'GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging, K2Node_Event_AudioComponents) == 0x0000D8, "Member 'GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging, K2Node_Event_BurstCameraShakeInstance) == 0x0000E8, "Member 'GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging, K2Node_Event_BurstDecalInstance) == 0x0000F0, "Member 'GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging, CallFunc_IsValid_ReturnValue) == 0x0000F8, "Member 'GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging, K2Node_Event_MyTarget_1) == 0x000100, "Member 'GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging, K2Node_Event_Parameters_1) == 0x000108, "Member 'GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging, K2Node_Event_ParticleComponents_1) == 0x0001C0, "Member 'GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging, K2Node_Event_AudioComponents_1) == 0x0001D0, "Member 'GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging, CallFunc_Array_Get_Item) == 0x0001E0, "Member 'GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging, CallFunc_SpawnSoundAttached_ReturnValue) == 0x0001E8, "Member 'GCNL_Uncle_Dash_Charging_C_ExecuteUbergraph_GCNL_Uncle_Dash_Charging::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");

// Function GCNL_Uncle_Dash_Charging.GCNL_Uncle_Dash_Charging_C.OnRemoval
// 0x00F0 (0x00F0 - 0x0000)
struct GCNL_Uncle_Dash_Charging_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_Uncle_Dash_Charging_C_OnRemoval) == 0x000008, "Wrong alignment on GCNL_Uncle_Dash_Charging_C_OnRemoval");
static_assert(sizeof(GCNL_Uncle_Dash_Charging_C_OnRemoval) == 0x0000F0, "Wrong size on GCNL_Uncle_Dash_Charging_C_OnRemoval");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCNL_Uncle_Dash_Charging_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_OnRemoval, Parameters) == 0x000008, "Member 'GCNL_Uncle_Dash_Charging_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_OnRemoval, ParticleComponents) == 0x0000C0, "Member 'GCNL_Uncle_Dash_Charging_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_OnRemoval, AudioComponents) == 0x0000D0, "Member 'GCNL_Uncle_Dash_Charging_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_OnRemoval, BurstCameraShakeInstance) == 0x0000E0, "Member 'GCNL_Uncle_Dash_Charging_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_OnRemoval, BurstDecalInstance) == 0x0000E8, "Member 'GCNL_Uncle_Dash_Charging_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

// Function GCNL_Uncle_Dash_Charging.GCNL_Uncle_Dash_Charging_C.OnLoopingStart
// 0x00E0 (0x00E0 - 0x0000)
struct GCNL_Uncle_Dash_Charging_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCNL_Uncle_Dash_Charging_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCNL_Uncle_Dash_Charging_C_OnLoopingStart");
static_assert(sizeof(GCNL_Uncle_Dash_Charging_C_OnLoopingStart) == 0x0000E0, "Wrong size on GCNL_Uncle_Dash_Charging_C_OnLoopingStart");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCNL_Uncle_Dash_Charging_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCNL_Uncle_Dash_Charging_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_OnLoopingStart, ParticleComponents) == 0x0000C0, "Member 'GCNL_Uncle_Dash_Charging_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Uncle_Dash_Charging_C_OnLoopingStart, AudioComponents) == 0x0000D0, "Member 'GCNL_Uncle_Dash_Charging_C_OnLoopingStart::AudioComponents' has a wrong offset!");

}


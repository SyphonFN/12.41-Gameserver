#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Athena_Spikes

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Trap_Athena_Spikes.Trap_Athena_Spikes_C
// 0x0128 (0x0E38 - 0x0D10)
class ATrap_Athena_Spikes_C : public ABuildingTrap
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Spike_Mesh;                                        // 0x0D18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Trigger;                                           // 0x0D20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0D28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ResetSpikes_LERP_D054F7574E7A1041A552A5805E6C81D1; // 0x0D30(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ResetSpikes__Direction_D054F7574E7A1041A552A5805E6C81D1; // 0x0D34(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6581[0x3];                                     // 0x0D35(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ResetSpikes;                                       // 0x0D38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Retract_LERP_714CAEE5449A32850D6231AEDA918B58;     // 0x0D40(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Retract__Direction_714CAEE5449A32850D6231AEDA918B58; // 0x0D44(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6582[0x3];                                     // 0x0D45(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Retract;                                           // 0x0D48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fire_LERP_630B749B437E5CB83CB49287CC92E385;        // 0x0D50(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fire__Direction_630B749B437E5CB83CB49287CC92E385;  // 0x0D54(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6583[0x3];                                     // 0x0D55(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fire;                                              // 0x0D58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Place_Trap_Sound;                                  // 0x0D60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Active_Sound;                                 // 0x0D68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Reload_Sound;                                      // 0x0D70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Explode_Sound;                                // 0x0D78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Fire_Sound;                                   // 0x0D80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpikeRestingScale;                                 // 0x0D88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpikeActiveScale;                                  // 0x0D8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpikeHoldOnFireLength;                             // 0x0D90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6584[0x4];                                     // 0x0D94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               SpikesMID;                                         // 0x0D98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SweepExponent;                                     // 0x0DA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SweepColor;                                        // 0x0DA4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SweepSpeed;                                        // 0x0DB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     FriendlyTrapMaterial;                              // 0x0DB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     NormalSpikeMaterial;                               // 0x0DC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayFewerSounds;                                  // 0x0DC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6585[0x7];                                     // 0x0DC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortPortableSoftParticles             DeathParticle_Marshalled;                          // 0x0DD0(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                               Trap_Particle_Placement_Rotation;                  // 0x0E28(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Trap_Athena_Spikes(int32 EntryPoint);
	void OnInitTeam();
	void OnWorldReady();
	void OnOutOfDurability();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnFinishedBuilding();
	void OnPlaced();
	void OnReloadEnd();
	void OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D(class UObject* Loaded);
	void OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1(class UObject* Loaded);
	void ResetSpikes__UpdateFunc();
	void ResetSpikes__FinishedFunc();
	void Retract__Sounds__EventFunc();
	void Retract__UpdateFunc();
	void Retract__FinishedFunc();
	void Fire__UpdateFunc();
	void Fire__FinishedFunc();
	void UserConstructionScript();
	void SetSpikePosition(float NewSpikePosition);
	void MaterialSweepOnSpikes(float Param_SweepSpeed, const struct FLinearColor& Param_SweepColor, float Param_SweepExponent);
	void _ChangeToFriendlyMaterial();
	void ChangeToNormalMaterial();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Trap_Athena_Spikes_C">();
	}
	static class ATrap_Athena_Spikes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrap_Athena_Spikes_C>();
	}
};
static_assert(alignof(ATrap_Athena_Spikes_C) == 0x000008, "Wrong alignment on ATrap_Athena_Spikes_C");
static_assert(sizeof(ATrap_Athena_Spikes_C) == 0x000E38, "Wrong size on ATrap_Athena_Spikes_C");
static_assert(offsetof(ATrap_Athena_Spikes_C, UberGraphFrame) == 0x000D10, "Member 'ATrap_Athena_Spikes_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Spike_Mesh) == 0x000D18, "Member 'ATrap_Athena_Spikes_C::Spike_Mesh' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Trigger) == 0x000D20, "Member 'ATrap_Athena_Spikes_C::Trigger' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Root) == 0x000D28, "Member 'ATrap_Athena_Spikes_C::Root' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, ResetSpikes_LERP_D054F7574E7A1041A552A5805E6C81D1) == 0x000D30, "Member 'ATrap_Athena_Spikes_C::ResetSpikes_LERP_D054F7574E7A1041A552A5805E6C81D1' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, ResetSpikes__Direction_D054F7574E7A1041A552A5805E6C81D1) == 0x000D34, "Member 'ATrap_Athena_Spikes_C::ResetSpikes__Direction_D054F7574E7A1041A552A5805E6C81D1' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, ResetSpikes) == 0x000D38, "Member 'ATrap_Athena_Spikes_C::ResetSpikes' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Retract_LERP_714CAEE5449A32850D6231AEDA918B58) == 0x000D40, "Member 'ATrap_Athena_Spikes_C::Retract_LERP_714CAEE5449A32850D6231AEDA918B58' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Retract__Direction_714CAEE5449A32850D6231AEDA918B58) == 0x000D44, "Member 'ATrap_Athena_Spikes_C::Retract__Direction_714CAEE5449A32850D6231AEDA918B58' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Retract) == 0x000D48, "Member 'ATrap_Athena_Spikes_C::Retract' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Fire_LERP_630B749B437E5CB83CB49287CC92E385) == 0x000D50, "Member 'ATrap_Athena_Spikes_C::Fire_LERP_630B749B437E5CB83CB49287CC92E385' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Fire__Direction_630B749B437E5CB83CB49287CC92E385) == 0x000D54, "Member 'ATrap_Athena_Spikes_C::Fire__Direction_630B749B437E5CB83CB49287CC92E385' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Fire) == 0x000D58, "Member 'ATrap_Athena_Spikes_C::Fire' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Place_Trap_Sound) == 0x000D60, "Member 'ATrap_Athena_Spikes_C::Place_Trap_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Trap_Active_Sound) == 0x000D68, "Member 'ATrap_Athena_Spikes_C::Trap_Active_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Reload_Sound) == 0x000D70, "Member 'ATrap_Athena_Spikes_C::Reload_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Trap_Explode_Sound) == 0x000D78, "Member 'ATrap_Athena_Spikes_C::Trap_Explode_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Trap_Fire_Sound) == 0x000D80, "Member 'ATrap_Athena_Spikes_C::Trap_Fire_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, SpikeRestingScale) == 0x000D88, "Member 'ATrap_Athena_Spikes_C::SpikeRestingScale' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, SpikeActiveScale) == 0x000D8C, "Member 'ATrap_Athena_Spikes_C::SpikeActiveScale' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, SpikeHoldOnFireLength) == 0x000D90, "Member 'ATrap_Athena_Spikes_C::SpikeHoldOnFireLength' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, SpikesMID) == 0x000D98, "Member 'ATrap_Athena_Spikes_C::SpikesMID' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, SweepExponent) == 0x000DA0, "Member 'ATrap_Athena_Spikes_C::SweepExponent' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, SweepColor) == 0x000DA4, "Member 'ATrap_Athena_Spikes_C::SweepColor' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, SweepSpeed) == 0x000DB4, "Member 'ATrap_Athena_Spikes_C::SweepSpeed' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, FriendlyTrapMaterial) == 0x000DB8, "Member 'ATrap_Athena_Spikes_C::FriendlyTrapMaterial' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, NormalSpikeMaterial) == 0x000DC0, "Member 'ATrap_Athena_Spikes_C::NormalSpikeMaterial' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, bPlayFewerSounds) == 0x000DC8, "Member 'ATrap_Athena_Spikes_C::bPlayFewerSounds' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, DeathParticle_Marshalled) == 0x000DD0, "Member 'ATrap_Athena_Spikes_C::DeathParticle_Marshalled' has a wrong offset!");
static_assert(offsetof(ATrap_Athena_Spikes_C, Trap_Particle_Placement_Rotation) == 0x000E28, "Member 'ATrap_Athena_Spikes_C::Trap_Particle_Placement_Rotation' has a wrong offset!");

}

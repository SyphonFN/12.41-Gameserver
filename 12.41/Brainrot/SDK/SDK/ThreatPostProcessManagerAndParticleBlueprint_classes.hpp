#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThreatPostProcessManagerAndParticleBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C
// 0x01C8 (0x03F0 - 0x0228)
class AThreatPostProcessManagerAndParticleBlueprint_C final : public AFortThreatParticleActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        EnterTheStormSound;                                // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Sprite1;                                           // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6932[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Ramp_Up_down_values_on_death;                      // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Min_Cloud_Distance_from_player;                    // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6933[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Localized_Particle_System_MID;                     // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             NewEventDispatcher;                                // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             NewEventDispatcher0;                               // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FVector>                        Array_of_Cloud_Positions;                          // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                 SkyParticleCloudDistances;                         // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int32>                                 CloudDistanceToPlayerLookUpArray;                  // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                Target_Cloud_Position;                             // 0x02B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RecalculateTimer;                                  // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Alive;                                          // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAliveJustChanged;                                // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAlivePrevious;                                   // 0x02C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6934[0x1];                                     // 0x02C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Number_Of_ticks_before_checking_for_the_nearest_cloud_again_Minus_when_alive; // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentCloudMesh;                                  // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6935[0x3];                                     // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Number_Of_ticks_before_checking_for_the_nearest_cloud_again_Minus_when_dead; // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                     Materialpost;                                      // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Post_process_volume_falloff__around_the_threat_volume; // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowRainEffect;                                    // 0x02DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6936[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         FourClosestClouds;                                 // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int32                                         Number_Of_Volumes_to_check;                        // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaTime;                                         // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PostProcessTargetWeight;                           // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Current_Post_Process_Weight;                       // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Post_Process_Fade_in_speed;                        // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SoundIsActive;                                     // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SoundWasPreviouslyActive;                          // 0x0305(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6937[0xA];                                     // 0x0306(0x000A)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             PlayerTransform;                                   // 0x0310(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_On;                                             // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6938[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APostProcessVolume*                     MaterialEffectsPostProcess;                        // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           ThreatFogPostProcessColor_Morning;                 // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ThreatFogPostProcessColor_Day;                     // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ThreatFogPostProcessColor_Evening;                 // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ThreatFogPostProcessColor_Night;                   // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBox>                           Array_of_Cloud_Volumes;                            // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         ClosestCloudIndex;                                 // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClosestCloudDistance;                              // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PostProcessWeightModulation;                       // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ramp_Up_And_Down_Anim_Values;                      // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowRainOnCameraLens;                              // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6939[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AEmitterCameraLensEffectBase*           Rain_Camera_Lens_Effect;                           // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               LocalizedParticleSystem;                           // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWorldReady;                                      // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_693A[0x3];                                     // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Rain_Trace_Timer;                                  // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                RainTraceOffset;                                   // 0x03D0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RainMultiplierCurrent;                             // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rain_Spawn_Rate_Exponent;                          // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          TracePrevious;                                     // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAthenaWorld;                                     // 0x03E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bThreatOverride;                                   // 0x03E6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bForceOff;                                         // 0x03E7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetForceOff(bool Param_bForceOff);
	void CalculatePlayerPositionNearBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float* VolumePlayerCoveragePercentage);
	void Ramp_Up_down_values_on_death__FinishedFunc();
	void Ramp_Up_down_values_on_death__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void OnThreatCloudsChanged(const TArray<struct FThreatLocationInfo>& ThreatLocationInfo);
	void OnWorldReady();
	void VFX_RainTracePeriodic();
	void StartTraceTimer();
	void ForceUpdateLensEffect();
	void OnThreatOverrideChanged(bool bForceThreatOn);
	void ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int32 EntryPoint);
	void NewEventDispatcher0__DelegateSignature();
	void NewEventDispatcher__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ThreatPostProcessManagerAndParticleBlueprint_C">();
	}
	static class AThreatPostProcessManagerAndParticleBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AThreatPostProcessManagerAndParticleBlueprint_C>();
	}
};
static_assert(alignof(AThreatPostProcessManagerAndParticleBlueprint_C) == 0x000010, "Wrong alignment on AThreatPostProcessManagerAndParticleBlueprint_C");
static_assert(sizeof(AThreatPostProcessManagerAndParticleBlueprint_C) == 0x0003F0, "Wrong size on AThreatPostProcessManagerAndParticleBlueprint_C");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, UberGraphFrame) == 0x000228, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, EnterTheStormSound) == 0x000230, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::EnterTheStormSound' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Sprite1) == 0x000238, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Sprite1' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4) == 0x000240, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4) == 0x000244, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Ramp_Up_down_values_on_death) == 0x000248, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_down_values_on_death' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Min_Cloud_Distance_from_player) == 0x000250, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Min_Cloud_Distance_from_player' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Localized_Particle_System_MID) == 0x000258, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Localized_Particle_System_MID' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, NewEventDispatcher) == 0x000260, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::NewEventDispatcher' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, NewEventDispatcher0) == 0x000270, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::NewEventDispatcher0' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Array_of_Cloud_Positions) == 0x000280, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Array_of_Cloud_Positions' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, SkyParticleCloudDistances) == 0x000290, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::SkyParticleCloudDistances' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, CloudDistanceToPlayerLookUpArray) == 0x0002A0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::CloudDistanceToPlayerLookUpArray' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Target_Cloud_Position) == 0x0002B0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Target_Cloud_Position' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, RecalculateTimer) == 0x0002BC, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::RecalculateTimer' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Is_Alive) == 0x0002C0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Is_Alive' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, IsAliveJustChanged) == 0x0002C1, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::IsAliveJustChanged' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, IsAlivePrevious) == 0x0002C2, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::IsAlivePrevious' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Number_Of_ticks_before_checking_for_the_nearest_cloud_again_Minus_when_alive) == 0x0002C4, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Number_Of_ticks_before_checking_for_the_nearest_cloud_again_Minus_when_alive' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, CurrentCloudMesh) == 0x0002C8, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::CurrentCloudMesh' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Number_Of_ticks_before_checking_for_the_nearest_cloud_again_Minus_when_dead) == 0x0002CC, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Number_Of_ticks_before_checking_for_the_nearest_cloud_again_Minus_when_dead' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Materialpost) == 0x0002D0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Materialpost' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Post_process_volume_falloff__around_the_threat_volume) == 0x0002D8, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Post_process_volume_falloff__around_the_threat_volume' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, ShowRainEffect) == 0x0002DC, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::ShowRainEffect' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, FourClosestClouds) == 0x0002E0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::FourClosestClouds' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Number_Of_Volumes_to_check) == 0x0002F0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Number_Of_Volumes_to_check' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, DeltaTime) == 0x0002F4, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::DeltaTime' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, PostProcessTargetWeight) == 0x0002F8, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::PostProcessTargetWeight' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Current_Post_Process_Weight) == 0x0002FC, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Current_Post_Process_Weight' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Post_Process_Fade_in_speed) == 0x000300, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Post_Process_Fade_in_speed' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, SoundIsActive) == 0x000304, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::SoundIsActive' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, SoundWasPreviouslyActive) == 0x000305, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::SoundWasPreviouslyActive' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, PlayerTransform) == 0x000310, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::PlayerTransform' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Is_On) == 0x000340, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Is_On' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, MaterialEffectsPostProcess) == 0x000348, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::MaterialEffectsPostProcess' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, ThreatFogPostProcessColor_Morning) == 0x000350, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::ThreatFogPostProcessColor_Morning' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, ThreatFogPostProcessColor_Day) == 0x000360, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::ThreatFogPostProcessColor_Day' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, ThreatFogPostProcessColor_Evening) == 0x000370, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::ThreatFogPostProcessColor_Evening' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, ThreatFogPostProcessColor_Night) == 0x000380, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::ThreatFogPostProcessColor_Night' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Array_of_Cloud_Volumes) == 0x000390, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Array_of_Cloud_Volumes' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, ClosestCloudIndex) == 0x0003A0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::ClosestCloudIndex' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, ClosestCloudDistance) == 0x0003A4, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::ClosestCloudDistance' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, PostProcessWeightModulation) == 0x0003A8, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::PostProcessWeightModulation' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Ramp_Up_And_Down_Anim_Values) == 0x0003AC, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Ramp_Up_And_Down_Anim_Values' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, ShowRainOnCameraLens) == 0x0003B0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::ShowRainOnCameraLens' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Rain_Camera_Lens_Effect) == 0x0003B8, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Rain_Camera_Lens_Effect' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, LocalizedParticleSystem) == 0x0003C0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::LocalizedParticleSystem' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, IsWorldReady) == 0x0003C8, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::IsWorldReady' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Rain_Trace_Timer) == 0x0003CC, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Rain_Trace_Timer' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, RainTraceOffset) == 0x0003D0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::RainTraceOffset' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, RainMultiplierCurrent) == 0x0003DC, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::RainMultiplierCurrent' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, Rain_Spawn_Rate_Exponent) == 0x0003E0, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::Rain_Spawn_Rate_Exponent' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, TracePrevious) == 0x0003E4, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::TracePrevious' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, IsAthenaWorld) == 0x0003E5, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::IsAthenaWorld' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, bThreatOverride) == 0x0003E6, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::bThreatOverride' has a wrong offset!");
static_assert(offsetof(AThreatPostProcessManagerAndParticleBlueprint_C, bForceOff) == 0x0003E7, "Member 'AThreatPostProcessManagerAndParticleBlueprint_C::bForceOff' has a wrong offset!");

}


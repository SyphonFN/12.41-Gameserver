#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_SpookyMist

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C
// 0x0148 (0x08D0 - 0x0788)
class AGCN_Loop_SpookyMist_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FadeInOut_Visbility_642089304BE20EFA276DDA9C98DD3C71; // 0x0798(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeInOut__Direction_642089304BE20EFA276DDA9C98DD3C71; // 0x079C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A0B[0x3];                                     // 0x079D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeinOut;                                         // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        TargetPlayer;                                      // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpirationSoundPeriod;                             // 0x07B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VelocityInterp;                                    // 0x07B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       AttachedFX;                                        // 0x07B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USkeletalMeshComponent*>         PlayerSkeletalMeshes;                              // 0x07C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          FriendlyPlayer;                                    // 0x07D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A0C[0x7];                                     // 0x07D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ExpireTellDelayTimer;                              // 0x07E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ExpirationSoundTimer;                              // 0x07E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         VisbilityLevel;                                    // 0x07F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WalkVisMultiplier;                                 // 0x07F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SprintVisMultiplier;                               // 0x07F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinFriendlyOpacity;                                // 0x07FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InteractVisibility;                                // 0x0800(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A0D[0x4];                                     // 0x0804(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         DataDuration;                                      // 0x0808(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DataTellDuration;                                  // 0x0828(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DataWalkVisMult;                                   // 0x0848(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DataSprintVisMult;                                 // 0x0868(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DataFriendlyVisMult;                               // 0x0888(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DataShadowPlaneOpacity;                            // 0x08A8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bShowExpireTell;                                   // 0x08C8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GCN_Loop_SpookyMist(int32 EntryPoint);
	void EndedInteract();
	void StartedInteract();
	void Audio_Tick(float Velocity);
	void UpdateTeamVisbility();
	void ExpireWarningTick();
	void ClearExpireTell();
	void BeginExpireTell();
	void ReceiveTick(float DeltaSeconds);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void FadeinOut__UpdateFunc();
	void FadeinOut__FinishedFunc();
	void GetSkeletalMeshes();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_SpookyMist_C">();
	}
	static class AGCN_Loop_SpookyMist_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_SpookyMist_C>();
	}
};
static_assert(alignof(AGCN_Loop_SpookyMist_C) == 0x000008, "Wrong alignment on AGCN_Loop_SpookyMist_C");
static_assert(sizeof(AGCN_Loop_SpookyMist_C) == 0x0008D0, "Wrong size on AGCN_Loop_SpookyMist_C");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, UberGraphFrame) == 0x000788, "Member 'AGCN_Loop_SpookyMist_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, PostProcess) == 0x000790, "Member 'AGCN_Loop_SpookyMist_C::PostProcess' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, FadeInOut_Visbility_642089304BE20EFA276DDA9C98DD3C71) == 0x000798, "Member 'AGCN_Loop_SpookyMist_C::FadeInOut_Visbility_642089304BE20EFA276DDA9C98DD3C71' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, FadeInOut__Direction_642089304BE20EFA276DDA9C98DD3C71) == 0x00079C, "Member 'AGCN_Loop_SpookyMist_C::FadeInOut__Direction_642089304BE20EFA276DDA9C98DD3C71' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, FadeinOut) == 0x0007A0, "Member 'AGCN_Loop_SpookyMist_C::FadeinOut' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, TargetPlayer) == 0x0007A8, "Member 'AGCN_Loop_SpookyMist_C::TargetPlayer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, ExpirationSoundPeriod) == 0x0007B0, "Member 'AGCN_Loop_SpookyMist_C::ExpirationSoundPeriod' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, VelocityInterp) == 0x0007B4, "Member 'AGCN_Loop_SpookyMist_C::VelocityInterp' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, AttachedFX) == 0x0007B8, "Member 'AGCN_Loop_SpookyMist_C::AttachedFX' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, PlayerSkeletalMeshes) == 0x0007C8, "Member 'AGCN_Loop_SpookyMist_C::PlayerSkeletalMeshes' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, FriendlyPlayer) == 0x0007D8, "Member 'AGCN_Loop_SpookyMist_C::FriendlyPlayer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, ExpireTellDelayTimer) == 0x0007E0, "Member 'AGCN_Loop_SpookyMist_C::ExpireTellDelayTimer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, ExpirationSoundTimer) == 0x0007E8, "Member 'AGCN_Loop_SpookyMist_C::ExpirationSoundTimer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, VisbilityLevel) == 0x0007F0, "Member 'AGCN_Loop_SpookyMist_C::VisbilityLevel' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, WalkVisMultiplier) == 0x0007F4, "Member 'AGCN_Loop_SpookyMist_C::WalkVisMultiplier' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, SprintVisMultiplier) == 0x0007F8, "Member 'AGCN_Loop_SpookyMist_C::SprintVisMultiplier' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, MinFriendlyOpacity) == 0x0007FC, "Member 'AGCN_Loop_SpookyMist_C::MinFriendlyOpacity' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, InteractVisibility) == 0x000800, "Member 'AGCN_Loop_SpookyMist_C::InteractVisibility' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, DataDuration) == 0x000808, "Member 'AGCN_Loop_SpookyMist_C::DataDuration' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, DataTellDuration) == 0x000828, "Member 'AGCN_Loop_SpookyMist_C::DataTellDuration' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, DataWalkVisMult) == 0x000848, "Member 'AGCN_Loop_SpookyMist_C::DataWalkVisMult' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, DataSprintVisMult) == 0x000868, "Member 'AGCN_Loop_SpookyMist_C::DataSprintVisMult' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, DataFriendlyVisMult) == 0x000888, "Member 'AGCN_Loop_SpookyMist_C::DataFriendlyVisMult' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, DataShadowPlaneOpacity) == 0x0008A8, "Member 'AGCN_Loop_SpookyMist_C::DataShadowPlaneOpacity' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SpookyMist_C, bShowExpireTell) == 0x0008C8, "Member 'AGCN_Loop_SpookyMist_C::bShowExpireTell' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Ranged_Generic

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "En_ShellTypes_01_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C
// 0x02D0 (0x11B0 - 0x0EE0)
class AB_Ranged_Generic_C : public AFortWeaponRanged
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0EE0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Reload_Empty_;                                     // 0x0EE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ScopeMesh1P;                                       // 0x0EF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Muzzle_Empty_;                                     // 0x0EF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642; // 0x0F00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642; // 0x0F04(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F9C[0x3];                                     // 0x0F05(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     AnimateScopePostProcess;                           // 0x0F08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        MuzzleParticleSystem;                              // 0x0F10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;                     // 0x0F18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;                 // 0x0F20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDestroyEffect;                                  // 0x0F28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Use_Reload_Particles;                              // 0x0F29(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F9D[0x6];                                     // 0x0F2A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Reload_ParticleSystem;                             // 0x0F30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastPlayFXTime;                                    // 0x0F38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinPlayFXTime;                                     // 0x0F3C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseShellsOnFire_;                                  // 0x0F40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseShellsOnReload_;                                // 0x0F41(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseShellsOnPump_;                                  // 0x0F42(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F9E[0x5];                                     // 0x0F43(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               Shells_empty_;                                     // 0x0F48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        ShellsParticleSystemTemplate;                      // 0x0F50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ReloadSocketName;                                  // 0x0F58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortAIPawn*>                    Array_Of_Active_Enemy_AI;                          // 0x0F60(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          Scope_Minus_Render_Enemies_To_Custom_Depth_Buffer; // 0x0F70(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4F9F[0x3];                                     // 0x0F71(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Shells_Socket_Name;                                // 0x0F74(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	En_ShellTypes_01                              ShellTypeSelect;                                   // 0x0F7C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA0[0x3];                                     // 0x0F7D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Shells_Spawn_Rate_Scale;                           // 0x0F80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ShellsRotationRate;                                // 0x0F84(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Velocity;                                   // 0x0F90(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Gravity;                                    // 0x0F9C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shells_Lifetime;                                   // 0x0FA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Size;                                       // 0x0FAC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shells_Time_Dilation;                              // 0x0FB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Target_Scope_Vignette_Blur_Screen_Percentage;      // 0x0FBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scope_Camera_Offset_Amount;                        // 0x0FC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SmallShells;                                       // 0x0FC4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MediumShells;                                      // 0x0FC5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LargeShells;                                       // 0x0FC6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShotgunShells;                                     // 0x0FC7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EnergyShells;                                      // 0x0FC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FA1[0x3];                                     // 0x0FC9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Inherit_Parent_Velocity;                           // 0x0FCC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cylindrical_Radius;                                // 0x0FD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cylindrical_Height;                                // 0x0FD4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugShellsSocket_;                                // 0x0FD8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FA2[0x7];                                     // 0x0FD9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound_ScopeZoomIn;                                 // 0x0FE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_ScopeZoomOut;                                // 0x0FE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Alteration_Ambient_PS;                             // 0x0FF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ReticleHUDElementTags;                             // 0x0FF8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Is_Wind_Enabled;                                   // 0x1018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FA3[0x7];                                     // 0x1019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        MuzzleWindParticleSystem;                          // 0x1020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        MuzzleParticleSystem1P;                            // 0x1028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldHideReticleAfterDelay;                       // 0x1030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FA4[0x7];                                     // 0x1031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               MuzzleWindParticleSpawned;                         // 0x1038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StencilBufferValue;                                // 0x1040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA5[0x4];                                     // 0x1044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            Curve_PitchOffset;                                 // 0x1048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_ScopedInLoop;                                // 0x1050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ScopeZoomInComp;                                   // 0x1058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ScopedInLoopComp;                                  // 0x1060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ScopeZoomOutComp;                                  // 0x1068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Alteration_Ambient_PS_Max_Draw_Distance;           // 0x1070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Muzzle_PS_Max_Draw_Distance;                       // 0x1074(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Beam_PS_Max_Draw_Distance;                         // 0x1078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Reload_PS_Max_Draw_Distance;                       // 0x107C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shells_PS_Max_Draw_Distance;                       // 0x1080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA6[0x4];                                     // 0x1084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAimDownSightsChanged;                            // 0x1088(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsMuzzleNiagara;                                   // 0x1098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FA7[0x7];                                     // 0x1099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         MuzzleNiagaraSystemInstance;                       // 0x10A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>          MuzzleNiagaraSystemAsset;                          // 0x10A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UNiagaraComponent*                      MuzzleNiagaraComponentInstance;                    // 0x10D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       MuzzleParticleSystemComponents;                    // 0x10D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	float                                         Muzzle_ChanceOfLargeFlash;                         // 0x10E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Muzzle_FlashLarge_MinScale;                        // 0x10EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Muzzle_FlashLarge_MaxScale;                        // 0x10F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Muzzle_FlashSmall_MinScale;                        // 0x10F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Muzzle_FlashSmall_MaxScale;                        // 0x10F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Shell_Color;                                       // 0x10FC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA8[0x4];                                     // 0x110C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<En_ShellTypes_01, class FName>           Shell_Burst_Names;                                 // 0x1110(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<En_ShellTypes_01, bool>                  Shell_Bools;                                       // 0x1160(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void OnAimDownSightsChanged__DelegateSignature(bool AimDownsights);
	void ExecuteUbergraph_B_Ranged_Generic(int32 EntryPoint);
	void LoadNiagaraMuzzleSoftObject();
	void OnStartOverheated();
	void OnPlayImpactFX(const struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);
	void ForceScopeBackImmediatly();
	void ShellEjectionOff();
	void Bind_on_Effects_Quality();
	void ShellEjectionFixOn();
	void PitchUpOnRateOfFireChange(float NewRateOfFire);
	void BindFireRateChange();
	void ForceScopeFX();
	void UnhideFirstPersonStuffPart1();
	void UnhideFirstPersonStuffPart2(int32 Which_Call);
	void HideThirdPersonStuff();
	void AbortScopeFX();
	void HideFirstPersonStuff();
	void PlayScopePP();
	void UnhideThirdPersonStuff();
	void ResetDoonceScopeSound();
	void ReverseScopePP();
	void ShowWeapon();
	void HideWeapon();
	void ShowWeaponMesh();
	void HideWeaponMesh();
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void ReceiveBeginPlay();
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32 TargetLimit);
	void SetWeaponPierceThrough(bool Enable, int32 TargetLimit);
	void OnEquippedWeaponDestory();
	void ShellsON__onPump_();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration);
	void OnWeaponAttached();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32 Param_StencilBufferValue);
	void InitializeScopeVariables();
	void K2_OnUnEquip();
	void OnSetTargeting(bool bNewIsTargeting);
	void OnPlayReloadFX(EFortReloadFXState ReloadStage);
	void OnStopWeaponFireFX();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded);
	void OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded);
	void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded);
	void OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded);
	void OnLoaded_4D1409A247BFDB4C074B628406FC7A72(class UObject* Loaded);
	void AnimateScopePostProcess__UpdateFunc();
	void AnimateScopePostProcess__FinishedFunc();
	void UserConstructionScript();
	void AddRandomScale();
	void SetWpnRarity();
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void Muzzle_Play_Reload_FX(EFortReloadFXState Selection);
	void UpdateShellEmittersFX();
	void SetupShellFX();
	void DeactivateShellsFX();
	void ActivateShellsFX(bool Bool);
	void ActivateReloadSmokeFX();
	void DeactivateReloadSmokeFX();
	void DeactivateMuzzleFX();
	void ActivateOrDeactivateWindParticle(bool bNewActive);
	void HideReticle();
	void ShowReticle();
	void SetActiveAlterationIdleParticles(bool Active);
	void SetPostProcessParams(float InputPin);
	void StartScopedAudio();
	void StopScopedAudio();
	void SetActiveMuzzleComponent(bool NiagaraEnabled);
	void GetActiveMuzzleComponents(TArray<class UFXSystemComponent*>* NewParam);
	void GetScopeParameters(class UStaticMeshComponent** ScopeComponent, struct FVector2D* DepthOfFieldVignetteRange, float* WeaponSightsCameraOffset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Ranged_Generic_C">();
	}
	static class AB_Ranged_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Ranged_Generic_C>();
	}
};
static_assert(alignof(AB_Ranged_Generic_C) == 0x000008, "Wrong alignment on AB_Ranged_Generic_C");
static_assert(sizeof(AB_Ranged_Generic_C) == 0x0011B0, "Wrong size on AB_Ranged_Generic_C");
static_assert(offsetof(AB_Ranged_Generic_C, UberGraphFrame) == 0x000EE0, "Member 'AB_Ranged_Generic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Reload_Empty_) == 0x000EE8, "Member 'AB_Ranged_Generic_C::Reload_Empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeMesh1P) == 0x000EF0, "Member 'AB_Ranged_Generic_C::ScopeMesh1P' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_Empty_) == 0x000EF8, "Member 'AB_Ranged_Generic_C::Muzzle_Empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642) == 0x000F00, "Member 'AB_Ranged_Generic_C::AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642) == 0x000F04, "Member 'AB_Ranged_Generic_C::AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, AnimateScopePostProcess) == 0x000F08, "Member 'AB_Ranged_Generic_C::AnimateScopePostProcess' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleParticleSystem) == 0x000F10, "Member 'AB_Ranged_Generic_C::MuzzleParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, WeaponDurabilityDestroyEffect) == 0x000F18, "Member 'AB_Ranged_Generic_C::WeaponDurabilityDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, WeaponDurabilityDestroyEffectIcon) == 0x000F20, "Member 'AB_Ranged_Generic_C::WeaponDurabilityDestroyEffectIcon' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseDestroyEffect) == 0x000F28, "Member 'AB_Ranged_Generic_C::UseDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Use_Reload_Particles) == 0x000F29, "Member 'AB_Ranged_Generic_C::Use_Reload_Particles' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Reload_ParticleSystem) == 0x000F30, "Member 'AB_Ranged_Generic_C::Reload_ParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, LastPlayFXTime) == 0x000F38, "Member 'AB_Ranged_Generic_C::LastPlayFXTime' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MinPlayFXTime) == 0x000F3C, "Member 'AB_Ranged_Generic_C::MinPlayFXTime' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseShellsOnFire_) == 0x000F40, "Member 'AB_Ranged_Generic_C::UseShellsOnFire_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseShellsOnReload_) == 0x000F41, "Member 'AB_Ranged_Generic_C::UseShellsOnReload_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseShellsOnPump_) == 0x000F42, "Member 'AB_Ranged_Generic_C::UseShellsOnPump_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_empty_) == 0x000F48, "Member 'AB_Ranged_Generic_C::Shells_empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShellsParticleSystemTemplate) == 0x000F50, "Member 'AB_Ranged_Generic_C::ShellsParticleSystemTemplate' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ReloadSocketName) == 0x000F58, "Member 'AB_Ranged_Generic_C::ReloadSocketName' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Array_Of_Active_Enemy_AI) == 0x000F60, "Member 'AB_Ranged_Generic_C::Array_Of_Active_Enemy_AI' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Scope_Minus_Render_Enemies_To_Custom_Depth_Buffer) == 0x000F70, "Member 'AB_Ranged_Generic_C::Scope_Minus_Render_Enemies_To_Custom_Depth_Buffer' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Socket_Name) == 0x000F74, "Member 'AB_Ranged_Generic_C::Shells_Socket_Name' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShellTypeSelect) == 0x000F7C, "Member 'AB_Ranged_Generic_C::ShellTypeSelect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Spawn_Rate_Scale) == 0x000F80, "Member 'AB_Ranged_Generic_C::Shells_Spawn_Rate_Scale' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShellsRotationRate) == 0x000F84, "Member 'AB_Ranged_Generic_C::ShellsRotationRate' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Velocity) == 0x000F90, "Member 'AB_Ranged_Generic_C::Shells_Velocity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Gravity) == 0x000F9C, "Member 'AB_Ranged_Generic_C::Shells_Gravity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Lifetime) == 0x000FA8, "Member 'AB_Ranged_Generic_C::Shells_Lifetime' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Size) == 0x000FAC, "Member 'AB_Ranged_Generic_C::Shells_Size' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Time_Dilation) == 0x000FB8, "Member 'AB_Ranged_Generic_C::Shells_Time_Dilation' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Target_Scope_Vignette_Blur_Screen_Percentage) == 0x000FBC, "Member 'AB_Ranged_Generic_C::Target_Scope_Vignette_Blur_Screen_Percentage' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Scope_Camera_Offset_Amount) == 0x000FC0, "Member 'AB_Ranged_Generic_C::Scope_Camera_Offset_Amount' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, SmallShells) == 0x000FC4, "Member 'AB_Ranged_Generic_C::SmallShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MediumShells) == 0x000FC5, "Member 'AB_Ranged_Generic_C::MediumShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, LargeShells) == 0x000FC6, "Member 'AB_Ranged_Generic_C::LargeShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShotgunShells) == 0x000FC7, "Member 'AB_Ranged_Generic_C::ShotgunShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, EnergyShells) == 0x000FC8, "Member 'AB_Ranged_Generic_C::EnergyShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Inherit_Parent_Velocity) == 0x000FCC, "Member 'AB_Ranged_Generic_C::Inherit_Parent_Velocity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Cylindrical_Radius) == 0x000FD0, "Member 'AB_Ranged_Generic_C::Cylindrical_Radius' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Cylindrical_Height) == 0x000FD4, "Member 'AB_Ranged_Generic_C::Cylindrical_Height' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, DebugShellsSocket_) == 0x000FD8, "Member 'AB_Ranged_Generic_C::DebugShellsSocket_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Sound_ScopeZoomIn) == 0x000FE0, "Member 'AB_Ranged_Generic_C::Sound_ScopeZoomIn' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Sound_ScopeZoomOut) == 0x000FE8, "Member 'AB_Ranged_Generic_C::Sound_ScopeZoomOut' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Alteration_Ambient_PS) == 0x000FF0, "Member 'AB_Ranged_Generic_C::Alteration_Ambient_PS' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ReticleHUDElementTags) == 0x000FF8, "Member 'AB_Ranged_Generic_C::ReticleHUDElementTags' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Is_Wind_Enabled) == 0x001018, "Member 'AB_Ranged_Generic_C::Is_Wind_Enabled' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleWindParticleSystem) == 0x001020, "Member 'AB_Ranged_Generic_C::MuzzleWindParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleParticleSystem1P) == 0x001028, "Member 'AB_Ranged_Generic_C::MuzzleParticleSystem1P' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShouldHideReticleAfterDelay) == 0x001030, "Member 'AB_Ranged_Generic_C::ShouldHideReticleAfterDelay' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleWindParticleSpawned) == 0x001038, "Member 'AB_Ranged_Generic_C::MuzzleWindParticleSpawned' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, StencilBufferValue) == 0x001040, "Member 'AB_Ranged_Generic_C::StencilBufferValue' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Curve_PitchOffset) == 0x001048, "Member 'AB_Ranged_Generic_C::Curve_PitchOffset' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Sound_ScopedInLoop) == 0x001050, "Member 'AB_Ranged_Generic_C::Sound_ScopedInLoop' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeZoomInComp) == 0x001058, "Member 'AB_Ranged_Generic_C::ScopeZoomInComp' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopedInLoopComp) == 0x001060, "Member 'AB_Ranged_Generic_C::ScopedInLoopComp' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeZoomOutComp) == 0x001068, "Member 'AB_Ranged_Generic_C::ScopeZoomOutComp' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Alteration_Ambient_PS_Max_Draw_Distance) == 0x001070, "Member 'AB_Ranged_Generic_C::Alteration_Ambient_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_PS_Max_Draw_Distance) == 0x001074, "Member 'AB_Ranged_Generic_C::Muzzle_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Beam_PS_Max_Draw_Distance) == 0x001078, "Member 'AB_Ranged_Generic_C::Beam_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Reload_PS_Max_Draw_Distance) == 0x00107C, "Member 'AB_Ranged_Generic_C::Reload_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_PS_Max_Draw_Distance) == 0x001080, "Member 'AB_Ranged_Generic_C::Shells_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, OnAimDownSightsChanged) == 0x001088, "Member 'AB_Ranged_Generic_C::OnAimDownSightsChanged' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, IsMuzzleNiagara) == 0x001098, "Member 'AB_Ranged_Generic_C::IsMuzzleNiagara' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleNiagaraSystemInstance) == 0x0010A0, "Member 'AB_Ranged_Generic_C::MuzzleNiagaraSystemInstance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleNiagaraSystemAsset) == 0x0010A8, "Member 'AB_Ranged_Generic_C::MuzzleNiagaraSystemAsset' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleNiagaraComponentInstance) == 0x0010D0, "Member 'AB_Ranged_Generic_C::MuzzleNiagaraComponentInstance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleParticleSystemComponents) == 0x0010D8, "Member 'AB_Ranged_Generic_C::MuzzleParticleSystemComponents' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_ChanceOfLargeFlash) == 0x0010E8, "Member 'AB_Ranged_Generic_C::Muzzle_ChanceOfLargeFlash' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_FlashLarge_MinScale) == 0x0010EC, "Member 'AB_Ranged_Generic_C::Muzzle_FlashLarge_MinScale' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_FlashLarge_MaxScale) == 0x0010F0, "Member 'AB_Ranged_Generic_C::Muzzle_FlashLarge_MaxScale' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_FlashSmall_MinScale) == 0x0010F4, "Member 'AB_Ranged_Generic_C::Muzzle_FlashSmall_MinScale' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_FlashSmall_MaxScale) == 0x0010F8, "Member 'AB_Ranged_Generic_C::Muzzle_FlashSmall_MaxScale' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shell_Color) == 0x0010FC, "Member 'AB_Ranged_Generic_C::Shell_Color' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shell_Burst_Names) == 0x001110, "Member 'AB_Ranged_Generic_C::Shell_Burst_Names' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shell_Bools) == 0x001160, "Member 'AB_Ranged_Generic_C::Shell_Bools' has a wrong offset!");

}

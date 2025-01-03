#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Ranged_Dual_Generic_Athena

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "En_ShellTypes_01_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Ranged_Dual_Generic_Athena.B_Ranged_Dual_Generic_Athena_C
// 0x0230 (0x1168 - 0x0F38)
class AB_Ranged_Dual_Generic_Athena_C : public AFortWeaponRangedDual
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0F38(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               LeftReload_Empty_;                                 // 0x0F40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               LeftMuzzle_Empty_;                                 // 0x0F48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Reload_Empty_;                                     // 0x0F50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ScopeMesh1P;                                       // 0x0F58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Muzzle_Empty_;                                     // 0x0F60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         AnimateScopePostProcess_DownSightPostProcessAmount_BF13147D4D2F78A8F8CECFABA0F6D055; // 0x0F68(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            AnimateScopePostProcess__Direction_BF13147D4D2F78A8F8CECFABA0F6D055; // 0x0F6C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_550E[0x3];                                     // 0x0F6D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     AnimateScopePostProcess;                           // 0x0F70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        MuzzleParticleSystem;                              // 0x0F78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;                     // 0x0F80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;                 // 0x0F88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDestroyEffect;                                  // 0x0F90(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Use_Reload_Particles;                              // 0x0F91(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_550F[0x6];                                     // 0x0F92(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Reload_ParticleSystem;                             // 0x0F98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastPlayFXTime;                                    // 0x0FA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinPlayFXTime;                                     // 0x0FA4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               SpawnedShellsPS_R;                                 // 0x0FA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               SpawnedShellsPS_L;                                 // 0x0FB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseShellsOnFire_;                                  // 0x0FB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseShellsOnReload_;                                // 0x0FB9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseShellsOnPump_;                                  // 0x0FBA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5510[0x5];                                     // 0x0FBB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        ShellsParticleSystemTemplate;                      // 0x0FC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ReloadSocketName;                                  // 0x0FC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortAIPawn*>                    Array_Of_Active_Enemy_AI;                          // 0x0FD0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          Scope_Minus_Render_Enemies_To_Custom_Depth_Buffer; // 0x0FE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_5511[0x3];                                     // 0x0FE1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Shells_Socket_Name;                                // 0x0FE4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	En_ShellTypes_01                              ShellTypeSelect;                                   // 0x0FEC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5512[0x3];                                     // 0x0FED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Shells_Spawn_Rate_Scale;                           // 0x0FF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ShellsRotationRate;                                // 0x0FF4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Velocity;                                   // 0x1000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Gravity;                                    // 0x100C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shells_Lifetime;                                   // 0x1018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Size;                                       // 0x101C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shells_Time_Dilation;                              // 0x1028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Target_Scope_Vignette_Blur_Screen_Percentage;      // 0x102C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scope_Camera_Offset_Amount;                        // 0x1030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SmallShells;                                       // 0x1034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MediumShells;                                      // 0x1035(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LargeShells;                                       // 0x1036(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShotgunShells;                                     // 0x1037(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EnergyShells;                                      // 0x1038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5513[0x3];                                     // 0x1039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Inherit_Parent_Velocity;                           // 0x103C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cylindrical_Radius;                                // 0x1040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cylindrical_Height;                                // 0x1044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugShellsSocket_;                                // 0x1048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5514[0x7];                                     // 0x1049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound_ScopeZoomIn;                                 // 0x1050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_ScopeZoomOut;                                // 0x1058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ReticleHUDElementTags;                             // 0x1060(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Is_Wind_Enabled;                                   // 0x1080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5515[0x7];                                     // 0x1081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        MuzzleWindParticleSystem;                          // 0x1088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        MuzzleParticleSystem1P;                            // 0x1090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldHideReticleAfterDelay;                       // 0x1098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5516[0x7];                                     // 0x1099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               MuzzleWindParticleSpawned;                         // 0x10A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StencilBufferValue;                                // 0x10A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDualWeaponHand                               LastHandFired;                                     // 0x10AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldReEnableLeftWeapVis;                        // 0x10AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bForceFeedbackShouldPersist;                       // 0x10AE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5517[0x1];                                     // 0x10AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Shell_Color;                                       // 0x10B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shells_PS_Max_Draw_Distance;                       // 0x10C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5518[0x4];                                     // 0x10C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<En_ShellTypes_01, bool>                  Shell_Bools;                                       // 0x10C8(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<En_ShellTypes_01, class FName>           Shell_Burst_Names;                                 // 0x1118(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_B_Ranged_Dual_Generic_Athena(int32 EntryPoint);
	void ShellEjectionOff();
	void Bind_on_Effects_Quality();
	void ShellEjectionFixOn();
	void BindOnHandFired();
	void HandFired(EDualWeaponHand Hand, bool bPersistantFire);
	void ForceScopeFX();
	void UnhideFirstPersonStuffPart1();
	void UnhideFirstPersonStuffPart2();
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
	void ReceiveBeginPlay();
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32 TargetLimit);
	void SetWeaponPierceThrough(bool Enable, int32 TargetLimit);
	void OnEquippedWeaponDestory();
	void ShellsON__onPump_();
	void OnWeaponAttached();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32 Param_StencilBufferValue);
	void InitializeScopeVariables();
	void K2_OnUnEquip();
	void OnSetTargeting(bool bNewIsTargeting);
	void OnPlayReloadFX(EFortReloadFXState ReloadStage);
	void OnStopWeaponFireFX();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void AnimateScopePostProcess__UpdateFunc();
	void AnimateScopePostProcess__FinishedFunc();
	void UserConstructionScript();
	void AddRandomScale(bool OffHand);
	void SetWpnRarity();
	void Muzzle_Flash_FX(bool Persistent_Fire, bool OffHand);
	void Muzzle_Play_Reload_FX(EFortReloadFXState Selection);
	void UpdateShellEmittersFX(class UFXSystemComponent* Target);
	void SetupShellFX(bool OffHand);
	void DeactivateShellsFX();
	void ActivateShellsFX(bool Bool, bool OffHand);
	void ActivateReloadSmokeFX();
	void DeactivateReloadSmokeFX();
	void DeactivateMuzzleFX();
	void ActivateOrDeactivateWindParticle(bool bNewActive);
	void HideReticle();
	void ShowReticle();
	void SetPostProcessParams(float InputPin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Ranged_Dual_Generic_Athena_C">();
	}
	static class AB_Ranged_Dual_Generic_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Ranged_Dual_Generic_Athena_C>();
	}
};
static_assert(alignof(AB_Ranged_Dual_Generic_Athena_C) == 0x000008, "Wrong alignment on AB_Ranged_Dual_Generic_Athena_C");
static_assert(sizeof(AB_Ranged_Dual_Generic_Athena_C) == 0x001168, "Wrong size on AB_Ranged_Dual_Generic_Athena_C");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, UberGraphFrame) == 0x000F38, "Member 'AB_Ranged_Dual_Generic_Athena_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, LeftReload_Empty_) == 0x000F40, "Member 'AB_Ranged_Dual_Generic_Athena_C::LeftReload_Empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, LeftMuzzle_Empty_) == 0x000F48, "Member 'AB_Ranged_Dual_Generic_Athena_C::LeftMuzzle_Empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Reload_Empty_) == 0x000F50, "Member 'AB_Ranged_Dual_Generic_Athena_C::Reload_Empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, ScopeMesh1P) == 0x000F58, "Member 'AB_Ranged_Dual_Generic_Athena_C::ScopeMesh1P' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Muzzle_Empty_) == 0x000F60, "Member 'AB_Ranged_Dual_Generic_Athena_C::Muzzle_Empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, AnimateScopePostProcess_DownSightPostProcessAmount_BF13147D4D2F78A8F8CECFABA0F6D055) == 0x000F68, "Member 'AB_Ranged_Dual_Generic_Athena_C::AnimateScopePostProcess_DownSightPostProcessAmount_BF13147D4D2F78A8F8CECFABA0F6D055' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, AnimateScopePostProcess__Direction_BF13147D4D2F78A8F8CECFABA0F6D055) == 0x000F6C, "Member 'AB_Ranged_Dual_Generic_Athena_C::AnimateScopePostProcess__Direction_BF13147D4D2F78A8F8CECFABA0F6D055' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, AnimateScopePostProcess) == 0x000F70, "Member 'AB_Ranged_Dual_Generic_Athena_C::AnimateScopePostProcess' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, MuzzleParticleSystem) == 0x000F78, "Member 'AB_Ranged_Dual_Generic_Athena_C::MuzzleParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, WeaponDurabilityDestroyEffect) == 0x000F80, "Member 'AB_Ranged_Dual_Generic_Athena_C::WeaponDurabilityDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, WeaponDurabilityDestroyEffectIcon) == 0x000F88, "Member 'AB_Ranged_Dual_Generic_Athena_C::WeaponDurabilityDestroyEffectIcon' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, UseDestroyEffect) == 0x000F90, "Member 'AB_Ranged_Dual_Generic_Athena_C::UseDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Use_Reload_Particles) == 0x000F91, "Member 'AB_Ranged_Dual_Generic_Athena_C::Use_Reload_Particles' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Reload_ParticleSystem) == 0x000F98, "Member 'AB_Ranged_Dual_Generic_Athena_C::Reload_ParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, LastPlayFXTime) == 0x000FA0, "Member 'AB_Ranged_Dual_Generic_Athena_C::LastPlayFXTime' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, MinPlayFXTime) == 0x000FA4, "Member 'AB_Ranged_Dual_Generic_Athena_C::MinPlayFXTime' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, SpawnedShellsPS_R) == 0x000FA8, "Member 'AB_Ranged_Dual_Generic_Athena_C::SpawnedShellsPS_R' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, SpawnedShellsPS_L) == 0x000FB0, "Member 'AB_Ranged_Dual_Generic_Athena_C::SpawnedShellsPS_L' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, UseShellsOnFire_) == 0x000FB8, "Member 'AB_Ranged_Dual_Generic_Athena_C::UseShellsOnFire_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, UseShellsOnReload_) == 0x000FB9, "Member 'AB_Ranged_Dual_Generic_Athena_C::UseShellsOnReload_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, UseShellsOnPump_) == 0x000FBA, "Member 'AB_Ranged_Dual_Generic_Athena_C::UseShellsOnPump_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, ShellsParticleSystemTemplate) == 0x000FC0, "Member 'AB_Ranged_Dual_Generic_Athena_C::ShellsParticleSystemTemplate' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, ReloadSocketName) == 0x000FC8, "Member 'AB_Ranged_Dual_Generic_Athena_C::ReloadSocketName' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Array_Of_Active_Enemy_AI) == 0x000FD0, "Member 'AB_Ranged_Dual_Generic_Athena_C::Array_Of_Active_Enemy_AI' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Scope_Minus_Render_Enemies_To_Custom_Depth_Buffer) == 0x000FE0, "Member 'AB_Ranged_Dual_Generic_Athena_C::Scope_Minus_Render_Enemies_To_Custom_Depth_Buffer' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Shells_Socket_Name) == 0x000FE4, "Member 'AB_Ranged_Dual_Generic_Athena_C::Shells_Socket_Name' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, ShellTypeSelect) == 0x000FEC, "Member 'AB_Ranged_Dual_Generic_Athena_C::ShellTypeSelect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Shells_Spawn_Rate_Scale) == 0x000FF0, "Member 'AB_Ranged_Dual_Generic_Athena_C::Shells_Spawn_Rate_Scale' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, ShellsRotationRate) == 0x000FF4, "Member 'AB_Ranged_Dual_Generic_Athena_C::ShellsRotationRate' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Shells_Velocity) == 0x001000, "Member 'AB_Ranged_Dual_Generic_Athena_C::Shells_Velocity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Shells_Gravity) == 0x00100C, "Member 'AB_Ranged_Dual_Generic_Athena_C::Shells_Gravity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Shells_Lifetime) == 0x001018, "Member 'AB_Ranged_Dual_Generic_Athena_C::Shells_Lifetime' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Shells_Size) == 0x00101C, "Member 'AB_Ranged_Dual_Generic_Athena_C::Shells_Size' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Shells_Time_Dilation) == 0x001028, "Member 'AB_Ranged_Dual_Generic_Athena_C::Shells_Time_Dilation' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Target_Scope_Vignette_Blur_Screen_Percentage) == 0x00102C, "Member 'AB_Ranged_Dual_Generic_Athena_C::Target_Scope_Vignette_Blur_Screen_Percentage' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Scope_Camera_Offset_Amount) == 0x001030, "Member 'AB_Ranged_Dual_Generic_Athena_C::Scope_Camera_Offset_Amount' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, SmallShells) == 0x001034, "Member 'AB_Ranged_Dual_Generic_Athena_C::SmallShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, MediumShells) == 0x001035, "Member 'AB_Ranged_Dual_Generic_Athena_C::MediumShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, LargeShells) == 0x001036, "Member 'AB_Ranged_Dual_Generic_Athena_C::LargeShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, ShotgunShells) == 0x001037, "Member 'AB_Ranged_Dual_Generic_Athena_C::ShotgunShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, EnergyShells) == 0x001038, "Member 'AB_Ranged_Dual_Generic_Athena_C::EnergyShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Inherit_Parent_Velocity) == 0x00103C, "Member 'AB_Ranged_Dual_Generic_Athena_C::Inherit_Parent_Velocity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Cylindrical_Radius) == 0x001040, "Member 'AB_Ranged_Dual_Generic_Athena_C::Cylindrical_Radius' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Cylindrical_Height) == 0x001044, "Member 'AB_Ranged_Dual_Generic_Athena_C::Cylindrical_Height' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, DebugShellsSocket_) == 0x001048, "Member 'AB_Ranged_Dual_Generic_Athena_C::DebugShellsSocket_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Sound_ScopeZoomIn) == 0x001050, "Member 'AB_Ranged_Dual_Generic_Athena_C::Sound_ScopeZoomIn' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Sound_ScopeZoomOut) == 0x001058, "Member 'AB_Ranged_Dual_Generic_Athena_C::Sound_ScopeZoomOut' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, ReticleHUDElementTags) == 0x001060, "Member 'AB_Ranged_Dual_Generic_Athena_C::ReticleHUDElementTags' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Is_Wind_Enabled) == 0x001080, "Member 'AB_Ranged_Dual_Generic_Athena_C::Is_Wind_Enabled' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, MuzzleWindParticleSystem) == 0x001088, "Member 'AB_Ranged_Dual_Generic_Athena_C::MuzzleWindParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, MuzzleParticleSystem1P) == 0x001090, "Member 'AB_Ranged_Dual_Generic_Athena_C::MuzzleParticleSystem1P' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, ShouldHideReticleAfterDelay) == 0x001098, "Member 'AB_Ranged_Dual_Generic_Athena_C::ShouldHideReticleAfterDelay' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, MuzzleWindParticleSpawned) == 0x0010A0, "Member 'AB_Ranged_Dual_Generic_Athena_C::MuzzleWindParticleSpawned' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, StencilBufferValue) == 0x0010A8, "Member 'AB_Ranged_Dual_Generic_Athena_C::StencilBufferValue' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, LastHandFired) == 0x0010AC, "Member 'AB_Ranged_Dual_Generic_Athena_C::LastHandFired' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, bShouldReEnableLeftWeapVis) == 0x0010AD, "Member 'AB_Ranged_Dual_Generic_Athena_C::bShouldReEnableLeftWeapVis' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, bForceFeedbackShouldPersist) == 0x0010AE, "Member 'AB_Ranged_Dual_Generic_Athena_C::bForceFeedbackShouldPersist' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Shell_Color) == 0x0010B0, "Member 'AB_Ranged_Dual_Generic_Athena_C::Shell_Color' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Shells_PS_Max_Draw_Distance) == 0x0010C0, "Member 'AB_Ranged_Dual_Generic_Athena_C::Shells_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Shell_Bools) == 0x0010C8, "Member 'AB_Ranged_Dual_Generic_Athena_C::Shell_Bools' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Dual_Generic_Athena_C, Shell_Burst_Names) == 0x001118, "Member 'AB_Ranged_Dual_Generic_Athena_C::Shell_Burst_Names' has a wrong offset!");

}


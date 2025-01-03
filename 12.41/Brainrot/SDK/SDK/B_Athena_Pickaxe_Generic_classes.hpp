#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_Pickaxe_Generic

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C
// 0x0050 (0x0C68 - 0x0C18)
class AB_Athena_Pickaxe_Generic_C final : public AFortWeaponPickaxeAthena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C18(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               MeleeHeavy_PSC;                                    // 0x0C20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	EAttachmentRule                               IdleFX_Location_Rule;                              // 0x0C28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Idle_FX_Rotation_Rule;                             // 0x0C29(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Idle_FX_Scale_Rule;                                // 0x0C2A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               SwingFX_Location_Rule;                             // 0x0C2B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Swing_FX_Rotation_Rule;                            // 0x0C2C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Swing_FX_Scale_Rule;                               // 0x0C2D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51CE[0x2];                                     // 0x0C2E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        MeleeHeavy_ParticleSystem;                         // 0x0C30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;                     // 0x0C38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;                 // 0x0C40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDestroyEffect;                                  // 0x0C48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51CF[0x7];                                     // 0x0C49(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               Alteration_Ambient_PS;                             // 0x0C50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                Effects_Color_Level;                               // 0x0C58(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Equipped;                                          // 0x0C64(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_B_Athena_Pickaxe_Generic(int32 EntryPoint);
	void CandyCaneUpdate();
	void UpdateBasedOnKills();
	void HandleKillWatch();
	void OnInitWeaponCosmetics();
	void OnWeaponDetached();
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnWeaponAttached();
	void OnEquippedWeaponDestory();
	void PlayRClickImpacts();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void MeleeSwingLeft_End();
	void MeleeSwingRight_End();
	void FootStepRight();
	void FootStepLeft();
	void MeleeSwingLeft(bool First_Left);
	void MeleeSwingRight(bool First_Right);
	void OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D(class UObject* Loaded);
	void OnStatChanged_474968D544EA73072EAB00877752DE97(class FName StatName, int32 StatValue);
	void UserConstructionScript();
	void SetWpnRarity();
	void SetActiveAlterationIdleParticles(bool Active, bool Reset);
	void PlayCQCPickaxeEnemyAudio(const struct FHitResult& Hit_Result);
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_Pickaxe_Generic_C">();
	}
	static class AB_Athena_Pickaxe_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_Pickaxe_Generic_C>();
	}
};
static_assert(alignof(AB_Athena_Pickaxe_Generic_C) == 0x000008, "Wrong alignment on AB_Athena_Pickaxe_Generic_C");
static_assert(sizeof(AB_Athena_Pickaxe_Generic_C) == 0x000C68, "Wrong size on AB_Athena_Pickaxe_Generic_C");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, UberGraphFrame) == 0x000C18, "Member 'AB_Athena_Pickaxe_Generic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, MeleeHeavy_PSC) == 0x000C20, "Member 'AB_Athena_Pickaxe_Generic_C::MeleeHeavy_PSC' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, IdleFX_Location_Rule) == 0x000C28, "Member 'AB_Athena_Pickaxe_Generic_C::IdleFX_Location_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Idle_FX_Rotation_Rule) == 0x000C29, "Member 'AB_Athena_Pickaxe_Generic_C::Idle_FX_Rotation_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Idle_FX_Scale_Rule) == 0x000C2A, "Member 'AB_Athena_Pickaxe_Generic_C::Idle_FX_Scale_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, SwingFX_Location_Rule) == 0x000C2B, "Member 'AB_Athena_Pickaxe_Generic_C::SwingFX_Location_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Swing_FX_Rotation_Rule) == 0x000C2C, "Member 'AB_Athena_Pickaxe_Generic_C::Swing_FX_Rotation_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Swing_FX_Scale_Rule) == 0x000C2D, "Member 'AB_Athena_Pickaxe_Generic_C::Swing_FX_Scale_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, MeleeHeavy_ParticleSystem) == 0x000C30, "Member 'AB_Athena_Pickaxe_Generic_C::MeleeHeavy_ParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, WeaponDurabilityDestroyEffect) == 0x000C38, "Member 'AB_Athena_Pickaxe_Generic_C::WeaponDurabilityDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, WeaponDurabilityDestroyEffectIcon) == 0x000C40, "Member 'AB_Athena_Pickaxe_Generic_C::WeaponDurabilityDestroyEffectIcon' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, UseDestroyEffect) == 0x000C48, "Member 'AB_Athena_Pickaxe_Generic_C::UseDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Alteration_Ambient_PS) == 0x000C50, "Member 'AB_Athena_Pickaxe_Generic_C::Alteration_Ambient_PS' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Effects_Color_Level) == 0x000C58, "Member 'AB_Athena_Pickaxe_Generic_C::Effects_Color_Level' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Equipped) == 0x000C64, "Member 'AB_Athena_Pickaxe_Generic_C::Equipped' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_Wumba

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Athena_Wumba.B_Athena_Wumba_C
// 0x0340 (0x0E10 - 0x0AD0)
class AB_Athena_Wumba_C final : public ABuildingItemWeaponUpgradeActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AD0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   CylinderDistance;                                  // 0x0AD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SphereDetail;                                      // 0x0AE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       UI_InteractionPoint_Sidegrade;                     // 0x0AE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       UI_InteractionPoint_Upgrade;                       // 0x0AF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWumba_ItemCostComponent_Horizontal_C*  Wumba_ItemCostComponent_Horizontal;                // 0x0AF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TableCollision;                                    // 0x0B00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          PostCollision;                                     // 0x0B08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TopCollision;                                      // 0x0B10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BaseCollision;                                     // 0x0B18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_UpgradeFX;                                       // 0x0B20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_TableLightIdle;                                  // 0x0B28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Destroyed;                                       // 0x0B30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Flashing_Light_Sound_Loop;                         // 0x0B38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_LootTiered_Athena_FloorLoot_01;                  // 0x0B40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Wumba;                                          // 0x0B48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWumba_ItemCostComponent_C*             Wumba_ItemCostComponent;                           // 0x0B50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackComponent*                ForceFeedbackFail;                                 // 0x0B58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackComponent*                ForceFeedbackSuccess;                              // 0x0B60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        VendingMachine_Ambient;                            // 0x0B68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0B70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_Light_F9C064A347D6CF3499CF96B51F1F7AF8; // 0x0B78(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_F9C064A347D6CF3499CF96B51F1F7AF8; // 0x0B7C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51A1[0x3];                                     // 0x0B7D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x0B80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MonitorMat;                                        // 0x0B88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MetalMat;                                          // 0x0B90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentCaptureCount;                               // 0x0B98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51A2[0x4];                                     // 0x0B9C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Vend_String;                                       // 0x0BA0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             SearchSound;                                       // 0x0BB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             VendFailedSound;                                   // 0x0BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CycleSound;                                        // 0x0BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CostAmount;                                        // 0x0BD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51A3[0x4];                                     // 0x0BD4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               MaterialType;                                      // 0x0BD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Vend_Succeeded_Sound;                              // 0x0BE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VendSuccess;                                       // 0x0BE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          WasHit;                                            // 0x0BE9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51A4[0x2];                                     // 0x0BEA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CycleSoundVolume;                                  // 0x0BEC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   TossOnGroundSetting;                               // 0x0BF0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   Wood_String;                                       // 0x0C00(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Stone_String;                                      // 0x0C18(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Metal_String;                                      // 0x0C30(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	EFortRarity                                   OverrideVendingMachineRarity;                      // 0x0C48(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51A5[0x7];                                     // 0x0C49(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Activate_Rare_Sound;                               // 0x0C50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Free_String;                                       // 0x0C58(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             DestroyedSound;                                    // 0x0C70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         MaxItemsToSpawn;                                   // 0x0C78(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ItemsAreFree;                                      // 0x0C98(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ItemsAreFreeCached;                                // 0x0CB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51A6[0x3];                                     // 0x0CB9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SpawnedItemCount;                                  // 0x0CBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxItemsToSpawnCached;                             // 0x0CC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51A7[0x4];                                     // 0x0CC4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Activate_Uncommon_Sound;                           // 0x0CC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Activate_Epic_Sound;                               // 0x0CD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Activate_Legendary_Sound;                          // 0x0CD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Ambient_Sound;                                     // 0x0CE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  FailedReason;                                      // 0x0CE8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  UpgradeQuestTag;                                   // 0x0D08(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                           DefaultLightEmissiveColor;                         // 0x0D28(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpgradeAnim;                                       // 0x0D38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51A8[0x7];                                     // 0x0D39(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Light_Flashing;                                    // 0x0D40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Impact_Wobble;                                     // 0x0D48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Search_Audio_Component;                            // 0x0D50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   SideGradeString;                                   // 0x0D58(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         HorizontalEnabled;                                 // 0x0D70(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         UIShowDistance;                                    // 0x0D90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UIDetailDistance;                                  // 0x0D94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           UICheckTimer;                                      // 0x0D98(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         AllowDamage;                                       // 0x0DA0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             Activate_Sidegrade_Sound;                          // 0x0DC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  SidegradeQuestTag;                                 // 0x0DC8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         InteractionTimeSide;                               // 0x0DE8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         LightSize;                                         // 0x0E08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Athena_Wumba(int32 EntryPoint);
	void BndEvt__CylinderDistance_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__CylinderDistance_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__SphereDetail_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__SphereDetail_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void InitializeUI();
	void CheckShouldDisplayUI(bool ShowDetail, bool ShowDistance);
	void ReceiveDestroyed();
	void BlueprintOnInteractInterrupted();
	void ReceiveBeginPlay();
	void WobbleMachine();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BlueprintOnBeginInteract();
	void PlayUpgradeSuccess(const struct FVector& Color, uint8 Param_Index, EInteractionBeingAttempted InteractionBeingAttempted);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void PlayVendFailFX();
	void OnReady_524B43EB45254EC3646C7D81A1AA3359(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void Timeline_1__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void SetRarityColors(const struct FLinearColor& Color);
	void SetLightColor(const struct FLinearColor& NewColor);
	void SetUiVisibility(class UWidgetComponent* UITarget, bool ShowDetail, bool ShowDistance);
	void UpdateAnimInstanceVisuals();

	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool GetOverrideRarity(EFortRarity* Rarity) const;
	class FText BlueprintGetFailedInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	void LocalOnFailedInteract(const class AFortPlayerPawn* InteractingPawn) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_Wumba_C">();
	}
	static class AB_Athena_Wumba_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_Wumba_C>();
	}
};
static_assert(alignof(AB_Athena_Wumba_C) == 0x000008, "Wrong alignment on AB_Athena_Wumba_C");
static_assert(sizeof(AB_Athena_Wumba_C) == 0x000E10, "Wrong size on AB_Athena_Wumba_C");
static_assert(offsetof(AB_Athena_Wumba_C, UberGraphFrame) == 0x000AD0, "Member 'AB_Athena_Wumba_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, CylinderDistance) == 0x000AD8, "Member 'AB_Athena_Wumba_C::CylinderDistance' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, SphereDetail) == 0x000AE0, "Member 'AB_Athena_Wumba_C::SphereDetail' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, UI_InteractionPoint_Sidegrade) == 0x000AE8, "Member 'AB_Athena_Wumba_C::UI_InteractionPoint_Sidegrade' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, UI_InteractionPoint_Upgrade) == 0x000AF0, "Member 'AB_Athena_Wumba_C::UI_InteractionPoint_Upgrade' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Wumba_ItemCostComponent_Horizontal) == 0x000AF8, "Member 'AB_Athena_Wumba_C::Wumba_ItemCostComponent_Horizontal' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, TableCollision) == 0x000B00, "Member 'AB_Athena_Wumba_C::TableCollision' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, PostCollision) == 0x000B08, "Member 'AB_Athena_Wumba_C::PostCollision' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, TopCollision) == 0x000B10, "Member 'AB_Athena_Wumba_C::TopCollision' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, BaseCollision) == 0x000B18, "Member 'AB_Athena_Wumba_C::BaseCollision' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, P_UpgradeFX) == 0x000B20, "Member 'AB_Athena_Wumba_C::P_UpgradeFX' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, P_TableLightIdle) == 0x000B28, "Member 'AB_Athena_Wumba_C::P_TableLightIdle' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, P_Destroyed) == 0x000B30, "Member 'AB_Athena_Wumba_C::P_Destroyed' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Flashing_Light_Sound_Loop) == 0x000B38, "Member 'AB_Athena_Wumba_C::Flashing_Light_Sound_Loop' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, S_LootTiered_Athena_FloorLoot_01) == 0x000B40, "Member 'AB_Athena_Wumba_C::S_LootTiered_Athena_FloorLoot_01' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, SK_Wumba) == 0x000B48, "Member 'AB_Athena_Wumba_C::SK_Wumba' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Wumba_ItemCostComponent) == 0x000B50, "Member 'AB_Athena_Wumba_C::Wumba_ItemCostComponent' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, ForceFeedbackFail) == 0x000B58, "Member 'AB_Athena_Wumba_C::ForceFeedbackFail' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, ForceFeedbackSuccess) == 0x000B60, "Member 'AB_Athena_Wumba_C::ForceFeedbackSuccess' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, VendingMachine_Ambient) == 0x000B68, "Member 'AB_Athena_Wumba_C::VendingMachine_Ambient' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, DefaultSceneRoot) == 0x000B70, "Member 'AB_Athena_Wumba_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Timeline_1_Light_F9C064A347D6CF3499CF96B51F1F7AF8) == 0x000B78, "Member 'AB_Athena_Wumba_C::Timeline_1_Light_F9C064A347D6CF3499CF96B51F1F7AF8' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Timeline_1__Direction_F9C064A347D6CF3499CF96B51F1F7AF8) == 0x000B7C, "Member 'AB_Athena_Wumba_C::Timeline_1__Direction_F9C064A347D6CF3499CF96B51F1F7AF8' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Timeline_1) == 0x000B80, "Member 'AB_Athena_Wumba_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, MonitorMat) == 0x000B88, "Member 'AB_Athena_Wumba_C::MonitorMat' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, MetalMat) == 0x000B90, "Member 'AB_Athena_Wumba_C::MetalMat' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, CurrentCaptureCount) == 0x000B98, "Member 'AB_Athena_Wumba_C::CurrentCaptureCount' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Vend_String) == 0x000BA0, "Member 'AB_Athena_Wumba_C::Vend_String' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, SearchSound) == 0x000BB8, "Member 'AB_Athena_Wumba_C::SearchSound' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, VendFailedSound) == 0x000BC0, "Member 'AB_Athena_Wumba_C::VendFailedSound' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, CycleSound) == 0x000BC8, "Member 'AB_Athena_Wumba_C::CycleSound' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, CostAmount) == 0x000BD0, "Member 'AB_Athena_Wumba_C::CostAmount' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, MaterialType) == 0x000BD8, "Member 'AB_Athena_Wumba_C::MaterialType' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Vend_Succeeded_Sound) == 0x000BE0, "Member 'AB_Athena_Wumba_C::Vend_Succeeded_Sound' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, VendSuccess) == 0x000BE8, "Member 'AB_Athena_Wumba_C::VendSuccess' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, WasHit) == 0x000BE9, "Member 'AB_Athena_Wumba_C::WasHit' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, CycleSoundVolume) == 0x000BEC, "Member 'AB_Athena_Wumba_C::CycleSoundVolume' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, TossOnGroundSetting) == 0x000BF0, "Member 'AB_Athena_Wumba_C::TossOnGroundSetting' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Wood_String) == 0x000C00, "Member 'AB_Athena_Wumba_C::Wood_String' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Stone_String) == 0x000C18, "Member 'AB_Athena_Wumba_C::Stone_String' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Metal_String) == 0x000C30, "Member 'AB_Athena_Wumba_C::Metal_String' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, OverrideVendingMachineRarity) == 0x000C48, "Member 'AB_Athena_Wumba_C::OverrideVendingMachineRarity' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Activate_Rare_Sound) == 0x000C50, "Member 'AB_Athena_Wumba_C::Activate_Rare_Sound' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Free_String) == 0x000C58, "Member 'AB_Athena_Wumba_C::Free_String' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, DestroyedSound) == 0x000C70, "Member 'AB_Athena_Wumba_C::DestroyedSound' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, MaxItemsToSpawn) == 0x000C78, "Member 'AB_Athena_Wumba_C::MaxItemsToSpawn' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, ItemsAreFree) == 0x000C98, "Member 'AB_Athena_Wumba_C::ItemsAreFree' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, ItemsAreFreeCached) == 0x000CB8, "Member 'AB_Athena_Wumba_C::ItemsAreFreeCached' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, SpawnedItemCount) == 0x000CBC, "Member 'AB_Athena_Wumba_C::SpawnedItemCount' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, MaxItemsToSpawnCached) == 0x000CC0, "Member 'AB_Athena_Wumba_C::MaxItemsToSpawnCached' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Activate_Uncommon_Sound) == 0x000CC8, "Member 'AB_Athena_Wumba_C::Activate_Uncommon_Sound' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Activate_Epic_Sound) == 0x000CD0, "Member 'AB_Athena_Wumba_C::Activate_Epic_Sound' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Activate_Legendary_Sound) == 0x000CD8, "Member 'AB_Athena_Wumba_C::Activate_Legendary_Sound' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Ambient_Sound) == 0x000CE0, "Member 'AB_Athena_Wumba_C::Ambient_Sound' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, FailedReason) == 0x000CE8, "Member 'AB_Athena_Wumba_C::FailedReason' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, UpgradeQuestTag) == 0x000D08, "Member 'AB_Athena_Wumba_C::UpgradeQuestTag' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, DefaultLightEmissiveColor) == 0x000D28, "Member 'AB_Athena_Wumba_C::DefaultLightEmissiveColor' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, UpgradeAnim) == 0x000D38, "Member 'AB_Athena_Wumba_C::UpgradeAnim' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Light_Flashing) == 0x000D40, "Member 'AB_Athena_Wumba_C::Light_Flashing' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Impact_Wobble) == 0x000D48, "Member 'AB_Athena_Wumba_C::Impact_Wobble' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Search_Audio_Component) == 0x000D50, "Member 'AB_Athena_Wumba_C::Search_Audio_Component' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, SideGradeString) == 0x000D58, "Member 'AB_Athena_Wumba_C::SideGradeString' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, HorizontalEnabled) == 0x000D70, "Member 'AB_Athena_Wumba_C::HorizontalEnabled' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, UIShowDistance) == 0x000D90, "Member 'AB_Athena_Wumba_C::UIShowDistance' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, UIDetailDistance) == 0x000D94, "Member 'AB_Athena_Wumba_C::UIDetailDistance' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, UICheckTimer) == 0x000D98, "Member 'AB_Athena_Wumba_C::UICheckTimer' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, AllowDamage) == 0x000DA0, "Member 'AB_Athena_Wumba_C::AllowDamage' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, Activate_Sidegrade_Sound) == 0x000DC0, "Member 'AB_Athena_Wumba_C::Activate_Sidegrade_Sound' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, SidegradeQuestTag) == 0x000DC8, "Member 'AB_Athena_Wumba_C::SidegradeQuestTag' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, InteractionTimeSide) == 0x000DE8, "Member 'AB_Athena_Wumba_C::InteractionTimeSide' has a wrong offset!");
static_assert(offsetof(AB_Athena_Wumba_C, LightSize) == 0x000E08, "Member 'AB_Athena_Wumba_C::LightSize' has a wrong offset!");

}


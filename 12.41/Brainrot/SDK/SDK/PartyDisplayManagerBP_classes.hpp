#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PartyDisplayManagerBP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PartyDisplayManagerBP.PartyDisplayManagerBP_C
// 0x01B0 (0x05F0 - 0x0440)
class APartyDisplayManagerBP_C final : public APartyDisplayManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   PrefabActorComp;                                   // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ScalePivot;                                        // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PivotHolder;                                       // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CelebratoryFX;                                     // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8; // 0x0480(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8; // 0x0484(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68DC[0x3];                                     // 0x0485(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     HoloMatColorPulse;                                 // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC; // 0x0490(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC; // 0x0494(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68DD[0x3];                                     // 0x0495(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ScaleAnimEvolve;                                   // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43; // 0x04A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43; // 0x04A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68DE[0x3];                                     // 0x04A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ScaleAnimLevel;                                    // 0x04A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle;                                       // 0x04B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Rotation;                                          // 0x04B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68DF[0x4];                                     // 0x04BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              ItemToRepresent;                                   // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PreviewRotation;                                   // 0x04C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68E0[0x7];                                     // 0x04C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            RotationAnimation;                                 // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        LevelUpFX;                                         // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        EvolveUpFX;                                        // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FXTargetLocation;                                  // 0x04E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCharacter;                                       // 0x04F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsEvolve;                                          // 0x04F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68E1[0x2];                                     // 0x04F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        CharLevelUpFX;                                     // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        CharEvolveUpFX;                                    // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               UIoverrideMID;                                     // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasResetVisuals;                                   // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68E2[0x7];                                     // 0x0511(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               ParticleSystem1;                                   // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem2;                                   // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        CharSwapTransitionFX;                              // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCharacterVisible;                                // 0x0530(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68E3[0x7];                                     // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        HeroPawn;                                          // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SanityChecker;                                     // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68E4[0x7];                                     // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MID_HoloMaterial;                                  // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HideElement_1;                                     // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   VertexRange;                                       // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HideElement_2;                                     // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HideElement_3;                                     // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HideElement_4;                                     // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HideElement_5;                                     // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HideElement_6;                                     // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HideElement_7;                                     // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HideElement_8;                                     // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HideElement_9;                                     // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HideElement_10;                                    // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ScalePivotPreScaleLocation;                        // 0x05A8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StaticMeshPreScaleLocation;                        // 0x05B4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SkelMeshPreScaleLocation;                          // 0x05C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrefabPreScaleLocation;                            // 0x05CC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               GhostPistolVFX;                                    // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Ghost_Sword_VFX;                                   // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Ghost_Sword_Mesh;                                  // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ResetPreScaleLocations();
	void RestoreTeleportMIDsInProgress(const class AFortPlayerPawn* Pawn);
	void HandlePartyMemberInProgressDisplayChanges(class AFortPlayerPawn* Pawn);
	void PartyMemberInProgressCheck(class AFortPlayerPawn* Pawn);
	void PostSetupPrefabVisuals();
	void GetMeshForCurrentDisplayedItem(class UMeshComponent** OutDisplayedMesh);
	void GetItemDefinitionToShow(class UFortItemDefinition** ItemDefinition);
	void SetUIOverrideVisuals(class UTexture2D* Large_Texture, class UFortItemDefinition* Item, EFortRarity Rarity);
	struct FTransform GetWeaponPlacementTransform();
	void UpdatePreviewMeshTransforms();
	struct FTransform GetItemPreviewOffset(class UFortItemDefinition* ItemDefinition);
	struct FTransform GetPreviewMeshWorldTransform();
	void SetupStaticMeshVisuals(class UStaticMesh* NewMesh);
	void SetupSkeletalMeshVisuals(class USkeletalMesh* NewMesh);
	void ResetVisuals();
	void ScaleAnimLevel__FinishedFunc();
	void ScaleAnimLevel__UpdateFunc();
	void ScaleAnimEvolve__FinishedFunc();
	void ScaleAnimEvolve__UpdateFunc();
	void HoloMatColorPulse__FinishedFunc();
	void HoloMatColorPulse__UpdateFunc();
	void Completed_01D864884864692DBB7035B0996A5437(class UFortItem* Item, const struct FGuid& RequestId);
	void ShowItem(const class UFortItem* ItemToView, const struct FGuid& RequestId);
	void PlayLevelUpEffect();
	void PlayEvolutionEffect();
	void CelebrateWithFX();
	void PerformScaleMeshFX();
	void HandleLoadingAssetsForItemCompleted(class UFortItem* ItemWhoseAssetsWereLoaded, const TArray<class UObject*>& LoadedAssets, const struct FGuid& RequestId);
	void ReceiveTick(float DeltaSeconds);
	void Set_Character_Parts_Visibility(bool NewVisible);
	void CharacterCustomizationFinished(class AFortPlayerPawn* Pawn);
	void ReceiveBeginPlay();
	void OnPlayerPawnAddedToLobby(class AFortPlayerPawn* Pawn);
	void ResOutPawnFromLobby(class AFortPlayerPawn* Pawn, int32 PartyIndex);
	void SetupPrefabVisuals();
	void OnEmoteSetupFinished();
	void ExecuteUbergraph_PartyDisplayManagerBP(int32 EntryPoint);

	class AActor* GetPrefabActorForCurrentDisplayedItem() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyDisplayManagerBP_C">();
	}
	static class APartyDisplayManagerBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APartyDisplayManagerBP_C>();
	}
};
static_assert(alignof(APartyDisplayManagerBP_C) == 0x000008, "Wrong alignment on APartyDisplayManagerBP_C");
static_assert(sizeof(APartyDisplayManagerBP_C) == 0x0005F0, "Wrong size on APartyDisplayManagerBP_C");
static_assert(offsetof(APartyDisplayManagerBP_C, UberGraphFrame) == 0x000440, "Member 'APartyDisplayManagerBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, PrefabActorComp) == 0x000448, "Member 'APartyDisplayManagerBP_C::PrefabActorComp' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, SkeletalMesh) == 0x000450, "Member 'APartyDisplayManagerBP_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, StaticMesh) == 0x000458, "Member 'APartyDisplayManagerBP_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScalePivot) == 0x000460, "Member 'APartyDisplayManagerBP_C::ScalePivot' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, PivotHolder) == 0x000468, "Member 'APartyDisplayManagerBP_C::PivotHolder' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, CelebratoryFX) == 0x000470, "Member 'APartyDisplayManagerBP_C::CelebratoryFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, DefaultSceneRoot) == 0x000478, "Member 'APartyDisplayManagerBP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8) == 0x000480, "Member 'APartyDisplayManagerBP_C::HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8) == 0x000484, "Member 'APartyDisplayManagerBP_C::HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HoloMatColorPulse) == 0x000488, "Member 'APartyDisplayManagerBP_C::HoloMatColorPulse' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC) == 0x000490, "Member 'APartyDisplayManagerBP_C::ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC) == 0x000494, "Member 'APartyDisplayManagerBP_C::ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScaleAnimEvolve) == 0x000498, "Member 'APartyDisplayManagerBP_C::ScaleAnimEvolve' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43) == 0x0004A0, "Member 'APartyDisplayManagerBP_C::ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43) == 0x0004A4, "Member 'APartyDisplayManagerBP_C::ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScaleAnimLevel) == 0x0004A8, "Member 'APartyDisplayManagerBP_C::ScaleAnimLevel' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, TimerHandle) == 0x0004B0, "Member 'APartyDisplayManagerBP_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, Rotation) == 0x0004B8, "Member 'APartyDisplayManagerBP_C::Rotation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ItemToRepresent) == 0x0004C0, "Member 'APartyDisplayManagerBP_C::ItemToRepresent' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, PreviewRotation) == 0x0004C8, "Member 'APartyDisplayManagerBP_C::PreviewRotation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, RotationAnimation) == 0x0004D0, "Member 'APartyDisplayManagerBP_C::RotationAnimation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, LevelUpFX) == 0x0004D8, "Member 'APartyDisplayManagerBP_C::LevelUpFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, EvolveUpFX) == 0x0004E0, "Member 'APartyDisplayManagerBP_C::EvolveUpFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, FXTargetLocation) == 0x0004E8, "Member 'APartyDisplayManagerBP_C::FXTargetLocation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, IsCharacter) == 0x0004F4, "Member 'APartyDisplayManagerBP_C::IsCharacter' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, IsEvolve) == 0x0004F5, "Member 'APartyDisplayManagerBP_C::IsEvolve' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, CharLevelUpFX) == 0x0004F8, "Member 'APartyDisplayManagerBP_C::CharLevelUpFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, CharEvolveUpFX) == 0x000500, "Member 'APartyDisplayManagerBP_C::CharEvolveUpFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, UIoverrideMID) == 0x000508, "Member 'APartyDisplayManagerBP_C::UIoverrideMID' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HasResetVisuals) == 0x000510, "Member 'APartyDisplayManagerBP_C::HasResetVisuals' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ParticleSystem1) == 0x000518, "Member 'APartyDisplayManagerBP_C::ParticleSystem1' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ParticleSystem2) == 0x000520, "Member 'APartyDisplayManagerBP_C::ParticleSystem2' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, CharSwapTransitionFX) == 0x000528, "Member 'APartyDisplayManagerBP_C::CharSwapTransitionFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, IsCharacterVisible) == 0x000530, "Member 'APartyDisplayManagerBP_C::IsCharacterVisible' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HeroPawn) == 0x000538, "Member 'APartyDisplayManagerBP_C::HeroPawn' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, SanityChecker) == 0x000540, "Member 'APartyDisplayManagerBP_C::SanityChecker' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, MID_HoloMaterial) == 0x000548, "Member 'APartyDisplayManagerBP_C::MID_HoloMaterial' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_1) == 0x000550, "Member 'APartyDisplayManagerBP_C::HideElement_1' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, VertexRange) == 0x000558, "Member 'APartyDisplayManagerBP_C::VertexRange' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_2) == 0x000560, "Member 'APartyDisplayManagerBP_C::HideElement_2' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_3) == 0x000568, "Member 'APartyDisplayManagerBP_C::HideElement_3' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_4) == 0x000570, "Member 'APartyDisplayManagerBP_C::HideElement_4' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_5) == 0x000578, "Member 'APartyDisplayManagerBP_C::HideElement_5' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_6) == 0x000580, "Member 'APartyDisplayManagerBP_C::HideElement_6' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_7) == 0x000588, "Member 'APartyDisplayManagerBP_C::HideElement_7' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_8) == 0x000590, "Member 'APartyDisplayManagerBP_C::HideElement_8' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_9) == 0x000598, "Member 'APartyDisplayManagerBP_C::HideElement_9' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, HideElement_10) == 0x0005A0, "Member 'APartyDisplayManagerBP_C::HideElement_10' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, ScalePivotPreScaleLocation) == 0x0005A8, "Member 'APartyDisplayManagerBP_C::ScalePivotPreScaleLocation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, StaticMeshPreScaleLocation) == 0x0005B4, "Member 'APartyDisplayManagerBP_C::StaticMeshPreScaleLocation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, SkelMeshPreScaleLocation) == 0x0005C0, "Member 'APartyDisplayManagerBP_C::SkelMeshPreScaleLocation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, PrefabPreScaleLocation) == 0x0005CC, "Member 'APartyDisplayManagerBP_C::PrefabPreScaleLocation' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, GhostPistolVFX) == 0x0005D8, "Member 'APartyDisplayManagerBP_C::GhostPistolVFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, Ghost_Sword_VFX) == 0x0005E0, "Member 'APartyDisplayManagerBP_C::Ghost_Sword_VFX' has a wrong offset!");
static_assert(offsetof(APartyDisplayManagerBP_C, Ghost_Sword_Mesh) == 0x0005E8, "Member 'APartyDisplayManagerBP_C::Ghost_Sword_Mesh' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Pickups_Parent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Pickups_Parent.B_Pickups_Parent_C
// 0x0200 (0x0490 - 0x0290)
class AB_Pickups_Parent_C : public AFortPickupEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        Root;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7; // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7; // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7; // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A64[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     MobileSelectedTL;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pivot_Offset;                                      // 0x02B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FRotator                               Rotation_Bias;                                     // 0x02C4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	class UStaticMeshComponent*                   Static_Mesh_Pickup;                                // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Skeletal_Mesh_Pickup;                              // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSkeletalMesh;                                    // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                          Is_a_Backpack;                                     // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A65[0x6];                                     // 0x02E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    SkeletalOrStaticMeshAssetPrimitive;                // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentElementIndex;                               // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_4A66[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       MidArray;                                          // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	TArray<class UMaterialInterface*>             CurrentMaterial;                                   // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	TArray<class UMaterialInterface*>             CurrentParentMaterial;                             // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	bool                                          Tossed;                                            // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                          Activate_Rarity_Particle_Systems;                  // 0x0329(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	uint8                                         Pad_4A67[0x2];                                     // 0x032A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Rarity_Color;                                      // 0x032C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         Rarity_Level;                                      // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<float>                                 Sweep_Brightness;                                  // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	TArray<float>                                 Sweep_Speed;                                       // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	float                                         Component_Radius__Scaled_;                         // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         Component_Radius_Multiplier;                       // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   Outline_Rarity_Colors;                             // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	float                                         Component_Radius;                                  // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         Picked_Up_Delay_Before_Glow;                       // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         Picked_Up_Fade_In_Time;                            // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         Picked_Up_Hold_Time;                               // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         Picked_Up_Fade_Out_Time;                           // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         Picked_Up_Sweep_Speed;                             // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          IsBluglo;                                          // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A68[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Picked_Up_Trail_PS;                                // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 Sparkle_Spawn_Rate__Picked_Up_;                    // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	TArray<float>                                 Lifetime__Picked_Up_;                              // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	bool                                          IsLootGiftForOthers;                               // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A69[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UForceFeedbackEffect*                   PickupForceFeedback;                               // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Violentium;                                     // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A6A[0x7];                                     // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 MIDsNeedingRelease;                                // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	TArray<class FString>                         Names_of_Materials_And_Parents_Exempt_from_Repartening; // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	float                                         Max_Draw_Distance_Save_the_World;                  // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max_Draw_Distance_Athena;                          // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max_Draw_Distance_Bacchus;                         // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasUniqueMaterialIds;                              // 0x0404(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	uint8                                         Pad_4A6B[0x3];                                     // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 Sweep_Brightness_Test;                             // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	class UParticleSystemComponent*               BackgroundParticleSystem;                          // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   BackgroundRarityColors;                            // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay)
	float                                         ViewDistance;                                      // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         Random_Rotation;                                   // 0x0434(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                MobileSelectedOffset;                              // 0x0438(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                MobileSelectedScale;                               // 0x0444(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MobileInteractIcon;                                // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MobileInteractIconLocation;                        // 0x0458(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                MobileInteractIconScale;                           // 0x0464(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UMaterialInterface*                     MobileInteractionMaterial;                         // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          PickedUp;                                          // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	uint8                                         Pad_4A6C[0x3];                                     // 0x0479(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           MissionItemOutlineColor;                           // 0x047C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Pickups_Parent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnPickedUp();
	void OnAboutToEnterBackpack(class AFortPawn* PickupTarget);
	void ReceiveTick(float DeltaSeconds);
	void OnTossed();
	void OnAttached();
	void HideBackgroundAndSpotlight();
	void DisableBacchusHighlight();
	void EnableBacchusHighlight();
	void ReceiveDestroyed();
	void MobileSelectedTL__UpdateFunc();
	void MobileSelectedTL__FinishedFunc();
	void UserConstructionScript();
	void SetRarityColor();
	void SpawnPickedUpTrailPS();
	void SetHologramPickedUpParams(bool Tier_0);
	void ScaleHologramTimingsForPvP();
	void ReleaseStretchMIDs();
	void DestroyBackgroundVisualComponents();
	void SetHiddenBackgroundVisualComponents(bool Hidden);
	void SetupBaseMIDs();
	void SetupStretchMIDs();
	void Unique_Material_MIDs();
	void SetInitialHologramParams(class UMaterialInstanceDynamic* Mid);
	void SetActiveBackgroundParticleSystem(bool Active, bool Reset);
	void SetVisibleMobileInteractIcon(bool Visible);
	void Set_Draw_Distance();
	void Randomize_Mesh_Rotation_for_BR();
	void Mobile_Interation_Icon_Setup();
	void Initial_Parenting_Setup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Pickups_Parent_C">();
	}
	static class AB_Pickups_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Pickups_Parent_C>();
	}
};
static_assert(alignof(AB_Pickups_Parent_C) == 0x000008, "Wrong alignment on AB_Pickups_Parent_C");
static_assert(sizeof(AB_Pickups_Parent_C) == 0x000490, "Wrong size on AB_Pickups_Parent_C");
static_assert(offsetof(AB_Pickups_Parent_C, UberGraphFrame) == 0x000290, "Member 'AB_Pickups_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Root) == 0x000298, "Member 'AB_Pickups_Parent_C::Root' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7) == 0x0002A0, "Member 'AB_Pickups_Parent_C::MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7) == 0x0002A4, "Member 'AB_Pickups_Parent_C::MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7) == 0x0002A8, "Member 'AB_Pickups_Parent_C::MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileSelectedTL) == 0x0002B0, "Member 'AB_Pickups_Parent_C::MobileSelectedTL' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Pivot_Offset) == 0x0002B8, "Member 'AB_Pickups_Parent_C::Pivot_Offset' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Rotation_Bias) == 0x0002C4, "Member 'AB_Pickups_Parent_C::Rotation_Bias' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Static_Mesh_Pickup) == 0x0002D0, "Member 'AB_Pickups_Parent_C::Static_Mesh_Pickup' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Skeletal_Mesh_Pickup) == 0x0002D8, "Member 'AB_Pickups_Parent_C::Skeletal_Mesh_Pickup' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, IsSkeletalMesh) == 0x0002E0, "Member 'AB_Pickups_Parent_C::IsSkeletalMesh' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Is_a_Backpack) == 0x0002E1, "Member 'AB_Pickups_Parent_C::Is_a_Backpack' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, SkeletalOrStaticMeshAssetPrimitive) == 0x0002E8, "Member 'AB_Pickups_Parent_C::SkeletalOrStaticMeshAssetPrimitive' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, CurrentElementIndex) == 0x0002F0, "Member 'AB_Pickups_Parent_C::CurrentElementIndex' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MidArray) == 0x0002F8, "Member 'AB_Pickups_Parent_C::MidArray' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, CurrentMaterial) == 0x000308, "Member 'AB_Pickups_Parent_C::CurrentMaterial' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, CurrentParentMaterial) == 0x000318, "Member 'AB_Pickups_Parent_C::CurrentParentMaterial' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Tossed) == 0x000328, "Member 'AB_Pickups_Parent_C::Tossed' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Activate_Rarity_Particle_Systems) == 0x000329, "Member 'AB_Pickups_Parent_C::Activate_Rarity_Particle_Systems' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Rarity_Color) == 0x00032C, "Member 'AB_Pickups_Parent_C::Rarity_Color' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Rarity_Level) == 0x00033C, "Member 'AB_Pickups_Parent_C::Rarity_Level' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Sweep_Brightness) == 0x000340, "Member 'AB_Pickups_Parent_C::Sweep_Brightness' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Sweep_Speed) == 0x000350, "Member 'AB_Pickups_Parent_C::Sweep_Speed' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Component_Radius__Scaled_) == 0x000360, "Member 'AB_Pickups_Parent_C::Component_Radius__Scaled_' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Component_Radius_Multiplier) == 0x000364, "Member 'AB_Pickups_Parent_C::Component_Radius_Multiplier' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Outline_Rarity_Colors) == 0x000368, "Member 'AB_Pickups_Parent_C::Outline_Rarity_Colors' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Component_Radius) == 0x000378, "Member 'AB_Pickups_Parent_C::Component_Radius' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Picked_Up_Delay_Before_Glow) == 0x00037C, "Member 'AB_Pickups_Parent_C::Picked_Up_Delay_Before_Glow' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Picked_Up_Fade_In_Time) == 0x000380, "Member 'AB_Pickups_Parent_C::Picked_Up_Fade_In_Time' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Picked_Up_Hold_Time) == 0x000384, "Member 'AB_Pickups_Parent_C::Picked_Up_Hold_Time' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Picked_Up_Fade_Out_Time) == 0x000388, "Member 'AB_Pickups_Parent_C::Picked_Up_Fade_Out_Time' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Picked_Up_Sweep_Speed) == 0x00038C, "Member 'AB_Pickups_Parent_C::Picked_Up_Sweep_Speed' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, IsBluglo) == 0x000390, "Member 'AB_Pickups_Parent_C::IsBluglo' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Picked_Up_Trail_PS) == 0x000398, "Member 'AB_Pickups_Parent_C::Picked_Up_Trail_PS' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Sparkle_Spawn_Rate__Picked_Up_) == 0x0003A0, "Member 'AB_Pickups_Parent_C::Sparkle_Spawn_Rate__Picked_Up_' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Lifetime__Picked_Up_) == 0x0003B0, "Member 'AB_Pickups_Parent_C::Lifetime__Picked_Up_' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, IsLootGiftForOthers) == 0x0003C0, "Member 'AB_Pickups_Parent_C::IsLootGiftForOthers' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, PickupForceFeedback) == 0x0003C8, "Member 'AB_Pickups_Parent_C::PickupForceFeedback' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Is_Violentium) == 0x0003D0, "Member 'AB_Pickups_Parent_C::Is_Violentium' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MIDsNeedingRelease) == 0x0003D8, "Member 'AB_Pickups_Parent_C::MIDsNeedingRelease' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Names_of_Materials_And_Parents_Exempt_from_Repartening) == 0x0003E8, "Member 'AB_Pickups_Parent_C::Names_of_Materials_And_Parents_Exempt_from_Repartening' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Max_Draw_Distance_Save_the_World) == 0x0003F8, "Member 'AB_Pickups_Parent_C::Max_Draw_Distance_Save_the_World' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Max_Draw_Distance_Athena) == 0x0003FC, "Member 'AB_Pickups_Parent_C::Max_Draw_Distance_Athena' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Max_Draw_Distance_Bacchus) == 0x000400, "Member 'AB_Pickups_Parent_C::Max_Draw_Distance_Bacchus' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, HasUniqueMaterialIds) == 0x000404, "Member 'AB_Pickups_Parent_C::HasUniqueMaterialIds' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Sweep_Brightness_Test) == 0x000408, "Member 'AB_Pickups_Parent_C::Sweep_Brightness_Test' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, BackgroundParticleSystem) == 0x000418, "Member 'AB_Pickups_Parent_C::BackgroundParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, BackgroundRarityColors) == 0x000420, "Member 'AB_Pickups_Parent_C::BackgroundRarityColors' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, ViewDistance) == 0x000430, "Member 'AB_Pickups_Parent_C::ViewDistance' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, Random_Rotation) == 0x000434, "Member 'AB_Pickups_Parent_C::Random_Rotation' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileSelectedOffset) == 0x000438, "Member 'AB_Pickups_Parent_C::MobileSelectedOffset' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileSelectedScale) == 0x000444, "Member 'AB_Pickups_Parent_C::MobileSelectedScale' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileInteractIcon) == 0x000450, "Member 'AB_Pickups_Parent_C::MobileInteractIcon' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileInteractIconLocation) == 0x000458, "Member 'AB_Pickups_Parent_C::MobileInteractIconLocation' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileInteractIconScale) == 0x000464, "Member 'AB_Pickups_Parent_C::MobileInteractIconScale' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MobileInteractionMaterial) == 0x000470, "Member 'AB_Pickups_Parent_C::MobileInteractionMaterial' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, PickedUp) == 0x000478, "Member 'AB_Pickups_Parent_C::PickedUp' has a wrong offset!");
static_assert(offsetof(AB_Pickups_Parent_C, MissionItemOutlineColor) == 0x00047C, "Member 'AB_Pickups_Parent_C::MissionItemOutlineColor' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CaptureItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CaptureItem.BP_CaptureItem_C
// 0x0128 (0x0350 - 0x0228)
class ABP_CaptureItem_C final : public AFortItemCaptureActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight_Fill_SkylightComp1;                     // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_Fill_SkylightComp;                      // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_Fill_Right;                             // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_RimTopLeft;                             // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_Rim_Topright;                           // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight_Key;                                     // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_Rim_Bottom;                             // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Wrapping_Papper_Aligned_Temp;                      // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_SCAR_Temp;                                      // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        ArrowScar_Rotate;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Play_Reaction_Effects__Direction_9574FA204C8F1705D11D02837101ACE9; // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DC6[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Play_Reaction_Effects;                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_PanCamera_Lerp_BC75346B47960E00A7D11BAE8EDAE242; // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_PanCamera__Direction_BC75346B47960E00A7D11BAE8EDAE242; // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DC7[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_PanCamera;                                // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Current_Item;                                      // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponentBudgeted*         AxeMesh;                                           // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             LargeTile_Wrap_Transform;                          // 0x02C0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             LargeTile_Wrap_Transform_B;                        // 0x02F0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             SmallTile_Wrap_Transform;                          // 0x0320(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_CaptureItem(int32 EntryPoint);
	void Start_Reaction_Effects();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnSetupCapture(class UFortItemThumbnailRenderer* InRenderer, class UFortItemDefinition* InItemDefinition);
	void Play_Reaction_Effects__Weapon_Fire__EventFunc();
	void Play_Reaction_Effects__UpdateFunc();
	void Play_Reaction_Effects__FinishedFunc();
	void Timeline_PanCamera__UpdateFunc();
	void Timeline_PanCamera__FinishedFunc();
	void UserConstructionScript();
	void SetWrapIsGun(bool WrapIsGun);
	void SetIsLarge(bool Is_Large_Tile);
	void CreateWrapPreview(class AActor** WrapActor);
	void OnWrapAsyncLoaded();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CaptureItem_C">();
	}
	static class ABP_CaptureItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CaptureItem_C>();
	}
};
static_assert(alignof(ABP_CaptureItem_C) == 0x000010, "Wrong alignment on ABP_CaptureItem_C");
static_assert(sizeof(ABP_CaptureItem_C) == 0x000350, "Wrong size on ABP_CaptureItem_C");
static_assert(offsetof(ABP_CaptureItem_C, UberGraphFrame) == 0x000228, "Member 'ABP_CaptureItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, PointLight_Fill_SkylightComp1) == 0x000230, "Member 'ABP_CaptureItem_C::PointLight_Fill_SkylightComp1' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, PointLight_Fill_SkylightComp) == 0x000238, "Member 'ABP_CaptureItem_C::PointLight_Fill_SkylightComp' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, PointLight_Fill_Right) == 0x000240, "Member 'ABP_CaptureItem_C::PointLight_Fill_Right' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, PointLight_RimTopLeft) == 0x000248, "Member 'ABP_CaptureItem_C::PointLight_RimTopLeft' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, PointLight_Rim_Topright) == 0x000250, "Member 'ABP_CaptureItem_C::PointLight_Rim_Topright' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, SpotLight_Key) == 0x000258, "Member 'ABP_CaptureItem_C::SpotLight_Key' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, PointLight_Rim_Bottom) == 0x000260, "Member 'ABP_CaptureItem_C::PointLight_Rim_Bottom' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, Camera) == 0x000268, "Member 'ABP_CaptureItem_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, Wrapping_Papper_Aligned_Temp) == 0x000270, "Member 'ABP_CaptureItem_C::Wrapping_Papper_Aligned_Temp' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, SK_SCAR_Temp) == 0x000278, "Member 'ABP_CaptureItem_C::SK_SCAR_Temp' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, ArrowScar_Rotate) == 0x000280, "Member 'ABP_CaptureItem_C::ArrowScar_Rotate' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, DefaultSceneRoot) == 0x000288, "Member 'ABP_CaptureItem_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, Play_Reaction_Effects__Direction_9574FA204C8F1705D11D02837101ACE9) == 0x000290, "Member 'ABP_CaptureItem_C::Play_Reaction_Effects__Direction_9574FA204C8F1705D11D02837101ACE9' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, Play_Reaction_Effects) == 0x000298, "Member 'ABP_CaptureItem_C::Play_Reaction_Effects' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, Timeline_PanCamera_Lerp_BC75346B47960E00A7D11BAE8EDAE242) == 0x0002A0, "Member 'ABP_CaptureItem_C::Timeline_PanCamera_Lerp_BC75346B47960E00A7D11BAE8EDAE242' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, Timeline_PanCamera__Direction_BC75346B47960E00A7D11BAE8EDAE242) == 0x0002A4, "Member 'ABP_CaptureItem_C::Timeline_PanCamera__Direction_BC75346B47960E00A7D11BAE8EDAE242' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, Timeline_PanCamera) == 0x0002A8, "Member 'ABP_CaptureItem_C::Timeline_PanCamera' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, Current_Item) == 0x0002B0, "Member 'ABP_CaptureItem_C::Current_Item' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, AxeMesh) == 0x0002B8, "Member 'ABP_CaptureItem_C::AxeMesh' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, LargeTile_Wrap_Transform) == 0x0002C0, "Member 'ABP_CaptureItem_C::LargeTile_Wrap_Transform' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, LargeTile_Wrap_Transform_B) == 0x0002F0, "Member 'ABP_CaptureItem_C::LargeTile_Wrap_Transform_B' has a wrong offset!");
static_assert(offsetof(ABP_CaptureItem_C, SmallTile_Wrap_Transform) == 0x000320, "Member 'ABP_CaptureItem_C::SmallTile_Wrap_Transform' has a wrong offset!");

}


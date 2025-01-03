#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultRotator

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VaultRotator.VaultRotator_C
// 0x0120 (0x0430 - 0x0310)
class AVaultRotator_C final : public AItemPreviewRotator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDirectionalLightComponent*             DirectionalLightMobile;                            // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             DirectionalLight_LOWPC;                            // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DirectionalLights;                                 // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                     SkyLightLowMobile;                                 // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                     SkyLight;                                          // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                     SkyLight_LOWPC;                                    // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PostProcess_Mobile;                                // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PostProcess_LOWPC;                                 // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        GenericLighting;                                   // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Zoom_CurrentZoomLevel_6FFD6729471BD965D850258DA1C0AF39; // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39; // 0x036C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_688E[0x3];                                     // 0x036D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_Zoom;                                     // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714; // 0x0378(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714; // 0x0384(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714; // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714; // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714; // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_688F[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CameraTurn_180_to_360;                             // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x03A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x03B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x03C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6890[0x7];                                     // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CameraTurn_0_to_180;                               // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6891[0x8];                                     // 0x03D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             InitialCameraTransform;                            // 0x03E0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                             ClockwiseSound;                                    // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CounterClockwiseSound;                             // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugMobile_Lighting;                              // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DebugLightingPC;                                   // 0x0421(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsActive;                                          // 0x0422(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AlwaysOn;                                          // 0x0423(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DebugLighting_LOWDetailPC;                         // 0x0424(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void PlaySoundWhenEnabled(class USoundBase* Sound);
	void SetBackgroundColor(const struct FLinearColor& RGBA0, const struct FLinearColor& RGBA1);
	void ToggleBackgroundText(bool bDisplayText);
	void LightControl(bool Active);
	void SwitchPCLighting(bool Visibility);
	void SwitchPCLighting_LOWDetail(bool Visibility);
	void SwitchMobileLighting(bool Visibility);
	void SetBackgroundString(int32 StringIndex);
	void CameraTurn_180_to_360__FinishedFunc();
	void CameraTurn_180_to_360__UpdateFunc();
	void Timeline_Zoom__FinishedFunc();
	void Timeline_Zoom__UpdateFunc();
	void CameraTurn_0_to_180__FinishedFunc();
	void CameraTurn_0_to_180__UpdateFunc();
	void UpdateSettings();
	void ReceiveBeginPlay();
	void OnCameraTransitionReady(bool bPrimaryToSecondary, const class UFortAccountItemDefinition* PrimaryRequestedItem, const struct FSceneTransitionOptions& Options);
	void SetZoom(bool bZoomedIn);
	void ExecuteUbergraph_VaultRotator(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VaultRotator_C">();
	}
	static class AVaultRotator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVaultRotator_C>();
	}
};
static_assert(alignof(AVaultRotator_C) == 0x000010, "Wrong alignment on AVaultRotator_C");
static_assert(sizeof(AVaultRotator_C) == 0x000430, "Wrong size on AVaultRotator_C");
static_assert(offsetof(AVaultRotator_C, UberGraphFrame) == 0x000310, "Member 'AVaultRotator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, DirectionalLightMobile) == 0x000318, "Member 'AVaultRotator_C::DirectionalLightMobile' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, DirectionalLight_LOWPC) == 0x000320, "Member 'AVaultRotator_C::DirectionalLight_LOWPC' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, DirectionalLights) == 0x000328, "Member 'AVaultRotator_C::DirectionalLights' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, SkyLightLowMobile) == 0x000330, "Member 'AVaultRotator_C::SkyLightLowMobile' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, SkyLight) == 0x000338, "Member 'AVaultRotator_C::SkyLight' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, SkyLight_LOWPC) == 0x000340, "Member 'AVaultRotator_C::SkyLight_LOWPC' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, Arrow) == 0x000348, "Member 'AVaultRotator_C::Arrow' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, PostProcess_Mobile) == 0x000350, "Member 'AVaultRotator_C::PostProcess_Mobile' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, PostProcess_LOWPC) == 0x000358, "Member 'AVaultRotator_C::PostProcess_LOWPC' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, GenericLighting) == 0x000360, "Member 'AVaultRotator_C::GenericLighting' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, Timeline_Zoom_CurrentZoomLevel_6FFD6729471BD965D850258DA1C0AF39) == 0x000368, "Member 'AVaultRotator_C::Timeline_Zoom_CurrentZoomLevel_6FFD6729471BD965D850258DA1C0AF39' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39) == 0x00036C, "Member 'AVaultRotator_C::Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, Timeline_Zoom) == 0x000370, "Member 'AVaultRotator_C::Timeline_Zoom' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714) == 0x000378, "Member 'AVaultRotator_C::CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714) == 0x000384, "Member 'AVaultRotator_C::CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714) == 0x000390, "Member 'AVaultRotator_C::CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714) == 0x000394, "Member 'AVaultRotator_C::CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714) == 0x000398, "Member 'AVaultRotator_C::CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_180_to_360) == 0x0003A0, "Member 'AVaultRotator_C::CameraTurn_180_to_360' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0) == 0x0003A8, "Member 'AVaultRotator_C::CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0) == 0x0003B4, "Member 'AVaultRotator_C::CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0) == 0x0003C0, "Member 'AVaultRotator_C::CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0) == 0x0003C4, "Member 'AVaultRotator_C::CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0) == 0x0003C8, "Member 'AVaultRotator_C::CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CameraTurn_0_to_180) == 0x0003D0, "Member 'AVaultRotator_C::CameraTurn_0_to_180' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, InitialCameraTransform) == 0x0003E0, "Member 'AVaultRotator_C::InitialCameraTransform' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, ClockwiseSound) == 0x000410, "Member 'AVaultRotator_C::ClockwiseSound' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, CounterClockwiseSound) == 0x000418, "Member 'AVaultRotator_C::CounterClockwiseSound' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, DebugMobile_Lighting) == 0x000420, "Member 'AVaultRotator_C::DebugMobile_Lighting' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, DebugLightingPC) == 0x000421, "Member 'AVaultRotator_C::DebugLightingPC' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, IsActive) == 0x000422, "Member 'AVaultRotator_C::IsActive' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, AlwaysOn) == 0x000423, "Member 'AVaultRotator_C::AlwaysOn' has a wrong offset!");
static_assert(offsetof(AVaultRotator_C, DebugLighting_LOWDetailPC) == 0x000424, "Member 'AVaultRotator_C::DebugLighting_LOWDetailPC' has a wrong offset!");

}


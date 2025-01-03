#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PowerToastWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PowerToastWidget.PowerToastWidget_C
// 0x0068 (0x0300 - 0x0298)
class UPowerToastWidget_C final : public UFortPlayerPowerRatingToast
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LookAtMe;                                          // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Outro;                                             // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Power;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineSeparator;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Moonbeam_Power_Back_1;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Moonbeam_Power_Back_Difference;                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PowerIconGlow;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUINotification*                    ToastNotification;                                 // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimationFinishedDelay;                            // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6796[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           AnimationDelayTimer;                               // 0x02F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void HandleAnimationDelay();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0();
	void WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2();
	void ShowToast();
	void Construct();
	void ExecuteUbergraph_PowerToastWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PowerToastWidget_C">();
	}
	static class UPowerToastWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPowerToastWidget_C>();
	}
};
static_assert(alignof(UPowerToastWidget_C) == 0x000008, "Wrong alignment on UPowerToastWidget_C");
static_assert(sizeof(UPowerToastWidget_C) == 0x000300, "Wrong size on UPowerToastWidget_C");
static_assert(offsetof(UPowerToastWidget_C, UberGraphFrame) == 0x000298, "Member 'UPowerToastWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, LookAtMe) == 0x0002A0, "Member 'UPowerToastWidget_C::LookAtMe' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Outro) == 0x0002A8, "Member 'UPowerToastWidget_C::Outro' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Intro) == 0x0002B0, "Member 'UPowerToastWidget_C::Intro' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Image_2) == 0x0002B8, "Member 'UPowerToastWidget_C::Image_2' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Image_Power) == 0x0002C0, "Member 'UPowerToastWidget_C::Image_Power' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, LineSeparator) == 0x0002C8, "Member 'UPowerToastWidget_C::LineSeparator' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Moonbeam_Power_Back_1) == 0x0002D0, "Member 'UPowerToastWidget_C::Moonbeam_Power_Back_1' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, Moonbeam_Power_Back_Difference) == 0x0002D8, "Member 'UPowerToastWidget_C::Moonbeam_Power_Back_Difference' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, PowerIconGlow) == 0x0002E0, "Member 'UPowerToastWidget_C::PowerIconGlow' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, ToastNotification) == 0x0002E8, "Member 'UPowerToastWidget_C::ToastNotification' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, AnimationFinishedDelay) == 0x0002F0, "Member 'UPowerToastWidget_C::AnimationFinishedDelay' has a wrong offset!");
static_assert(offsetof(UPowerToastWidget_C, AnimationDelayTimer) == 0x0002F8, "Member 'UPowerToastWidget_C::AnimationDelayTimer' has a wrong offset!");

}


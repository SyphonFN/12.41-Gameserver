#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpecialEventAthenaNewsTile_Spotlight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C
// 0x0070 (0x02F0 - 0x0280)
class USpecialEventAthenaNewsTile_Spotlight_C final : public UFortAthenaNewsTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_Action;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                       CommonLoadGuard_0;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConfirmSelectionFlash;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fill;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               GameModeSB;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageRarityFlare;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LoadingImage;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LoadingImageOvr;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  LoadSwitcher;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              NewsItemScale;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Tile;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VisibilityBox;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight(int32 EntryPoint);
	void SetDefaultImage();
	void PlayIntroAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpecialEventAthenaNewsTile_Spotlight_C">();
	}
	static class USpecialEventAthenaNewsTile_Spotlight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventAthenaNewsTile_Spotlight_C>();
	}
};
static_assert(alignof(USpecialEventAthenaNewsTile_Spotlight_C) == 0x000008, "Wrong alignment on USpecialEventAthenaNewsTile_Spotlight_C");
static_assert(sizeof(USpecialEventAthenaNewsTile_Spotlight_C) == 0x0002F0, "Wrong size on USpecialEventAthenaNewsTile_Spotlight_C");
static_assert(offsetof(USpecialEventAthenaNewsTile_Spotlight_C, UberGraphFrame) == 0x000280, "Member 'USpecialEventAthenaNewsTile_Spotlight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USpecialEventAthenaNewsTile_Spotlight_C, Intro) == 0x000288, "Member 'USpecialEventAthenaNewsTile_Spotlight_C::Intro' has a wrong offset!");
static_assert(offsetof(USpecialEventAthenaNewsTile_Spotlight_C, Button_Action) == 0x000290, "Member 'USpecialEventAthenaNewsTile_Spotlight_C::Button_Action' has a wrong offset!");
static_assert(offsetof(USpecialEventAthenaNewsTile_Spotlight_C, CommonLoadGuard_0) == 0x000298, "Member 'USpecialEventAthenaNewsTile_Spotlight_C::CommonLoadGuard_0' has a wrong offset!");
static_assert(offsetof(USpecialEventAthenaNewsTile_Spotlight_C, ConfirmSelectionFlash) == 0x0002A0, "Member 'USpecialEventAthenaNewsTile_Spotlight_C::ConfirmSelectionFlash' has a wrong offset!");
static_assert(offsetof(USpecialEventAthenaNewsTile_Spotlight_C, Fill) == 0x0002A8, "Member 'USpecialEventAthenaNewsTile_Spotlight_C::Fill' has a wrong offset!");
static_assert(offsetof(USpecialEventAthenaNewsTile_Spotlight_C, GameModeSB) == 0x0002B0, "Member 'USpecialEventAthenaNewsTile_Spotlight_C::GameModeSB' has a wrong offset!");
static_assert(offsetof(USpecialEventAthenaNewsTile_Spotlight_C, ImageRarityFlare) == 0x0002B8, "Member 'USpecialEventAthenaNewsTile_Spotlight_C::ImageRarityFlare' has a wrong offset!");
static_assert(offsetof(USpecialEventAthenaNewsTile_Spotlight_C, LoadingImage) == 0x0002C0, "Member 'USpecialEventAthenaNewsTile_Spotlight_C::LoadingImage' has a wrong offset!");
static_assert(offsetof(USpecialEventAthenaNewsTile_Spotlight_C, LoadingImageOvr) == 0x0002C8, "Member 'USpecialEventAthenaNewsTile_Spotlight_C::LoadingImageOvr' has a wrong offset!");
static_assert(offsetof(USpecialEventAthenaNewsTile_Spotlight_C, LoadSwitcher) == 0x0002D0, "Member 'USpecialEventAthenaNewsTile_Spotlight_C::LoadSwitcher' has a wrong offset!");
static_assert(offsetof(USpecialEventAthenaNewsTile_Spotlight_C, NewsItemScale) == 0x0002D8, "Member 'USpecialEventAthenaNewsTile_Spotlight_C::NewsItemScale' has a wrong offset!");
static_assert(offsetof(USpecialEventAthenaNewsTile_Spotlight_C, SizeBox_Tile) == 0x0002E0, "Member 'USpecialEventAthenaNewsTile_Spotlight_C::SizeBox_Tile' has a wrong offset!");
static_assert(offsetof(USpecialEventAthenaNewsTile_Spotlight_C, VisibilityBox) == 0x0002E8, "Member 'USpecialEventAthenaNewsTile_Spotlight_C::VisibilityBox' has a wrong offset!");

}

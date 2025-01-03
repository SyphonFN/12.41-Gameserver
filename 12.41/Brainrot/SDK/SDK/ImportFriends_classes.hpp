#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImportFriends

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImportFriends.ImportFriends_C
// 0x0160 (0x0618 - 0x04B8)
class UImportFriends_C final : public UFortSocialImportPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro_V2;                                          // 0x04C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ArrowPulse;                                        // 0x04C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x04D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       AddFriendsDescription;                             // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_AddFriendsDescription;                          // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_ChangeInSettingsText;                           // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_LimitedTimeHeader;                              // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_TakenToLauncher;                                // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoWidget_C*                      ItemInfoWidget;                                    // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              SBox_AddFriendButtonScaleBox;                      // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxDescription;                               // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxHeader;                                    // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFrontEndCamera                               DesiredFrontEndCamera;                             // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_715C[0x7];                                     // 0x0539(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    PreviewItemDef;                                    // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeartbeatDelayIntroAnimation;                      // 0x0548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         DebugSocialImportType;                             // 0x054C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasReward;                                        // 0x054D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_715D[0x2];                                     // 0x054E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   FacebookHeader;                                    // 0x0550(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   VKHeader;                                          // 0x0568(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SteamHeader;                                       // 0x0580(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PlaystationHeader;                                 // 0x0598(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   XboxHeader;                                        // 0x05B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESocialImportPanelPlatform                    SocialPlatform;                                    // 0x05C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_715E[0x3];                                     // 0x05C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WrapHeaderAt;                                      // 0x05CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   XboxDescriptionText;                               // 0x05D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PSNDescriptionText;                                // 0x05E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SwitchDescriptionText;                             // 0x0600(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ImportFriends(int32 EntryPoint);
	void OnIncentivizedSet(bool bIncentivized);
	void BP_OnActivated();
	void BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnPanelTypeSet(ESocialImportPanelType NewType);
	void HandleDescriptionText();
	void HandleHeaderText();
	void PreConstruct(bool IsDesignTime);
	void ScaleTextboxWithWrappingWorkaround(class UScaleBox* ContainingScalebox, int32 CharLimitThreshold, class UCommonTextBlock* TargetText, int32 WrapAtHorrizontal);
	void ScaleTextButton(int32 CharThreshold, class UScaleBox* ContainingScalebox, class UIconTextButton_C* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImportFriends_C">();
	}
	static class UImportFriends_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImportFriends_C>();
	}
};
static_assert(alignof(UImportFriends_C) == 0x000008, "Wrong alignment on UImportFriends_C");
static_assert(sizeof(UImportFriends_C) == 0x000618, "Wrong size on UImportFriends_C");
static_assert(offsetof(UImportFriends_C, UberGraphFrame) == 0x0004B8, "Member 'UImportFriends_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, Intro_V2) == 0x0004C0, "Member 'UImportFriends_C::Intro_V2' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ArrowPulse) == 0x0004C8, "Member 'UImportFriends_C::ArrowPulse' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, Intro) == 0x0004D0, "Member 'UImportFriends_C::Intro' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, AddFriendsDescription) == 0x0004D8, "Member 'UImportFriends_C::AddFriendsDescription' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CommonTextBlock_0) == 0x0004E0, "Member 'UImportFriends_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_AddFriendsDescription) == 0x0004E8, "Member 'UImportFriends_C::CT_AddFriendsDescription' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_ChangeInSettingsText) == 0x0004F0, "Member 'UImportFriends_C::CT_ChangeInSettingsText' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_LimitedTimeHeader) == 0x0004F8, "Member 'UImportFriends_C::CT_LimitedTimeHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_TakenToLauncher) == 0x000500, "Member 'UImportFriends_C::CT_TakenToLauncher' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, Image_1) == 0x000508, "Member 'UImportFriends_C::Image_1' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ItemInfoWidget) == 0x000510, "Member 'UImportFriends_C::ItemInfoWidget' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SafeZone_0) == 0x000518, "Member 'UImportFriends_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SBox_AddFriendButtonScaleBox) == 0x000520, "Member 'UImportFriends_C::SBox_AddFriendButtonScaleBox' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ScaleBoxDescription) == 0x000528, "Member 'UImportFriends_C::ScaleBoxDescription' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ScaleBoxHeader) == 0x000530, "Member 'UImportFriends_C::ScaleBoxHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, DesiredFrontEndCamera) == 0x000538, "Member 'UImportFriends_C::DesiredFrontEndCamera' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, PreviewItemDef) == 0x000540, "Member 'UImportFriends_C::PreviewItemDef' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, HeartbeatDelayIntroAnimation) == 0x000548, "Member 'UImportFriends_C::HeartbeatDelayIntroAnimation' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, DebugSocialImportType) == 0x00054C, "Member 'UImportFriends_C::DebugSocialImportType' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, bHasReward) == 0x00054D, "Member 'UImportFriends_C::bHasReward' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, FacebookHeader) == 0x000550, "Member 'UImportFriends_C::FacebookHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, VKHeader) == 0x000568, "Member 'UImportFriends_C::VKHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SteamHeader) == 0x000580, "Member 'UImportFriends_C::SteamHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, PlaystationHeader) == 0x000598, "Member 'UImportFriends_C::PlaystationHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, XboxHeader) == 0x0005B0, "Member 'UImportFriends_C::XboxHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SocialPlatform) == 0x0005C8, "Member 'UImportFriends_C::SocialPlatform' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, WrapHeaderAt) == 0x0005CC, "Member 'UImportFriends_C::WrapHeaderAt' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, XboxDescriptionText) == 0x0005D0, "Member 'UImportFriends_C::XboxDescriptionText' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, PSNDescriptionText) == 0x0005E8, "Member 'UImportFriends_C::PSNDescriptionText' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SwitchDescriptionText) == 0x000600, "Member 'UImportFriends_C::SwitchDescriptionText' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionSetDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionSetDetails.MissionSetDetails_C
// 0x0128 (0x07A0 - 0x0678)
class UMissionSetDetails_C final : public UAthenaChallengeSetDetails_Missions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BacktoNormalTimeline;                              // 0x0680(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NewPrestigeTimeline;                               // 0x0688(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PrestigeFX_Off;                                    // 0x0690(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PrestigeFX;                                        // 0x0698(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ItemInfoIntroOutro;                                // 0x06A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x06A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               CameraFramingWidget;                               // 0x06B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                         CloseButton;                                       // 0x06B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   CommonRichTextBlock;                               // 0x06C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   CommonRichTextBlock_95;                            // 0x06C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CompletionCheck;                                   // 0x06D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CompletionCheck_1;                                 // 0x06D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderBase;                                        // 0x06E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_BattlePass;                                   // 0x06E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_LimitedTime;                                  // 0x06F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Prestige;                                     // 0x06F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemInfo;                                          // 0x0700(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                         LazyImage_Background;                              // 0x0708(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                         LazyImage_MaterChase;                              // 0x0710(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Prestige_Shimmer;                                  // 0x0718(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Prestige_Shine_Header;                             // 0x0720(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PrestigeBorder;                                    // 0x0728(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PrestigeIcon_1;                                    // 0x0730(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0738(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxTextScale;                                 // 0x0740(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           TextDisplay;                                       // 0x0748(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   PrestigeBundleText;                                // 0x0750(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ViewPrestigeMissions;                              // 0x0768(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ViewNormalMissions;                                // 0x0780(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         FXRenderOpacity;                                   // 0x0798(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MissionSetDetails(int32 EntryPoint);
	void OnChallengeSetEstablished(const struct FFortChallengeSetStyle& DisplayStyle, bool bIsComplete);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void VeiwingBundleLevelChanged();
	void HidePriestigeInfo(bool bHidePriestigeUpsell);
	void StylePageForNormal(bool FirstRun);
	void StylePageForPrestige();
	void UpdateLevelUpBundleButtonText();
	void Construct();
	void HandleBack(bool* PassThrough);
	void SetDynamicColors(class UImage* DetailsDynamicMaterialTarget, const struct FFortChallengeSetStyle& FortChallengeSetStyle);
	class UWidget* GetWidgetForFramingViewedItem();
	void SetupPrestigeFXColors(const struct FLinearColor& PrimaryColor, const struct FLinearColor& SecondaryColor, const struct FLinearColor& AccentColor);
	void SetPrestigeFXStateNormal();
	void AnimatePrestigeFX();
	void AnimatePrestigeFX_Off();
	void SetPrestigeFXStatePrestige();
	void AnimateInPrestigeTimeline();
	void AnimateInNormalTimeline();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionSetDetails_C">();
	}
	static class UMissionSetDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionSetDetails_C>();
	}
};
static_assert(alignof(UMissionSetDetails_C) == 0x000008, "Wrong alignment on UMissionSetDetails_C");
static_assert(sizeof(UMissionSetDetails_C) == 0x0007A0, "Wrong size on UMissionSetDetails_C");
static_assert(offsetof(UMissionSetDetails_C, UberGraphFrame) == 0x000678, "Member 'UMissionSetDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, BacktoNormalTimeline) == 0x000680, "Member 'UMissionSetDetails_C::BacktoNormalTimeline' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, NewPrestigeTimeline) == 0x000688, "Member 'UMissionSetDetails_C::NewPrestigeTimeline' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, PrestigeFX_Off) == 0x000690, "Member 'UMissionSetDetails_C::PrestigeFX_Off' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, PrestigeFX) == 0x000698, "Member 'UMissionSetDetails_C::PrestigeFX' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, ItemInfoIntroOutro) == 0x0006A0, "Member 'UMissionSetDetails_C::ItemInfoIntroOutro' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, Intro) == 0x0006A8, "Member 'UMissionSetDetails_C::Intro' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, CameraFramingWidget) == 0x0006B0, "Member 'UMissionSetDetails_C::CameraFramingWidget' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, CloseButton) == 0x0006B8, "Member 'UMissionSetDetails_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, CommonRichTextBlock) == 0x0006C0, "Member 'UMissionSetDetails_C::CommonRichTextBlock' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, CommonRichTextBlock_95) == 0x0006C8, "Member 'UMissionSetDetails_C::CommonRichTextBlock_95' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, CompletionCheck) == 0x0006D0, "Member 'UMissionSetDetails_C::CompletionCheck' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, CompletionCheck_1) == 0x0006D8, "Member 'UMissionSetDetails_C::CompletionCheck_1' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, HeaderBase) == 0x0006E0, "Member 'UMissionSetDetails_C::HeaderBase' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, Icon_BattlePass) == 0x0006E8, "Member 'UMissionSetDetails_C::Icon_BattlePass' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, Icon_LimitedTime) == 0x0006F0, "Member 'UMissionSetDetails_C::Icon_LimitedTime' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, Icon_Prestige) == 0x0006F8, "Member 'UMissionSetDetails_C::Icon_Prestige' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, ItemInfo) == 0x000700, "Member 'UMissionSetDetails_C::ItemInfo' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, LazyImage_Background) == 0x000708, "Member 'UMissionSetDetails_C::LazyImage_Background' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, LazyImage_MaterChase) == 0x000710, "Member 'UMissionSetDetails_C::LazyImage_MaterChase' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, Prestige_Shimmer) == 0x000718, "Member 'UMissionSetDetails_C::Prestige_Shimmer' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, Prestige_Shine_Header) == 0x000720, "Member 'UMissionSetDetails_C::Prestige_Shine_Header' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, PrestigeBorder) == 0x000728, "Member 'UMissionSetDetails_C::PrestigeBorder' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, PrestigeIcon_1) == 0x000730, "Member 'UMissionSetDetails_C::PrestigeIcon_1' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, SafeZone_0) == 0x000738, "Member 'UMissionSetDetails_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, ScaleBoxTextScale) == 0x000740, "Member 'UMissionSetDetails_C::ScaleBoxTextScale' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, TextDisplay) == 0x000748, "Member 'UMissionSetDetails_C::TextDisplay' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, PrestigeBundleText) == 0x000750, "Member 'UMissionSetDetails_C::PrestigeBundleText' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, ViewPrestigeMissions) == 0x000768, "Member 'UMissionSetDetails_C::ViewPrestigeMissions' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, ViewNormalMissions) == 0x000780, "Member 'UMissionSetDetails_C::ViewNormalMissions' has a wrong offset!");
static_assert(offsetof(UMissionSetDetails_C, FXRenderOpacity) == 0x000798, "Member 'UMissionSetDetails_C::FXRenderOpacity' has a wrong offset!");

}

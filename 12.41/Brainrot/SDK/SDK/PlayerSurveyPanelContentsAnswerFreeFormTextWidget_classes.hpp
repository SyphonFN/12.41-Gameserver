#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerSurveyPanelContentsAnswerFreeFormTextWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C
// 0x0048 (0x0338 - 0x02F0)
class UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C final : public UFortPlayerSurveyFreeFormTextAnswerWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMultiLineEditableTextBox*              EntryTextBox;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       LimitsTextBlock;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIgnoreAnswerChange;                               // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AAC[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text_Subtitle;                                     // 0x0310(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 LimitsStyle_Normal;                                // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 LimitsStyle_Overflow;                              // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget(int32 EntryPoint);
	void HandleQuestionChanged();
	void HandleCommitCurrentAnswer();
	void HandleAnswerChanged(const struct FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo);
	void BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void Construct();
	void UpdateEntryText();
	void UpdateHintText();
	void HandlePlayerEnterAnswer(const class FString& AnswerString);
	void UpdateLimitsText();

	class UWidget* GetDefaultFocusedWidget() const;
	class FText GetSubtitleText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C">();
	}
	static class UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C>();
	}
};
static_assert(alignof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C) == 0x000008, "Wrong alignment on UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C");
static_assert(sizeof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C) == 0x000338, "Wrong size on UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C, UberGraphFrame) == 0x0002F0, "Member 'UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C, EntryTextBox) == 0x0002F8, "Member 'UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::EntryTextBox' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C, LimitsTextBlock) == 0x000300, "Member 'UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::LimitsTextBlock' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C, bIgnoreAnswerChange) == 0x000308, "Member 'UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::bIgnoreAnswerChange' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C, Text_Subtitle) == 0x000310, "Member 'UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::Text_Subtitle' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C, LimitsStyle_Normal) == 0x000328, "Member 'UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::LimitsStyle_Normal' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C, LimitsStyle_Overflow) == 0x000330, "Member 'UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::LimitsStyle_Overflow' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeImageGridTreeEntry_Challenge

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChallengeImageGridTreeEntry_Challenge.ChallengeImageGridTreeEntry_Challenge_C
// 0x0050 (0x02D8 - 0x0288)
class UChallengeImageGridTreeEntry_Challenge_C final : public UAthenaChallengeListEntry_Challenge
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HoverPulse;                                        // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHover;                                           // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         ChallengeDescriptionHB;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        DotSwitcher;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       GridNumberEntry;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLockIcon;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PuzzlePiece;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_MainSize;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextDoneIndicator;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ChallengeImageGridTreeEntry_Challenge(int32 EntryPoint);
	void EndHighlight();
	void StartHighlight();
	void Construct();
	void OnChallengeInfoSet(bool bIsComplete, bool bIsLocked, bool bCompact, bool HideRewards);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnPartyAssistEnabledChanged(bool bIsPartyAssistEnabled);
	void BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChallengeImageGridTreeEntry_Challenge_C">();
	}
	static class UChallengeImageGridTreeEntry_Challenge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChallengeImageGridTreeEntry_Challenge_C>();
	}
};
static_assert(alignof(UChallengeImageGridTreeEntry_Challenge_C) == 0x000008, "Wrong alignment on UChallengeImageGridTreeEntry_Challenge_C");
static_assert(sizeof(UChallengeImageGridTreeEntry_Challenge_C) == 0x0002D8, "Wrong size on UChallengeImageGridTreeEntry_Challenge_C");
static_assert(offsetof(UChallengeImageGridTreeEntry_Challenge_C, UberGraphFrame) == 0x000288, "Member 'UChallengeImageGridTreeEntry_Challenge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChallengeImageGridTreeEntry_Challenge_C, HoverPulse) == 0x000290, "Member 'UChallengeImageGridTreeEntry_Challenge_C::HoverPulse' has a wrong offset!");
static_assert(offsetof(UChallengeImageGridTreeEntry_Challenge_C, OnHover) == 0x000298, "Member 'UChallengeImageGridTreeEntry_Challenge_C::OnHover' has a wrong offset!");
static_assert(offsetof(UChallengeImageGridTreeEntry_Challenge_C, ChallengeDescriptionHB) == 0x0002A0, "Member 'UChallengeImageGridTreeEntry_Challenge_C::ChallengeDescriptionHB' has a wrong offset!");
static_assert(offsetof(UChallengeImageGridTreeEntry_Challenge_C, DotSwitcher) == 0x0002A8, "Member 'UChallengeImageGridTreeEntry_Challenge_C::DotSwitcher' has a wrong offset!");
static_assert(offsetof(UChallengeImageGridTreeEntry_Challenge_C, GridNumberEntry) == 0x0002B0, "Member 'UChallengeImageGridTreeEntry_Challenge_C::GridNumberEntry' has a wrong offset!");
static_assert(offsetof(UChallengeImageGridTreeEntry_Challenge_C, ImageLockIcon) == 0x0002B8, "Member 'UChallengeImageGridTreeEntry_Challenge_C::ImageLockIcon' has a wrong offset!");
static_assert(offsetof(UChallengeImageGridTreeEntry_Challenge_C, PuzzlePiece) == 0x0002C0, "Member 'UChallengeImageGridTreeEntry_Challenge_C::PuzzlePiece' has a wrong offset!");
static_assert(offsetof(UChallengeImageGridTreeEntry_Challenge_C, SB_MainSize) == 0x0002C8, "Member 'UChallengeImageGridTreeEntry_Challenge_C::SB_MainSize' has a wrong offset!");
static_assert(offsetof(UChallengeImageGridTreeEntry_Challenge_C, TextDoneIndicator) == 0x0002D0, "Member 'UChallengeImageGridTreeEntry_Challenge_C::TextDoneIndicator' has a wrong offset!");

}

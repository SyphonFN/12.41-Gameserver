#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaChallengePageEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaChallengePageEntry.AthenaChallengePageEntry_C
// 0x0088 (0x0318 - 0x0290)
class UAthenaChallengePageEntry_C final : public UAthenaChallengeWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InGameMinusSelected;                               // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InGameMinusHovered;                                // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected;                                          // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BottomBar;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ChallengeDescription_Border;                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLockIcon;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftSideBar;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          PopUpBodyCommonBorder;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                RewardDescriptions_Border;                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RewardsSizeBox;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RightSideBar;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectedStateBacking;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxMinusStyleSize;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextDoneIndicator;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsInGame;                                          // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsHovered;                                        // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsSelected;                                       // 0x0312(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AthenaChallengePageEntry(int32 EntryPoint);
	void Play_On_Hovered();
	void Construct();
	void OnSetState(bool bIsCompleted, bool bIsLocked);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void BP_OnIsLastEntrySet(bool bIsLastEntry);
	void BP_OnIsInGameSet(bool bIsInGame);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void SetComplete();
	void SetLocked();
	void SetDefault();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChallengePageEntry_C">();
	}
	static class UAthenaChallengePageEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChallengePageEntry_C>();
	}
};
static_assert(alignof(UAthenaChallengePageEntry_C) == 0x000008, "Wrong alignment on UAthenaChallengePageEntry_C");
static_assert(sizeof(UAthenaChallengePageEntry_C) == 0x000318, "Wrong size on UAthenaChallengePageEntry_C");
static_assert(offsetof(UAthenaChallengePageEntry_C, UberGraphFrame) == 0x000290, "Member 'UAthenaChallengePageEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, InGameMinusSelected) == 0x000298, "Member 'UAthenaChallengePageEntry_C::InGameMinusSelected' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, InGameMinusHovered) == 0x0002A0, "Member 'UAthenaChallengePageEntry_C::InGameMinusHovered' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, Selected) == 0x0002A8, "Member 'UAthenaChallengePageEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, Hovered) == 0x0002B0, "Member 'UAthenaChallengePageEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, BottomBar) == 0x0002B8, "Member 'UAthenaChallengePageEntry_C::BottomBar' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, ChallengeDescription_Border) == 0x0002C0, "Member 'UAthenaChallengePageEntry_C::ChallengeDescription_Border' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, ImageLockIcon) == 0x0002C8, "Member 'UAthenaChallengePageEntry_C::ImageLockIcon' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, LeftSideBar) == 0x0002D0, "Member 'UAthenaChallengePageEntry_C::LeftSideBar' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, PopUpBodyCommonBorder) == 0x0002D8, "Member 'UAthenaChallengePageEntry_C::PopUpBodyCommonBorder' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, RewardDescriptions_Border) == 0x0002E0, "Member 'UAthenaChallengePageEntry_C::RewardDescriptions_Border' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, RewardsSizeBox) == 0x0002E8, "Member 'UAthenaChallengePageEntry_C::RewardsSizeBox' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, RightSideBar) == 0x0002F0, "Member 'UAthenaChallengePageEntry_C::RightSideBar' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, SelectedStateBacking) == 0x0002F8, "Member 'UAthenaChallengePageEntry_C::SelectedStateBacking' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, SizeBoxMinusStyleSize) == 0x000300, "Member 'UAthenaChallengePageEntry_C::SizeBoxMinusStyleSize' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, TextDoneIndicator) == 0x000308, "Member 'UAthenaChallengePageEntry_C::TextDoneIndicator' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, IsInGame) == 0x000310, "Member 'UAthenaChallengePageEntry_C::IsInGame' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, bIsHovered) == 0x000311, "Member 'UAthenaChallengePageEntry_C::bIsHovered' has a wrong offset!");
static_assert(offsetof(UAthenaChallengePageEntry_C, bIsSelected) == 0x000312, "Member 'UAthenaChallengePageEntry_C::bIsSelected' has a wrong offset!");

}

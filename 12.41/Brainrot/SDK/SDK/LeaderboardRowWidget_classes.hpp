#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeaderboardRowWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LeaderboardRowWidget.LeaderboardRowWidget_C
// 0x0040 (0x0BE8 - 0x0BA8)
class ULeaderboardRowWidget_C final : public UFortLeaderboardEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BA8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hovered;                                           // 0x0BB0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected_Hovered;                                  // 0x0BB8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected_Direct;                                   // 0x0BC0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       Rank;                                              // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       StatValue;                                         // 0x0BD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       User;                                              // 0x0BD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Is_selected;                                       // 0x0BE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Hovered;                                        // 0x0BE1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_LeaderboardRowWidget(int32 EntryPoint);
	void BP_OnDeselected();
	void BP_OnSelected();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void BP_OnClicked();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void SetDataDirect(class UFortLeaderboardRowProxyInstance* NewData);
	void Refresh(class UFortLeaderboardRowProxyInstance* RowObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LeaderboardRowWidget_C">();
	}
	static class ULeaderboardRowWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeaderboardRowWidget_C>();
	}
};
static_assert(alignof(ULeaderboardRowWidget_C) == 0x000008, "Wrong alignment on ULeaderboardRowWidget_C");
static_assert(sizeof(ULeaderboardRowWidget_C) == 0x000BE8, "Wrong size on ULeaderboardRowWidget_C");
static_assert(offsetof(ULeaderboardRowWidget_C, UberGraphFrame) == 0x000BA8, "Member 'ULeaderboardRowWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULeaderboardRowWidget_C, Hovered) == 0x000BB0, "Member 'ULeaderboardRowWidget_C::Hovered' has a wrong offset!");
static_assert(offsetof(ULeaderboardRowWidget_C, Selected_Hovered) == 0x000BB8, "Member 'ULeaderboardRowWidget_C::Selected_Hovered' has a wrong offset!");
static_assert(offsetof(ULeaderboardRowWidget_C, Selected_Direct) == 0x000BC0, "Member 'ULeaderboardRowWidget_C::Selected_Direct' has a wrong offset!");
static_assert(offsetof(ULeaderboardRowWidget_C, Rank) == 0x000BC8, "Member 'ULeaderboardRowWidget_C::Rank' has a wrong offset!");
static_assert(offsetof(ULeaderboardRowWidget_C, StatValue) == 0x000BD0, "Member 'ULeaderboardRowWidget_C::StatValue' has a wrong offset!");
static_assert(offsetof(ULeaderboardRowWidget_C, User) == 0x000BD8, "Member 'ULeaderboardRowWidget_C::User' has a wrong offset!");
static_assert(offsetof(ULeaderboardRowWidget_C, Is_selected) == 0x000BE0, "Member 'ULeaderboardRowWidget_C::Is_selected' has a wrong offset!");
static_assert(offsetof(ULeaderboardRowWidget_C, Is_Hovered) == 0x000BE1, "Member 'ULeaderboardRowWidget_C::Is_Hovered' has a wrong offset!");

}

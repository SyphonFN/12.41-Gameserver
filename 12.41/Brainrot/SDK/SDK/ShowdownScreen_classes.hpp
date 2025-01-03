#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShowdownScreen

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShowdownScreen.ShowdownScreen_C
// 0x00C8 (0x0578 - 0x04B0)
class UShowdownScreen_C final : public UFortShowdownScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x04B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x04C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCircleArrowButton_C*                   CircleArrowButton_Left;                            // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircleArrowButton_C*                   CircleArrowButton_Right;                           // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_ErrorSwitcher;                // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NoTournamentsContent;                              // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_NoTournamentContent;                       // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentTile_C*              ShowdownTournamentTile;                            // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentTile_C*              ShowdownTournamentTile_0;                          // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentTile_C*              ShowdownTournamentTile_1;                          // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Posters;                                   // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSwipePanel*                        SwipePanel;                                        // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TournamentsContent;                                // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    Input_ShowAbout;                                   // 0x0528(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSlateColor                            PrimaryColor;                                      // 0x0538(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                    Input_ShowDetails;                                 // 0x0560(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWidget*                                SelectedTile;                                      // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShowdownScreen(int32 EntryPoint);
	void BP_OnDeactivated();
	void SelectedEndTournament(bool bEndIsSelected);
	void SelectedFrontTournament(bool bFrontIsSelected);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TournamentListSelect(class UWidget* CurrentWidget);
	void OnInputModeChanged(bool bUsingGamepad);
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_4_OnFortSwipeEvent__DelegateSignature();
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature();
	void BP_OnActivated();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownScreen_C">();
	}
	static class UShowdownScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownScreen_C>();
	}
};
static_assert(alignof(UShowdownScreen_C) == 0x000008, "Wrong alignment on UShowdownScreen_C");
static_assert(sizeof(UShowdownScreen_C) == 0x000578, "Wrong size on UShowdownScreen_C");
static_assert(offsetof(UShowdownScreen_C, UberGraphFrame) == 0x0004B0, "Member 'UShowdownScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, Outro) == 0x0004B8, "Member 'UShowdownScreen_C::Outro' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, Intro) == 0x0004C0, "Member 'UShowdownScreen_C::Intro' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, CircleArrowButton_Left) == 0x0004C8, "Member 'UShowdownScreen_C::CircleArrowButton_Left' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, CircleArrowButton_Right) == 0x0004D0, "Member 'UShowdownScreen_C::CircleArrowButton_Right' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, CommonWidgetSwitcher_ErrorSwitcher) == 0x0004D8, "Member 'UShowdownScreen_C::CommonWidgetSwitcher_ErrorSwitcher' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, Image_BG) == 0x0004E0, "Member 'UShowdownScreen_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, NoTournamentsContent) == 0x0004E8, "Member 'UShowdownScreen_C::NoTournamentsContent' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, Overlay_NoTournamentContent) == 0x0004F0, "Member 'UShowdownScreen_C::Overlay_NoTournamentContent' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, ShowdownTournamentTile) == 0x0004F8, "Member 'UShowdownScreen_C::ShowdownTournamentTile' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, ShowdownTournamentTile_0) == 0x000500, "Member 'UShowdownScreen_C::ShowdownTournamentTile_0' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, ShowdownTournamentTile_1) == 0x000508, "Member 'UShowdownScreen_C::ShowdownTournamentTile_1' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, SizeBox_Posters) == 0x000510, "Member 'UShowdownScreen_C::SizeBox_Posters' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, SwipePanel) == 0x000518, "Member 'UShowdownScreen_C::SwipePanel' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, TournamentsContent) == 0x000520, "Member 'UShowdownScreen_C::TournamentsContent' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, Input_ShowAbout) == 0x000528, "Member 'UShowdownScreen_C::Input_ShowAbout' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, PrimaryColor) == 0x000538, "Member 'UShowdownScreen_C::PrimaryColor' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, Input_ShowDetails) == 0x000560, "Member 'UShowdownScreen_C::Input_ShowDetails' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, SelectedTile) == 0x000570, "Member 'UShowdownScreen_C::SelectedTile' has a wrong offset!");

}


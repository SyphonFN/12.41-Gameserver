#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialHenchmanFactionSelection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C
// 0x0188 (0x05A0 - 0x0418)
class USpatialHenchmanFactionSelection_C final : public UAthenaSpatialHenchmenInspectionRoom
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnMissionSelectConfirmation;                       // 0x0420(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PlayOnDualDarkening;                               // 0x0428(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       IntroIntoEgoDetails;                               // 0x0430(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       IntroIntoAlterDetails;                             // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnActivate;                                        // 0x0440(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnEitherOrIntro;                                   // 0x0448(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       AcceptedMissionText;                               // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       ActivatableWidgetSwitcher_ShowAbout;               // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoloButton_C*                          Button_MoreInfo;                                   // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Containment_Left;                                  // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Containment_Right;                                 // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   ExplanationText;                                   // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FactionLogo_C;                                     // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FactionLogo_C_1;                                   // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FactionLogo_R;                                     // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FactionLogo_R_1;                                   // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow;                                              // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow_1;                                            // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow_2;                                            // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NameGlow;                                          // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_screens;                                   // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PanelDarkening_Left;                               // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PanelDarkening_Right;                              // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PanelDarkLeft;                                     // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                PanelDarkRight;                                    // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       POI_Name;                                          // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SZAlter;                                           // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SZBackButton;                                      // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SZBuyBP;                                           // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SZEgo;                                             // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SZEitherOrPanelButtons;                            // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SZLanding;                                         // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SZScreenInfo;                                      // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Alter;                                        // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Alter_1;                                      // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Alter_2;                                      // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Alter_C;                                      // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Alter_C_1;                                    // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Alter_C_2;                                    // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Alter_R;                                      // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Alter_R_1;                                    // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Alter_R_2;                                    // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Ego;                                               // 0x0570(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Alter;                                             // 0x0588(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_SpatialHenchmanFactionSelection(int32 EntryPoint);
	void Play_On_Accept_Confirm();
	void BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_5_OnAboutModalClosedDynamic__DelegateSignature();
	void OnUpdatedRoomState();
	void BndEvt__Button_EgoInspection_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_AlterInspection_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__MissionDetailsEgo_K2Node_ComponentBoundEvent_3_OnPlayAcceptedMissionAnim__DelegateSignature();
	void BndEvt__MissionDetailsAlter_K2Node_ComponentBoundEvent_2_OnPlayAcceptedMissionAnim__DelegateSignature();
	void SetUserFocusOnSelection();
	void BndEvt__Button_MoreInfo_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void Start_BackToHenchmanInspection();
	void Construct();
	void Start_BackToHenchmanRoom();
	void BP_OnActivated();
	void EgoInspectionClicked(class UCommonButton* Button);
	void AlterInspectionClicked(class UCommonButton* Button);
	void OnActivateFactionOptions();
	void ForwardEitherOrAnims();
	void ReverseEitherOrAnims();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpatialHenchmanFactionSelection_C">();
	}
	static class USpatialHenchmanFactionSelection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpatialHenchmanFactionSelection_C>();
	}
};
static_assert(alignof(USpatialHenchmanFactionSelection_C) == 0x000008, "Wrong alignment on USpatialHenchmanFactionSelection_C");
static_assert(sizeof(USpatialHenchmanFactionSelection_C) == 0x0005A0, "Wrong size on USpatialHenchmanFactionSelection_C");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, UberGraphFrame) == 0x000418, "Member 'USpatialHenchmanFactionSelection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, OnMissionSelectConfirmation) == 0x000420, "Member 'USpatialHenchmanFactionSelection_C::OnMissionSelectConfirmation' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, PlayOnDualDarkening) == 0x000428, "Member 'USpatialHenchmanFactionSelection_C::PlayOnDualDarkening' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, IntroIntoEgoDetails) == 0x000430, "Member 'USpatialHenchmanFactionSelection_C::IntroIntoEgoDetails' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, IntroIntoAlterDetails) == 0x000438, "Member 'USpatialHenchmanFactionSelection_C::IntroIntoAlterDetails' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, OnActivate) == 0x000440, "Member 'USpatialHenchmanFactionSelection_C::OnActivate' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, OnEitherOrIntro) == 0x000448, "Member 'USpatialHenchmanFactionSelection_C::OnEitherOrIntro' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, AcceptedMissionText) == 0x000450, "Member 'USpatialHenchmanFactionSelection_C::AcceptedMissionText' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, ActivatableWidgetSwitcher_ShowAbout) == 0x000458, "Member 'USpatialHenchmanFactionSelection_C::ActivatableWidgetSwitcher_ShowAbout' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Button_MoreInfo) == 0x000460, "Member 'USpatialHenchmanFactionSelection_C::Button_MoreInfo' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Containment_Left) == 0x000468, "Member 'USpatialHenchmanFactionSelection_C::Containment_Left' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Containment_Right) == 0x000470, "Member 'USpatialHenchmanFactionSelection_C::Containment_Right' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, ExplanationText) == 0x000478, "Member 'USpatialHenchmanFactionSelection_C::ExplanationText' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, FactionLogo_C) == 0x000480, "Member 'USpatialHenchmanFactionSelection_C::FactionLogo_C' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, FactionLogo_C_1) == 0x000488, "Member 'USpatialHenchmanFactionSelection_C::FactionLogo_C_1' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, FactionLogo_R) == 0x000490, "Member 'USpatialHenchmanFactionSelection_C::FactionLogo_R' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, FactionLogo_R_1) == 0x000498, "Member 'USpatialHenchmanFactionSelection_C::FactionLogo_R_1' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Glow) == 0x0004A0, "Member 'USpatialHenchmanFactionSelection_C::Glow' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Glow_1) == 0x0004A8, "Member 'USpatialHenchmanFactionSelection_C::Glow_1' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Glow_2) == 0x0004B0, "Member 'USpatialHenchmanFactionSelection_C::Glow_2' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, NameGlow) == 0x0004B8, "Member 'USpatialHenchmanFactionSelection_C::NameGlow' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Overlay_screens) == 0x0004C0, "Member 'USpatialHenchmanFactionSelection_C::Overlay_screens' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, PanelDarkening_Left) == 0x0004C8, "Member 'USpatialHenchmanFactionSelection_C::PanelDarkening_Left' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, PanelDarkening_Right) == 0x0004D0, "Member 'USpatialHenchmanFactionSelection_C::PanelDarkening_Right' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, PanelDarkLeft) == 0x0004D8, "Member 'USpatialHenchmanFactionSelection_C::PanelDarkLeft' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, PanelDarkRight) == 0x0004E0, "Member 'USpatialHenchmanFactionSelection_C::PanelDarkRight' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, POI_Name) == 0x0004E8, "Member 'USpatialHenchmanFactionSelection_C::POI_Name' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, SZAlter) == 0x0004F0, "Member 'USpatialHenchmanFactionSelection_C::SZAlter' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, SZBackButton) == 0x0004F8, "Member 'USpatialHenchmanFactionSelection_C::SZBackButton' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, SZBuyBP) == 0x000500, "Member 'USpatialHenchmanFactionSelection_C::SZBuyBP' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, SZEgo) == 0x000508, "Member 'USpatialHenchmanFactionSelection_C::SZEgo' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, SZEitherOrPanelButtons) == 0x000510, "Member 'USpatialHenchmanFactionSelection_C::SZEitherOrPanelButtons' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, SZLanding) == 0x000518, "Member 'USpatialHenchmanFactionSelection_C::SZLanding' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, SZScreenInfo) == 0x000520, "Member 'USpatialHenchmanFactionSelection_C::SZScreenInfo' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Text_Alter) == 0x000528, "Member 'USpatialHenchmanFactionSelection_C::Text_Alter' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Text_Alter_1) == 0x000530, "Member 'USpatialHenchmanFactionSelection_C::Text_Alter_1' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Text_Alter_2) == 0x000538, "Member 'USpatialHenchmanFactionSelection_C::Text_Alter_2' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Text_Alter_C) == 0x000540, "Member 'USpatialHenchmanFactionSelection_C::Text_Alter_C' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Text_Alter_C_1) == 0x000548, "Member 'USpatialHenchmanFactionSelection_C::Text_Alter_C_1' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Text_Alter_C_2) == 0x000550, "Member 'USpatialHenchmanFactionSelection_C::Text_Alter_C_2' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Text_Alter_R) == 0x000558, "Member 'USpatialHenchmanFactionSelection_C::Text_Alter_R' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Text_Alter_R_1) == 0x000560, "Member 'USpatialHenchmanFactionSelection_C::Text_Alter_R_1' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Text_Alter_R_2) == 0x000568, "Member 'USpatialHenchmanFactionSelection_C::Text_Alter_R_2' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Ego) == 0x000570, "Member 'USpatialHenchmanFactionSelection_C::Ego' has a wrong offset!");
static_assert(offsetof(USpatialHenchmanFactionSelection_C, Alter) == 0x000588, "Member 'USpatialHenchmanFactionSelection_C::Alter' has a wrong offset!");

}

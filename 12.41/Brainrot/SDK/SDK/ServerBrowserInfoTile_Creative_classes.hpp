#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ServerBrowserInfoTile_Creative

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ServerBrowserInfoTile_Creative.ServerBrowserInfoTile_Creative_C
// 0x00D8 (0x0CC0 - 0x0BE8)
class UServerBrowserInfoTile_Creative_C final : public UFortCreativeServerInfoTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BE8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowCreatorName;                                   // 0x0BF0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0BF8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected_1;                                        // 0x0C00(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ViewPlayers;                                       // 0x0C08(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected;                                          // 0x0C10(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USimpleCommonButtonWithInput_C*         Button_CloseFriends;                               // 0x0C18(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleCommonButtonWithInput_C*         Button_ShowFriends;                                // 0x0C20(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_ServerDetails;                        // 0x0C28(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         CreatedByText;                                     // 0x0C30(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_28;                                          // 0x0C38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_112;                                         // 0x0C40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_113;                                         // 0x0C48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_114;                                         // 0x0C50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_115;                                         // 0x0C58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_116;                                         // 0x0C60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ColorFill;                                   // 0x0C68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Gradient;                                    // 0x0C70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ServerImage;                                 // 0x0C78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               JoinServerContent;                                 // 0x0C80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              Launch_Overlay;                                    // 0x0C88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               WarningOverlay;                                    // 0x0C90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         FriendListOutput;                                  // 0x0C98(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          PlayersShown;                                      // 0x0CA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NewServerIsPrivate;                                // 0x0CA9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CA8[0x2];                                     // 0x0CAA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           DisabledColor;                                     // 0x0CAC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ServerBrowserInfoTile_Creative(int32 EntryPoint);
	void SetBackgroundImage(int32 ArrayIndex);
	void Construct();
	void OnOwnerNameUpdated();
	void OnLaunchButtonEnableChanged(bool bEnableValue);
	void RequestUpdateBackgroundImage(int32 FriendListHash);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void InputMethodChanged(ECommonInputType bNewInputType);
	void InitializeSelectedButton();
	void BndEvt__Button_ShowFriends_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BP_OnDeselected();
	void BP_OnSelected();
	void BndEvt__Button_CloseFriends_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnLoaded_296230CE4FECC5810C4B9AB00A3162F7(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ServerBrowserInfoTile_Creative_C">();
	}
	static class UServerBrowserInfoTile_Creative_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UServerBrowserInfoTile_Creative_C>();
	}
};
static_assert(alignof(UServerBrowserInfoTile_Creative_C) == 0x000008, "Wrong alignment on UServerBrowserInfoTile_Creative_C");
static_assert(sizeof(UServerBrowserInfoTile_Creative_C) == 0x000CC0, "Wrong size on UServerBrowserInfoTile_Creative_C");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, UberGraphFrame) == 0x000BE8, "Member 'UServerBrowserInfoTile_Creative_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, ShowCreatorName) == 0x000BF0, "Member 'UServerBrowserInfoTile_Creative_C::ShowCreatorName' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Hover) == 0x000BF8, "Member 'UServerBrowserInfoTile_Creative_C::Hover' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Selected_1) == 0x000C00, "Member 'UServerBrowserInfoTile_Creative_C::Selected_1' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, ViewPlayers) == 0x000C08, "Member 'UServerBrowserInfoTile_Creative_C::ViewPlayers' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Selected) == 0x000C10, "Member 'UServerBrowserInfoTile_Creative_C::Selected' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Button_CloseFriends) == 0x000C18, "Member 'UServerBrowserInfoTile_Creative_C::Button_CloseFriends' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Button_ShowFriends) == 0x000C20, "Member 'UServerBrowserInfoTile_Creative_C::Button_ShowFriends' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, CommonBorder_ServerDetails) == 0x000C28, "Member 'UServerBrowserInfoTile_Creative_C::CommonBorder_ServerDetails' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, CreatedByText) == 0x000C30, "Member 'UServerBrowserInfoTile_Creative_C::CreatedByText' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Image_28) == 0x000C38, "Member 'UServerBrowserInfoTile_Creative_C::Image_28' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Image_112) == 0x000C40, "Member 'UServerBrowserInfoTile_Creative_C::Image_112' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Image_113) == 0x000C48, "Member 'UServerBrowserInfoTile_Creative_C::Image_113' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Image_114) == 0x000C50, "Member 'UServerBrowserInfoTile_Creative_C::Image_114' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Image_115) == 0x000C58, "Member 'UServerBrowserInfoTile_Creative_C::Image_115' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Image_116) == 0x000C60, "Member 'UServerBrowserInfoTile_Creative_C::Image_116' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Image_ColorFill) == 0x000C68, "Member 'UServerBrowserInfoTile_Creative_C::Image_ColorFill' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Image_Gradient) == 0x000C70, "Member 'UServerBrowserInfoTile_Creative_C::Image_Gradient' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Image_ServerImage) == 0x000C78, "Member 'UServerBrowserInfoTile_Creative_C::Image_ServerImage' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, JoinServerContent) == 0x000C80, "Member 'UServerBrowserInfoTile_Creative_C::JoinServerContent' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, Launch_Overlay) == 0x000C88, "Member 'UServerBrowserInfoTile_Creative_C::Launch_Overlay' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, WarningOverlay) == 0x000C90, "Member 'UServerBrowserInfoTile_Creative_C::WarningOverlay' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, FriendListOutput) == 0x000C98, "Member 'UServerBrowserInfoTile_Creative_C::FriendListOutput' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, PlayersShown) == 0x000CA8, "Member 'UServerBrowserInfoTile_Creative_C::PlayersShown' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, NewServerIsPrivate) == 0x000CA9, "Member 'UServerBrowserInfoTile_Creative_C::NewServerIsPrivate' has a wrong offset!");
static_assert(offsetof(UServerBrowserInfoTile_Creative_C, DisabledColor) == 0x000CAC, "Member 'UServerBrowserInfoTile_Creative_C::DisabledColor' has a wrong offset!");

}

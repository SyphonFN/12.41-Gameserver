#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSeasonLevelConfirmationScreen

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C
// 0x0118 (0x0688 - 0x0570)
class UAthenaSeasonLevelConfirmationScreen_C final : public UFortSeasonLevelConfirmationScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* AthenaDirectAcquisitonDetails_RefundDisclaimer;    // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               BulkMessageAlertSB;                                // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       BulkTierMessage;                                   // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                         CloseButton;                                       // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ConfirmState;                                      // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         DecreasePurchaseTier;                              // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               FramingWidget;                                     // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       HeaderText;                                        // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         IncreasePurchaseTier;                              // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ItemRewardsSB;                                     // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PurchaseBtn;                                       // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PurchasingState;                                   // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  StateSwitcher;                                     // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TierTitle;                                         // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VBuckIcon;                                         // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       VBuckPurchasePrice;                                // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<int32, class UFortSeasonPassLevelInfo*>  AllBattlePassLevels;                               // 0x05F8(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortSeasonPassLevelInfo*               BaseLevel;                                         // 0x0648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BuyExtraLevels;                                    // 0x0650(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxBattlePassLevel;                                // 0x0654(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 BuyTierOfferID;                                    // 0x0658(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         MaxExtraLevelsYouCanBuyInOneGo;                    // 0x0668(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E02[0x4];                                     // 0x066C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaSeasonReward_C*                  FirstWidget;                                       // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    Handle_BackAction;                                 // 0x0678(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_AthenaSeasonLevelConfirmationScreen(int32 EntryPoint);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BP_OnActivated();
	void Construct();
	void BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_429_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_396_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnPurchaseFinished(bool bSuccess, const TArray<struct FPurchasedItemInfo>& PurchasedItems, const class FString& OfferId);
	void InitWidgets();
	void Setup(class UFortSeasonPassLevelInfo* Level, TMap<int32, class UFortSeasonPassLevelInfo*>& AllLevels, int32 MaxLevel, int32 PurchaseLevel);
	void GetHeaderText(class FText* Result, int32* TierPurchaseNumber);
	void GetRewards(TArray<class UFortItem*>* Output_Get);
	class FText GetVBuckPrice();
	int32 GetNumberOfTiersBuying();
	void GenerateItemWidgets();
	void ModifyNumberOfTiersToBuy(int32 Delta);
	void HandleBack(bool* bPassThrough);
	void SelectReward();
	class UWidget* GetWidgetForFramingViewedItem();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSeasonLevelConfirmationScreen_C">();
	}
	static class UAthenaSeasonLevelConfirmationScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSeasonLevelConfirmationScreen_C>();
	}
};
static_assert(alignof(UAthenaSeasonLevelConfirmationScreen_C) == 0x000008, "Wrong alignment on UAthenaSeasonLevelConfirmationScreen_C");
static_assert(sizeof(UAthenaSeasonLevelConfirmationScreen_C) == 0x000688, "Wrong size on UAthenaSeasonLevelConfirmationScreen_C");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, UberGraphFrame) == 0x000570, "Member 'UAthenaSeasonLevelConfirmationScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, AthenaDirectAcquisitonDetails_RefundDisclaimer) == 0x000578, "Member 'UAthenaSeasonLevelConfirmationScreen_C::AthenaDirectAcquisitonDetails_RefundDisclaimer' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, BulkMessageAlertSB) == 0x000580, "Member 'UAthenaSeasonLevelConfirmationScreen_C::BulkMessageAlertSB' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, BulkTierMessage) == 0x000588, "Member 'UAthenaSeasonLevelConfirmationScreen_C::BulkTierMessage' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, CloseButton) == 0x000590, "Member 'UAthenaSeasonLevelConfirmationScreen_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, ConfirmState) == 0x000598, "Member 'UAthenaSeasonLevelConfirmationScreen_C::ConfirmState' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, DecreasePurchaseTier) == 0x0005A0, "Member 'UAthenaSeasonLevelConfirmationScreen_C::DecreasePurchaseTier' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, FramingWidget) == 0x0005A8, "Member 'UAthenaSeasonLevelConfirmationScreen_C::FramingWidget' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, HeaderText) == 0x0005B0, "Member 'UAthenaSeasonLevelConfirmationScreen_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, IncreasePurchaseTier) == 0x0005B8, "Member 'UAthenaSeasonLevelConfirmationScreen_C::IncreasePurchaseTier' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, ItemRewardsSB) == 0x0005C0, "Member 'UAthenaSeasonLevelConfirmationScreen_C::ItemRewardsSB' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, PurchaseBtn) == 0x0005C8, "Member 'UAthenaSeasonLevelConfirmationScreen_C::PurchaseBtn' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, PurchasingState) == 0x0005D0, "Member 'UAthenaSeasonLevelConfirmationScreen_C::PurchasingState' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, StateSwitcher) == 0x0005D8, "Member 'UAthenaSeasonLevelConfirmationScreen_C::StateSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, TierTitle) == 0x0005E0, "Member 'UAthenaSeasonLevelConfirmationScreen_C::TierTitle' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, VBuckIcon) == 0x0005E8, "Member 'UAthenaSeasonLevelConfirmationScreen_C::VBuckIcon' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, VBuckPurchasePrice) == 0x0005F0, "Member 'UAthenaSeasonLevelConfirmationScreen_C::VBuckPurchasePrice' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, AllBattlePassLevels) == 0x0005F8, "Member 'UAthenaSeasonLevelConfirmationScreen_C::AllBattlePassLevels' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, BaseLevel) == 0x000648, "Member 'UAthenaSeasonLevelConfirmationScreen_C::BaseLevel' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, BuyExtraLevels) == 0x000650, "Member 'UAthenaSeasonLevelConfirmationScreen_C::BuyExtraLevels' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, MaxBattlePassLevel) == 0x000654, "Member 'UAthenaSeasonLevelConfirmationScreen_C::MaxBattlePassLevel' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, BuyTierOfferID) == 0x000658, "Member 'UAthenaSeasonLevelConfirmationScreen_C::BuyTierOfferID' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, MaxExtraLevelsYouCanBuyInOneGo) == 0x000668, "Member 'UAthenaSeasonLevelConfirmationScreen_C::MaxExtraLevelsYouCanBuyInOneGo' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, FirstWidget) == 0x000670, "Member 'UAthenaSeasonLevelConfirmationScreen_C::FirstWidget' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationScreen_C, Handle_BackAction) == 0x000678, "Member 'UAthenaSeasonLevelConfirmationScreen_C::Handle_BackAction' has a wrong offset!");

}


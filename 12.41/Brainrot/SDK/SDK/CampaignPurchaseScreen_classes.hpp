#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CampaignPurchaseScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CampaignPurchaseScreen.CampaignPurchaseScreen_C
// 0x0048 (0x03A8 - 0x0360)
class UCampaignPurchaseScreen_C final : public UFortCampaignPurchaseScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SwitchTextures;                                    // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                          WasLastPlayForward;                                // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65AE[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProgressModalWidget_C*                 LeavingMatchmakingDialog;                          // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MIDMinusKeyart;                                    // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CycleTimer;                                        // 0x0388(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture*>                       TextureCycle;                                      // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         TextureCycleIndex;                                 // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CampaignPurchaseScreen(int32 EntryPoint);
	void OnImageCycleTimeElapsed();
	void BP_OnActivated();
	void BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void ToggleTimer(bool Enabled);
	void InitializeTextureCycle();
	void AdvanceTextureCycle();
	void Update();
	bool IsBusyMatchmaking();
	void InitializeRedeemButton();
	void IsMinorShutdownWarningEnabled(bool* Enabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CampaignPurchaseScreen_C">();
	}
	static class UCampaignPurchaseScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCampaignPurchaseScreen_C>();
	}
};
static_assert(alignof(UCampaignPurchaseScreen_C) == 0x000008, "Wrong alignment on UCampaignPurchaseScreen_C");
static_assert(sizeof(UCampaignPurchaseScreen_C) == 0x0003A8, "Wrong size on UCampaignPurchaseScreen_C");
static_assert(offsetof(UCampaignPurchaseScreen_C, UberGraphFrame) == 0x000360, "Member 'UCampaignPurchaseScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, SwitchTextures) == 0x000368, "Member 'UCampaignPurchaseScreen_C::SwitchTextures' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, WasLastPlayForward) == 0x000370, "Member 'UCampaignPurchaseScreen_C::WasLastPlayForward' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, LeavingMatchmakingDialog) == 0x000378, "Member 'UCampaignPurchaseScreen_C::LeavingMatchmakingDialog' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, MIDMinusKeyart) == 0x000380, "Member 'UCampaignPurchaseScreen_C::MIDMinusKeyart' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, CycleTimer) == 0x000388, "Member 'UCampaignPurchaseScreen_C::CycleTimer' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, TextureCycle) == 0x000390, "Member 'UCampaignPurchaseScreen_C::TextureCycle' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, TextureCycleIndex) == 0x0003A0, "Member 'UCampaignPurchaseScreen_C::TextureCycleIndex' has a wrong offset!");

}


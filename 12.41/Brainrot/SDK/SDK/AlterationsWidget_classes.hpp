#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlterationsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AlterationsWidget.AlterationsWidget_C
// 0x0088 (0x0358 - 0x02D0)
class UAlterationsWidget_C final : public UFortAlterationsWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          Border_PerksMessage;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderLocked;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderUnlocked;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkDivider_C*                         LockedUnlockedDivider;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxAlterationsLocked;                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxAlterationsUnlocked;                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIncludeName;                                      // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIncludeDescription;                               // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIncludeShortDescription;                          // 0x030A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          FirstAlterationComplete;                           // 0x030B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FirstLockedComplete;                               // 0x030C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EFortBrushSize                                IconSize;                                          // 0x030D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_490A[0x2];                                     // 0x030E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                RowPadding;                                        // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bUseLargeFormatNameOnly;                           // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_490B[0x3];                                     // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                Description_Padding;                               // 0x0324(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_490C[0x4];                                     // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           PerkAnimIntroTimer;                                // 0x0338(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         NextAnimToPlay;                                    // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                RowPadding2;                                       // 0x0344(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void Clear();
	void ClearAndInitialize(bool IntroAlterations);
	void Reset();
	void CreateAnimations(bool IntroAnims);
	void IntroAnim();
	void CenterWidget();
	void SetupBorders();
	void TriggerModificationAnim(int32 ModifiedSlotIndex);
	void SetupAlteration(class UCommonUserWidget* Alteration, class UFortAlterationInfo* AlterationInfo);
	class UCommonUserWidget* CreateAlterationWidget();
	void GenerateAlteration(class UFortAlterationInfo* AlterationInfo);
	void AddAlterationToVerticalbox(class UCommonUserWidget* Alteration, bool IsUnlocked);
	void UpdatePerksMessage();
	void Construct();
	void OnItemChanged(bool bIntroAlterations, bool bWasFavoritedChanged);
	void OnItemToCompareWithChanged();
	void OnStateChanged();
	void OnGenerateAlteration(class UFortAlterationInfo* AlterationInfo);
	void OnFocusFirstItem();
	void OnAlterationSlotIndexModifiedBP(int32 ModifiedIndex);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AlterationsWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AlterationsWidget_C">();
	}
	static class UAlterationsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAlterationsWidget_C>();
	}
};
static_assert(alignof(UAlterationsWidget_C) == 0x000008, "Wrong alignment on UAlterationsWidget_C");
static_assert(sizeof(UAlterationsWidget_C) == 0x000358, "Wrong size on UAlterationsWidget_C");
static_assert(offsetof(UAlterationsWidget_C, UberGraphFrame) == 0x0002D0, "Member 'UAlterationsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, Border_PerksMessage) == 0x0002D8, "Member 'UAlterationsWidget_C::Border_PerksMessage' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, BorderLocked) == 0x0002E0, "Member 'UAlterationsWidget_C::BorderLocked' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, BorderUnlocked) == 0x0002E8, "Member 'UAlterationsWidget_C::BorderUnlocked' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, LockedUnlockedDivider) == 0x0002F0, "Member 'UAlterationsWidget_C::LockedUnlockedDivider' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, VerticalBoxAlterationsLocked) == 0x0002F8, "Member 'UAlterationsWidget_C::VerticalBoxAlterationsLocked' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, VerticalBoxAlterationsUnlocked) == 0x000300, "Member 'UAlterationsWidget_C::VerticalBoxAlterationsUnlocked' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, bIncludeName) == 0x000308, "Member 'UAlterationsWidget_C::bIncludeName' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, bIncludeDescription) == 0x000309, "Member 'UAlterationsWidget_C::bIncludeDescription' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, bIncludeShortDescription) == 0x00030A, "Member 'UAlterationsWidget_C::bIncludeShortDescription' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, FirstAlterationComplete) == 0x00030B, "Member 'UAlterationsWidget_C::FirstAlterationComplete' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, FirstLockedComplete) == 0x00030C, "Member 'UAlterationsWidget_C::FirstLockedComplete' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, IconSize) == 0x00030D, "Member 'UAlterationsWidget_C::IconSize' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, RowPadding) == 0x000310, "Member 'UAlterationsWidget_C::RowPadding' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, bUseLargeFormatNameOnly) == 0x000320, "Member 'UAlterationsWidget_C::bUseLargeFormatNameOnly' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, Description_Padding) == 0x000324, "Member 'UAlterationsWidget_C::Description_Padding' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, PerkAnimIntroTimer) == 0x000338, "Member 'UAlterationsWidget_C::PerkAnimIntroTimer' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, NextAnimToPlay) == 0x000340, "Member 'UAlterationsWidget_C::NextAnimToPlay' has a wrong offset!");
static_assert(offsetof(UAlterationsWidget_C, RowPadding2) == 0x000344, "Member 'UAlterationsWidget_C::RowPadding2' has a wrong offset!");

}


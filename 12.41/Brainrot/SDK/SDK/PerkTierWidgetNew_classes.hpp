#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkTierWidgetNew

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PerkTierWidgetNew.PerkTierWidgetNew_C
// 0x0030 (0x02D8 - 0x02A8)
class UPerkTierWidgetNew_C final : public UFortPerkTierWidget_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           PerkList;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkWidgetNew_C*                       PerkWidgetNew;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkWidgetNew_C*                       PerkWidgetNew_83;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkWidgetNew_C*                       PerkWidgetNew_153;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIncludeName;                                      // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bFirstPerkDone;                                    // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIncludeDescription;                               // 0x02D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bUseLegacyFixedSizeIcons;                          // 0x02D3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	EFortBrushSize                                IconSize;                                          // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void InitializeSettings(bool Param_bIncludeName, bool Param_bIncludeDescription, bool Param_bUseLegacyFixedSizeIcons, EFortBrushSize Param_IconSize, const struct FFortUIPerkTier& Param_FortPerkTier);
	void Construct();
	void OnGeneratePerk(const struct FFortUIPerk& Perk, class UFortPerkWidget_NUI* PerkWidget);
	void ExecuteUbergraph_PerkTierWidgetNew(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PerkTierWidgetNew_C">();
	}
	static class UPerkTierWidgetNew_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerkTierWidgetNew_C>();
	}
};
static_assert(alignof(UPerkTierWidgetNew_C) == 0x000008, "Wrong alignment on UPerkTierWidgetNew_C");
static_assert(sizeof(UPerkTierWidgetNew_C) == 0x0002D8, "Wrong size on UPerkTierWidgetNew_C");
static_assert(offsetof(UPerkTierWidgetNew_C, UberGraphFrame) == 0x0002A8, "Member 'UPerkTierWidgetNew_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPerkTierWidgetNew_C, PerkList) == 0x0002B0, "Member 'UPerkTierWidgetNew_C::PerkList' has a wrong offset!");
static_assert(offsetof(UPerkTierWidgetNew_C, PerkWidgetNew) == 0x0002B8, "Member 'UPerkTierWidgetNew_C::PerkWidgetNew' has a wrong offset!");
static_assert(offsetof(UPerkTierWidgetNew_C, PerkWidgetNew_83) == 0x0002C0, "Member 'UPerkTierWidgetNew_C::PerkWidgetNew_83' has a wrong offset!");
static_assert(offsetof(UPerkTierWidgetNew_C, PerkWidgetNew_153) == 0x0002C8, "Member 'UPerkTierWidgetNew_C::PerkWidgetNew_153' has a wrong offset!");
static_assert(offsetof(UPerkTierWidgetNew_C, bIncludeName) == 0x0002D0, "Member 'UPerkTierWidgetNew_C::bIncludeName' has a wrong offset!");
static_assert(offsetof(UPerkTierWidgetNew_C, bFirstPerkDone) == 0x0002D1, "Member 'UPerkTierWidgetNew_C::bFirstPerkDone' has a wrong offset!");
static_assert(offsetof(UPerkTierWidgetNew_C, bIncludeDescription) == 0x0002D2, "Member 'UPerkTierWidgetNew_C::bIncludeDescription' has a wrong offset!");
static_assert(offsetof(UPerkTierWidgetNew_C, bUseLegacyFixedSizeIcons) == 0x0002D3, "Member 'UPerkTierWidgetNew_C::bUseLegacyFixedSizeIcons' has a wrong offset!");
static_assert(offsetof(UPerkTierWidgetNew_C, IconSize) == 0x0002D4, "Member 'UPerkTierWidgetNew_C::IconSize' has a wrong offset!");

}


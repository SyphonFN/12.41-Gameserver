#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativeLobbyAd

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CreativeLobbyAd.CreativeLobbyAd_C
// 0x0028 (0x02F0 - 0x02C8)
class UCreativeLobbyAd_C final : public UFortCreativeAdTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       Text_Description;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Header;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_SubHeader;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          Violator;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CreativeLobbyAd(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnCMSDataUpdated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CreativeLobbyAd_C">();
	}
	static class UCreativeLobbyAd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeLobbyAd_C>();
	}
};
static_assert(alignof(UCreativeLobbyAd_C) == 0x000008, "Wrong alignment on UCreativeLobbyAd_C");
static_assert(sizeof(UCreativeLobbyAd_C) == 0x0002F0, "Wrong size on UCreativeLobbyAd_C");
static_assert(offsetof(UCreativeLobbyAd_C, UberGraphFrame) == 0x0002C8, "Member 'UCreativeLobbyAd_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCreativeLobbyAd_C, Text_Description) == 0x0002D0, "Member 'UCreativeLobbyAd_C::Text_Description' has a wrong offset!");
static_assert(offsetof(UCreativeLobbyAd_C, Text_Header) == 0x0002D8, "Member 'UCreativeLobbyAd_C::Text_Header' has a wrong offset!");
static_assert(offsetof(UCreativeLobbyAd_C, Text_SubHeader) == 0x0002E0, "Member 'UCreativeLobbyAd_C::Text_SubHeader' has a wrong offset!");
static_assert(offsetof(UCreativeLobbyAd_C, Violator) == 0x0002E8, "Member 'UCreativeLobbyAd_C::Violator' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePassOverviewVideo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattlePassOverviewVideo.BattlePassOverviewVideo_C
// 0x0030 (0x0548 - 0x0518)
class UBattlePassOverviewVideo_C final : public UFortActivatableVideoPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0518(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       TitleIntro;                                        // 0x0520(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BlackSlate;                                        // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageThrobberBackground;                           // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              MainSafeZone;                                      // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          MediaHasBeenOpened;                                // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BattlePassOverviewVideo(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void MediaOpened();
	void BP_OnDeactivated();
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattlePassOverviewVideo_C">();
	}
	static class UBattlePassOverviewVideo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassOverviewVideo_C>();
	}
};
static_assert(alignof(UBattlePassOverviewVideo_C) == 0x000008, "Wrong alignment on UBattlePassOverviewVideo_C");
static_assert(sizeof(UBattlePassOverviewVideo_C) == 0x000548, "Wrong size on UBattlePassOverviewVideo_C");
static_assert(offsetof(UBattlePassOverviewVideo_C, UberGraphFrame) == 0x000518, "Member 'UBattlePassOverviewVideo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattlePassOverviewVideo_C, TitleIntro) == 0x000520, "Member 'UBattlePassOverviewVideo_C::TitleIntro' has a wrong offset!");
static_assert(offsetof(UBattlePassOverviewVideo_C, BlackSlate) == 0x000528, "Member 'UBattlePassOverviewVideo_C::BlackSlate' has a wrong offset!");
static_assert(offsetof(UBattlePassOverviewVideo_C, ImageThrobberBackground) == 0x000530, "Member 'UBattlePassOverviewVideo_C::ImageThrobberBackground' has a wrong offset!");
static_assert(offsetof(UBattlePassOverviewVideo_C, MainSafeZone) == 0x000538, "Member 'UBattlePassOverviewVideo_C::MainSafeZone' has a wrong offset!");
static_assert(offsetof(UBattlePassOverviewVideo_C, MediaHasBeenOpened) == 0x000540, "Member 'UBattlePassOverviewVideo_C::MediaHasBeenOpened' has a wrong offset!");

}

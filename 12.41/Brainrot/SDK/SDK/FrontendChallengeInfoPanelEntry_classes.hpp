#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontendChallengeInfoPanelEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FrontendChallengeInfoPanelEntry.FrontendChallengeInfoPanelEntry_C
// 0x0020 (0x02A0 - 0x0280)
class UFrontendChallengeInfoPanelEntry_C final : public UAthenaChallengeInfoPanelEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PartyAssistInfoIntro;                              // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AmbientPartyAssistAttention;                       // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherContent;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FrontendChallengeInfoPanelEntry(int32 EntryPoint);
	void OnLocalPlayerMissingAssistedChallenge();
	void OnChallengeInfoSet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendChallengeInfoPanelEntry_C">();
	}
	static class UFrontendChallengeInfoPanelEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontendChallengeInfoPanelEntry_C>();
	}
};
static_assert(alignof(UFrontendChallengeInfoPanelEntry_C) == 0x000008, "Wrong alignment on UFrontendChallengeInfoPanelEntry_C");
static_assert(sizeof(UFrontendChallengeInfoPanelEntry_C) == 0x0002A0, "Wrong size on UFrontendChallengeInfoPanelEntry_C");
static_assert(offsetof(UFrontendChallengeInfoPanelEntry_C, UberGraphFrame) == 0x000280, "Member 'UFrontendChallengeInfoPanelEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFrontendChallengeInfoPanelEntry_C, PartyAssistInfoIntro) == 0x000288, "Member 'UFrontendChallengeInfoPanelEntry_C::PartyAssistInfoIntro' has a wrong offset!");
static_assert(offsetof(UFrontendChallengeInfoPanelEntry_C, AmbientPartyAssistAttention) == 0x000290, "Member 'UFrontendChallengeInfoPanelEntry_C::AmbientPartyAssistAttention' has a wrong offset!");
static_assert(offsetof(UFrontendChallengeInfoPanelEntry_C, SwitcherContent) == 0x000298, "Member 'UFrontendChallengeInfoPanelEntry_C::SwitcherContent' has a wrong offset!");

}

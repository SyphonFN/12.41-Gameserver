#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeTile_Daily

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChallengeTile_Daily.ChallengeTile_Daily_C
// 0x0038 (0x0BD0 - 0x0B98)
class UChallengeTile_Daily_C final : public UAthenaChallengeScreenTile_Daily
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B98(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AmbientPartyAssistAttention;                       // 0x0BA0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Outro;                                             // 0x0BA8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHover;                                           // 0x0BB0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImageBackground;                                   // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayPartyAssist;                                // 0x0BC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ChallengeContext;                             // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ChallengeTile_Daily(int32 EntryPoint);
	void OnContainsPartyAssistedChallengeChanged(bool bHasPartyAssistedChallenge);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void OnChallengeSetEstablished(const struct FFortChallengeSetStyle& DisplayStyle, bool bIsComplete, bool bIsLocked);
	void SetDynamicColors(class UImage* WeeklyDynamicMaterialTarget, const struct FFortChallengeSetStyle& FortChallengeSetStyle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChallengeTile_Daily_C">();
	}
	static class UChallengeTile_Daily_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChallengeTile_Daily_C>();
	}
};
static_assert(alignof(UChallengeTile_Daily_C) == 0x000008, "Wrong alignment on UChallengeTile_Daily_C");
static_assert(sizeof(UChallengeTile_Daily_C) == 0x000BD0, "Wrong size on UChallengeTile_Daily_C");
static_assert(offsetof(UChallengeTile_Daily_C, UberGraphFrame) == 0x000B98, "Member 'UChallengeTile_Daily_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Daily_C, AmbientPartyAssistAttention) == 0x000BA0, "Member 'UChallengeTile_Daily_C::AmbientPartyAssistAttention' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Daily_C, Outro) == 0x000BA8, "Member 'UChallengeTile_Daily_C::Outro' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Daily_C, OnHover) == 0x000BB0, "Member 'UChallengeTile_Daily_C::OnHover' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Daily_C, ImageBackground) == 0x000BB8, "Member 'UChallengeTile_Daily_C::ImageBackground' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Daily_C, OverlayPartyAssist) == 0x000BC0, "Member 'UChallengeTile_Daily_C::OverlayPartyAssist' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Daily_C, Text_ChallengeContext) == 0x000BC8, "Member 'UChallengeTile_Daily_C::Text_ChallengeContext' has a wrong offset!");

}


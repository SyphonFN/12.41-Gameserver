#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeTile_Event

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChallengeTile_Event.ChallengeTile_Event_C
// 0x0050 (0x0C10 - 0x0BC0)
class UChallengeTile_Event_C final : public UAthenaChallengeSetTile_Event
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AmbientPartyAssistAttention;                       // 0x0BC8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Outro;                                             // 0x0BD0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHover;                                           // 0x0BD8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               CountdownSB;                                       // 0x0BE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x0BE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BoltBorder;                                  // 0x0BF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayPartyAssist;                                // 0x0BF8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UnavailableBox;                                    // 0x0C00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               UnavailableOvr;                                    // 0x0C08(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ChallengeTile_Event(int32 EntryPoint);
	void OnContainsPartyAssistedChallengeChanged(bool bHasPartyAssistedChallenge);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void OnChallengeSetEstablished(const struct FFortChallengeSetStyle& DisplayStyle, bool bIsComplete, bool bIsLocked);
	void SetDynamicColors(class UImage* EventDynamicMaterialTarget, const struct FFortChallengeSetStyle& FortChallengeSetStyle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChallengeTile_Event_C">();
	}
	static class UChallengeTile_Event_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChallengeTile_Event_C>();
	}
};
static_assert(alignof(UChallengeTile_Event_C) == 0x000008, "Wrong alignment on UChallengeTile_Event_C");
static_assert(sizeof(UChallengeTile_Event_C) == 0x000C10, "Wrong size on UChallengeTile_Event_C");
static_assert(offsetof(UChallengeTile_Event_C, UberGraphFrame) == 0x000BC0, "Member 'UChallengeTile_Event_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Event_C, AmbientPartyAssistAttention) == 0x000BC8, "Member 'UChallengeTile_Event_C::AmbientPartyAssistAttention' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Event_C, Outro) == 0x000BD0, "Member 'UChallengeTile_Event_C::Outro' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Event_C, OnHover) == 0x000BD8, "Member 'UChallengeTile_Event_C::OnHover' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Event_C, CountdownSB) == 0x000BE0, "Member 'UChallengeTile_Event_C::CountdownSB' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Event_C, Image_Background) == 0x000BE8, "Member 'UChallengeTile_Event_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Event_C, Image_BoltBorder) == 0x000BF0, "Member 'UChallengeTile_Event_C::Image_BoltBorder' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Event_C, OverlayPartyAssist) == 0x000BF8, "Member 'UChallengeTile_Event_C::OverlayPartyAssist' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Event_C, UnavailableBox) == 0x000C00, "Member 'UChallengeTile_Event_C::UnavailableBox' has a wrong offset!");
static_assert(offsetof(UChallengeTile_Event_C, UnavailableOvr) == 0x000C08, "Member 'UChallengeTile_Event_C::UnavailableOvr' has a wrong offset!");

}

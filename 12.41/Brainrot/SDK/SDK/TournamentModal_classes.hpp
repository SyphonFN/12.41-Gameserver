#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TournamentModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TournamentModal.TournamentModal_C
// 0x0018 (0x0468 - 0x0450)
class UTournamentModal_C final : public UFortTournamentModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0458(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TournamentModal(int32 EntryPoint);
	void OnTournamentSet(const struct FLinearColor& LeftColor, const struct FLinearColor& RightColor);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TournamentModal_C">();
	}
	static class UTournamentModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTournamentModal_C>();
	}
};
static_assert(alignof(UTournamentModal_C) == 0x000008, "Wrong alignment on UTournamentModal_C");
static_assert(sizeof(UTournamentModal_C) == 0x000468, "Wrong size on UTournamentModal_C");
static_assert(offsetof(UTournamentModal_C, UberGraphFrame) == 0x000450, "Member 'UTournamentModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTournamentModal_C, Intro) == 0x000458, "Member 'UTournamentModal_C::Intro' has a wrong offset!");
static_assert(offsetof(UTournamentModal_C, Image_BG) == 0x000460, "Member 'UTournamentModal_C::Image_BG' has a wrong offset!");

}


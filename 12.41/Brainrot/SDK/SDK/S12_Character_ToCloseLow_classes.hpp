#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S12_Character_ToCloseLow

#include "Basic.hpp"

#include "LevelSequence_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass S12_Character_ToCloseLow.SequenceDirector_C
// 0x0008 (0x0038 - 0x0030)
class S12_Character_ToCloseLow::USequenceDirector_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
	void Audio_Camera_Move_Event(class USoundBase* Sound);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0();
	void SequenceEvent__ENTRYPOINTSequenceDirector_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass S12_Character_ToCloseLow.SequenceDirector_C", true, "SequenceDirector_C">();
	}
	static class S12_Character_ToCloseLow::USequenceDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<S12_Character_ToCloseLow::USequenceDirector_C>();
	}
};
static_assert(alignof(S12_Character_ToCloseLow::USequenceDirector_C) == 0x000008, "Wrong alignment on S12_Character_ToCloseLow::USequenceDirector_C");
static_assert(sizeof(S12_Character_ToCloseLow::USequenceDirector_C) == 0x000038, "Wrong size on S12_Character_ToCloseLow::USequenceDirector_C");
static_assert(offsetof(S12_Character_ToCloseLow::USequenceDirector_C, UberGraphFrame) == 0x000030, "Member 'S12_Character_ToCloseLow::USequenceDirector_C::UberGraphFrame' has a wrong offset!");

}


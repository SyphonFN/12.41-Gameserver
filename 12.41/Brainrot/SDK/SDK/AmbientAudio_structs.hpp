#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbientAudio

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct AmbientAudio.AmbientProxy
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FAmbientProxy final
{
public:
	uint8                                         Pad_4282[0x20];                                    // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAmbientProxy) == 0x000008, "Wrong alignment on FAmbientProxy");
static_assert(sizeof(FAmbientProxy) == 0x000020, "Wrong size on FAmbientProxy");

// ScriptStruct AmbientAudio.AmbientAudioBase
// 0x0070 (0x0070 - 0x0000)
struct FAmbientAudioBase
{
public:
	TSoftObjectPtr<class USoundBase>              Sound;                                             // 0x0000(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      Requirements;                                      // 0x0028(0x0048)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAmbientAudioBase) == 0x000008, "Wrong alignment on FAmbientAudioBase");
static_assert(sizeof(FAmbientAudioBase) == 0x000070, "Wrong size on FAmbientAudioBase");
static_assert(offsetof(FAmbientAudioBase, Sound) == 0x000000, "Member 'FAmbientAudioBase::Sound' has a wrong offset!");
static_assert(offsetof(FAmbientAudioBase, Requirements) == 0x000028, "Member 'FAmbientAudioBase::Requirements' has a wrong offset!");

// ScriptStruct AmbientAudio.AmbientAudioOneShot
// 0x0010 (0x0080 - 0x0070)
struct FAmbientAudioOneShot final : public FAmbientAudioBase
{
public:
	struct FVector2D                              RetriggerTimeRange;                                // 0x0070(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              TriggerDistanceRange;                              // 0x0078(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAmbientAudioOneShot) == 0x000008, "Wrong alignment on FAmbientAudioOneShot");
static_assert(sizeof(FAmbientAudioOneShot) == 0x000080, "Wrong size on FAmbientAudioOneShot");
static_assert(offsetof(FAmbientAudioOneShot, RetriggerTimeRange) == 0x000070, "Member 'FAmbientAudioOneShot::RetriggerTimeRange' has a wrong offset!");
static_assert(offsetof(FAmbientAudioOneShot, TriggerDistanceRange) == 0x000078, "Member 'FAmbientAudioOneShot::TriggerDistanceRange' has a wrong offset!");

// ScriptStruct AmbientAudio.AmbientAudioLoop
// 0x0000 (0x0070 - 0x0070)
struct FAmbientAudioLoop final : public FAmbientAudioBase
{
};
static_assert(alignof(FAmbientAudioLoop) == 0x000008, "Wrong alignment on FAmbientAudioLoop");
static_assert(sizeof(FAmbientAudioLoop) == 0x000070, "Wrong size on FAmbientAudioLoop");

}


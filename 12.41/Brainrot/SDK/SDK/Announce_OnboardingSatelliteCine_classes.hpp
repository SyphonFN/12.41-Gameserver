#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_OnboardingSatelliteCine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C
// 0x0020 (0x02B8 - 0x0298)
class AAnnounce_OnboardingSatelliteCine_C final : public AFortClientAnnouncement_Cinematic
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowSkipping;                                     // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6835[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMediaSubtitlesPlayer*              SatelliteSubtitlesPlayer;                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClientAnnouncementStop();
	void OnPlayerSkippedCutscene();
	void HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleAllowSkip();
	void OnEnteredCinematicState();
	void ChinaBuildSkipPrerendered();
	void ExecuteUbergraph_Announce_OnboardingSatelliteCine(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announce_OnboardingSatelliteCine_C">();
	}
	static class AAnnounce_OnboardingSatelliteCine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnnounce_OnboardingSatelliteCine_C>();
	}
};
static_assert(alignof(AAnnounce_OnboardingSatelliteCine_C) == 0x000008, "Wrong alignment on AAnnounce_OnboardingSatelliteCine_C");
static_assert(sizeof(AAnnounce_OnboardingSatelliteCine_C) == 0x0002B8, "Wrong size on AAnnounce_OnboardingSatelliteCine_C");
static_assert(offsetof(AAnnounce_OnboardingSatelliteCine_C, UberGraphFrame) == 0x000298, "Member 'AAnnounce_OnboardingSatelliteCine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAnnounce_OnboardingSatelliteCine_C, DefaultSceneRoot) == 0x0002A0, "Member 'AAnnounce_OnboardingSatelliteCine_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AAnnounce_OnboardingSatelliteCine_C, AllowSkipping) == 0x0002A8, "Member 'AAnnounce_OnboardingSatelliteCine_C::AllowSkipping' has a wrong offset!");
static_assert(offsetof(AAnnounce_OnboardingSatelliteCine_C, SatelliteSubtitlesPlayer) == 0x0002B0, "Member 'AAnnounce_OnboardingSatelliteCine_C::SatelliteSubtitlesPlayer' has a wrong offset!");

}

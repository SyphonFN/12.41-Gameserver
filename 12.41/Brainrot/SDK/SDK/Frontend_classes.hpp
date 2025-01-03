#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Frontend

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Frontend.Frontend_C
// 0x0018 (0x0248 - 0x0230)
class AFrontend_C final : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          NewLobby;                                          // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NewVar_0;                                          // 0x0239(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E27[0x6];                                     // 0x023A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHBOnboardingFlow_C*                    HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty; // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PlaySpeech(const class FString& Filename, int32 SampleRate, class USoundWave* AssetFile);
	void OnMatchStarted();
	void EnableTutorial();
	void ExecuteUbergraph_Frontend(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Frontend_C">();
	}
	static class AFrontend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontend_C>();
	}
};
static_assert(alignof(AFrontend_C) == 0x000008, "Wrong alignment on AFrontend_C");
static_assert(sizeof(AFrontend_C) == 0x000248, "Wrong size on AFrontend_C");
static_assert(offsetof(AFrontend_C, UberGraphFrame) == 0x000230, "Member 'AFrontend_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFrontend_C, NewLobby) == 0x000238, "Member 'AFrontend_C::NewLobby' has a wrong offset!");
static_assert(offsetof(AFrontend_C, NewVar_0) == 0x000239, "Member 'AFrontend_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AFrontend_C, HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty) == 0x000240, "Member 'AFrontend_C::HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty' has a wrong offset!");

}


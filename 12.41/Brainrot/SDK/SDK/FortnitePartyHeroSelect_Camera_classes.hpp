#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortnitePartyHeroSelect_Camera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
// 0x0020 (0x07E0 - 0x07C0)
class AFortnitePartyHeroSelect_Camera_C final : public AFortCameraBase
{
public:
	uint8                                         Pad_5FFA[0x8];                                     // 0x07B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       CameraActor_0;                                     // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          MouseDown;                                         // 0x07D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FFB[0x7];                                     // 0x07D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CachedPawn;                                        // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void HandleMousePress();
	void HandleMouseRelease();
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void OnActivated(class AFortPlayerController* PlayerController);
	void OnDeactivated(class AFortPlayerController* PlayerController);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortnitePartyHeroSelect_Camera_C">();
	}
	static class AFortnitePartyHeroSelect_Camera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortnitePartyHeroSelect_Camera_C>();
	}
};
static_assert(alignof(AFortnitePartyHeroSelect_Camera_C) == 0x000010, "Wrong alignment on AFortnitePartyHeroSelect_Camera_C");
static_assert(sizeof(AFortnitePartyHeroSelect_Camera_C) == 0x0007E0, "Wrong size on AFortnitePartyHeroSelect_Camera_C");
static_assert(offsetof(AFortnitePartyHeroSelect_Camera_C, UberGraphFrame) == 0x0007C0, "Member 'AFortnitePartyHeroSelect_Camera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFortnitePartyHeroSelect_Camera_C, CameraActor_0) == 0x0007C8, "Member 'AFortnitePartyHeroSelect_Camera_C::CameraActor_0' has a wrong offset!");
static_assert(offsetof(AFortnitePartyHeroSelect_Camera_C, MouseDown) == 0x0007D0, "Member 'AFortnitePartyHeroSelect_Camera_C::MouseDown' has a wrong offset!");
static_assert(offsetof(AFortnitePartyHeroSelect_Camera_C, CachedPawn) == 0x0007D8, "Member 'AFortnitePartyHeroSelect_Camera_C::CachedPawn' has a wrong offset!");

}


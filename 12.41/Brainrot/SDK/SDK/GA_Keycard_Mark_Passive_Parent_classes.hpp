#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Keycard_Mark_Passive_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C
// 0x0038 (0x0A68 - 0x0A30)
class UGA_Keycard_Mark_Passive_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 LockActorClass;                                    // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 LockActor;                                         // 0x0A40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*            PlayerController;                                  // 0x0A50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMarkerID                              Marker;                                            // 0x0A58(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         TimeBetweenLines;                                  // 0x0A60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent(int32 EntryPoint);
	void DrawTrailToVault();
	void K2_ActivateAbility();
	void InitAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Keycard_Mark_Passive_Parent_C">();
	}
	static class UGA_Keycard_Mark_Passive_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Keycard_Mark_Passive_Parent_C>();
	}
};
static_assert(alignof(UGA_Keycard_Mark_Passive_Parent_C) == 0x000008, "Wrong alignment on UGA_Keycard_Mark_Passive_Parent_C");
static_assert(sizeof(UGA_Keycard_Mark_Passive_Parent_C) == 0x000A68, "Wrong size on UGA_Keycard_Mark_Passive_Parent_C");
static_assert(offsetof(UGA_Keycard_Mark_Passive_Parent_C, UberGraphFrame) == 0x000A30, "Member 'UGA_Keycard_Mark_Passive_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Keycard_Mark_Passive_Parent_C, LockActorClass) == 0x000A38, "Member 'UGA_Keycard_Mark_Passive_Parent_C::LockActorClass' has a wrong offset!");
static_assert(offsetof(UGA_Keycard_Mark_Passive_Parent_C, LockActor) == 0x000A40, "Member 'UGA_Keycard_Mark_Passive_Parent_C::LockActor' has a wrong offset!");
static_assert(offsetof(UGA_Keycard_Mark_Passive_Parent_C, PlayerPawn) == 0x000A48, "Member 'UGA_Keycard_Mark_Passive_Parent_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Keycard_Mark_Passive_Parent_C, PlayerController) == 0x000A50, "Member 'UGA_Keycard_Mark_Passive_Parent_C::PlayerController' has a wrong offset!");
static_assert(offsetof(UGA_Keycard_Mark_Passive_Parent_C, Marker) == 0x000A58, "Member 'UGA_Keycard_Mark_Passive_Parent_C::Marker' has a wrong offset!");
static_assert(offsetof(UGA_Keycard_Mark_Passive_Parent_C, TimeBetweenLines) == 0x000A60, "Member 'UGA_Keycard_Mark_Passive_Parent_C::TimeBetweenLines' has a wrong offset!");

}

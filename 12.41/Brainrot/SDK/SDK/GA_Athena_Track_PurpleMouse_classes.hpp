#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Track_PurpleMouse

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C
// 0x0048 (0x0A78 - 0x0A30)
class UGA_Athena_Track_PurpleMouse_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           TrackGroupTag;                                     // 0x0A40(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         ProxMineActors;                                    // 0x0A48(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScalableFloat                         MaxPropsInWorld;                                   // 0x0A58(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Athena_Track_PurpleMouse(int32 EntryPoint);
	void OnPlayerDeath(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_739900834D974D726220CC9B70F2219C(const struct FGameplayEventData& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Track_PurpleMouse_C">();
	}
	static class UGA_Athena_Track_PurpleMouse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Track_PurpleMouse_C>();
	}
};
static_assert(alignof(UGA_Athena_Track_PurpleMouse_C) == 0x000008, "Wrong alignment on UGA_Athena_Track_PurpleMouse_C");
static_assert(sizeof(UGA_Athena_Track_PurpleMouse_C) == 0x000A78, "Wrong size on UGA_Athena_Track_PurpleMouse_C");
static_assert(offsetof(UGA_Athena_Track_PurpleMouse_C, UberGraphFrame) == 0x000A30, "Member 'UGA_Athena_Track_PurpleMouse_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Track_PurpleMouse_C, PlayerPawn) == 0x000A38, "Member 'UGA_Athena_Track_PurpleMouse_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Track_PurpleMouse_C, TrackGroupTag) == 0x000A40, "Member 'UGA_Athena_Track_PurpleMouse_C::TrackGroupTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Track_PurpleMouse_C, ProxMineActors) == 0x000A48, "Member 'UGA_Athena_Track_PurpleMouse_C::ProxMineActors' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Track_PurpleMouse_C, MaxPropsInWorld) == 0x000A58, "Member 'UGA_Athena_Track_PurpleMouse_C::MaxPropsInWorld' has a wrong offset!");

}

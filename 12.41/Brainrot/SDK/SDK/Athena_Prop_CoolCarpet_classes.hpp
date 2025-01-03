#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Prop_CoolCarpet

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Athena_Prop_SneakySnowmanV2_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_Prop_CoolCarpet.Athena_Prop_CoolCarpet_C
// 0x0058 (0x0D00 - 0x0CA8)
class AAthena_Prop_CoolCarpet_C final : public AAthena_Prop_SneakySnowmanV2_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Athena_Prop_CoolCarpet_C;           // 0x0CA8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_ShadowInsert;                                   // 0x0CB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_CoolCarpet_Flap2;                               // 0x0CB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_CoolCarpet_Flap1;                               // 0x0CC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         OpenFlaps_Rotation_FDF331244F066E298266B69ACE6D4998; // 0x0CC8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            OpenFlaps__Direction_FDF331244F066E298266B69ACE6D4998; // 0x0CCC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4010[0x3];                                     // 0x0CCD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     OpenFlaps;                                         // 0x0CD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RandMatInt;                                        // 0x0CD8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MatIntOverride;                                    // 0x0CDC(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         CanHideInProp;                                     // 0x0CE0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Athena_Prop_CoolCarpet(int32 EntryPoint);
	void ReceiveBeginPlay();
	void CloseFlaps();
	void OpenFlapsMulticast();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void OpenFlaps__UpdateFunc();
	void OpenFlaps__FinishedFunc();
	void UserConstructionScript();
	void GetMaterialInt(int32* MatInt);
	void OnRep_MatIntOverride();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Prop_CoolCarpet_C">();
	}
	static class AAthena_Prop_CoolCarpet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Prop_CoolCarpet_C>();
	}
};
static_assert(alignof(AAthena_Prop_CoolCarpet_C) == 0x000008, "Wrong alignment on AAthena_Prop_CoolCarpet_C");
static_assert(sizeof(AAthena_Prop_CoolCarpet_C) == 0x000D00, "Wrong size on AAthena_Prop_CoolCarpet_C");
static_assert(offsetof(AAthena_Prop_CoolCarpet_C, UberGraphFrame_Athena_Prop_CoolCarpet_C) == 0x000CA8, "Member 'AAthena_Prop_CoolCarpet_C::UberGraphFrame_Athena_Prop_CoolCarpet_C' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_CoolCarpet_C, SM_ShadowInsert) == 0x000CB0, "Member 'AAthena_Prop_CoolCarpet_C::SM_ShadowInsert' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_CoolCarpet_C, SM_CoolCarpet_Flap2) == 0x000CB8, "Member 'AAthena_Prop_CoolCarpet_C::SM_CoolCarpet_Flap2' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_CoolCarpet_C, SM_CoolCarpet_Flap1) == 0x000CC0, "Member 'AAthena_Prop_CoolCarpet_C::SM_CoolCarpet_Flap1' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_CoolCarpet_C, OpenFlaps_Rotation_FDF331244F066E298266B69ACE6D4998) == 0x000CC8, "Member 'AAthena_Prop_CoolCarpet_C::OpenFlaps_Rotation_FDF331244F066E298266B69ACE6D4998' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_CoolCarpet_C, OpenFlaps__Direction_FDF331244F066E298266B69ACE6D4998) == 0x000CCC, "Member 'AAthena_Prop_CoolCarpet_C::OpenFlaps__Direction_FDF331244F066E298266B69ACE6D4998' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_CoolCarpet_C, OpenFlaps) == 0x000CD0, "Member 'AAthena_Prop_CoolCarpet_C::OpenFlaps' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_CoolCarpet_C, RandMatInt) == 0x000CD8, "Member 'AAthena_Prop_CoolCarpet_C::RandMatInt' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_CoolCarpet_C, MatIntOverride) == 0x000CDC, "Member 'AAthena_Prop_CoolCarpet_C::MatIntOverride' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_CoolCarpet_C, CanHideInProp) == 0x000CE0, "Member 'AAthena_Prop_CoolCarpet_C::CanHideInProp' has a wrong offset!");

}


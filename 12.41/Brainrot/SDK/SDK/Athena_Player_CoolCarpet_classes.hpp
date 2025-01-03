#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Player_CoolCarpet

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "PopOutStates_structs.hpp"
#include "Athena_Player_SneakySnowmanV2_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_Player_CoolCarpet.Athena_Player_CoolCarpet_C
// 0x0100 (0x0B70 - 0x0A70)
class AAthena_Player_CoolCarpet_C final : public AAthena_Player_SneakySnowmanV2_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Athena_Player_CoolCarpet_C;         // 0x0A70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_ShadowInsert;                                   // 0x0A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_CoolCarpet_Flap1;                               // 0x0A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_CoolCarpet_Flap2;                               // 0x0A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ShrinkBox_Rotation_B702562648A4C4CB590675BD0D3E005C; // 0x0A90(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShrinkBox_Shrinkage_B702562648A4C4CB590675BD0D3E005C; // 0x0A94(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ShrinkBox__Direction_B702562648A4C4CB590675BD0D3E005C; // 0x0A98(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53B9[0x7];                                     // 0x0A99(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ShrinkBox;                                         // 0x0AA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Grow_Box_Growth_53FD69EF4E6B5DECD0D74DBB0BDDAA26;  // 0x0AA8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Grow_Box__Direction_53FD69EF4E6B5DECD0D74DBB0BDDAA26; // 0x0AAC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53BA[0x3];                                     // 0x0AAD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Grow_Box;                                          // 0x0AB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_Rotation_A659A2B4463C7B7008A67988DEB011BE; // 0x0AB8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_A659A2B4463C7B7008A67988DEB011BE; // 0x0ABC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53BB[0x3];                                     // 0x0ABD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x0AC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AlreadyJumpedOut;                                  // 0x0AC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53BC[0x7];                                     // 0x0AC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAthena_Fake_CoolCarpet_C*              CastedFakeActor;                                   // 0x0AD0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MovementEventsBound;                               // 0x0AD8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53BD[0x7];                                     // 0x0AD9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             OnFootstepSound;                                   // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             OnLandedSound;                                     // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             OnJumpedSound;                                     // 0x0AF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HolsterId;                                         // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MatInt;                                            // 0x0B00(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53BE[0x4];                                     // 0x0B04(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         PopOutOnWindUp;                                    // 0x0B08(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         AllowPopOut;                                       // 0x0B28(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Swimming_0;                                        // 0x0B48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EPopOutStates                                 PopState;                                          // 0x0B49(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FlapsClosed;                                       // 0x0B4A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53BF[0x5];                                     // 0x0B4B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           WindUpEndTimer;                                    // 0x0B50(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          PoppedFromWindUp;                                  // 0x0B58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DidWindUp;                                         // 0x0B59(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PoppedFromStand;                                   // 0x0B5A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Firing;                                            // 0x0B5B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FirePressed;                                       // 0x0B5C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53C0[0x3];                                     // 0x0B5D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           StopFiringTimer;                                   // 0x0B60(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Athena_Player_CoolCarpet(int32 EntryPoint);
	void StopFiring();
	void FireReleased_Client(class AFortWeapon* Weapon);
	void FirePressed_Client(class AFortWeapon* Weapon);
	void OpenFlaps_Multicast();
	void SetPopState_Multicast(EPopOutStates Param_PopState);
	void Cleanup(class AActor* DestroyedActor);
	void OwningClient_ADS();
	void WeaponChangeClient();
	void Server_BlockPopOut();
	void ChangePopState(EPopOutStates Param_PopState);
	void OnPopStateChanged(EPopOutStates Param_PopState);
	void SetPopState_Server(EPopOutStates Param_PopState);
	void SetMatInt(class AActor* Prop);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Unbind_from_Movement_Events();
	void Bind_to_Movement_Events();
	void Set_Flaps_Visible_Multicast();
	void JumpedOut();
	void CustomEvent(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void ADS_Client(bool AimDownsights);
	void CloseFlaps();
	void OpenFlaps();
	void Grow_Box__UpdateFunc();
	void Grow_Box__FinishedFunc();
	void ShrinkBox__UpdateFunc();
	void ShrinkBox__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void OnPlayerFootstep();
	void OnPlayerLanded(const struct FHitResult& Hit);
	void OnPlayerMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnRep_MatInt();
	void OnRep_PopState();
	void MovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void JustAttached();
	void Wobble(float Strength, bool MoveUpAndDown);
	void OnGaveSneakySnowman();
	void ReceiveBeginPlay();
	void OnWeaponChange();
	void OnStartedMaintaining();
	void OnEndedMaintaining();
	void GetMaterialInt(int32* Param_MatInt);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Player_CoolCarpet_C">();
	}
	static class AAthena_Player_CoolCarpet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Player_CoolCarpet_C>();
	}
};
static_assert(alignof(AAthena_Player_CoolCarpet_C) == 0x000010, "Wrong alignment on AAthena_Player_CoolCarpet_C");
static_assert(sizeof(AAthena_Player_CoolCarpet_C) == 0x000B70, "Wrong size on AAthena_Player_CoolCarpet_C");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, UberGraphFrame_Athena_Player_CoolCarpet_C) == 0x000A70, "Member 'AAthena_Player_CoolCarpet_C::UberGraphFrame_Athena_Player_CoolCarpet_C' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, SM_ShadowInsert) == 0x000A78, "Member 'AAthena_Player_CoolCarpet_C::SM_ShadowInsert' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, SM_CoolCarpet_Flap1) == 0x000A80, "Member 'AAthena_Player_CoolCarpet_C::SM_CoolCarpet_Flap1' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, SM_CoolCarpet_Flap2) == 0x000A88, "Member 'AAthena_Player_CoolCarpet_C::SM_CoolCarpet_Flap2' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, ShrinkBox_Rotation_B702562648A4C4CB590675BD0D3E005C) == 0x000A90, "Member 'AAthena_Player_CoolCarpet_C::ShrinkBox_Rotation_B702562648A4C4CB590675BD0D3E005C' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, ShrinkBox_Shrinkage_B702562648A4C4CB590675BD0D3E005C) == 0x000A94, "Member 'AAthena_Player_CoolCarpet_C::ShrinkBox_Shrinkage_B702562648A4C4CB590675BD0D3E005C' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, ShrinkBox__Direction_B702562648A4C4CB590675BD0D3E005C) == 0x000A98, "Member 'AAthena_Player_CoolCarpet_C::ShrinkBox__Direction_B702562648A4C4CB590675BD0D3E005C' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, ShrinkBox) == 0x000AA0, "Member 'AAthena_Player_CoolCarpet_C::ShrinkBox' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, Grow_Box_Growth_53FD69EF4E6B5DECD0D74DBB0BDDAA26) == 0x000AA8, "Member 'AAthena_Player_CoolCarpet_C::Grow_Box_Growth_53FD69EF4E6B5DECD0D74DBB0BDDAA26' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, Grow_Box__Direction_53FD69EF4E6B5DECD0D74DBB0BDDAA26) == 0x000AAC, "Member 'AAthena_Player_CoolCarpet_C::Grow_Box__Direction_53FD69EF4E6B5DECD0D74DBB0BDDAA26' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, Grow_Box) == 0x000AB0, "Member 'AAthena_Player_CoolCarpet_C::Grow_Box' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, Timeline_1_Rotation_A659A2B4463C7B7008A67988DEB011BE) == 0x000AB8, "Member 'AAthena_Player_CoolCarpet_C::Timeline_1_Rotation_A659A2B4463C7B7008A67988DEB011BE' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, Timeline_1__Direction_A659A2B4463C7B7008A67988DEB011BE) == 0x000ABC, "Member 'AAthena_Player_CoolCarpet_C::Timeline_1__Direction_A659A2B4463C7B7008A67988DEB011BE' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, Timeline_1) == 0x000AC0, "Member 'AAthena_Player_CoolCarpet_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, AlreadyJumpedOut) == 0x000AC8, "Member 'AAthena_Player_CoolCarpet_C::AlreadyJumpedOut' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, CastedFakeActor) == 0x000AD0, "Member 'AAthena_Player_CoolCarpet_C::CastedFakeActor' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, MovementEventsBound) == 0x000AD8, "Member 'AAthena_Player_CoolCarpet_C::MovementEventsBound' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, OnFootstepSound) == 0x000AE0, "Member 'AAthena_Player_CoolCarpet_C::OnFootstepSound' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, OnLandedSound) == 0x000AE8, "Member 'AAthena_Player_CoolCarpet_C::OnLandedSound' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, OnJumpedSound) == 0x000AF0, "Member 'AAthena_Player_CoolCarpet_C::OnJumpedSound' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, HolsterId) == 0x000AF8, "Member 'AAthena_Player_CoolCarpet_C::HolsterId' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, MatInt) == 0x000B00, "Member 'AAthena_Player_CoolCarpet_C::MatInt' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, PopOutOnWindUp) == 0x000B08, "Member 'AAthena_Player_CoolCarpet_C::PopOutOnWindUp' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, AllowPopOut) == 0x000B28, "Member 'AAthena_Player_CoolCarpet_C::AllowPopOut' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, Swimming_0) == 0x000B48, "Member 'AAthena_Player_CoolCarpet_C::Swimming_0' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, PopState) == 0x000B49, "Member 'AAthena_Player_CoolCarpet_C::PopState' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, FlapsClosed) == 0x000B4A, "Member 'AAthena_Player_CoolCarpet_C::FlapsClosed' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, WindUpEndTimer) == 0x000B50, "Member 'AAthena_Player_CoolCarpet_C::WindUpEndTimer' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, PoppedFromWindUp) == 0x000B58, "Member 'AAthena_Player_CoolCarpet_C::PoppedFromWindUp' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, DidWindUp) == 0x000B59, "Member 'AAthena_Player_CoolCarpet_C::DidWindUp' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, PoppedFromStand) == 0x000B5A, "Member 'AAthena_Player_CoolCarpet_C::PoppedFromStand' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, Firing) == 0x000B5B, "Member 'AAthena_Player_CoolCarpet_C::Firing' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, FirePressed) == 0x000B5C, "Member 'AAthena_Player_CoolCarpet_C::FirePressed' has a wrong offset!");
static_assert(offsetof(AAthena_Player_CoolCarpet_C, StopFiringTimer) == 0x000B60, "Member 'AAthena_Player_CoolCarpet_C::StopFiringTimer' has a wrong offset!");

}


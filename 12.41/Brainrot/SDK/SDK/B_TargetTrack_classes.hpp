#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TargetTrack

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_TargetTrack.B_TargetTrack_C
// 0x0120 (0x0CC0 - 0x0BA0)
class AB_TargetTrack_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       ProximityTrigger;                                  // 0x0BA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Target_Move_Loop_Cue;                              // 0x0BB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Target_Move_Stop_Cue;                              // 0x0BB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Target_Move_Start_Cue;                             // 0x0BC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                 ToyOptionsComponent;                               // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        TargetAttachPoint;                                 // 0x0BD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Target_Track;                                   // 0x0BD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TargetMovement_NewTrack_0_9F61BF394D22B10B7DAB4683CA4746AC; // 0x0BE0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TargetMovement__Direction_9F61BF394D22B10B7DAB4683CA4746AC; // 0x0BE4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65F7[0x3];                                     // 0x0BE5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TargetMovement;                                    // 0x0BE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             BaseTransformForTarget;                            // 0x0BF0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         LengthScaleSetting;                                // 0x0C20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayAtEndSetting;                                 // 0x0C24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ProximityTriggerSizeSetting;                       // 0x0C28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitialMovementDelaySetting;                       // 0x0C2C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TrackSpeedSetting;                                 // 0x0C30(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCurrentlyMoving;                                 // 0x0C34(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AtStartPoint;                                      // 0x0C35(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LoopingSetting;                                    // 0x0C36(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65F8[0x1];                                     // 0x0C37(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RotationSetting;                                   // 0x0C38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65F9[0x4];                                     // 0x0C3C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_ShootingTarget_Master_C*             AttachedTarget;                                    // 0x0C40(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             LeftRightTargetBaseMesh;                           // 0x0C48(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             ForwardBackwardTargetBaseMesh;                     // 0x0C70(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>            NewVar_0;                                          // 0x0C98(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsTargetUp;                                        // 0x0CA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         CurrentMovementState;                              // 0x0CA9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65FA[0x2];                                     // 0x0CAA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Audio_Speed_Parameter;                             // 0x0CAC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         LeftToRightmovementState;                          // 0x0CB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         RightToLeftMovementState;                          // 0x0CB1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         StopMovementState;                                 // 0x0CB2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_TargetTrack(int32 EntryPoint);
	void ReceiveDestroyed();
	void Stop_Move_Target_Audio();
	void Move_Target_Audio();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void InitializeSettings();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AsyncLoadTargetBase();
	void ReverseTargetMovement();
	void AttachedTargetPoppedUp();
	void StopTargetMovement();
	void AttachedTargetKnockedDown();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void MoveTarget();
	void ReceiveBeginPlay();
	void OnLoaded_3C01053C48BCC07B689033B6DB9706E0(class UObject* Loaded);
	void OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8(class UObject* Loaded);
	void TargetMovement__UpdateFunc();
	void TargetMovement__FinishedFunc();
	void GetFinalDestinationOfTarget(struct FVector* Destination);
	float CalculatePlayRate();
	void SetTargetRotationAndBaseMesh();
	void SetTrackLength();
	void OnRep_ServerMoveStartTime();
	void OnRep_IsTargetUp();
	void OnRep_CurrentDirection();
	void OnRep_IsCurrentlyMoving();
	void UpdateForRepNotify();
	void OnRep_CurrentLerpValue();
	void UpdateLerpedPosition(float Alpha);
	void SetMovementState(uint8 State);
	void OnRep_CurrentMovementState();
	void Set_Audio_Speed_Sound(float Target_Speed);

	class UStaticMesh* GetCollisionStaticMesh() const;
	TArray<class UMeshComponent*> GetMeshComponents() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_TargetTrack_C">();
	}
	static class AB_TargetTrack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_TargetTrack_C>();
	}
};
static_assert(alignof(AB_TargetTrack_C) == 0x000010, "Wrong alignment on AB_TargetTrack_C");
static_assert(sizeof(AB_TargetTrack_C) == 0x000CC0, "Wrong size on AB_TargetTrack_C");
static_assert(offsetof(AB_TargetTrack_C, UberGraphFrame) == 0x000BA0, "Member 'AB_TargetTrack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, ProximityTrigger) == 0x000BA8, "Member 'AB_TargetTrack_C::ProximityTrigger' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, Target_Move_Loop_Cue) == 0x000BB0, "Member 'AB_TargetTrack_C::Target_Move_Loop_Cue' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, Target_Move_Stop_Cue) == 0x000BB8, "Member 'AB_TargetTrack_C::Target_Move_Stop_Cue' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, Target_Move_Start_Cue) == 0x000BC0, "Member 'AB_TargetTrack_C::Target_Move_Start_Cue' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, ToyOptionsComponent) == 0x000BC8, "Member 'AB_TargetTrack_C::ToyOptionsComponent' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, TargetAttachPoint) == 0x000BD0, "Member 'AB_TargetTrack_C::TargetAttachPoint' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, SM_Target_Track) == 0x000BD8, "Member 'AB_TargetTrack_C::SM_Target_Track' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, TargetMovement_NewTrack_0_9F61BF394D22B10B7DAB4683CA4746AC) == 0x000BE0, "Member 'AB_TargetTrack_C::TargetMovement_NewTrack_0_9F61BF394D22B10B7DAB4683CA4746AC' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, TargetMovement__Direction_9F61BF394D22B10B7DAB4683CA4746AC) == 0x000BE4, "Member 'AB_TargetTrack_C::TargetMovement__Direction_9F61BF394D22B10B7DAB4683CA4746AC' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, TargetMovement) == 0x000BE8, "Member 'AB_TargetTrack_C::TargetMovement' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, BaseTransformForTarget) == 0x000BF0, "Member 'AB_TargetTrack_C::BaseTransformForTarget' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, LengthScaleSetting) == 0x000C20, "Member 'AB_TargetTrack_C::LengthScaleSetting' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, DelayAtEndSetting) == 0x000C24, "Member 'AB_TargetTrack_C::DelayAtEndSetting' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, ProximityTriggerSizeSetting) == 0x000C28, "Member 'AB_TargetTrack_C::ProximityTriggerSizeSetting' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, InitialMovementDelaySetting) == 0x000C2C, "Member 'AB_TargetTrack_C::InitialMovementDelaySetting' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, TrackSpeedSetting) == 0x000C30, "Member 'AB_TargetTrack_C::TrackSpeedSetting' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, IsCurrentlyMoving) == 0x000C34, "Member 'AB_TargetTrack_C::IsCurrentlyMoving' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, AtStartPoint) == 0x000C35, "Member 'AB_TargetTrack_C::AtStartPoint' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, LoopingSetting) == 0x000C36, "Member 'AB_TargetTrack_C::LoopingSetting' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, RotationSetting) == 0x000C38, "Member 'AB_TargetTrack_C::RotationSetting' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, AttachedTarget) == 0x000C40, "Member 'AB_TargetTrack_C::AttachedTarget' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, LeftRightTargetBaseMesh) == 0x000C48, "Member 'AB_TargetTrack_C::LeftRightTargetBaseMesh' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, ForwardBackwardTargetBaseMesh) == 0x000C70, "Member 'AB_TargetTrack_C::ForwardBackwardTargetBaseMesh' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, NewVar_0) == 0x000C98, "Member 'AB_TargetTrack_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, IsTargetUp) == 0x000CA8, "Member 'AB_TargetTrack_C::IsTargetUp' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, CurrentMovementState) == 0x000CA9, "Member 'AB_TargetTrack_C::CurrentMovementState' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, Audio_Speed_Parameter) == 0x000CAC, "Member 'AB_TargetTrack_C::Audio_Speed_Parameter' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, LeftToRightmovementState) == 0x000CB0, "Member 'AB_TargetTrack_C::LeftToRightmovementState' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, RightToLeftMovementState) == 0x000CB1, "Member 'AB_TargetTrack_C::RightToLeftMovementState' has a wrong offset!");
static_assert(offsetof(AB_TargetTrack_C, StopMovementState) == 0x000CB2, "Member 'AB_TargetTrack_C::StopMovementState' has a wrong offset!");

}

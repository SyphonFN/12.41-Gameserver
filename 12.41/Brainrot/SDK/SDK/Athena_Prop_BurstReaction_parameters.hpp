#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Prop_BurstReaction

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Athena_Prop_BurstReaction.Athena_Prop_BurstReaction_C.ExecuteUbergraph_Athena_Prop_BurstReaction
// 0x00B8 (0x00B8 - 0x0000)
struct Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59EB[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DamagedActor;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Damage;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59EC[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            K2Node_CustomEvent_InstigatedBy;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DamageCauser;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_HitLocation_1;                  // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59ED[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_FHitComponent;                  // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_BoneName;                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Momentum;                       // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_HitLocation;                    // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue_1;      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59EE[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction) == 0x000008, "Wrong alignment on Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction");
static_assert(sizeof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction) == 0x0000B8, "Wrong size on Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, EntryPoint) == 0x000000, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::EntryPoint' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, Temp_bool_IsClosed_Variable) == 0x000014, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, K2Node_CustomEvent_DamagedActor) == 0x000018, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::K2Node_CustomEvent_DamagedActor' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, K2Node_CustomEvent_Damage) == 0x000020, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, K2Node_CustomEvent_InstigatedBy) == 0x000028, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::K2Node_CustomEvent_InstigatedBy' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, K2Node_CustomEvent_DamageCauser) == 0x000030, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::K2Node_CustomEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, K2Node_CustomEvent_HitLocation_1) == 0x000038, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::K2Node_CustomEvent_HitLocation_1' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, K2Node_CustomEvent_FHitComponent) == 0x000048, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::K2Node_CustomEvent_FHitComponent' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, K2Node_CustomEvent_BoneName) == 0x000050, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::K2Node_CustomEvent_BoneName' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, K2Node_CustomEvent_Momentum) == 0x000058, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::K2Node_CustomEvent_Momentum' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, K2Node_CustomEvent_HitLocation) == 0x000064, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, CallFunc_GetObjectClass_ReturnValue) == 0x000070, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000078, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, CallFunc_EqualEqual_ClassClass_ReturnValue_1) == 0x000079, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::CallFunc_EqualEqual_ClassClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, CallFunc_BooleanOR_ReturnValue) == 0x00007A, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, CallFunc_IsValid_ReturnValue) == 0x00007B, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x00007C, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000088, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, Temp_bool_Has_Been_Initd_Variable) == 0x000094, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, CallFunc_SelectVector_ReturnValue) == 0x000098, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, CallFunc_MakeVector_ReturnValue) == 0x0000A4, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0000B0, "Member 'Athena_Prop_BurstReaction_C_ExecuteUbergraph_Athena_Prop_BurstReaction::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");

// Function Athena_Prop_BurstReaction.Athena_Prop_BurstReaction_C.FireEffect
// 0x000C (0x000C - 0x0000)
struct Athena_Prop_BurstReaction_C_FireEffect final
{
public:
	struct FVector                                HitLocation;                                       // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_Prop_BurstReaction_C_FireEffect) == 0x000004, "Wrong alignment on Athena_Prop_BurstReaction_C_FireEffect");
static_assert(sizeof(Athena_Prop_BurstReaction_C_FireEffect) == 0x00000C, "Wrong size on Athena_Prop_BurstReaction_C_FireEffect");
static_assert(offsetof(Athena_Prop_BurstReaction_C_FireEffect, HitLocation) == 0x000000, "Member 'Athena_Prop_BurstReaction_C_FireEffect::HitLocation' has a wrong offset!");

// Function Athena_Prop_BurstReaction.Athena_Prop_BurstReaction_C.OnDamagedCustom
// 0x0050 (0x0050 - 0x0000)
struct Athena_Prop_BurstReaction_C_OnDamagedCustom final
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damage;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59EF[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            InstigatedBy;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0020(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F0[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    FHitComponent;                                     // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BoneName;                                          // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Momentum;                                          // 0x0040(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_Prop_BurstReaction_C_OnDamagedCustom) == 0x000008, "Wrong alignment on Athena_Prop_BurstReaction_C_OnDamagedCustom");
static_assert(sizeof(Athena_Prop_BurstReaction_C_OnDamagedCustom) == 0x000050, "Wrong size on Athena_Prop_BurstReaction_C_OnDamagedCustom");
static_assert(offsetof(Athena_Prop_BurstReaction_C_OnDamagedCustom, DamagedActor) == 0x000000, "Member 'Athena_Prop_BurstReaction_C_OnDamagedCustom::DamagedActor' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_OnDamagedCustom, Damage) == 0x000008, "Member 'Athena_Prop_BurstReaction_C_OnDamagedCustom::Damage' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_OnDamagedCustom, InstigatedBy) == 0x000010, "Member 'Athena_Prop_BurstReaction_C_OnDamagedCustom::InstigatedBy' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_OnDamagedCustom, DamageCauser) == 0x000018, "Member 'Athena_Prop_BurstReaction_C_OnDamagedCustom::DamageCauser' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_OnDamagedCustom, HitLocation) == 0x000020, "Member 'Athena_Prop_BurstReaction_C_OnDamagedCustom::HitLocation' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_OnDamagedCustom, FHitComponent) == 0x000030, "Member 'Athena_Prop_BurstReaction_C_OnDamagedCustom::FHitComponent' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_OnDamagedCustom, BoneName) == 0x000038, "Member 'Athena_Prop_BurstReaction_C_OnDamagedCustom::BoneName' has a wrong offset!");
static_assert(offsetof(Athena_Prop_BurstReaction_C_OnDamagedCustom, Momentum) == 0x000040, "Member 'Athena_Prop_BurstReaction_C_OnDamagedCustom::Momentum' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FireHydrant__2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function FireHydrant__2.FireHydrant__2_C.ExecuteUbergraph_FireHydrant__2
// 0x0330 (0x0330 - 0x0000)
struct FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7402[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7403[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_7404[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep_1;           // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7405[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult_1;          // 0x00D8(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         K2Node_Event_Damage_1;                             // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  K2Node_Event_DamageTags_1;                         // 0x0168(0x0020)(ConstParm)
	struct FVector                                K2Node_Event_Momentum_1;                           // 0x0188(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitInfo_1;                            // 0x0194(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                              K2Node_Event_InstigatedBy_1;                       // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_DamageCauser_1;                       // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext_1;                      // 0x0230(0x0018)()
	float                                         K2Node_Event_Damage;                               // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7406[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;                           // 0x0250(0x0020)(ConstParm)
	struct FVector                                K2Node_Event_Momentum;                             // 0x0270(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitInfo;                              // 0x027C(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                            K2Node_Event_InstigatedBy;                         // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_DamageCauser;                         // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;                        // 0x0318(0x0018)()
};
static_assert(alignof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2) == 0x000008, "Wrong alignment on FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2");
static_assert(sizeof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2) == 0x000330, "Wrong size on FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, EntryPoint) == 0x000000, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::EntryPoint' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x0000B8, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_ComponentBoundEvent_OtherActor_1) == 0x0000C0, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_ComponentBoundEvent_OtherComp_1) == 0x0000C8, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x0000D0, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_ComponentBoundEvent_bFromSweep_1) == 0x0000D4, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_ComponentBoundEvent_bFromSweep_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_ComponentBoundEvent_SweepResult_1) == 0x0000D8, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_ComponentBoundEvent_SweepResult_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_Event_Damage_1) == 0x000164, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_Event_Damage_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_Event_DamageTags_1) == 0x000168, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_Event_DamageTags_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_Event_Momentum_1) == 0x000188, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_Event_Momentum_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_Event_HitInfo_1) == 0x000194, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_Event_HitInfo_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_Event_InstigatedBy_1) == 0x000220, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_Event_InstigatedBy_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_Event_DamageCauser_1) == 0x000228, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_Event_DamageCauser_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_Event_EffectContext_1) == 0x000230, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_Event_EffectContext_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_Event_Damage) == 0x000248, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_Event_DamageTags) == 0x000250, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_Event_Momentum) == 0x000270, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_Event_HitInfo) == 0x00027C, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_Event_InstigatedBy) == 0x000308, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_Event_DamageCauser) == 0x000310, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2, K2Node_Event_EffectContext) == 0x000318, "Member 'FireHydrant__2_C_ExecuteUbergraph_FireHydrant__2::K2Node_Event_EffectContext' has a wrong offset!");

// Function FireHydrant__2.FireHydrant__2_C.BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7407[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000B0, "Wrong size on FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'FireHydrant__2_C_BndEvt__Touch_Cylinder_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function FireHydrant__2.FireHydrant__2_C.OnDamageServer
// 0x00E8 (0x00E8 - 0x0000)
struct FireHydrant__2_C_OnDamageServer final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7408[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  DamageTags;                                        // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                Momentum;                                          // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitInfo;                                           // 0x0034(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                            InstigatedBy;                                      // 0x00C0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x00C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           EffectContext;                                     // 0x00D0(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(FireHydrant__2_C_OnDamageServer) == 0x000008, "Wrong alignment on FireHydrant__2_C_OnDamageServer");
static_assert(sizeof(FireHydrant__2_C_OnDamageServer) == 0x0000E8, "Wrong size on FireHydrant__2_C_OnDamageServer");
static_assert(offsetof(FireHydrant__2_C_OnDamageServer, Damage) == 0x000000, "Member 'FireHydrant__2_C_OnDamageServer::Damage' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_OnDamageServer, DamageTags) == 0x000008, "Member 'FireHydrant__2_C_OnDamageServer::DamageTags' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_OnDamageServer, Momentum) == 0x000028, "Member 'FireHydrant__2_C_OnDamageServer::Momentum' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_OnDamageServer, HitInfo) == 0x000034, "Member 'FireHydrant__2_C_OnDamageServer::HitInfo' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_OnDamageServer, InstigatedBy) == 0x0000C0, "Member 'FireHydrant__2_C_OnDamageServer::InstigatedBy' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_OnDamageServer, DamageCauser) == 0x0000C8, "Member 'FireHydrant__2_C_OnDamageServer::DamageCauser' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_OnDamageServer, EffectContext) == 0x0000D0, "Member 'FireHydrant__2_C_OnDamageServer::EffectContext' has a wrong offset!");

// Function FireHydrant__2.FireHydrant__2_C.OnDeathPlayEffects
// 0x00E8 (0x00E8 - 0x0000)
struct FireHydrant__2_C_OnDeathPlayEffects final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7409[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  DamageTags;                                        // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                Momentum;                                          // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitInfo;                                           // 0x0034(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                              InstigatedBy;                                      // 0x00C0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x00C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           EffectContext;                                     // 0x00D0(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(FireHydrant__2_C_OnDeathPlayEffects) == 0x000008, "Wrong alignment on FireHydrant__2_C_OnDeathPlayEffects");
static_assert(sizeof(FireHydrant__2_C_OnDeathPlayEffects) == 0x0000E8, "Wrong size on FireHydrant__2_C_OnDeathPlayEffects");
static_assert(offsetof(FireHydrant__2_C_OnDeathPlayEffects, Damage) == 0x000000, "Member 'FireHydrant__2_C_OnDeathPlayEffects::Damage' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_OnDeathPlayEffects, DamageTags) == 0x000008, "Member 'FireHydrant__2_C_OnDeathPlayEffects::DamageTags' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_OnDeathPlayEffects, Momentum) == 0x000028, "Member 'FireHydrant__2_C_OnDeathPlayEffects::Momentum' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_OnDeathPlayEffects, HitInfo) == 0x000034, "Member 'FireHydrant__2_C_OnDeathPlayEffects::HitInfo' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_OnDeathPlayEffects, InstigatedBy) == 0x0000C0, "Member 'FireHydrant__2_C_OnDeathPlayEffects::InstigatedBy' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_OnDeathPlayEffects, DamageCauser) == 0x0000C8, "Member 'FireHydrant__2_C_OnDeathPlayEffects::DamageCauser' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_OnDeathPlayEffects, EffectContext) == 0x0000D0, "Member 'FireHydrant__2_C_OnDeathPlayEffects::EffectContext' has a wrong offset!");

// Function FireHydrant__2.FireHydrant__2_C.BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_740A[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000B0, "Wrong size on FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'FireHydrant__2_C_BndEvt__Touch_Sphere_K2Node_ComponentBoundEvent_22_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function FireHydrant__2.FireHydrant__2_C.HandleExplodedState
// 0x0020 (0x0020 - 0x0000)
struct FireHydrant__2_C_HandleExplodedState final
{
public:
	class UStaticMeshComponent*                   CallFunc_GetBuildingMeshComponent_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCustomState_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FireHydrant__2_C_HandleExplodedState) == 0x000008, "Wrong alignment on FireHydrant__2_C_HandleExplodedState");
static_assert(sizeof(FireHydrant__2_C_HandleExplodedState) == 0x000020, "Wrong size on FireHydrant__2_C_HandleExplodedState");
static_assert(offsetof(FireHydrant__2_C_HandleExplodedState, CallFunc_GetBuildingMeshComponent_ReturnValue) == 0x000000, "Member 'FireHydrant__2_C_HandleExplodedState::CallFunc_GetBuildingMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_HandleExplodedState, CallFunc_GetCustomState_ReturnValue) == 0x000008, "Member 'FireHydrant__2_C_HandleExplodedState::CallFunc_GetCustomState_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_HandleExplodedState, K2Node_SwitchString_CmpSuccess) == 0x000018, "Member 'FireHydrant__2_C_HandleExplodedState::K2Node_SwitchString_CmpSuccess' has a wrong offset!");

// Function FireHydrant__2.FireHydrant__2_C.LaunchActor
// 0x00A8 (0x00A8 - 0x0000)
struct FireHydrant__2_C_LaunchActor final
{
public:
	class AActor*                                 ActorToLaunch;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    ComponentTriggeringLaunch;                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        PlayerToLaunch;                                    // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LaunchHoverboard_Success;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_740B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_740C[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_740D[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_740E[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_740F[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7410[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x00A0(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FireHydrant__2_C_LaunchActor) == 0x000008, "Wrong alignment on FireHydrant__2_C_LaunchActor");
static_assert(sizeof(FireHydrant__2_C_LaunchActor) == 0x0000A8, "Wrong size on FireHydrant__2_C_LaunchActor");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, ActorToLaunch) == 0x000000, "Member 'FireHydrant__2_C_LaunchActor::ActorToLaunch' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, ComponentTriggeringLaunch) == 0x000008, "Member 'FireHydrant__2_C_LaunchActor::ComponentTriggeringLaunch' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, PlayerToLaunch) == 0x000010, "Member 'FireHydrant__2_C_LaunchActor::PlayerToLaunch' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_LaunchHoverboard_Success) == 0x000018, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_LaunchHoverboard_Success' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000020, "Member 'FireHydrant__2_C_LaunchActor::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'FireHydrant__2_C_LaunchActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000029, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000030, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000038, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000048, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_GetVelocity_ReturnValue) == 0x00004C, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_BreakVector_X) == 0x000058, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_BreakVector_Y) == 0x00005C, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_BreakVector_Z) == 0x000060, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000064, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_Add_FloatFloat_ReturnValue) == 0x000068, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_GetController_ReturnValue) == 0x000070, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_MakeVector_ReturnValue) == 0x000078, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000088, "Member 'FireHydrant__2_C_LaunchActor::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, K2Node_DynamicCast_bSuccess_1) == 0x000090, "Member 'FireHydrant__2_C_LaunchActor::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_GetAbilitySystemComponent_ReturnValue_1) == 0x000098, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_GetAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FireHydrant__2_C_LaunchActor, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x0000A0, "Member 'FireHydrant__2_C_LaunchActor::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");

}

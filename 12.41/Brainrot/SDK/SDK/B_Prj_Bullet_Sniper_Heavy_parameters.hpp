#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Bullet_Sniper_Heavy

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_Prj_Bullet_Sniper_Heavy.B_Prj_Bullet_Sniper_Heavy_C.ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy
// 0x0300 (0x0300 - 0x0000)
struct B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64D6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64D7[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitResult;                            // 0x0028(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          K2Node_Event_bIsOverlap;                           // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64D8[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_WaterHit;                             // 0x00B8(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_64D9[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWaterBodyActor*                    K2Node_Event_WaterBody;                            // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64DA[0x2];                                     // 0x0152(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x015C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0168(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64DB[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation; // 0x01D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal; // 0x01DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition; // 0x01E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLastWaterSurfaceInfo_WaterDepth;       // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx;     // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLastWaterSurfaceInfo_WaterVelocity;    // 0x01FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x020C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x021A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x021B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64DC[0x3];                                     // 0x021D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x0228(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x0234(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x0240(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x024C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x0268(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x0280(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x028C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64DD[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x02A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x02A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64DE[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_1;     // 0x02B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64DF[0x2];                                     // 0x02C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetWaterSurfaceInfo_WaterPlaneLocation;   // 0x02C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetWaterSurfaceInfo_WaterPlaneNormal;     // 0x02D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetWaterSurfaceInfo_WaterSurfacePosition; // 0x02DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWaterSurfaceInfo_WaterDepth;           // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWaterSurfaceInfo_WaterBodyIdx;         // 0x02EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetWaterSurfaceInfo_WaterVelocity;        // 0x02F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy) == 0x000008, "Wrong alignment on B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy");
static_assert(sizeof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy) == 0x000300, "Wrong size on B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, EntryPoint) == 0x000000, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_GetInstigator_ReturnValue) == 0x000008, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_IsLocallyControlled_ReturnValue) == 0x000010, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_IsDedicatedServer_ReturnValue) == 0x000011, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000012, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, K2Node_Event_OtherActor) == 0x000018, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, K2Node_Event_OtherComp) == 0x000020, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, K2Node_Event_HitResult) == 0x000028, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, K2Node_Event_bIsOverlap) == 0x0000B4, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::K2Node_Event_bIsOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, K2Node_Event_WaterHit) == 0x0000B8, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::K2Node_Event_WaterHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, K2Node_Event_WaterBody) == 0x000148, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::K2Node_Event_WaterBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_bBlockingHit) == 0x000150, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_bInitialOverlap) == 0x000151, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_Time) == 0x000154, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_Distance) == 0x000158, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_Location) == 0x00015C, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_ImpactPoint) == 0x000168, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_Normal) == 0x000174, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_ImpactNormal) == 0x000180, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_PhysMat) == 0x000190, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_HitActor) == 0x000198, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_HitComponent) == 0x0001A0, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_HitBoneName) == 0x0001A8, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_HitItem) == 0x0001B0, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_FaceIndex) == 0x0001B4, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_TraceStart) == 0x0001B8, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_TraceEnd) == 0x0001C4, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation) == 0x0001D0, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal) == 0x0001DC, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition) == 0x0001E8, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_GetLastWaterSurfaceInfo_WaterDepth) == 0x0001F4, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_GetLastWaterSurfaceInfo_WaterDepth' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx) == 0x0001F8, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_GetLastWaterSurfaceInfo_WaterVelocity) == 0x0001FC, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_GetLastWaterSurfaceInfo_WaterVelocity' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000208, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x00020C, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, Temp_bool_IsClosed_Variable) == 0x000218, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_IsValid_ReturnValue) == 0x000219, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00021A, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_bBlockingHit_1) == 0x00021B, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x00021C, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_Time_1) == 0x000220, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_Distance_1) == 0x000224, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_Location_1) == 0x000228, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_ImpactPoint_1) == 0x000234, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_Normal_1) == 0x000240, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_ImpactNormal_1) == 0x00024C, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_PhysMat_1) == 0x000258, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_HitActor_1) == 0x000260, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_HitComponent_1) == 0x000268, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_HitBoneName_1) == 0x000270, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_HitItem_1) == 0x000278, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_FaceIndex_1) == 0x00027C, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_TraceStart_1) == 0x000280, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BreakHitResult_TraceEnd_1) == 0x00028C, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000298, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0002A0, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_MakeRotFromX_ReturnValue) == 0x0002A8, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_SpawnEmitterAtLocation_ReturnValue_1) == 0x0002B8, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_SpawnEmitterAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, Temp_bool_Has_Been_Initd_Variable) == 0x0002C0, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_IsValid_ReturnValue_1) == 0x0002C1, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_GetWaterSurfaceInfo_WaterPlaneLocation) == 0x0002C4, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_GetWaterSurfaceInfo_WaterPlaneLocation' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_GetWaterSurfaceInfo_WaterPlaneNormal) == 0x0002D0, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_GetWaterSurfaceInfo_WaterPlaneNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_GetWaterSurfaceInfo_WaterSurfacePosition) == 0x0002DC, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_GetWaterSurfaceInfo_WaterSurfacePosition' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_GetWaterSurfaceInfo_WaterDepth) == 0x0002E8, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_GetWaterSurfaceInfo_WaterDepth' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_GetWaterSurfaceInfo_WaterBodyIdx) == 0x0002EC, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_GetWaterSurfaceInfo_WaterBodyIdx' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_GetWaterSurfaceInfo_WaterVelocity) == 0x0002F0, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_GetWaterSurfaceInfo_WaterVelocity' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002FC, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy, CallFunc_BooleanAND_ReturnValue) == 0x0002FD, "Member 'B_Prj_Bullet_Sniper_Heavy_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Heavy::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function B_Prj_Bullet_Sniper_Heavy.B_Prj_Bullet_Sniper_Heavy_C.OnSniperTraceWaterHit
// 0x0098 (0x0098 - 0x0000)
struct B_Prj_Bullet_Sniper_Heavy_C_OnSniperTraceWaterHit final
{
public:
	struct FHitResult                             Param_WaterHit;                                    // 0x0000(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_64E0[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWaterBodyActor*                    WaterBody;                                         // 0x0090(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Bullet_Sniper_Heavy_C_OnSniperTraceWaterHit) == 0x000008, "Wrong alignment on B_Prj_Bullet_Sniper_Heavy_C_OnSniperTraceWaterHit");
static_assert(sizeof(B_Prj_Bullet_Sniper_Heavy_C_OnSniperTraceWaterHit) == 0x000098, "Wrong size on B_Prj_Bullet_Sniper_Heavy_C_OnSniperTraceWaterHit");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_OnSniperTraceWaterHit, Param_WaterHit) == 0x000000, "Member 'B_Prj_Bullet_Sniper_Heavy_C_OnSniperTraceWaterHit::Param_WaterHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_OnSniperTraceWaterHit, WaterBody) == 0x000090, "Member 'B_Prj_Bullet_Sniper_Heavy_C_OnSniperTraceWaterHit::WaterBody' has a wrong offset!");

// Function B_Prj_Bullet_Sniper_Heavy.B_Prj_Bullet_Sniper_Heavy_C.OnTouched
// 0x00A0 (0x00A0 - 0x0000)
struct B_Prj_Bullet_Sniper_Heavy_C_OnTouched final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitResult;                                         // 0x0010(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          bIsOverlap;                                        // 0x009C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Prj_Bullet_Sniper_Heavy_C_OnTouched) == 0x000008, "Wrong alignment on B_Prj_Bullet_Sniper_Heavy_C_OnTouched");
static_assert(sizeof(B_Prj_Bullet_Sniper_Heavy_C_OnTouched) == 0x0000A0, "Wrong size on B_Prj_Bullet_Sniper_Heavy_C_OnTouched");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_OnTouched, OtherActor) == 0x000000, "Member 'B_Prj_Bullet_Sniper_Heavy_C_OnTouched::OtherActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_OnTouched, OtherComp) == 0x000008, "Member 'B_Prj_Bullet_Sniper_Heavy_C_OnTouched::OtherComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_OnTouched, HitResult) == 0x000010, "Member 'B_Prj_Bullet_Sniper_Heavy_C_OnTouched::HitResult' has a wrong offset!");
static_assert(offsetof(B_Prj_Bullet_Sniper_Heavy_C_OnTouched, bIsOverlap) == 0x00009C, "Member 'B_Prj_Bullet_Sniper_Heavy_C_OnTouched::bIsOverlap' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TODM_Disabled

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "MASTER_TODM_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TODM_Disabled.TODM_Disabled_C
// 0x0180 (0x1170 - 0x0FF0)
class ATODM_Disabled_C final : public AMASTER_TODM_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TODM_Disabled_C;                    // 0x0FF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         WindSpeed_0;                                       // 0x0FF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomWeatherWaitTime_0;                           // 0x0FFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentAmountOfRandomWeatherTimeLeft_0;            // 0x1000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewWeatherLerpAmount_0;                            // 0x1004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindStrength_0;                                    // 0x1008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FutureWindStrength_0;                              // 0x100C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FutureWindSpeed_0;                                 // 0x1010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPickNewWindConditions_0;                          // 0x1014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6507[0x3];                                     // 0x1015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LightningStrength_0;                               // 0x1018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ThreatCloudStormAmount_0;                          // 0x101C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseRainWithStorms_0;                               // 0x1020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Play_a_Particle_Effect_Near_the_players_Feet_0;    // 0x1021(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          WindEffects_Should_be_Active_0;                    // 0x1022(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6508[0x5];                                     // 0x1023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               Storm_Foot_Particle_Outdoor_0;                     // 0x1028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Storm_Foot_Particle_While_on_Terrain_0;            // 0x1030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Storm_Foot_Particle_Indoor_0;                      // 0x1038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Storm_Foot_Particle_While_NOT_on_Terrain_0;        // 0x1040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Storm_Wind_Strength_0;                             // 0x1048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Generate_Foliage_Wind_Gusts_0;                     // 0x104C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6509[0x3];                                     // 0x104D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           LightningStrikeTimerHandle_0;                      // 0x1050(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           PreviousDirectionalLightColor_0;                   // 0x1058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Lightning_Flash_Color_0;                           // 0x1068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Lightning_Flash_Timeline_Min_0;                    // 0x1078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Lightning_Flash_Timeline_Max_0;                    // 0x107C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ShootingStarParticleSystem_0;                      // 0x1080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Spawn_Shooting_Stars_0;                            // 0x1088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_650A[0x3];                                     // 0x1089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           SkyboxFogMorningColor_0;                           // 0x108C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogMorningLitColor_0;                        // 0x109C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningDistance_0;                        // 0x10AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningDiffuseAmount_0;                   // 0x10B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningEmissiveAmount_0;                  // 0x10B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitLength_0;                       // 0x10B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitRotation_0;                     // 0x10BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitOffset_0;                       // 0x10C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogDayColor_0;                               // 0x10C4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogDayLitColor_0;                            // 0x10D4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayDistance_0;                            // 0x10E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayDiffuseAmount_0;                       // 0x10E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayEmissiveAmount_0;                      // 0x10EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitLength_0;                           // 0x10F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitRotation_0;                         // 0x10F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitOffset_0;                           // 0x10F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogEveningColor_0;                           // 0x10FC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogEveningLitColor_0;                        // 0x110C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningDistance_0;                        // 0x111C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningDiffuseAmount_0;                   // 0x1120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningEmissiveAmount_0;                  // 0x1124(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitLength_0;                       // 0x1128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitRotation_0;                     // 0x112C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitOffset_0;                       // 0x1130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogNightColor_0;                             // 0x1134(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogNightLitColor_0;                          // 0x1144(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightDistance_0;                          // 0x1154(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightDiffuseAmount_0;                     // 0x1158(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightEmissiveAmount_0;                    // 0x115C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitLength_0;                         // 0x1160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitRotation_0;                       // 0x1164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitOffset_0;                         // 0x1168(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void DisableLightAndFog(bool Enable);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TODM_Disabled(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TODM_Disabled_C">();
	}
	static class ATODM_Disabled_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATODM_Disabled_C>();
	}
};
static_assert(alignof(ATODM_Disabled_C) == 0x000010, "Wrong alignment on ATODM_Disabled_C");
static_assert(sizeof(ATODM_Disabled_C) == 0x001170, "Wrong size on ATODM_Disabled_C");
static_assert(offsetof(ATODM_Disabled_C, UberGraphFrame_TODM_Disabled_C) == 0x000FF0, "Member 'ATODM_Disabled_C::UberGraphFrame_TODM_Disabled_C' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, WindSpeed_0) == 0x000FF8, "Member 'ATODM_Disabled_C::WindSpeed_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, RandomWeatherWaitTime_0) == 0x000FFC, "Member 'ATODM_Disabled_C::RandomWeatherWaitTime_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, CurrentAmountOfRandomWeatherTimeLeft_0) == 0x001000, "Member 'ATODM_Disabled_C::CurrentAmountOfRandomWeatherTimeLeft_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, NewWeatherLerpAmount_0) == 0x001004, "Member 'ATODM_Disabled_C::NewWeatherLerpAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, WindStrength_0) == 0x001008, "Member 'ATODM_Disabled_C::WindStrength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, FutureWindStrength_0) == 0x00100C, "Member 'ATODM_Disabled_C::FutureWindStrength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, FutureWindSpeed_0) == 0x001010, "Member 'ATODM_Disabled_C::FutureWindSpeed_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, bPickNewWindConditions_0) == 0x001014, "Member 'ATODM_Disabled_C::bPickNewWindConditions_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, LightningStrength_0) == 0x001018, "Member 'ATODM_Disabled_C::LightningStrength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, ThreatCloudStormAmount_0) == 0x00101C, "Member 'ATODM_Disabled_C::ThreatCloudStormAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, UseRainWithStorms_0) == 0x001020, "Member 'ATODM_Disabled_C::UseRainWithStorms_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Play_a_Particle_Effect_Near_the_players_Feet_0) == 0x001021, "Member 'ATODM_Disabled_C::Play_a_Particle_Effect_Near_the_players_Feet_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, WindEffects_Should_be_Active_0) == 0x001022, "Member 'ATODM_Disabled_C::WindEffects_Should_be_Active_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Storm_Foot_Particle_Outdoor_0) == 0x001028, "Member 'ATODM_Disabled_C::Storm_Foot_Particle_Outdoor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Storm_Foot_Particle_While_on_Terrain_0) == 0x001030, "Member 'ATODM_Disabled_C::Storm_Foot_Particle_While_on_Terrain_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Storm_Foot_Particle_Indoor_0) == 0x001038, "Member 'ATODM_Disabled_C::Storm_Foot_Particle_Indoor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Storm_Foot_Particle_While_NOT_on_Terrain_0) == 0x001040, "Member 'ATODM_Disabled_C::Storm_Foot_Particle_While_NOT_on_Terrain_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Storm_Wind_Strength_0) == 0x001048, "Member 'ATODM_Disabled_C::Storm_Wind_Strength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Generate_Foliage_Wind_Gusts_0) == 0x00104C, "Member 'ATODM_Disabled_C::Generate_Foliage_Wind_Gusts_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, LightningStrikeTimerHandle_0) == 0x001050, "Member 'ATODM_Disabled_C::LightningStrikeTimerHandle_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, PreviousDirectionalLightColor_0) == 0x001058, "Member 'ATODM_Disabled_C::PreviousDirectionalLightColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Lightning_Flash_Color_0) == 0x001068, "Member 'ATODM_Disabled_C::Lightning_Flash_Color_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Lightning_Flash_Timeline_Min_0) == 0x001078, "Member 'ATODM_Disabled_C::Lightning_Flash_Timeline_Min_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Lightning_Flash_Timeline_Max_0) == 0x00107C, "Member 'ATODM_Disabled_C::Lightning_Flash_Timeline_Max_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, ShootingStarParticleSystem_0) == 0x001080, "Member 'ATODM_Disabled_C::ShootingStarParticleSystem_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Spawn_Shooting_Stars_0) == 0x001088, "Member 'ATODM_Disabled_C::Spawn_Shooting_Stars_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningColor_0) == 0x00108C, "Member 'ATODM_Disabled_C::SkyboxFogMorningColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningLitColor_0) == 0x00109C, "Member 'ATODM_Disabled_C::SkyboxFogMorningLitColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningDistance_0) == 0x0010AC, "Member 'ATODM_Disabled_C::SkyboxFogMorningDistance_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningDiffuseAmount_0) == 0x0010B0, "Member 'ATODM_Disabled_C::SkyboxFogMorningDiffuseAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningEmissiveAmount_0) == 0x0010B4, "Member 'ATODM_Disabled_C::SkyboxFogMorningEmissiveAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningLitLength_0) == 0x0010B8, "Member 'ATODM_Disabled_C::SkyboxFogMorningLitLength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningLitRotation_0) == 0x0010BC, "Member 'ATODM_Disabled_C::SkyboxFogMorningLitRotation_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningLitOffset_0) == 0x0010C0, "Member 'ATODM_Disabled_C::SkyboxFogMorningLitOffset_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayColor_0) == 0x0010C4, "Member 'ATODM_Disabled_C::SkyboxFogDayColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayLitColor_0) == 0x0010D4, "Member 'ATODM_Disabled_C::SkyboxFogDayLitColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayDistance_0) == 0x0010E4, "Member 'ATODM_Disabled_C::SkyboxFogDayDistance_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayDiffuseAmount_0) == 0x0010E8, "Member 'ATODM_Disabled_C::SkyboxFogDayDiffuseAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayEmissiveAmount_0) == 0x0010EC, "Member 'ATODM_Disabled_C::SkyboxFogDayEmissiveAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayLitLength_0) == 0x0010F0, "Member 'ATODM_Disabled_C::SkyboxFogDayLitLength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayLitRotation_0) == 0x0010F4, "Member 'ATODM_Disabled_C::SkyboxFogDayLitRotation_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayLitOffset_0) == 0x0010F8, "Member 'ATODM_Disabled_C::SkyboxFogDayLitOffset_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningColor_0) == 0x0010FC, "Member 'ATODM_Disabled_C::SkyboxFogEveningColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningLitColor_0) == 0x00110C, "Member 'ATODM_Disabled_C::SkyboxFogEveningLitColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningDistance_0) == 0x00111C, "Member 'ATODM_Disabled_C::SkyboxFogEveningDistance_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningDiffuseAmount_0) == 0x001120, "Member 'ATODM_Disabled_C::SkyboxFogEveningDiffuseAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningEmissiveAmount_0) == 0x001124, "Member 'ATODM_Disabled_C::SkyboxFogEveningEmissiveAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningLitLength_0) == 0x001128, "Member 'ATODM_Disabled_C::SkyboxFogEveningLitLength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningLitRotation_0) == 0x00112C, "Member 'ATODM_Disabled_C::SkyboxFogEveningLitRotation_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningLitOffset_0) == 0x001130, "Member 'ATODM_Disabled_C::SkyboxFogEveningLitOffset_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightColor_0) == 0x001134, "Member 'ATODM_Disabled_C::SkyboxFogNightColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightLitColor_0) == 0x001144, "Member 'ATODM_Disabled_C::SkyboxFogNightLitColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightDistance_0) == 0x001154, "Member 'ATODM_Disabled_C::SkyboxFogNightDistance_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightDiffuseAmount_0) == 0x001158, "Member 'ATODM_Disabled_C::SkyboxFogNightDiffuseAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightEmissiveAmount_0) == 0x00115C, "Member 'ATODM_Disabled_C::SkyboxFogNightEmissiveAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightLitLength_0) == 0x001160, "Member 'ATODM_Disabled_C::SkyboxFogNightLitLength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightLitRotation_0) == 0x001164, "Member 'ATODM_Disabled_C::SkyboxFogNightLitRotation_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightLitOffset_0) == 0x001168, "Member 'ATODM_Disabled_C::SkyboxFogNightLitOffset_0' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Prop_ParentBuildingContainerBlueprint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "DayPhaseFloats_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C
// 0x00E0 (0x0C80 - 0x0BA0)
class AAthena_Prop_ParentBuildingContainerBlueprint_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          DebugWind;                                         // 0x0BA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7367[0x7];                                     // 0x0BA9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             IntenseWindMaterialsForPreview;                    // 0x0BB0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                   Wind_Intensity_Debug_Mesh;                         // 0x0BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             OriginalMaterials;                                 // 0x0BC8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               Debug_TempMaterial;                                // 0x0BD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugWindYaw;                                      // 0x0BE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Debug_Wind_Intensity;                              // 0x0BE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Set_Max_Actor_Scale;                               // 0x0BE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7368[0x3];                                     // 0x0BE9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Max_Scale;                                         // 0x0BEC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Disable_TOD_Lights_and_Material_Emissive_Values;   // 0x0BF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active; // 0x0BF1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Use_An_Alternate_Shadow_Mesh_When_The_Light_is_On_; // 0x0BF2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7369[0x5];                                     // 0x0BF3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            AlternateShadowStaticMesh;                         // 0x0BF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Animate_Emissive_and_Lights_Over_Time;             // 0x0C00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_736A[0x7];                                     // 0x0C01(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLinearColor>                   CodeControlled_EmissiveColor;                      // 0x0C08(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                 CodeControlled_LightConeOpacity;                   // 0x0C18(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDayPhaseFloats                        Light_Intensity_Over_Time_of_Day_;                 // 0x0C28(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Day_Phase_Transition_Length;                       // 0x0C38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDayPhaseFloats                        Emissive_Intensity_Over_Time_of_Day;               // 0x0C3C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Volumetric_Light_Scattering_Intensity;             // 0x0C4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Cast_Volumetric_Shadows;                           // 0x0C50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Animate_Lights_With_A_Curve_Minus_Disables_time_of_day_light_controls; // 0x0C51(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Animate_Mesh_MID_Emissive_Value_with_a_Curve_Minus_Disables_time_of_day_light_controls; // 0x0C52(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_736B[0x5];                                     // 0x0C53(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            LightAnimationCurve;                               // 0x0C58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CodeControlled_Animation_Curve_Animation_Length;   // 0x0C60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CodeControlled_NumberOfMaterials;                  // 0x0C64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 NewVar_0;                                          // 0x0C68(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         Random_Time_Scale_Percent;                         // 0x0C78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CodeControlled_CurrentPlayLength;                  // 0x0C7C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint(int32 EntryPoint);
	void OnSetSearched();
	void OnBounceAnimationUpdate(const struct FFortBounceData& Data);
	void Loop_Animation_Curve();
	void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables* OutVariables);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Prop_ParentBuildingContainerBlueprint_C">();
	}
	static class AAthena_Prop_ParentBuildingContainerBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Prop_ParentBuildingContainerBlueprint_C>();
	}
};
static_assert(alignof(AAthena_Prop_ParentBuildingContainerBlueprint_C) == 0x000008, "Wrong alignment on AAthena_Prop_ParentBuildingContainerBlueprint_C");
static_assert(sizeof(AAthena_Prop_ParentBuildingContainerBlueprint_C) == 0x000C80, "Wrong size on AAthena_Prop_ParentBuildingContainerBlueprint_C");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, UberGraphFrame) == 0x000BA0, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, DebugWind) == 0x000BA8, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::DebugWind' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, IntenseWindMaterialsForPreview) == 0x000BB0, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::IntenseWindMaterialsForPreview' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Wind_Intensity_Debug_Mesh) == 0x000BC0, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Wind_Intensity_Debug_Mesh' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, OriginalMaterials) == 0x000BC8, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::OriginalMaterials' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Debug_TempMaterial) == 0x000BD8, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Debug_TempMaterial' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, DebugWindYaw) == 0x000BE0, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::DebugWindYaw' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Debug_Wind_Intensity) == 0x000BE4, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Debug_Wind_Intensity' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Set_Max_Actor_Scale) == 0x000BE8, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Set_Max_Actor_Scale' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Max_Scale) == 0x000BEC, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Max_Scale' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Disable_TOD_Lights_and_Material_Emissive_Values) == 0x000BF0, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Disable_TOD_Lights_and_Material_Emissive_Values' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active) == 0x000BF1, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Use_An_Alternate_Shadow_Mesh_When_The_Light_is_On_) == 0x000BF2, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Use_An_Alternate_Shadow_Mesh_When_The_Light_is_On_' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, AlternateShadowStaticMesh) == 0x000BF8, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::AlternateShadowStaticMesh' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Animate_Emissive_and_Lights_Over_Time) == 0x000C00, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Animate_Emissive_and_Lights_Over_Time' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, CodeControlled_EmissiveColor) == 0x000C08, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::CodeControlled_EmissiveColor' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, CodeControlled_LightConeOpacity) == 0x000C18, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::CodeControlled_LightConeOpacity' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Light_Intensity_Over_Time_of_Day_) == 0x000C28, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Light_Intensity_Over_Time_of_Day_' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Day_Phase_Transition_Length) == 0x000C38, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Day_Phase_Transition_Length' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Emissive_Intensity_Over_Time_of_Day) == 0x000C3C, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Emissive_Intensity_Over_Time_of_Day' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Volumetric_Light_Scattering_Intensity) == 0x000C4C, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Volumetric_Light_Scattering_Intensity' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Cast_Volumetric_Shadows) == 0x000C50, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Cast_Volumetric_Shadows' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Animate_Lights_With_A_Curve_Minus_Disables_time_of_day_light_controls) == 0x000C51, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Animate_Lights_With_A_Curve_Minus_Disables_time_of_day_light_controls' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Animate_Mesh_MID_Emissive_Value_with_a_Curve_Minus_Disables_time_of_day_light_controls) == 0x000C52, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Animate_Mesh_MID_Emissive_Value_with_a_Curve_Minus_Disables_time_of_day_light_controls' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, LightAnimationCurve) == 0x000C58, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::LightAnimationCurve' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, CodeControlled_Animation_Curve_Animation_Length) == 0x000C60, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::CodeControlled_Animation_Curve_Animation_Length' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, CodeControlled_NumberOfMaterials) == 0x000C64, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::CodeControlled_NumberOfMaterials' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, NewVar_0) == 0x000C68, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, Random_Time_Scale_Percent) == 0x000C78, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::Random_Time_Scale_Percent' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_ParentBuildingContainerBlueprint_C, CodeControlled_CurrentPlayLength) == 0x000C7C, "Member 'AAthena_Prop_ParentBuildingContainerBlueprint_C::CodeControlled_CurrentPlayLength' has a wrong offset!");

}

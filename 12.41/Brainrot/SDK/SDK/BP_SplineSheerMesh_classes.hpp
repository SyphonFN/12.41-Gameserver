#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineSheerMesh

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SplineSheerMesh.BP_SplineSheerMesh_C
// 0x0030 (0x0248 - 0x0218)
class ABP_SplineSheerMesh_C final : public AActor
{
public:
	class USplineMeshComponent*                   SplineMesh;                                        // 0x0218(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            StaticMesh;                                        // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Material;                                          // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESplineMeshAxis                               ForwardAxis;                                       // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7299[0x3];                                     // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Length;                                            // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Offset_X;                                          // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Offset_Y;                                          // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SplineSheerMesh_C">();
	}
	static class ABP_SplineSheerMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SplineSheerMesh_C>();
	}
};
static_assert(alignof(ABP_SplineSheerMesh_C) == 0x000008, "Wrong alignment on ABP_SplineSheerMesh_C");
static_assert(sizeof(ABP_SplineSheerMesh_C) == 0x000248, "Wrong size on ABP_SplineSheerMesh_C");
static_assert(offsetof(ABP_SplineSheerMesh_C, SplineMesh) == 0x000218, "Member 'ABP_SplineSheerMesh_C::SplineMesh' has a wrong offset!");
static_assert(offsetof(ABP_SplineSheerMesh_C, DefaultSceneRoot) == 0x000220, "Member 'ABP_SplineSheerMesh_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SplineSheerMesh_C, StaticMesh) == 0x000228, "Member 'ABP_SplineSheerMesh_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_SplineSheerMesh_C, Material) == 0x000230, "Member 'ABP_SplineSheerMesh_C::Material' has a wrong offset!");
static_assert(offsetof(ABP_SplineSheerMesh_C, ForwardAxis) == 0x000238, "Member 'ABP_SplineSheerMesh_C::ForwardAxis' has a wrong offset!");
static_assert(offsetof(ABP_SplineSheerMesh_C, Length) == 0x00023C, "Member 'ABP_SplineSheerMesh_C::Length' has a wrong offset!");
static_assert(offsetof(ABP_SplineSheerMesh_C, Offset_X) == 0x000240, "Member 'ABP_SplineSheerMesh_C::Offset_X' has a wrong offset!");
static_assert(offsetof(ABP_SplineSheerMesh_C, Offset_Y) == 0x000244, "Member 'ABP_SplineSheerMesh_C::Offset_Y' has a wrong offset!");

}


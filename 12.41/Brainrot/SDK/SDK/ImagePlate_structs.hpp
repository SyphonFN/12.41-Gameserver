#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImagePlate

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// ScriptStruct ImagePlate.ImagePlateParameters
// 0x0038 (0x0038 - 0x0000)
struct FImagePlateParameters final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TextureParameterName;                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFillScreen;                                       // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4101[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              FillScreenAmount;                                  // 0x0014(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              FixedSize;                                         // 0x001C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4102[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               RenderTexture;                                     // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*               DynamicMaterial;                                   // 0x0030(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FImagePlateParameters) == 0x000008, "Wrong alignment on FImagePlateParameters");
static_assert(sizeof(FImagePlateParameters) == 0x000038, "Wrong size on FImagePlateParameters");
static_assert(offsetof(FImagePlateParameters, Material) == 0x000000, "Member 'FImagePlateParameters::Material' has a wrong offset!");
static_assert(offsetof(FImagePlateParameters, TextureParameterName) == 0x000008, "Member 'FImagePlateParameters::TextureParameterName' has a wrong offset!");
static_assert(offsetof(FImagePlateParameters, bFillScreen) == 0x000010, "Member 'FImagePlateParameters::bFillScreen' has a wrong offset!");
static_assert(offsetof(FImagePlateParameters, FillScreenAmount) == 0x000014, "Member 'FImagePlateParameters::FillScreenAmount' has a wrong offset!");
static_assert(offsetof(FImagePlateParameters, FixedSize) == 0x00001C, "Member 'FImagePlateParameters::FixedSize' has a wrong offset!");
static_assert(offsetof(FImagePlateParameters, RenderTexture) == 0x000028, "Member 'FImagePlateParameters::RenderTexture' has a wrong offset!");
static_assert(offsetof(FImagePlateParameters, DynamicMaterial) == 0x000030, "Member 'FImagePlateParameters::DynamicMaterial' has a wrong offset!");

// ScriptStruct ImagePlate.MovieSceneImagePlateSectionParams
// 0x0018 (0x0018 - 0x0000)
struct FMovieSceneImagePlateSectionParams final
{
public:
	struct FFrameNumber                           SectionStartTime;                                  // 0x0000(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4103[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImagePlateFileSequence*                FileSequence;                                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReuseExistingTexture;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4104[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneImagePlateSectionParams) == 0x000008, "Wrong alignment on FMovieSceneImagePlateSectionParams");
static_assert(sizeof(FMovieSceneImagePlateSectionParams) == 0x000018, "Wrong size on FMovieSceneImagePlateSectionParams");
static_assert(offsetof(FMovieSceneImagePlateSectionParams, SectionStartTime) == 0x000000, "Member 'FMovieSceneImagePlateSectionParams::SectionStartTime' has a wrong offset!");
static_assert(offsetof(FMovieSceneImagePlateSectionParams, FileSequence) == 0x000008, "Member 'FMovieSceneImagePlateSectionParams::FileSequence' has a wrong offset!");
static_assert(offsetof(FMovieSceneImagePlateSectionParams, bReuseExistingTexture) == 0x000010, "Member 'FMovieSceneImagePlateSectionParams::bReuseExistingTexture' has a wrong offset!");

// ScriptStruct ImagePlate.MovieSceneImagePlateSectionTemplate
// 0x0040 (0x0060 - 0x0020)
struct FMovieSceneImagePlateSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData         PropertyData;                                      // 0x0020(0x0028)(NativeAccessSpecifierPrivate)
	struct FMovieSceneImagePlateSectionParams     Params;                                            // 0x0048(0x0018)(NoDestructor, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FMovieSceneImagePlateSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneImagePlateSectionTemplate");
static_assert(sizeof(FMovieSceneImagePlateSectionTemplate) == 0x000060, "Wrong size on FMovieSceneImagePlateSectionTemplate");
static_assert(offsetof(FMovieSceneImagePlateSectionTemplate, PropertyData) == 0x000020, "Member 'FMovieSceneImagePlateSectionTemplate::PropertyData' has a wrong offset!");
static_assert(offsetof(FMovieSceneImagePlateSectionTemplate, Params) == 0x000048, "Member 'FMovieSceneImagePlateSectionTemplate::Params' has a wrong offset!");

}

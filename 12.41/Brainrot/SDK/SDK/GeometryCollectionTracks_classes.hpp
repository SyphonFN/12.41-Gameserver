#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCollectionTracks

#include "Basic.hpp"

#include "GeometryCollectionTracks_structs.hpp"
#include "MovieScene_classes.hpp"


namespace SDK
{

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// 0x0030 (0x0110 - 0x00E0)
class UMovieSceneGeometryCollectionSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCollectionParams    Params;                                            // 0x00E0(0x0030)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneGeometryCollectionSection">();
	}
	static class UMovieSceneGeometryCollectionSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneGeometryCollectionSection>();
	}
};
static_assert(alignof(UMovieSceneGeometryCollectionSection) == 0x000008, "Wrong alignment on UMovieSceneGeometryCollectionSection");
static_assert(sizeof(UMovieSceneGeometryCollectionSection) == 0x000110, "Wrong size on UMovieSceneGeometryCollectionSection");
static_assert(offsetof(UMovieSceneGeometryCollectionSection, Params) == 0x0000E0, "Member 'UMovieSceneGeometryCollectionSection::Params' has a wrong offset!");

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneGeometryCollectionTrack final : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>             AnimationSections;                                 // 0x0058(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneGeometryCollectionTrack">();
	}
	static class UMovieSceneGeometryCollectionTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneGeometryCollectionTrack>();
	}
};
static_assert(alignof(UMovieSceneGeometryCollectionTrack) == 0x000008, "Wrong alignment on UMovieSceneGeometryCollectionTrack");
static_assert(sizeof(UMovieSceneGeometryCollectionTrack) == 0x000068, "Wrong size on UMovieSceneGeometryCollectionTrack");
static_assert(offsetof(UMovieSceneGeometryCollectionTrack, AnimationSections) == 0x000058, "Member 'UMovieSceneGeometryCollectionTrack::AnimationSections' has a wrong offset!");

}

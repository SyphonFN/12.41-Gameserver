#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerSurveyMultipleChoiceListItemWidgetInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C
// 0x0000 (0x0028 - 0x0028)
class IPlayerSurveyMultipleChoiceListItemWidgetInterface_C final : public IInterface
{
public:
	void SetChoiceData(const struct FFortPlayerSurveyQuestionChoice& Value);
	void SetIndex(int32 Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSurveyMultipleChoiceListItemWidgetInterface_C">();
	}
	static class IPlayerSurveyMultipleChoiceListItemWidgetInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPlayerSurveyMultipleChoiceListItemWidgetInterface_C>();
	}
};
static_assert(alignof(IPlayerSurveyMultipleChoiceListItemWidgetInterface_C) == 0x000008, "Wrong alignment on IPlayerSurveyMultipleChoiceListItemWidgetInterface_C");
static_assert(sizeof(IPlayerSurveyMultipleChoiceListItemWidgetInterface_C) == 0x000028, "Wrong size on IPlayerSurveyMultipleChoiceListItemWidgetInterface_C");

}

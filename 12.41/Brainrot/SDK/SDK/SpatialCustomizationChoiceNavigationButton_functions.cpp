#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialCustomizationChoiceNavigationButton

#include "Basic.hpp"

#include "SpatialCustomizationChoiceNavigationButton_classes.hpp"
#include "SpatialCustomizationChoiceNavigationButton_parameters.hpp"


namespace SDK
{

// Function SpatialCustomizationChoiceNavigationButton.SpatialCustomizationChoiceNavigationButton_C.ExecuteUbergraph_SpatialCustomizationChoiceNavigationButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialCustomizationChoiceNavigationButton_C::ExecuteUbergraph_SpatialCustomizationChoiceNavigationButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialCustomizationChoiceNavigationButton_C", "ExecuteUbergraph_SpatialCustomizationChoiceNavigationButton");

	Params::SpatialCustomizationChoiceNavigationButton_C_ExecuteUbergraph_SpatialCustomizationChoiceNavigationButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpatialCustomizationChoiceNavigationButton.SpatialCustomizationChoiceNavigationButton_C.InputSourceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialCustomizationChoiceNavigationButton_C::InputSourceChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialCustomizationChoiceNavigationButton_C", "InputSourceChanged");

	Params::SpatialCustomizationChoiceNavigationButton_C_InputSourceChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpatialCustomizationChoiceNavigationButton.SpatialCustomizationChoiceNavigationButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USpatialCustomizationChoiceNavigationButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialCustomizationChoiceNavigationButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpatialCustomizationChoiceNavigationButton.SpatialCustomizationChoiceNavigationButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USpatialCustomizationChoiceNavigationButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialCustomizationChoiceNavigationButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpatialCustomizationChoiceNavigationButton.SpatialCustomizationChoiceNavigationButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USpatialCustomizationChoiceNavigationButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialCustomizationChoiceNavigationButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpatialCustomizationChoiceNavigationButton.SpatialCustomizationChoiceNavigationButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USpatialCustomizationChoiceNavigationButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpatialCustomizationChoiceNavigationButton_C", "PreConstruct");

	Params::SpatialCustomizationChoiceNavigationButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

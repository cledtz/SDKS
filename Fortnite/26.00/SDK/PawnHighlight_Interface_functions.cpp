#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PawnHighlight_Interface.PawnHighlight_Interface_C
// (None)

class UClass* UPawnHighlight_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PawnHighlight_Interface_C");

	return Clss;
}


// PawnHighlight_Interface_C PawnHighlight_Interface.Default__PawnHighlight_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPawnHighlight_Interface_C* UPawnHighlight_Interface_C::GetDefaultObj()
{
	static class UPawnHighlight_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPawnHighlight_Interface_C*>(UPawnHighlight_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PawnHighlight_Interface.PawnHighlight_Interface_C.RemoveHighlightFromSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPawnHighlight_Interface_C::RemoveHighlightFromSource(class UObject* Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnHighlight_Interface_C", "RemoveHighlightFromSource");

	Params::UPawnHighlight_Interface_C_RemoveHighlightFromSource_Params Parms{};

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PawnHighlight_Interface.PawnHighlight_Interface_C.AddHighlightFromSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPawnHighlight              Highlight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OnlyUpdateIfCurrent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPawnHighlight_Interface_C::AddHighlightFromSource(class UObject* Source, const struct FPawnHighlight& Highlight, bool OnlyUpdateIfCurrent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnHighlight_Interface_C", "AddHighlightFromSource");

	Params::UPawnHighlight_Interface_C_AddHighlightFromSource_Params Parms{};

	Parms.Source = Source;
	Parms.Highlight = Highlight;
	Parms.OnlyUpdateIfCurrent = OnlyUpdateIfCurrent;

	UObject::ProcessEvent(Func, &Parms);

}

}



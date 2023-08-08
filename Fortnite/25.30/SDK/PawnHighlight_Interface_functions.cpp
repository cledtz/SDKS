#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function PawnHighlight_Interface.PawnHighlight_Interface_C.RemoveHighlightFromSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPawnHighlight_Interface_C::RemoveHighlightFromSource(class UObject* Source)
{
	static auto Func = Class->GetFunction("PawnHighlight_Interface_C", "RemoveHighlightFromSource");

	Params::UPawnHighlight_Interface_C_RemoveHighlightFromSource_Params Parms;

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
	static auto Func = Class->GetFunction("PawnHighlight_Interface_C", "AddHighlightFromSource");

	Params::UPawnHighlight_Interface_C_AddHighlightFromSource_Params Parms;

	Parms.Source = Source;
	Parms.Highlight = Highlight;
	Parms.OnlyUpdateIfCurrent = OnlyUpdateIfCurrent;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

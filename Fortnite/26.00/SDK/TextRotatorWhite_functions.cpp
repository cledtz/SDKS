#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TextRotatorWhite.TextRotatorWhite_C
// (None)

class UClass* UTextRotatorWhite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextRotatorWhite_C");

	return Clss;
}


// TextRotatorWhite_C TextRotatorWhite.Default__TextRotatorWhite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextRotatorWhite_C* UTextRotatorWhite_C::GetDefaultObj()
{
	static class UTextRotatorWhite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextRotatorWhite_C*>(UTextRotatorWhite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TextRotatorWhite.TextRotatorWhite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTextRotatorWhite_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextRotatorWhite_C", "Construct");

	Params::UTextRotatorWhite_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TextRotatorWhite.TextRotatorWhite_C.ExecuteUbergraph_TextRotatorWhite
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextRotatorWhite_C::ExecuteUbergraph_TextRotatorWhite(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextRotatorWhite_C", "ExecuteUbergraph_TextRotatorWhite");

	Params::UTextRotatorWhite_C_ExecuteUbergraph_TextRotatorWhite_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



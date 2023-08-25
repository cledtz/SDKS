#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StorePinataMaster_Parent.StorePinataMaster_Parent_C
// (Actor)

class UClass* UStorePinataMaster_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StorePinataMaster_Parent_C");

	return Clss;
}


// StorePinataMaster_Parent_C StorePinataMaster_Parent.Default__StorePinataMaster_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStorePinataMaster_Parent_C* UStorePinataMaster_Parent_C::GetDefaultObj()
{
	static class UStorePinataMaster_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStorePinataMaster_Parent_C*>(UStorePinataMaster_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStorePinataMaster_Parent_C::InitiatePinata()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_Parent_C", "InitiatePinata");

	Params::UStorePinataMaster_Parent_C_InitiatePinata_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraResetComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStorePinataMaster_Parent_C::CameraResetComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_Parent_C", "CameraResetComplete");

	Params::UStorePinataMaster_Parent_C_CameraResetComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraTransitionComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStorePinataMaster_Parent_C::CameraTransitionComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_Parent_C", "CameraTransitionComplete");

	Params::UStorePinataMaster_Parent_C_CameraTransitionComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.ExecuteUbergraph_StorePinataMaster_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStorePinataMaster_Parent_C::ExecuteUbergraph_StorePinataMaster_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StorePinataMaster_Parent_C", "ExecuteUbergraph_StorePinataMaster_Parent");

	Params::UStorePinataMaster_Parent_C_ExecuteUbergraph_StorePinataMaster_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



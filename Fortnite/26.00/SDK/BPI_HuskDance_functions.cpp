#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_HuskDance.BPI_HuskDance_C
// (None)

class UClass* UBPI_HuskDance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_HuskDance_C");

	return Clss;
}


// BPI_HuskDance_C BPI_HuskDance.Default__BPI_HuskDance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPI_HuskDance_C* UBPI_HuskDance_C::GetDefaultObj()
{
	static class UBPI_HuskDance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPI_HuskDance_C*>(UBPI_HuskDance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_HuskDance.BPI_HuskDance_C.OnEndDance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPI_HuskDance_C::OnEndDance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HuskDance_C", "OnEndDance");

	Params::UBPI_HuskDance_C_OnEndDance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_HuskDance.BPI_HuskDance_C.OnBeginDance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPI_HuskDance_C::OnBeginDance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_HuskDance_C", "OnBeginDance");

	Params::UBPI_HuskDance_C_OnBeginDance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GET_EnergyCost.GET_EnergyCost_C
// (None)

class UClass* UGET_EnergyCost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GET_EnergyCost_C");

	return Clss;
}


// GET_EnergyCost_C GET_EnergyCost.Default__GET_EnergyCost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGET_EnergyCost_C* UGET_EnergyCost_C::GetDefaultObj()
{
	static class UGET_EnergyCost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGET_EnergyCost_C*>(UGET_EnergyCost_C::StaticClass()->DefaultObject);

	return Default;
}

}



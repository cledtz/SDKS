#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FMMEL_TacSprint.FMMEL_TacSprint_C
// (None)

class UClass* UFMMEL_TacSprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMMEL_TacSprint_C");

	return Clss;
}


// FMMEL_TacSprint_C FMMEL_TacSprint.Default__FMMEL_TacSprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFMMEL_TacSprint_C* UFMMEL_TacSprint_C::GetDefaultObj()
{
	static class UFMMEL_TacSprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMMEL_TacSprint_C*>(UFMMEL_TacSprint_C::StaticClass()->DefaultObject);

	return Default;
}

}



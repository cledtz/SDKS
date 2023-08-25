#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortPlayerAnimComponentBP.FortPlayerAnimComponentBP_C
// (None)

class UClass* UFortPlayerAnimComponentBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAnimComponentBP_C");

	return Clss;
}


// FortPlayerAnimComponentBP_C FortPlayerAnimComponentBP.Default__FortPlayerAnimComponentBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortPlayerAnimComponentBP_C* UFortPlayerAnimComponentBP_C::GetDefaultObj()
{
	static class UFortPlayerAnimComponentBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAnimComponentBP_C*>(UFortPlayerAnimComponentBP_C::StaticClass()->DefaultObject);

	return Default;
}

}



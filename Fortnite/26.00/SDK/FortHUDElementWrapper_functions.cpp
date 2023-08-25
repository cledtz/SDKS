#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FortHUDElementWrapper.FortHUDElementWrapper_C
// (None)

class UClass* UFortHUDElementWrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHUDElementWrapper_C");

	return Clss;
}


// FortHUDElementWrapper_C FortHUDElementWrapper.Default__FortHUDElementWrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortHUDElementWrapper_C* UFortHUDElementWrapper_C::GetDefaultObj()
{
	static class UFortHUDElementWrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHUDElementWrapper_C*>(UFortHUDElementWrapper_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BurbankSmall-S-Teal.TextStyle-BurbankSmall-S-Teal_C
// (None)

class UClass* UTextStyleMinusBurbankSmallMinusSMinusTeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BurbankSmall-S-Teal_C");

	return Clss;
}


// TextStyle-BurbankSmall-S-Teal_C TextStyle-BurbankSmall-S-Teal.Default__TextStyle-BurbankSmall-S-Teal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBurbankSmallMinusSMinusTeal_C* UTextStyleMinusBurbankSmallMinusSMinusTeal_C::GetDefaultObj()
{
	static class UTextStyleMinusBurbankSmallMinusSMinusTeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBurbankSmallMinusSMinusTeal_C*>(UTextStyleMinusBurbankSmallMinusSMinusTeal_C::StaticClass()->DefaultObject);

	return Default;
}

}



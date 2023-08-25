#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BurbankSmall-S-Teal_25pc.TextStyle-BurbankSmall-S-Teal_25pc_C
// (None)

class UClass* UTextStyleMinusBurbankSmallMinusSMinusTeal_25pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BurbankSmall-S-Teal_25pc_C");

	return Clss;
}


// TextStyle-BurbankSmall-S-Teal_25pc_C TextStyle-BurbankSmall-S-Teal_25pc.Default__TextStyle-BurbankSmall-S-Teal_25pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBurbankSmallMinusSMinusTeal_25pc_C* UTextStyleMinusBurbankSmallMinusSMinusTeal_25pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBurbankSmallMinusSMinusTeal_25pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBurbankSmallMinusSMinusTeal_25pc_C*>(UTextStyleMinusBurbankSmallMinusSMinusTeal_25pc_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BurbankSmall-S-White.TextStyle-BurbankSmall-S-White_C
// (None)

class UClass* UTextStyleMinusBurbankSmallMinusSMinusWhite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BurbankSmall-S-White_C");

	return Clss;
}


// TextStyle-BurbankSmall-S-White_C TextStyle-BurbankSmall-S-White.Default__TextStyle-BurbankSmall-S-White_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBurbankSmallMinusSMinusWhite_C* UTextStyleMinusBurbankSmallMinusSMinusWhite_C::GetDefaultObj()
{
	static class UTextStyleMinusBurbankSmallMinusSMinusWhite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBurbankSmallMinusSMinusWhite_C*>(UTextStyleMinusBurbankSmallMinusSMinusWhite_C::StaticClass()->DefaultObject);

	return Default;
}

}



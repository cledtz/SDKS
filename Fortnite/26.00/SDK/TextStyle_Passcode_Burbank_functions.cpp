#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_Passcode_Burbank.TextStyle_Passcode_Burbank_C
// (None)

class UClass* UTextStyle_Passcode_Burbank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_Passcode_Burbank_C");

	return Clss;
}


// TextStyle_Passcode_Burbank_C TextStyle_Passcode_Burbank.Default__TextStyle_Passcode_Burbank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_Passcode_Burbank_C* UTextStyle_Passcode_Burbank_C::GetDefaultObj()
{
	static class UTextStyle_Passcode_Burbank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_Passcode_Burbank_C*>(UTextStyle_Passcode_Burbank_C::StaticClass()->DefaultObject);

	return Default;
}

}



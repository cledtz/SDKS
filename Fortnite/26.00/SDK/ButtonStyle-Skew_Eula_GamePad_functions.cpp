#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_Eula_GamePad.ButtonStyle-Skew_Eula_GamePad_C
// (None)

class UClass* UButtonStyleMinusSkew_Eula_GamePad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_Eula_GamePad_C");

	return Clss;
}


// ButtonStyle-Skew_Eula_GamePad_C ButtonStyle-Skew_Eula_GamePad.Default__ButtonStyle-Skew_Eula_GamePad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_Eula_GamePad_C* UButtonStyleMinusSkew_Eula_GamePad_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_Eula_GamePad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_Eula_GamePad_C*>(UButtonStyleMinusSkew_Eula_GamePad_C::StaticClass()->DefaultObject);

	return Default;
}

}



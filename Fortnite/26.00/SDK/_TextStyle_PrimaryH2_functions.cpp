#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass _TextStyle_PrimaryH2._TextStyle_PrimaryH2_C
// (None)

class UClass* U_TextStyle_PrimaryH2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("_TextStyle_PrimaryH2_C");

	return Clss;
}


// _TextStyle_PrimaryH2_C _TextStyle_PrimaryH2.Default___TextStyle_PrimaryH2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_TextStyle_PrimaryH2_C* U_TextStyle_PrimaryH2_C::GetDefaultObj()
{
	static class U_TextStyle_PrimaryH2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<U_TextStyle_PrimaryH2_C*>(U_TextStyle_PrimaryH2_C::StaticClass()->DefaultObject);

	return Default;
}

}



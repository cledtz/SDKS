#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass _TextStyle_Body1._TextStyle_Body1_C
// (None)

class UClass* U_TextStyle_Body1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("_TextStyle_Body1_C");

	return Clss;
}


// _TextStyle_Body1_C _TextStyle_Body1.Default___TextStyle_Body1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_TextStyle_Body1_C* U_TextStyle_Body1_C::GetDefaultObj()
{
	static class U_TextStyle_Body1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<U_TextStyle_Body1_C*>(U_TextStyle_Body1_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass _TextStyle_SubH4._TextStyle_SubH4_C
// (None)

class UClass* U_TextStyle_SubH4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("_TextStyle_SubH4_C");

	return Clss;
}


// _TextStyle_SubH4_C _TextStyle_SubH4.Default___TextStyle_SubH4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_TextStyle_SubH4_C* U_TextStyle_SubH4_C::GetDefaultObj()
{
	static class U_TextStyle_SubH4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<U_TextStyle_SubH4_C*>(U_TextStyle_SubH4_C::StaticClass()->DefaultObject);

	return Default;
}

}



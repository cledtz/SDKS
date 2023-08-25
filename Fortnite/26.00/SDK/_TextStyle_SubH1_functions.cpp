#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass _TextStyle_SubH1._TextStyle_SubH1_C
// (None)

class UClass* U_TextStyle_SubH1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("_TextStyle_SubH1_C");

	return Clss;
}


// _TextStyle_SubH1_C _TextStyle_SubH1.Default___TextStyle_SubH1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_TextStyle_SubH1_C* U_TextStyle_SubH1_C::GetDefaultObj()
{
	static class U_TextStyle_SubH1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<U_TextStyle_SubH1_C*>(U_TextStyle_SubH1_C::StaticClass()->DefaultObject);

	return Default;
}

}



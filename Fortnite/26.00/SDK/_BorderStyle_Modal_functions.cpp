#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass _BorderStyle_Modal._BorderStyle_Modal_C
// (None)

class UClass* U_BorderStyle_Modal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("_BorderStyle_Modal_C");

	return Clss;
}


// _BorderStyle_Modal_C _BorderStyle_Modal.Default___BorderStyle_Modal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_BorderStyle_Modal_C* U_BorderStyle_Modal_C::GetDefaultObj()
{
	static class U_BorderStyle_Modal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<U_BorderStyle_Modal_C*>(U_BorderStyle_Modal_C::StaticClass()->DefaultObject);

	return Default;
}

}



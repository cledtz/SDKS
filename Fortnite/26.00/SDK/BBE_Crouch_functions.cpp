#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_Crouch.BBE_Crouch_C
// (None)

class UClass* UBBE_Crouch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_Crouch_C");

	return Clss;
}


// BBE_Crouch_C BBE_Crouch.Default__BBE_Crouch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_Crouch_C* UBBE_Crouch_C::GetDefaultObj()
{
	static class UBBE_Crouch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_Crouch_C*>(UBBE_Crouch_C::StaticClass()->DefaultObject);

	return Default;
}

}



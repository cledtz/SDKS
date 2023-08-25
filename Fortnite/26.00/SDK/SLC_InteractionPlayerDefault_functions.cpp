#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SLC_InteractionPlayerDefault.SLC_InteractionPlayerDefault_C
// (None)

class UClass* USLC_InteractionPlayerDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SLC_InteractionPlayerDefault_C");

	return Clss;
}


// SLC_InteractionPlayerDefault_C SLC_InteractionPlayerDefault.Default__SLC_InteractionPlayerDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USLC_InteractionPlayerDefault_C* USLC_InteractionPlayerDefault_C::GetDefaultObj()
{
	static class USLC_InteractionPlayerDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USLC_InteractionPlayerDefault_C*>(USLC_InteractionPlayerDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}



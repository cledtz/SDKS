#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_AugmentRotate.BBE_AugmentRotate_C
// (None)

class UClass* UBBE_AugmentRotate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_AugmentRotate_C");

	return Clss;
}


// BBE_AugmentRotate_C BBE_AugmentRotate.Default__BBE_AugmentRotate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_AugmentRotate_C* UBBE_AugmentRotate_C::GetDefaultObj()
{
	static class UBBE_AugmentRotate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_AugmentRotate_C*>(UBBE_AugmentRotate_C::StaticClass()->DefaultObject);

	return Default;
}

}



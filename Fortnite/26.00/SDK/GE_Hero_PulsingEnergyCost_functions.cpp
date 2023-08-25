#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Hero_PulsingEnergyCost.GE_Hero_PulsingEnergyCost_C
// (None)

class UClass* UGE_Hero_PulsingEnergyCost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Hero_PulsingEnergyCost_C");

	return Clss;
}


// GE_Hero_PulsingEnergyCost_C GE_Hero_PulsingEnergyCost.Default__GE_Hero_PulsingEnergyCost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Hero_PulsingEnergyCost_C* UGE_Hero_PulsingEnergyCost_C::GetDefaultObj()
{
	static class UGE_Hero_PulsingEnergyCost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Hero_PulsingEnergyCost_C*>(UGE_Hero_PulsingEnergyCost_C::StaticClass()->DefaultObject);

	return Default;
}

}



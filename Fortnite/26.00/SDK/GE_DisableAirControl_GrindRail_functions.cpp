#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DisableAirControl_GrindRail.GE_DisableAirControl_GrindRail_C
// (None)

class UClass* UGE_DisableAirControl_GrindRail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DisableAirControl_GrindRail_C");

	return Clss;
}


// GE_DisableAirControl_GrindRail_C GE_DisableAirControl_GrindRail.Default__GE_DisableAirControl_GrindRail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DisableAirControl_GrindRail_C* UGE_DisableAirControl_GrindRail_C::GetDefaultObj()
{
	static class UGE_DisableAirControl_GrindRail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DisableAirControl_GrindRail_C*>(UGE_DisableAirControl_GrindRail_C::StaticClass()->DefaultObject);

	return Default;
}

}



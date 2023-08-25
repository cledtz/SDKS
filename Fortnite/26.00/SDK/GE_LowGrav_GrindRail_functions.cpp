#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_LowGrav_GrindRail.GE_LowGrav_GrindRail_C
// (None)

class UClass* UGE_LowGrav_GrindRail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_LowGrav_GrindRail_C");

	return Clss;
}


// GE_LowGrav_GrindRail_C GE_LowGrav_GrindRail.Default__GE_LowGrav_GrindRail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_LowGrav_GrindRail_C* UGE_LowGrav_GrindRail_C::GetDefaultObj()
{
	static class UGE_LowGrav_GrindRail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_LowGrav_GrindRail_C*>(UGE_LowGrav_GrindRail_C::StaticClass()->DefaultObject);

	return Default;
}

}



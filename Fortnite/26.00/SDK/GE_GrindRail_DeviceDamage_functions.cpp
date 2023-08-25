#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GrindRail_DeviceDamage.GE_GrindRail_DeviceDamage_C
// (None)

class UClass* UGE_GrindRail_DeviceDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GrindRail_DeviceDamage_C");

	return Clss;
}


// GE_GrindRail_DeviceDamage_C GE_GrindRail_DeviceDamage.Default__GE_GrindRail_DeviceDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GrindRail_DeviceDamage_C* UGE_GrindRail_DeviceDamage_C::GetDefaultObj()
{
	static class UGE_GrindRail_DeviceDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GrindRail_DeviceDamage_C*>(UGE_GrindRail_DeviceDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}



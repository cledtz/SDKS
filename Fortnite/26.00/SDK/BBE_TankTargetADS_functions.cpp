#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_TankTargetADS.BBE_TankTargetADS_C
// (None)

class UClass* UBBE_TankTargetADS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_TankTargetADS_C");

	return Clss;
}


// BBE_TankTargetADS_C BBE_TankTargetADS.Default__BBE_TankTargetADS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_TankTargetADS_C* UBBE_TankTargetADS_C::GetDefaultObj()
{
	static class UBBE_TankTargetADS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_TankTargetADS_C*>(UBBE_TankTargetADS_C::StaticClass()->DefaultObject);

	return Default;
}

}



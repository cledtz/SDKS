#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_NevadaTractorBeam.BB_NevadaTractorBeam_C
// (None)

class UClass* UBB_NevadaTractorBeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_NevadaTractorBeam_C");

	return Clss;
}


// BB_NevadaTractorBeam_C BB_NevadaTractorBeam.Default__BB_NevadaTractorBeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_NevadaTractorBeam_C* UBB_NevadaTractorBeam_C::GetDefaultObj()
{
	static class UBB_NevadaTractorBeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_NevadaTractorBeam_C*>(UBB_NevadaTractorBeam_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InSafeZone.GE_InSafeZone_C
// (None)

class UClass* UGE_InSafeZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InSafeZone_C");

	return Clss;
}


// GE_InSafeZone_C GE_InSafeZone.Default__GE_InSafeZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InSafeZone_C* UGE_InSafeZone_C::GetDefaultObj()
{
	static class UGE_InSafeZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InSafeZone_C*>(UGE_InSafeZone_C::StaticClass()->DefaultObject);

	return Default;
}

}



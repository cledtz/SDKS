#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_Rock_Handbrake.BB_Rock_Handbrake_C
// (None)

class UClass* UBB_Rock_Handbrake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_Rock_Handbrake_C");

	return Clss;
}


// BB_Rock_Handbrake_C BB_Rock_Handbrake.Default__BB_Rock_Handbrake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_Rock_Handbrake_C* UBB_Rock_Handbrake_C::GetDefaultObj()
{
	static class UBB_Rock_Handbrake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_Rock_Handbrake_C*>(UBB_Rock_Handbrake_C::StaticClass()->DefaultObject);

	return Default;
}

}



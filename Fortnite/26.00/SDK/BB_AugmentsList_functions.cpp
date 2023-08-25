#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_AugmentsList.BB_AugmentsList_C
// (None)

class UClass* UBB_AugmentsList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_AugmentsList_C");

	return Clss;
}


// BB_AugmentsList_C BB_AugmentsList.Default__BB_AugmentsList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_AugmentsList_C* UBB_AugmentsList_C::GetDefaultObj()
{
	static class UBB_AugmentsList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_AugmentsList_C*>(UBB_AugmentsList_C::StaticClass()->DefaultObject);

	return Default;
}

}



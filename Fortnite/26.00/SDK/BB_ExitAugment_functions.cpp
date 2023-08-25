#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_ExitAugment.BB_ExitAugment_C
// (None)

class UClass* UBB_ExitAugment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_ExitAugment_C");

	return Clss;
}


// BB_ExitAugment_C BB_ExitAugment.Default__BB_ExitAugment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_ExitAugment_C* UBB_ExitAugment_C::GetDefaultObj()
{
	static class UBB_ExitAugment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_ExitAugment_C*>(UBB_ExitAugment_C::StaticClass()->DefaultObject);

	return Default;
}

}



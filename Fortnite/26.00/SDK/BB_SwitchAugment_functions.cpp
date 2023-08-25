#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_SwitchAugment.BB_SwitchAugment_C
// (None)

class UClass* UBB_SwitchAugment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_SwitchAugment_C");

	return Clss;
}


// BB_SwitchAugment_C BB_SwitchAugment.Default__BB_SwitchAugment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_SwitchAugment_C* UBB_SwitchAugment_C::GetDefaultObj()
{
	static class UBB_SwitchAugment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_SwitchAugment_C*>(UBB_SwitchAugment_C::StaticClass()->DefaultObject);

	return Default;
}

}



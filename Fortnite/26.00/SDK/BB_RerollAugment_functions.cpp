#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_RerollAugment.BB_RerollAugment_C
// (None)

class UClass* UBB_RerollAugment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_RerollAugment_C");

	return Clss;
}


// BB_RerollAugment_C BB_RerollAugment.Default__BB_RerollAugment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_RerollAugment_C* UBB_RerollAugment_C::GetDefaultObj()
{
	static class UBB_RerollAugment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_RerollAugment_C*>(UBB_RerollAugment_C::StaticClass()->DefaultObject);

	return Default;
}

}



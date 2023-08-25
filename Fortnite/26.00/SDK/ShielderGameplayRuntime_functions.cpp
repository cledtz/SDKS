#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ShielderGameplayRuntime.ShielderCollisionHelperComponent
// (None)

class UClass* UShielderCollisionHelperComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShielderCollisionHelperComponent");

	return Clss;
}


// ShielderCollisionHelperComponent ShielderGameplayRuntime.Default__ShielderCollisionHelperComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UShielderCollisionHelperComponent* UShielderCollisionHelperComponent::GetDefaultObj()
{
	static class UShielderCollisionHelperComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UShielderCollisionHelperComponent*>(UShielderCollisionHelperComponent::StaticClass()->DefaultObject);

	return Default;
}

}



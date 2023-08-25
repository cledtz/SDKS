#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MidMatchRadioTowerGameplayRuntime.RemoveFoliageBoxComponent
// (SceneComponent, PrimitiveComponent)

class UClass* URemoveFoliageBoxComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemoveFoliageBoxComponent");

	return Clss;
}


// RemoveFoliageBoxComponent MidMatchRadioTowerGameplayRuntime.Default__RemoveFoliageBoxComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class URemoveFoliageBoxComponent* URemoveFoliageBoxComponent::GetDefaultObj()
{
	static class URemoveFoliageBoxComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<URemoveFoliageBoxComponent*>(URemoveFoliageBoxComponent::StaticClass()->DefaultObject);

	return Default;
}

}



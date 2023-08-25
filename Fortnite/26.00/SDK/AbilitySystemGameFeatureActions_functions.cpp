#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AbilitySystemGameFeatureActions.GameFeatureAction_AddAttributeDefaults
// (None)

class UClass* UGameFeatureAction_AddAttributeDefaults::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureAction_AddAttributeDefaults");

	return Clss;
}


// GameFeatureAction_AddAttributeDefaults AbilitySystemGameFeatureActions.Default__GameFeatureAction_AddAttributeDefaults
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureAction_AddAttributeDefaults* UGameFeatureAction_AddAttributeDefaults::GetDefaultObj()
{
	static class UGameFeatureAction_AddAttributeDefaults* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureAction_AddAttributeDefaults*>(UGameFeatureAction_AddAttributeDefaults::StaticClass()->DefaultObject);

	return Default;
}

}



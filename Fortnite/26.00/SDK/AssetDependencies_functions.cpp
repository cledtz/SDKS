#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AssetDependencies.ActorMetricsSettings
// (None)

class UClass* UActorMetricsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActorMetricsSettings");

	return Clss;
}


// ActorMetricsSettings AssetDependencies.Default__ActorMetricsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UActorMetricsSettings* UActorMetricsSettings::GetDefaultObj()
{
	static class UActorMetricsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UActorMetricsSettings*>(UActorMetricsSettings::StaticClass()->DefaultObject);

	return Default;
}

}



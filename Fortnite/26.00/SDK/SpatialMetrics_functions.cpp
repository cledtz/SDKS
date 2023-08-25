#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SpatialMetrics.ActorCountMetric
// (None)

class UClass* UActorCountMetric::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActorCountMetric");

	return Clss;
}


// ActorCountMetric SpatialMetrics.Default__ActorCountMetric
// (Public, ClassDefaultObject, ArchetypeObject)

class UActorCountMetric* UActorCountMetric::GetDefaultObj()
{
	static class UActorCountMetric* Default = nullptr;

	if (!Default)
		Default = static_cast<UActorCountMetric*>(UActorCountMetric::StaticClass()->DefaultObject);

	return Default;
}

}



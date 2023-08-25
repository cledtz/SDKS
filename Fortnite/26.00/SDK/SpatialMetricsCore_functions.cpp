#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SpatialMetricsCore.SpatialMetric
// (None)

class UClass* USpatialMetric::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialMetric");

	return Clss;
}


// SpatialMetric SpatialMetricsCore.Default__SpatialMetric
// (Public, ClassDefaultObject, ArchetypeObject)

class USpatialMetric* USpatialMetric::GetDefaultObj()
{
	static class USpatialMetric* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialMetric*>(USpatialMetric::StaticClass()->DefaultObject);

	return Default;
}


// Class SpatialMetricsCore.SpatialMetricsSubsystem
// (None)

class UClass* USpatialMetricsSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialMetricsSubsystem");

	return Clss;
}


// SpatialMetricsSubsystem SpatialMetricsCore.Default__SpatialMetricsSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USpatialMetricsSubsystem* USpatialMetricsSubsystem::GetDefaultObj()
{
	static class USpatialMetricsSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialMetricsSubsystem*>(USpatialMetricsSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class SpatialMetricsCore.TestMetric
// (None)

class UClass* UTestMetric::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestMetric");

	return Clss;
}


// TestMetric SpatialMetricsCore.Default__TestMetric
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestMetric* UTestMetric::GetDefaultObj()
{
	static class UTestMetric* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestMetric*>(UTestMetric::StaticClass()->DefaultObject);

	return Default;
}

}



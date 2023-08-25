#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MemoryUsageQueries.MemoryUsageQueriesConfig
// (None)

class UClass* UMemoryUsageQueriesConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MemoryUsageQueriesConfig");

	return Clss;
}


// MemoryUsageQueriesConfig MemoryUsageQueries.Default__MemoryUsageQueriesConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UMemoryUsageQueriesConfig* UMemoryUsageQueriesConfig::GetDefaultObj()
{
	static class UMemoryUsageQueriesConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UMemoryUsageQueriesConfig*>(UMemoryUsageQueriesConfig::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UIChartRuntime.UIChartGlobals
// (None)

class UClass* UUIChartGlobals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIChartGlobals");

	return Clss;
}


// UIChartGlobals UIChartRuntime.Default__UIChartGlobals
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIChartGlobals* UUIChartGlobals::GetDefaultObj()
{
	static class UUIChartGlobals* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIChartGlobals*>(UUIChartGlobals::StaticClass()->DefaultObject);

	return Default;
}

}



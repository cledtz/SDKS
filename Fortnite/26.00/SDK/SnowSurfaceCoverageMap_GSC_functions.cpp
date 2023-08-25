#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SnowSurfaceCoverageMap_GSC.SnowSurfaceCoverageMap_GSC_C
// (None)

class UClass* USnowSurfaceCoverageMap_GSC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SnowSurfaceCoverageMap_GSC_C");

	return Clss;
}


// SnowSurfaceCoverageMap_GSC_C SnowSurfaceCoverageMap_GSC.Default__SnowSurfaceCoverageMap_GSC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USnowSurfaceCoverageMap_GSC_C* USnowSurfaceCoverageMap_GSC_C::GetDefaultObj()
{
	static class USnowSurfaceCoverageMap_GSC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USnowSurfaceCoverageMap_GSC_C*>(USnowSurfaceCoverageMap_GSC_C::StaticClass()->DefaultObject);

	return Default;
}

}



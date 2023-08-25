#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GSC_MiniMapDataOverride.GSC_MiniMapDataOverride_C
// (None)

class UClass* UGSC_MiniMapDataOverride_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GSC_MiniMapDataOverride_C");

	return Clss;
}


// GSC_MiniMapDataOverride_C GSC_MiniMapDataOverride.Default__GSC_MiniMapDataOverride_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGSC_MiniMapDataOverride_C* UGSC_MiniMapDataOverride_C::GetDefaultObj()
{
	static class UGSC_MiniMapDataOverride_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGSC_MiniMapDataOverride_C*>(UGSC_MiniMapDataOverride_C::StaticClass()->DefaultObject);

	return Default;
}

}



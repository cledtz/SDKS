#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VK_Play_MissionGen.VK_Play_MissionGen_C
// (None)

class UClass* UVK_Play_MissionGen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VK_Play_MissionGen_C");

	return Clss;
}


// VK_Play_MissionGen_C VK_Play_MissionGen.Default__VK_Play_MissionGen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVK_Play_MissionGen_C* UVK_Play_MissionGen_C::GetDefaultObj()
{
	static class UVK_Play_MissionGen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVK_Play_MissionGen_C*>(UVK_Play_MissionGen_C::StaticClass()->DefaultObject);

	return Default;
}

}



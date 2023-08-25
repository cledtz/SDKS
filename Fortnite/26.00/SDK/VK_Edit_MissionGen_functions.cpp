#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VK_Edit_MissionGen.VK_Edit_MissionGen_C
// (None)

class UClass* UVK_Edit_MissionGen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VK_Edit_MissionGen_C");

	return Clss;
}


// VK_Edit_MissionGen_C VK_Edit_MissionGen.Default__VK_Edit_MissionGen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVK_Edit_MissionGen_C* UVK_Edit_MissionGen_C::GetDefaultObj()
{
	static class UVK_Edit_MissionGen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVK_Edit_MissionGen_C*>(UVK_Edit_MissionGen_C::StaticClass()->DefaultObject);

	return Default;
}

}



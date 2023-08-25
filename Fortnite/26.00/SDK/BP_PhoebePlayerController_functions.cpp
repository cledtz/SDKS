#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PhoebePlayerController.BP_PhoebePlayerController_C
// (Actor)

class UClass* UBP_PhoebePlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PhoebePlayerController_C");

	return Clss;
}


// BP_PhoebePlayerController_C BP_PhoebePlayerController.Default__BP_PhoebePlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PhoebePlayerController_C* UBP_PhoebePlayerController_C::GetDefaultObj()
{
	static class UBP_PhoebePlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PhoebePlayerController_C*>(UBP_PhoebePlayerController_C::StaticClass()->DefaultObject);

	return Default;
}

}



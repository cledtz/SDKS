#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_FortGlobalAbilityTargetingActor.B_FortGlobalAbilityTargetingActor_C
// (Actor)

class UClass* UB_FortGlobalAbilityTargetingActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_FortGlobalAbilityTargetingActor_C");

	return Clss;
}


// B_FortGlobalAbilityTargetingActor_C B_FortGlobalAbilityTargetingActor.Default__B_FortGlobalAbilityTargetingActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_FortGlobalAbilityTargetingActor_C* UB_FortGlobalAbilityTargetingActor_C::GetDefaultObj()
{
	static class UB_FortGlobalAbilityTargetingActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_FortGlobalAbilityTargetingActor_C*>(UB_FortGlobalAbilityTargetingActor_C::StaticClass()->DefaultObject);

	return Default;
}

}



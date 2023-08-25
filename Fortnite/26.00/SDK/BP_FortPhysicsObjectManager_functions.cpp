#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FortPhysicsObjectManager.BP_FortPhysicsObjectManager_C
// (Actor)

class UClass* UBP_FortPhysicsObjectManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FortPhysicsObjectManager_C");

	return Clss;
}


// BP_FortPhysicsObjectManager_C BP_FortPhysicsObjectManager.Default__BP_FortPhysicsObjectManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FortPhysicsObjectManager_C* UBP_FortPhysicsObjectManager_C::GetDefaultObj()
{
	static class UBP_FortPhysicsObjectManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FortPhysicsObjectManager_C*>(UBP_FortPhysicsObjectManager_C::StaticClass()->DefaultObject);

	return Default;
}

}



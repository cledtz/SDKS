#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PhysicsCollisionHandler.BP_PhysicsCollisionHandler_C
// (None)

class UClass* UBP_PhysicsCollisionHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PhysicsCollisionHandler_C");

	return Clss;
}


// BP_PhysicsCollisionHandler_C BP_PhysicsCollisionHandler.Default__BP_PhysicsCollisionHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PhysicsCollisionHandler_C* UBP_PhysicsCollisionHandler_C::GetDefaultObj()
{
	static class UBP_PhysicsCollisionHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PhysicsCollisionHandler_C*>(UBP_PhysicsCollisionHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}



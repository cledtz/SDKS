#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PhysicsObject_ImpactDamage_Default.GE_PhysicsObject_ImpactDamage_Default_C
// (None)

class UClass* UGE_PhysicsObject_ImpactDamage_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PhysicsObject_ImpactDamage_Default_C");

	return Clss;
}


// GE_PhysicsObject_ImpactDamage_Default_C GE_PhysicsObject_ImpactDamage_Default.Default__GE_PhysicsObject_ImpactDamage_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PhysicsObject_ImpactDamage_Default_C* UGE_PhysicsObject_ImpactDamage_Default_C::GetDefaultObj()
{
	static class UGE_PhysicsObject_ImpactDamage_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PhysicsObject_ImpactDamage_Default_C*>(UGE_PhysicsObject_ImpactDamage_Default_C::StaticClass()->DefaultObject);

	return Default;
}

}



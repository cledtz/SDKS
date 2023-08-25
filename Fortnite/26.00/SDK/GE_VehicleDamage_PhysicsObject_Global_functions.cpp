#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_VehicleDamage_PhysicsObject_Global.GE_VehicleDamage_PhysicsObject_Global_C
// (None)

class UClass* UGE_VehicleDamage_PhysicsObject_Global_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_VehicleDamage_PhysicsObject_Global_C");

	return Clss;
}


// GE_VehicleDamage_PhysicsObject_Global_C GE_VehicleDamage_PhysicsObject_Global.Default__GE_VehicleDamage_PhysicsObject_Global_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_VehicleDamage_PhysicsObject_Global_C* UGE_VehicleDamage_PhysicsObject_Global_C::GetDefaultObj()
{
	static class UGE_VehicleDamage_PhysicsObject_Global_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_VehicleDamage_PhysicsObject_Global_C*>(UGE_VehicleDamage_PhysicsObject_Global_C::StaticClass()->DefaultObject);

	return Default;
}

}



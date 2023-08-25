#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ResolveCannonRuntime.FortVehicleAnimInstance_MountedCannon
// (None)

class UClass* UFortVehicleAnimInstance_MountedCannon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVehicleAnimInstance_MountedCannon");

	return Clss;
}


// FortVehicleAnimInstance_MountedCannon ResolveCannonRuntime.Default__FortVehicleAnimInstance_MountedCannon
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVehicleAnimInstance_MountedCannon* UFortVehicleAnimInstance_MountedCannon::GetDefaultObj()
{
	static class UFortVehicleAnimInstance_MountedCannon* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVehicleAnimInstance_MountedCannon*>(UFortVehicleAnimInstance_MountedCannon::StaticClass()->DefaultObject);

	return Default;
}

}



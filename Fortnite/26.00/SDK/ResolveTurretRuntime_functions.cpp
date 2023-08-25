#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ResolveTurretRuntime.FortPlayerAnimInstance_AntiVehMountedTurret
// (None)

class UClass* UFortPlayerAnimInstance_AntiVehMountedTurret::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAnimInstance_AntiVehMountedTurret");

	return Clss;
}


// FortPlayerAnimInstance_AntiVehMountedTurret ResolveTurretRuntime.Default__FortPlayerAnimInstance_AntiVehMountedTurret
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAnimInstance_AntiVehMountedTurret* UFortPlayerAnimInstance_AntiVehMountedTurret::GetDefaultObj()
{
	static class UFortPlayerAnimInstance_AntiVehMountedTurret* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAnimInstance_AntiVehMountedTurret*>(UFortPlayerAnimInstance_AntiVehMountedTurret::StaticClass()->DefaultObject);

	return Default;
}


// Class ResolveTurretRuntime.FortVehicleAnimInstance_AntiVehMountedTurret
// (None)

class UClass* UFortVehicleAnimInstance_AntiVehMountedTurret::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVehicleAnimInstance_AntiVehMountedTurret");

	return Clss;
}


// FortVehicleAnimInstance_AntiVehMountedTurret ResolveTurretRuntime.Default__FortVehicleAnimInstance_AntiVehMountedTurret
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVehicleAnimInstance_AntiVehMountedTurret* UFortVehicleAnimInstance_AntiVehMountedTurret::GetDefaultObj()
{
	static class UFortVehicleAnimInstance_AntiVehMountedTurret* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVehicleAnimInstance_AntiVehMountedTurret*>(UFortVehicleAnimInstance_AntiVehMountedTurret::StaticClass()->DefaultObject);

	return Default;
}


// Class ResolveTurretRuntime.FortVehicleAnimInstance_SevenMountedTurret
// (None)

class UClass* UFortVehicleAnimInstance_SevenMountedTurret::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVehicleAnimInstance_SevenMountedTurret");

	return Clss;
}


// FortVehicleAnimInstance_SevenMountedTurret ResolveTurretRuntime.Default__FortVehicleAnimInstance_SevenMountedTurret
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVehicleAnimInstance_SevenMountedTurret* UFortVehicleAnimInstance_SevenMountedTurret::GetDefaultObj()
{
	static class UFortVehicleAnimInstance_SevenMountedTurret* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVehicleAnimInstance_SevenMountedTurret*>(UFortVehicleAnimInstance_SevenMountedTurret::StaticClass()->DefaultObject);

	return Default;
}

}



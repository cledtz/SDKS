#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SportbikeRuntime.FortSportbikeAnimInstance
// (None)

class UClass* UFortSportbikeAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSportbikeAnimInstance");

	return Clss;
}


// FortSportbikeAnimInstance SportbikeRuntime.Default__FortSportbikeAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSportbikeAnimInstance* UFortSportbikeAnimInstance::GetDefaultObj()
{
	static class UFortSportbikeAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSportbikeAnimInstance*>(UFortSportbikeAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class SportbikeRuntime.FortSportbikeDriverAnimInstance
// (None)

class UClass* UFortSportbikeDriverAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSportbikeDriverAnimInstance");

	return Clss;
}


// FortSportbikeDriverAnimInstance SportbikeRuntime.Default__FortSportbikeDriverAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSportbikeDriverAnimInstance* UFortSportbikeDriverAnimInstance::GetDefaultObj()
{
	static class UFortSportbikeDriverAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSportbikeDriverAnimInstance*>(UFortSportbikeDriverAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class SportbikeRuntime.FortSportbikeVehicle
// (Actor, Pawn)

class UClass* UFortSportbikeVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSportbikeVehicle");

	return Clss;
}


// FortSportbikeVehicle SportbikeRuntime.Default__FortSportbikeVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSportbikeVehicle* UFortSportbikeVehicle::GetDefaultObj()
{
	static class UFortSportbikeVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSportbikeVehicle*>(UFortSportbikeVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class SportbikeRuntime.FortSportbikeVehicleConfigs
// (None)

class UClass* UFortSportbikeVehicleConfigs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSportbikeVehicleConfigs");

	return Clss;
}


// FortSportbikeVehicleConfigs SportbikeRuntime.Default__FortSportbikeVehicleConfigs
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSportbikeVehicleConfigs* UFortSportbikeVehicleConfigs::GetDefaultObj()
{
	static class UFortSportbikeVehicleConfigs* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSportbikeVehicleConfigs*>(UFortSportbikeVehicleConfigs::StaticClass()->DefaultObject);

	return Default;
}

}



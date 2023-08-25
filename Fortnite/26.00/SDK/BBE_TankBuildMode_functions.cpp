#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_TankBuildMode.BBE_TankBuildMode_C
// (None)

class UClass* UBBE_TankBuildMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_TankBuildMode_C");

	return Clss;
}


// BBE_TankBuildMode_C BBE_TankBuildMode.Default__BBE_TankBuildMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_TankBuildMode_C* UBBE_TankBuildMode_C::GetDefaultObj()
{
	static class UBBE_TankBuildMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_TankBuildMode_C*>(UBBE_TankBuildMode_C::StaticClass()->DefaultObject);

	return Default;
}

}



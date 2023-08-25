#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_VehicleBoost.BBE_VehicleBoost_C
// (None)

class UClass* UBBE_VehicleBoost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_VehicleBoost_C");

	return Clss;
}


// BBE_VehicleBoost_C BBE_VehicleBoost.Default__BBE_VehicleBoost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_VehicleBoost_C* UBBE_VehicleBoost_C::GetDefaultObj()
{
	static class UBBE_VehicleBoost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_VehicleBoost_C*>(UBBE_VehicleBoost_C::StaticClass()->DefaultObject);

	return Default;
}

}



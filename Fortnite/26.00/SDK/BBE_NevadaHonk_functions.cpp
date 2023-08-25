#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_NevadaHonk.BBE_NevadaHonk_C
// (None)

class UClass* UBBE_NevadaHonk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_NevadaHonk_C");

	return Clss;
}


// BBE_NevadaHonk_C BBE_NevadaHonk.Default__BBE_NevadaHonk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_NevadaHonk_C* UBBE_NevadaHonk_C::GetDefaultObj()
{
	static class UBBE_NevadaHonk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_NevadaHonk_C*>(UBBE_NevadaHonk_C::StaticClass()->DefaultObject);

	return Default;
}

}



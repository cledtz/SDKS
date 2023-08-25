#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_SportbikeBoost.BBE_SportbikeBoost_C
// (None)

class UClass* UBBE_SportbikeBoost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_SportbikeBoost_C");

	return Clss;
}


// BBE_SportbikeBoost_C BBE_SportbikeBoost.Default__BBE_SportbikeBoost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_SportbikeBoost_C* UBBE_SportbikeBoost_C::GetDefaultObj()
{
	static class UBBE_SportbikeBoost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_SportbikeBoost_C*>(UBBE_SportbikeBoost_C::StaticClass()->DefaultObject);

	return Default;
}

}



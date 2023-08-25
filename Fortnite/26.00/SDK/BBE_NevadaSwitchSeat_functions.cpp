#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BBE_NevadaSwitchSeat.BBE_NevadaSwitchSeat_C
// (None)

class UClass* UBBE_NevadaSwitchSeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BBE_NevadaSwitchSeat_C");

	return Clss;
}


// BBE_NevadaSwitchSeat_C BBE_NevadaSwitchSeat.Default__BBE_NevadaSwitchSeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBBE_NevadaSwitchSeat_C* UBBE_NevadaSwitchSeat_C::GetDefaultObj()
{
	static class UBBE_NevadaSwitchSeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBBE_NevadaSwitchSeat_C*>(UBBE_NevadaSwitchSeat_C::StaticClass()->DefaultObject);

	return Default;
}

}



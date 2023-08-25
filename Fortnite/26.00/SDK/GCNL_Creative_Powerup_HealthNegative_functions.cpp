#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_Creative_Powerup_HealthNegative.GCNL_Creative_Powerup_HealthNegative_C
// (Actor)

class UClass* UGCNL_Creative_Powerup_HealthNegative_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_Creative_Powerup_HealthNegative_C");

	return Clss;
}


// GCNL_Creative_Powerup_HealthNegative_C GCNL_Creative_Powerup_HealthNegative.Default__GCNL_Creative_Powerup_HealthNegative_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCNL_Creative_Powerup_HealthNegative_C* UGCNL_Creative_Powerup_HealthNegative_C::GetDefaultObj()
{
	static class UGCNL_Creative_Powerup_HealthNegative_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCNL_Creative_Powerup_HealthNegative_C*>(UGCNL_Creative_Powerup_HealthNegative_C::StaticClass()->DefaultObject);

	return Default;
}

}



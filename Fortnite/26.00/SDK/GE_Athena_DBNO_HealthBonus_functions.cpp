#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Athena_DBNO_HealthBonus.GE_Athena_DBNO_HealthBonus_C
// (None)

class UClass* UGE_Athena_DBNO_HealthBonus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Athena_DBNO_HealthBonus_C");

	return Clss;
}


// GE_Athena_DBNO_HealthBonus_C GE_Athena_DBNO_HealthBonus.Default__GE_Athena_DBNO_HealthBonus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Athena_DBNO_HealthBonus_C* UGE_Athena_DBNO_HealthBonus_C::GetDefaultObj()
{
	static class UGE_Athena_DBNO_HealthBonus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Athena_DBNO_HealthBonus_C*>(UGE_Athena_DBNO_HealthBonus_C::StaticClass()->DefaultObject);

	return Default;
}

}



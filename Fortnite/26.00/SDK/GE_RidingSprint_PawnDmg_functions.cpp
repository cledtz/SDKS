#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RidingSprint_PawnDmg.GE_RidingSprint_PawnDmg_C
// (None)

class UClass* UGE_RidingSprint_PawnDmg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RidingSprint_PawnDmg_C");

	return Clss;
}


// GE_RidingSprint_PawnDmg_C GE_RidingSprint_PawnDmg.Default__GE_RidingSprint_PawnDmg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RidingSprint_PawnDmg_C* UGE_RidingSprint_PawnDmg_C::GetDefaultObj()
{
	static class UGE_RidingSprint_PawnDmg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RidingSprint_PawnDmg_C*>(UGE_RidingSprint_PawnDmg_C::StaticClass()->DefaultObject);

	return Default;
}

}



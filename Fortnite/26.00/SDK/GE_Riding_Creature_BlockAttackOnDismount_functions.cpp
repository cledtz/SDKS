#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Riding_Creature_BlockAttackOnDismount.GE_Riding_Creature_BlockAttackOnDismount_C
// (None)

class UClass* UGE_Riding_Creature_BlockAttackOnDismount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Riding_Creature_BlockAttackOnDismount_C");

	return Clss;
}


// GE_Riding_Creature_BlockAttackOnDismount_C GE_Riding_Creature_BlockAttackOnDismount.Default__GE_Riding_Creature_BlockAttackOnDismount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Riding_Creature_BlockAttackOnDismount_C* UGE_Riding_Creature_BlockAttackOnDismount_C::GetDefaultObj()
{
	static class UGE_Riding_Creature_BlockAttackOnDismount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Riding_Creature_BlockAttackOnDismount_C*>(UGE_Riding_Creature_BlockAttackOnDismount_C::StaticClass()->DefaultObject);

	return Default;
}

}



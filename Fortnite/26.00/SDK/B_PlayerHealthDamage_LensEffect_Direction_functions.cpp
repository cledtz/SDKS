#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C
// (Actor)

class UClass* UB_PlayerHealthDamage_LensEffect_Direction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_PlayerHealthDamage_LensEffect_Direction_C");

	return Clss;
}


// B_PlayerHealthDamage_LensEffect_Direction_C B_PlayerHealthDamage_LensEffect_Direction.Default__B_PlayerHealthDamage_LensEffect_Direction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_PlayerHealthDamage_LensEffect_Direction_C* UB_PlayerHealthDamage_LensEffect_Direction_C::GetDefaultObj()
{
	static class UB_PlayerHealthDamage_LensEffect_Direction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_PlayerHealthDamage_LensEffect_Direction_C*>(UB_PlayerHealthDamage_LensEffect_Direction_C::StaticClass()->DefaultObject);

	return Default;
}

}



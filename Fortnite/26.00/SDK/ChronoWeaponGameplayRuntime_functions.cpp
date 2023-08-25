#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ChronoWeaponGameplayRuntime.AnimInstance_ChronoPanRifle
// (None)

class UClass* UAnimInstance_ChronoPanRifle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimInstance_ChronoPanRifle");

	return Clss;
}


// AnimInstance_ChronoPanRifle ChronoWeaponGameplayRuntime.Default__AnimInstance_ChronoPanRifle
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimInstance_ChronoPanRifle* UAnimInstance_ChronoPanRifle::GetDefaultObj()
{
	static class UAnimInstance_ChronoPanRifle* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimInstance_ChronoPanRifle*>(UAnimInstance_ChronoPanRifle::StaticClass()->DefaultObject);

	return Default;
}

}



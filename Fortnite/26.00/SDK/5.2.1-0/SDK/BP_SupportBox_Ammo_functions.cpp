#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SupportBox_Ammo.BP_SupportBox_Ammo_C
// (Actor)

class UClass* UBP_SupportBox_Ammo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SupportBox_Ammo_C");

	return Clss;
}


// BP_SupportBox_Ammo_C BP_SupportBox_Ammo.Default__BP_SupportBox_Ammo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SupportBox_Ammo_C* UBP_SupportBox_Ammo_C::GetDefaultObj()
{
	static class UBP_SupportBox_Ammo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SupportBox_Ammo_C*>(UBP_SupportBox_Ammo_C::StaticClass()->DefaultObject);

	return Default;
}

}



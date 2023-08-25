#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VaultSceneSinglePedestal.VaultSceneSinglePedestal_C
// (Actor)

class UClass* UVaultSceneSinglePedestal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VaultSceneSinglePedestal_C");

	return Clss;
}


// VaultSceneSinglePedestal_C VaultSceneSinglePedestal.Default__VaultSceneSinglePedestal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVaultSceneSinglePedestal_C* UVaultSceneSinglePedestal_C::GetDefaultObj()
{
	static class UVaultSceneSinglePedestal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVaultSceneSinglePedestal_C*>(UVaultSceneSinglePedestal_C::StaticClass()->DefaultObject);

	return Default;
}

}



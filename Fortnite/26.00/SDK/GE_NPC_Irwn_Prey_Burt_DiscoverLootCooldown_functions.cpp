#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown.GE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown_C
// (None)

class UClass* UGE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown_C");

	return Clss;
}


// GE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown_C GE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown.Default__GE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown_C* UGE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown_C::GetDefaultObj()
{
	static class UGE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown_C*>(UGE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}



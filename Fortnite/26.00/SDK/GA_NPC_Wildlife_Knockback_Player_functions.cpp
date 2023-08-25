#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_NPC_Wildlife_Knockback_Player.GA_NPC_Wildlife_Knockback_Player_C
// (None)

class UClass* UGA_NPC_Wildlife_Knockback_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_NPC_Wildlife_Knockback_Player_C");

	return Clss;
}


// GA_NPC_Wildlife_Knockback_Player_C GA_NPC_Wildlife_Knockback_Player.Default__GA_NPC_Wildlife_Knockback_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_NPC_Wildlife_Knockback_Player_C* UGA_NPC_Wildlife_Knockback_Player_C::GetDefaultObj()
{
	static class UGA_NPC_Wildlife_Knockback_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_NPC_Wildlife_Knockback_Player_C*>(UGA_NPC_Wildlife_Knockback_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}



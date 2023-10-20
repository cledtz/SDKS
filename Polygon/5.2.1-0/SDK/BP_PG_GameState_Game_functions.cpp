#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PG_GameState_Game.BP_PG_GameState_Game_C
// (Actor)

class UClass* UBP_PG_GameState_Game_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PG_GameState_Game_C");

	return Clss;
}


// BP_PG_GameState_Game_C BP_PG_GameState_Game.Default__BP_PG_GameState_Game_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PG_GameState_Game_C* UBP_PG_GameState_Game_C::GetDefaultObj()
{
	static class UBP_PG_GameState_Game_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PG_GameState_Game_C*>(UBP_PG_GameState_Game_C::StaticClass()->DefaultObject);

	return Default;
}

}



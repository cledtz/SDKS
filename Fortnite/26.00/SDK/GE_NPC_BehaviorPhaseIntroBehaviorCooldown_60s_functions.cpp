#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s.GE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s_C
// (None)

class UClass* UGE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s_C");

	return Clss;
}


// GE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s_C GE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s.Default__GE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s_C* UGE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s_C::GetDefaultObj()
{
	static class UGE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s_C*>(UGE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s_C::StaticClass()->DefaultObject);

	return Default;
}

}



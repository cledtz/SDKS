#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_NPC_Behavior_TargetSlots_Melee_SlotOwner.GE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C
// (None)

class UClass* UGE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C");

	return Clss;
}


// GE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C GE_NPC_Behavior_TargetSlots_Melee_SlotOwner.Default__GE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C* UGE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C::GetDefaultObj()
{
	static class UGE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C*>(UGE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_NPC_Parent_DestroyBuilding.GE_NPC_Parent_DestroyBuilding_C
// (None)

class UClass* UGE_NPC_Parent_DestroyBuilding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_NPC_Parent_DestroyBuilding_C");

	return Clss;
}


// GE_NPC_Parent_DestroyBuilding_C GE_NPC_Parent_DestroyBuilding.Default__GE_NPC_Parent_DestroyBuilding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_NPC_Parent_DestroyBuilding_C* UGE_NPC_Parent_DestroyBuilding_C::GetDefaultObj()
{
	static class UGE_NPC_Parent_DestroyBuilding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_NPC_Parent_DestroyBuilding_C*>(UGE_NPC_Parent_DestroyBuilding_C::StaticClass()->DefaultObject);

	return Default;
}

}



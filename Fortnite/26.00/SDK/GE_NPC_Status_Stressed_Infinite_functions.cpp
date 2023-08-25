#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_NPC_Status_Stressed_Infinite.GE_NPC_Status_Stressed_Infinite_C
// (None)

class UClass* UGE_NPC_Status_Stressed_Infinite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_NPC_Status_Stressed_Infinite_C");

	return Clss;
}


// GE_NPC_Status_Stressed_Infinite_C GE_NPC_Status_Stressed_Infinite.Default__GE_NPC_Status_Stressed_Infinite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_NPC_Status_Stressed_Infinite_C* UGE_NPC_Status_Stressed_Infinite_C::GetDefaultObj()
{
	static class UGE_NPC_Status_Stressed_Infinite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_NPC_Status_Stressed_Infinite_C*>(UGE_NPC_Status_Stressed_Infinite_C::StaticClass()->DefaultObject);

	return Default;
}

}



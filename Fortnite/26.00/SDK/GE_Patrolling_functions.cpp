#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Patrolling.GE_Patrolling_C
// (None)

class UClass* UGE_Patrolling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Patrolling_C");

	return Clss;
}


// GE_Patrolling_C GE_Patrolling.Default__GE_Patrolling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Patrolling_C* UGE_Patrolling_C::GetDefaultObj()
{
	static class UGE_Patrolling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Patrolling_C*>(UGE_Patrolling_C::StaticClass()->DefaultObject);

	return Default;
}

}



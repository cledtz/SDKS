#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GoalComponent_Default.GoalComponent_Default_C
// (None)

class UClass* UGoalComponent_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GoalComponent_Default_C");

	return Clss;
}


// GoalComponent_Default_C GoalComponent_Default.Default__GoalComponent_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGoalComponent_Default_C* UGoalComponent_Default_C::GetDefaultObj()
{
	static class UGoalComponent_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGoalComponent_Default_C*>(UGoalComponent_Default_C::StaticClass()->DefaultObject);

	return Default;
}

}



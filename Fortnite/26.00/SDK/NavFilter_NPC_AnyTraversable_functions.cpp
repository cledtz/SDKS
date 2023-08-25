#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_NPC_AnyTraversable.NavFilter_NPC_AnyTraversable_C
// (None)

class UClass* UNavFilter_NPC_AnyTraversable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_NPC_AnyTraversable_C");

	return Clss;
}


// NavFilter_NPC_AnyTraversable_C NavFilter_NPC_AnyTraversable.Default__NavFilter_NPC_AnyTraversable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_NPC_AnyTraversable_C* UNavFilter_NPC_AnyTraversable_C::GetDefaultObj()
{
	static class UNavFilter_NPC_AnyTraversable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_NPC_AnyTraversable_C*>(UNavFilter_NPC_AnyTraversable_C::StaticClass()->DefaultObject);

	return Default;
}

}



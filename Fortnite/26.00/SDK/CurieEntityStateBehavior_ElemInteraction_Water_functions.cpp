#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CurieEntityStateBehavior_ElemInteraction_Water.CurieEntityStateBehavior_ElemInteraction_Water_C
// (None)

class UClass* UCurieEntityStateBehavior_ElemInteraction_Water_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieEntityStateBehavior_ElemInteraction_Water_C");

	return Clss;
}


// CurieEntityStateBehavior_ElemInteraction_Water_C CurieEntityStateBehavior_ElemInteraction_Water.Default__CurieEntityStateBehavior_ElemInteraction_Water_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCurieEntityStateBehavior_ElemInteraction_Water_C* UCurieEntityStateBehavior_ElemInteraction_Water_C::GetDefaultObj()
{
	static class UCurieEntityStateBehavior_ElemInteraction_Water_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieEntityStateBehavior_ElemInteraction_Water_C*>(UCurieEntityStateBehavior_ElemInteraction_Water_C::StaticClass()->DefaultObject);

	return Default;
}

}



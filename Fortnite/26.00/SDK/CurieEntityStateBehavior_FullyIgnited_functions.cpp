#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CurieEntityStateBehavior_FullyIgnited.CurieEntityStateBehavior_FullyIgnited_C
// (None)

class UClass* UCurieEntityStateBehavior_FullyIgnited_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieEntityStateBehavior_FullyIgnited_C");

	return Clss;
}


// CurieEntityStateBehavior_FullyIgnited_C CurieEntityStateBehavior_FullyIgnited.Default__CurieEntityStateBehavior_FullyIgnited_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCurieEntityStateBehavior_FullyIgnited_C* UCurieEntityStateBehavior_FullyIgnited_C::GetDefaultObj()
{
	static class UCurieEntityStateBehavior_FullyIgnited_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieEntityStateBehavior_FullyIgnited_C*>(UCurieEntityStateBehavior_FullyIgnited_C::StaticClass()->DefaultObject);

	return Default;
}

}



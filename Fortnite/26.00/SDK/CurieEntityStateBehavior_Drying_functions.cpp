#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CurieEntityStateBehavior_Drying.CurieEntityStateBehavior_Drying_C
// (None)

class UClass* UCurieEntityStateBehavior_Drying_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieEntityStateBehavior_Drying_C");

	return Clss;
}


// CurieEntityStateBehavior_Drying_C CurieEntityStateBehavior_Drying.Default__CurieEntityStateBehavior_Drying_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCurieEntityStateBehavior_Drying_C* UCurieEntityStateBehavior_Drying_C::GetDefaultObj()
{
	static class UCurieEntityStateBehavior_Drying_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieEntityStateBehavior_Drying_C*>(UCurieEntityStateBehavior_Drying_C::StaticClass()->DefaultObject);

	return Default;
}

}



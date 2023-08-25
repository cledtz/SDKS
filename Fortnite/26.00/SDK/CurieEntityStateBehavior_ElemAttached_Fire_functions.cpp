#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CurieEntityStateBehavior_ElemAttached_Fire.CurieEntityStateBehavior_ElemAttached_Fire_C
// (None)

class UClass* UCurieEntityStateBehavior_ElemAttached_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieEntityStateBehavior_ElemAttached_Fire_C");

	return Clss;
}


// CurieEntityStateBehavior_ElemAttached_Fire_C CurieEntityStateBehavior_ElemAttached_Fire.Default__CurieEntityStateBehavior_ElemAttached_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCurieEntityStateBehavior_ElemAttached_Fire_C* UCurieEntityStateBehavior_ElemAttached_Fire_C::GetDefaultObj()
{
	static class UCurieEntityStateBehavior_ElemAttached_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieEntityStateBehavior_ElemAttached_Fire_C*>(UCurieEntityStateBehavior_ElemAttached_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmptyBehavior.EmptyBehavior_C
// (None)

class UClass* UEmptyBehavior_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmptyBehavior_C");

	return Clss;
}


// EmptyBehavior_C EmptyBehavior.Default__EmptyBehavior_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmptyBehavior_C* UEmptyBehavior_C::GetDefaultObj()
{
	static class UEmptyBehavior_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmptyBehavior_C*>(UEmptyBehavior_C::StaticClass()->DefaultObject);

	return Default;
}

}



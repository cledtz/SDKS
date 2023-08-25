#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C
// (Actor)

class UClass* UImpactNumbers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImpactNumbers_C");

	return Clss;
}


// ImpactNumbers_C ImpactNumbers.Default__ImpactNumbers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UImpactNumbers_C* UImpactNumbers_C::GetDefaultObj()
{
	static class UImpactNumbers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UImpactNumbers_C*>(UImpactNumbers_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WolfRidableComponent.WolfRidableComponent_C
// (None)

class UClass* UWolfRidableComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WolfRidableComponent_C");

	return Clss;
}


// WolfRidableComponent_C WolfRidableComponent.Default__WolfRidableComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWolfRidableComponent_C* UWolfRidableComponent_C::GetDefaultObj()
{
	static class UWolfRidableComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWolfRidableComponent_C*>(UWolfRidableComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}



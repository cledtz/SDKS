#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_XpEverywhereUIComponent.BP_XpEverywhereUIComponent_C
// (None)

class UClass* UBP_XpEverywhereUIComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_XpEverywhereUIComponent_C");

	return Clss;
}


// BP_XpEverywhereUIComponent_C BP_XpEverywhereUIComponent.Default__BP_XpEverywhereUIComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_XpEverywhereUIComponent_C* UBP_XpEverywhereUIComponent_C::GetDefaultObj()
{
	static class UBP_XpEverywhereUIComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_XpEverywhereUIComponent_C*>(UBP_XpEverywhereUIComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}



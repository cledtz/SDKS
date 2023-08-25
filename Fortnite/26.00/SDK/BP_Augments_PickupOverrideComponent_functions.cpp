#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Augments_PickupOverrideComponent.BP_Augments_PickupOverrideComponent_C
// (None)

class UClass* UBP_Augments_PickupOverrideComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Augments_PickupOverrideComponent_C");

	return Clss;
}


// BP_Augments_PickupOverrideComponent_C BP_Augments_PickupOverrideComponent.Default__BP_Augments_PickupOverrideComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Augments_PickupOverrideComponent_C* UBP_Augments_PickupOverrideComponent_C::GetDefaultObj()
{
	static class UBP_Augments_PickupOverrideComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Augments_PickupOverrideComponent_C*>(UBP_Augments_PickupOverrideComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}



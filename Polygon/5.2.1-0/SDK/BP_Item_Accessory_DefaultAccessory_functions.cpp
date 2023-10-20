#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Item_Accessory_DefaultAccessory.BP_Item_Accessory_DefaultAccessory_C
// (Actor)

class UClass* UBP_Item_Accessory_DefaultAccessory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Item_Accessory_DefaultAccessory_C");

	return Clss;
}


// BP_Item_Accessory_DefaultAccessory_C BP_Item_Accessory_DefaultAccessory.Default__BP_Item_Accessory_DefaultAccessory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Item_Accessory_DefaultAccessory_C* UBP_Item_Accessory_DefaultAccessory_C::GetDefaultObj()
{
	static class UBP_Item_Accessory_DefaultAccessory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Item_Accessory_DefaultAccessory_C*>(UBP_Item_Accessory_DefaultAccessory_C::StaticClass()->DefaultObject);

	return Default;
}

}



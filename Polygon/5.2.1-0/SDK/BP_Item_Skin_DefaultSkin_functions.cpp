#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Item_Skin_DefaultSkin.BP_Item_Skin_DefaultSkin_C
// (Actor)

class UClass* UBP_Item_Skin_DefaultSkin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Item_Skin_DefaultSkin_C");

	return Clss;
}


// BP_Item_Skin_DefaultSkin_C BP_Item_Skin_DefaultSkin.Default__BP_Item_Skin_DefaultSkin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Item_Skin_DefaultSkin_C* UBP_Item_Skin_DefaultSkin_C::GetDefaultObj()
{
	static class UBP_Item_Skin_DefaultSkin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Item_Skin_DefaultSkin_C*>(UBP_Item_Skin_DefaultSkin_C::StaticClass()->DefaultObject);

	return Default;
}

}



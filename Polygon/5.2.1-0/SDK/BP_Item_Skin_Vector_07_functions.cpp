#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Item_Skin_Vector_07.BP_Item_Skin_Vector_07_C
// (Actor)

class UClass* UBP_Item_Skin_Vector_07_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Item_Skin_Vector_07_C");

	return Clss;
}


// BP_Item_Skin_Vector_07_C BP_Item_Skin_Vector_07.Default__BP_Item_Skin_Vector_07_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Item_Skin_Vector_07_C* UBP_Item_Skin_Vector_07_C::GetDefaultObj()
{
	static class UBP_Item_Skin_Vector_07_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Item_Skin_Vector_07_C*>(UBP_Item_Skin_Vector_07_C::StaticClass()->DefaultObject);

	return Default;
}

}



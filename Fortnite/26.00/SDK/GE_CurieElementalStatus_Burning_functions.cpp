#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CurieElementalStatus_Burning.GE_CurieElementalStatus_Burning_C
// (None)

class UClass* UGE_CurieElementalStatus_Burning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CurieElementalStatus_Burning_C");

	return Clss;
}


// GE_CurieElementalStatus_Burning_C GE_CurieElementalStatus_Burning.Default__GE_CurieElementalStatus_Burning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CurieElementalStatus_Burning_C* UGE_CurieElementalStatus_Burning_C::GetDefaultObj()
{
	static class UGE_CurieElementalStatus_Burning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CurieElementalStatus_Burning_C*>(UGE_CurieElementalStatus_Burning_C::StaticClass()->DefaultObject);

	return Default;
}

}



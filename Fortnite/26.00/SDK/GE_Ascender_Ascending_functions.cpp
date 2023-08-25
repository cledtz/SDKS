#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Ascender_Ascending.GE_Ascender_Ascending_C
// (None)

class UClass* UGE_Ascender_Ascending_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Ascender_Ascending_C");

	return Clss;
}


// GE_Ascender_Ascending_C GE_Ascender_Ascending.Default__GE_Ascender_Ascending_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Ascender_Ascending_C* UGE_Ascender_Ascending_C::GetDefaultObj()
{
	static class UGE_Ascender_Ascending_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Ascender_Ascending_C*>(UGE_Ascender_Ascending_C::StaticClass()->DefaultObject);

	return Default;
}

}



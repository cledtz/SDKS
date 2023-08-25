#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Ascender_Descending.GE_Ascender_Descending_C
// (None)

class UClass* UGE_Ascender_Descending_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Ascender_Descending_C");

	return Clss;
}


// GE_Ascender_Descending_C GE_Ascender_Descending.Default__GE_Ascender_Descending_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Ascender_Descending_C* UGE_Ascender_Descending_C::GetDefaultObj()
{
	static class UGE_Ascender_Descending_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Ascender_Descending_C*>(UGE_Ascender_Descending_C::StaticClass()->DefaultObject);

	return Default;
}

}



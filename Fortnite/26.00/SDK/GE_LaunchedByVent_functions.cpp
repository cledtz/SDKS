#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_LaunchedByVent.GE_LaunchedByVent_C
// (None)

class UClass* UGE_LaunchedByVent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_LaunchedByVent_C");

	return Clss;
}


// GE_LaunchedByVent_C GE_LaunchedByVent.Default__GE_LaunchedByVent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_LaunchedByVent_C* UGE_LaunchedByVent_C::GetDefaultObj()
{
	static class UGE_LaunchedByVent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_LaunchedByVent_C*>(UGE_LaunchedByVent_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_Rock_Jump.BB_Rock_Jump_C
// (None)

class UClass* UBB_Rock_Jump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_Rock_Jump_C");

	return Clss;
}


// BB_Rock_Jump_C BB_Rock_Jump.Default__BB_Rock_Jump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_Rock_Jump_C* UBB_Rock_Jump_C::GetDefaultObj()
{
	static class UBB_Rock_Jump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_Rock_Jump_C*>(UBB_Rock_Jump_C::StaticClass()->DefaultObject);

	return Default;
}

}



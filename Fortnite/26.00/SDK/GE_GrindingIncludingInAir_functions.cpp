#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GrindingIncludingInAir.GE_GrindingIncludingInAir_C
// (None)

class UClass* UGE_GrindingIncludingInAir_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GrindingIncludingInAir_C");

	return Clss;
}


// GE_GrindingIncludingInAir_C GE_GrindingIncludingInAir.Default__GE_GrindingIncludingInAir_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GrindingIncludingInAir_C* UGE_GrindingIncludingInAir_C::GetDefaultObj()
{
	static class UGE_GrindingIncludingInAir_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GrindingIncludingInAir_C*>(UGE_GrindingIncludingInAir_C::StaticClass()->DefaultObject);

	return Default;
}

}



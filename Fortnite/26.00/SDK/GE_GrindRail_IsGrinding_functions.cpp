#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GrindRail_IsGrinding.GE_GrindRail_IsGrinding_C
// (None)

class UClass* UGE_GrindRail_IsGrinding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GrindRail_IsGrinding_C");

	return Clss;
}


// GE_GrindRail_IsGrinding_C GE_GrindRail_IsGrinding.Default__GE_GrindRail_IsGrinding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GrindRail_IsGrinding_C* UGE_GrindRail_IsGrinding_C::GetDefaultObj()
{
	static class UGE_GrindRail_IsGrinding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GrindRail_IsGrinding_C*>(UGE_GrindRail_IsGrinding_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TracerGeneric.TracerGeneric_C
// (Actor)

class UClass* UTracerGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TracerGeneric_C");

	return Clss;
}


// TracerGeneric_C TracerGeneric.Default__TracerGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTracerGeneric_C* UTracerGeneric_C::GetDefaultObj()
{
	static class UTracerGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTracerGeneric_C*>(UTracerGeneric_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TracerGeneric.TracerGeneric_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UTracerGeneric_C::UserConstructionScript(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TracerGeneric_C", "UserConstructionScript");

	Params::UTracerGeneric_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}



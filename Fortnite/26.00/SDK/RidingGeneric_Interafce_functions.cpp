#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RidingGeneric_Interafce.RidingGeneric_Interafce_C
// (None)

class UClass* URidingGeneric_Interafce_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RidingGeneric_Interafce_C");

	return Clss;
}


// RidingGeneric_Interafce_C RidingGeneric_Interafce.Default__RidingGeneric_Interafce_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URidingGeneric_Interafce_C* URidingGeneric_Interafce_C::GetDefaultObj()
{
	static class URidingGeneric_Interafce_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URidingGeneric_Interafce_C*>(URidingGeneric_Interafce_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RidingGeneric_Interafce.RidingGeneric_Interafce_C.ToggleRidingAlternative
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URidingGeneric_Interafce_C::ToggleRidingAlternative()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidingGeneric_Interafce_C", "ToggleRidingAlternative");

	Params::URidingGeneric_Interafce_C_ToggleRidingAlternative_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function RidingGeneric_Interafce.RidingGeneric_Interafce_C.GetRidingInfoFromTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             JumpAttachGroundHeightMin                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             JumpAttachGroundHeightBuffer                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UsesAltRidingMessage                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URidingGeneric_Interafce_C::GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RidingGeneric_Interafce_C", "GetRidingInfoFromTarget");

	Params::URidingGeneric_Interafce_C_GetRidingInfoFromTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JumpAttachGroundHeightMin != nullptr)
		*JumpAttachGroundHeightMin = Parms.JumpAttachGroundHeightMin;

	if (JumpAttachGroundHeightBuffer != nullptr)
		*JumpAttachGroundHeightBuffer = Parms.JumpAttachGroundHeightBuffer;

	if (UsesAltRidingMessage != nullptr)
		*UsesAltRidingMessage = Parms.UsesAltRidingMessage;

}

}



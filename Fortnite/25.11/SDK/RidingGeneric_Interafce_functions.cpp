#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function RidingGeneric_Interafce.RidingGeneric_Interafce_C.ToggleRidingAlternative
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URidingGeneric_Interafce_C::ToggleRidingAlternative()
{
	static auto Func = Class->GetFunction("RidingGeneric_Interafce_C", "ToggleRidingAlternative");

	Params::URidingGeneric_Interafce_C_ToggleRidingAlternative_Params Parms;


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
	static auto Func = Class->GetFunction("RidingGeneric_Interafce_C", "GetRidingInfoFromTarget");

	Params::URidingGeneric_Interafce_C_GetRidingInfoFromTarget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (JumpAttachGroundHeightMin != nullptr)
		*JumpAttachGroundHeightMin = Parms.JumpAttachGroundHeightMin;

	if (JumpAttachGroundHeightBuffer != nullptr)
		*JumpAttachGroundHeightBuffer = Parms.JumpAttachGroundHeightBuffer;

	if (UsesAltRidingMessage != nullptr)
		*UsesAltRidingMessage = Parms.UsesAltRidingMessage;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

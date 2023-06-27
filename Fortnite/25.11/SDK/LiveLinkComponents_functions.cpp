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


// Function LiveLinkComponents.LiveLinkComponentController.SetSubjectRepresentation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectRepresentationInSubjectRepresentation                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ULiveLinkComponentController::SetSubjectRepresentation(const struct FLiveLinkSubjectRepresentation& InSubjectRepresentation)
{
	static auto Func = Class->GetFunction("LiveLinkComponentController", "SetSubjectRepresentation");

	Params::ULiveLinkComponentController_SetSubjectRepresentation_Params Parms;

	Parms.InSubjectRepresentation = InSubjectRepresentation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LiveLinkComponents.LiveLinkComponentController.GetSubjectRepresentation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLiveLinkSubjectRepresentationReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FLiveLinkSubjectRepresentation ULiveLinkComponentController::GetSubjectRepresentation()
{
	static auto Func = Class->GetFunction("LiveLinkComponentController", "GetSubjectRepresentation");

	Params::ULiveLinkComponentController_GetSubjectRepresentation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

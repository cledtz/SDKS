#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// DelegateFunction CRD_ModalDialogRuntime.ModalDialogVariant.OnResponseAnimationFinished__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UModalDialogVariant::OnResponseAnimationFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("ModalDialogVariant", "OnResponseAnimationFinished__DelegateSignature");

	Params::UModalDialogVariant_OnResponseAnimationFinished__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ModalDialogRuntime.ModalDialogVariant.HasResponseAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModalDialogVariant::HasResponseAnimation()
{
	static auto Func = Class->GetFunction("ModalDialogVariant", "HasResponseAnimation");

	Params::UModalDialogVariant_HasResponseAnimation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogRuntime.ModalDialogVariant.HandleResponseAnimationFinished
// (Final, Native, Private)
// Parameters:

void UModalDialogVariant::HandleResponseAnimationFinished()
{
	static auto Func = Class->GetFunction("ModalDialogVariant", "HandleResponseAnimationFinished");

	Params::UModalDialogVariant_HandleResponseAnimationFinished_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_ModalDialogRuntime.ModalDialogVariant.AttemptToPlayResponseAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModalDialogVariant::AttemptToPlayResponseAnimation()
{
	static auto Func = Class->GetFunction("ModalDialogVariant", "AttemptToPlayResponseAnimation");

	Params::UModalDialogVariant_AttemptToPlayResponseAnimation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_ModalDialogRuntime.ModalDialogVariant.AttemptToPlayOpenAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModalDialogVariant::AttemptToPlayOpenAnimation()
{
	static auto Func = Class->GetFunction("ModalDialogVariant", "AttemptToPlayOpenAnimation");

	Params::UModalDialogVariant_AttemptToPlayOpenAnimation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CRD_ModalDialogRuntime.ModalDialogVariant
// (None)

class UClass* UModalDialogVariant::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModalDialogVariant");

	return Clss;
}


// ModalDialogVariant CRD_ModalDialogRuntime.Default__ModalDialogVariant
// (Public, ClassDefaultObject, ArchetypeObject)

class UModalDialogVariant* UModalDialogVariant::GetDefaultObj()
{
	static class UModalDialogVariant* Default = nullptr;

	if (!Default)
		Default = static_cast<UModalDialogVariant*>(UModalDialogVariant::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction CRD_ModalDialogRuntime.ModalDialogVariant.OnResponseAnimationFinished__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UModalDialogVariant::OnResponseAnimationFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModalDialogVariant", "OnResponseAnimationFinished__DelegateSignature");

	Params::UModalDialogVariant_OnResponseAnimationFinished__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ModalDialogRuntime.ModalDialogVariant.HasResponseAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModalDialogVariant::HasResponseAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModalDialogVariant", "HasResponseAnimation");

	Params::UModalDialogVariant_HasResponseAnimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_ModalDialogRuntime.ModalDialogVariant.HandleResponseAnimationFinished
// (Final, Native, Private)
// Parameters:

void UModalDialogVariant::HandleResponseAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModalDialogVariant", "HandleResponseAnimationFinished");

	Params::UModalDialogVariant_HandleResponseAnimationFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_ModalDialogRuntime.ModalDialogVariant.AttemptToPlayResponseAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModalDialogVariant::AttemptToPlayResponseAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModalDialogVariant", "AttemptToPlayResponseAnimation");

	Params::UModalDialogVariant_AttemptToPlayResponseAnimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_ModalDialogRuntime.ModalDialogVariant.AttemptToPlayOpenAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModalDialogVariant::AttemptToPlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModalDialogVariant", "AttemptToPlayOpenAnimation");

	Params::UModalDialogVariant_AttemptToPlayOpenAnimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



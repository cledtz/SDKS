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


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode_Context.CancelLogin
// (Native, Public, BlueprintCallable)
// Parameters:

void UEOSUserInterface_EnterDevicePinCode_Context::CancelLogin()
{
	static auto Func = Class->GetFunction("EOSUserInterface_EnterDevicePinCode_Context", "CancelLogin");

	Params::UEOSUserInterface_EnterDevicePinCode_Context_CancelLogin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode.SetupUserInterface
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_EnterDevicePinCode_Context*Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VerificationUrl                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PinCode                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSUserInterface_EnterDevicePinCode::SetupUserInterface(class UEOSUserInterface_EnterDevicePinCode_Context* Context, const class FString& VerificationUrl, const class FString& PinCode)
{
	static auto Func = Class->GetFunction("EOSUserInterface_EnterDevicePinCode", "SetupUserInterface");

	Params::UEOSUserInterface_EnterDevicePinCode_SetupUserInterface_Params Parms;

	Parms.Context = Context;
	Parms.VerificationUrl = VerificationUrl;
	Parms.PinCode = PinCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context.SelectedCandidates
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FEOSUserInterface_CandidateEOSAccount>SelectedCandidates                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context::SelectedCandidates(const TArray<struct FEOSUserInterface_CandidateEOSAccount>& SelectedCandidates)
{
	static auto Func = Class->GetFunction("EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context", "SelectedCandidates");

	Params::UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context_SelectedCandidates_Params Parms;

	Parms.SelectedCandidates = SelectedCandidates;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform.SetupUserInterface
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context*Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEOSUserInterface_CandidateEOSAccount>AvailableCandidates                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform::SetupUserInterface(class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context* Context, TArray<struct FEOSUserInterface_CandidateEOSAccount>& AvailableCandidates)
{
	static auto Func = Class->GetFunction("EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform", "SetupUserInterface");

	Params::UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_SetupUserInterface_Params Parms;

	Parms.Context = Context;
	Parms.AvailableCandidates = AvailableCandidates;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context.SelectCandidate
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FEOSUserInterface_CandidateEOSAccountSelectedCandidate                                                (Parm, NativeAccessSpecifierPublic)

void UEOSUserInterface_SelectEOSAccount_Context::SelectCandidate(const struct FEOSUserInterface_CandidateEOSAccount& SelectedCandidate)
{
	static auto Func = Class->GetFunction("EOSUserInterface_SelectEOSAccount_Context", "SelectCandidate");

	Params::UEOSUserInterface_SelectEOSAccount_Context_SelectCandidate_Params Parms;

	Parms.SelectedCandidate = SelectedCandidate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount.SetupUserInterface
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_SelectEOSAccount_Context*Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEOSUserInterface_CandidateEOSAccount>AvailableCandidates                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEOSUserInterface_SelectEOSAccount::SetupUserInterface(class UEOSUserInterface_SelectEOSAccount_Context* Context, TArray<struct FEOSUserInterface_CandidateEOSAccount>& AvailableCandidates)
{
	static auto Func = Class->GetFunction("EOSUserInterface_SelectEOSAccount", "SetupUserInterface");

	Params::UEOSUserInterface_SelectEOSAccount_SetupUserInterface_Params Parms;

	Parms.Context = Context;
	Parms.AvailableCandidates = AvailableCandidates;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount_Context.SelectChoice
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EEOSUserInterface_SignInOrCreateAccount_ChoiceSelectedChoice                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSUserInterface_SignInOrCreateAccount_Context::SelectChoice(enum class EEOSUserInterface_SignInOrCreateAccount_Choice SelectedChoice)
{
	static auto Func = Class->GetFunction("EOSUserInterface_SignInOrCreateAccount_Context", "SelectChoice");

	Params::UEOSUserInterface_SignInOrCreateAccount_Context_SelectChoice_Params Parms;

	Parms.SelectedChoice = SelectedChoice;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount.SetupUserInterface
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_SignInOrCreateAccount_Context*Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSUserInterface_SignInOrCreateAccount::SetupUserInterface(class UEOSUserInterface_SignInOrCreateAccount_Context* Context)
{
	static auto Func = Class->GetFunction("EOSUserInterface_SignInOrCreateAccount", "SetupUserInterface");

	Params::UEOSUserInterface_SignInOrCreateAccount_SetupUserInterface_Params Parms;

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context.SelectChoice
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EEOSUserInterface_SwitchToCrossPlatformAccount_ChoiceSelectedChoice                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSUserInterface_SwitchToCrossPlatformAccount_Context::SelectChoice(enum class EEOSUserInterface_SwitchToCrossPlatformAccount_Choice SelectedChoice)
{
	static auto Func = Class->GetFunction("EOSUserInterface_SwitchToCrossPlatformAccount_Context", "SelectChoice");

	Params::UEOSUserInterface_SwitchToCrossPlatformAccount_Context_SelectChoice_Params Parms;

	Parms.SelectedChoice = SelectedChoice;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount.SetupUserInterface
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_SwitchToCrossPlatformAccount_Context*Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EpicAccountName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSUserInterface_SwitchToCrossPlatformAccount::SetupUserInterface(class UEOSUserInterface_SwitchToCrossPlatformAccount_Context* Context, const class FString& EpicAccountName)
{
	static auto Func = Class->GetFunction("EOSUserInterface_SwitchToCrossPlatformAccount", "SetupUserInterface");

	Params::UEOSUserInterface_SwitchToCrossPlatformAccount_SetupUserInterface_Params Parms;

	Parms.Context = Context;
	Parms.EpicAccountName = EpicAccountName;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

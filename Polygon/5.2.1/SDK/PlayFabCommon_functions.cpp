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


// Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InKey                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayFabAuthenticationContext::SetPlayFabId(const class FString& InKey)
{
	static auto Func = Class->GetFunction("PlayFabAuthenticationContext", "SetPlayFabId");

	Params::UPlayFabAuthenticationContext_SetPlayFabId_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InToken                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayFabAuthenticationContext::SetEntityToken(const class FString& InToken)
{
	static auto Func = Class->GetFunction("PlayFabAuthenticationContext", "SetEntityToken");

	Params::UPlayFabAuthenticationContext_SetEntityToken_Params Parms;

	Parms.InToken = InToken;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InKey                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayFabAuthenticationContext::SetDeveloperSecretKey(const class FString& InKey)
{
	static auto Func = Class->GetFunction("PlayFabAuthenticationContext", "SetDeveloperSecretKey");

	Params::UPlayFabAuthenticationContext_SetDeveloperSecretKey_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InTicket                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayFabAuthenticationContext::SetClientSessionTicket(const class FString& InTicket)
{
	static auto Func = Class->GetFunction("PlayFabAuthenticationContext", "SetClientSessionTicket");

	Params::UPlayFabAuthenticationContext_SetClientSessionTicket_Params Parms;

	Parms.InTicket = InTicket;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPlayFabAuthenticationContext::GetPlayFabId()
{
	static auto Func = Class->GetFunction("PlayFabAuthenticationContext", "GetPlayFabId");

	Params::UPlayFabAuthenticationContext_GetPlayFabId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPlayFabAuthenticationContext::GetEntityToken()
{
	static auto Func = Class->GetFunction("PlayFabAuthenticationContext", "GetEntityToken");

	Params::UPlayFabAuthenticationContext_GetEntityToken_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPlayFabAuthenticationContext::GetDeveloperSecretKey()
{
	static auto Func = Class->GetFunction("PlayFabAuthenticationContext", "GetDeveloperSecretKey");

	Params::UPlayFabAuthenticationContext_GetDeveloperSecretKey_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPlayFabAuthenticationContext::GetClientSessionTicket()
{
	static auto Func = Class->GetFunction("PlayFabAuthenticationContext", "GetClientSessionTicket");

	Params::UPlayFabAuthenticationContext_GetClientSessionTicket_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPlayFabAuthenticationContext::ForgetAllCredentials()
{
	static auto Func = Class->GetFunction("PlayFabAuthenticationContext", "ForgetAllCredentials");

	Params::UPlayFabAuthenticationContext_ForgetAllCredentials_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.ClientAdminSecurityCheck
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:

void UPlayFabAuthenticationContext::ClientAdminSecurityCheck()
{
	static auto Func = Class->GetFunction("PlayFabAuthenticationContext", "ClientAdminSecurityCheck");

	Params::UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

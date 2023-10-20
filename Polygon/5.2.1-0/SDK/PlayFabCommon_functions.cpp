#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PlayFabCommon.PlayFabAuthenticationContext
// (None)

class UClass* UPlayFabAuthenticationContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayFabAuthenticationContext");

	return Clss;
}


// PlayFabAuthenticationContext PlayFabCommon.Default__PlayFabAuthenticationContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayFabAuthenticationContext* UPlayFabAuthenticationContext::GetDefaultObj()
{
	static class UPlayFabAuthenticationContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayFabAuthenticationContext*>(UPlayFabAuthenticationContext::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InKey                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayFabAuthenticationContext::SetPlayFabId(const class FString& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayFabAuthenticationContext", "SetPlayFabId");

	Params::UPlayFabAuthenticationContext_SetPlayFabId_Params Parms{};

	Parms.InKey = InKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InToken                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayFabAuthenticationContext::SetEntityToken(const class FString& InToken)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayFabAuthenticationContext", "SetEntityToken");

	Params::UPlayFabAuthenticationContext_SetEntityToken_Params Parms{};

	Parms.InToken = InToken;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InKey                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayFabAuthenticationContext::SetDeveloperSecretKey(const class FString& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayFabAuthenticationContext", "SetDeveloperSecretKey");

	Params::UPlayFabAuthenticationContext_SetDeveloperSecretKey_Params Parms{};

	Parms.InKey = InKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InTicket                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayFabAuthenticationContext::SetClientSessionTicket(const class FString& InTicket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayFabAuthenticationContext", "SetClientSessionTicket");

	Params::UPlayFabAuthenticationContext_SetClientSessionTicket_Params Parms{};

	Parms.InTicket = InTicket;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPlayFabAuthenticationContext::GetPlayFabId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayFabAuthenticationContext", "GetPlayFabId");

	Params::UPlayFabAuthenticationContext_GetPlayFabId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPlayFabAuthenticationContext::GetEntityToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayFabAuthenticationContext", "GetEntityToken");

	Params::UPlayFabAuthenticationContext_GetEntityToken_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPlayFabAuthenticationContext::GetDeveloperSecretKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayFabAuthenticationContext", "GetDeveloperSecretKey");

	Params::UPlayFabAuthenticationContext_GetDeveloperSecretKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPlayFabAuthenticationContext::GetClientSessionTicket()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayFabAuthenticationContext", "GetClientSessionTicket");

	Params::UPlayFabAuthenticationContext_GetClientSessionTicket_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPlayFabAuthenticationContext::ForgetAllCredentials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayFabAuthenticationContext", "ForgetAllCredentials");

	Params::UPlayFabAuthenticationContext_ForgetAllCredentials_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayFabCommon.PlayFabAuthenticationContext.ClientAdminSecurityCheck
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:

void UPlayFabAuthenticationContext::ClientAdminSecurityCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayFabAuthenticationContext", "ClientAdminSecurityCheck");

	Params::UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayFabCommon.PlayFabRuntimeSettings
// (None)

class UClass* UPlayFabRuntimeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayFabRuntimeSettings");

	return Clss;
}


// PlayFabRuntimeSettings PlayFabCommon.Default__PlayFabRuntimeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayFabRuntimeSettings* UPlayFabRuntimeSettings::GetDefaultObj()
{
	static class UPlayFabRuntimeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayFabRuntimeSettings*>(UPlayFabRuntimeSettings::StaticClass()->DefaultObject);

	return Default;
}

}



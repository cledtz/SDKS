#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PlayFabGSDK.GSDKUtils
// (None)

class UClass* UGSDKUtils::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GSDKUtils");

	return Clss;
}


// GSDKUtils PlayFabGSDK.Default__GSDKUtils
// (Public, ClassDefaultObject, ArchetypeObject)

class UGSDKUtils* UGSDKUtils::GetDefaultObj()
{
	static class UGSDKUtils* Default = nullptr;

	if (!Default)
		Default = static_cast<UGSDKUtils*>(UGSDKUtils::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayFabGSDK.GSDKUtils.UpdateConnectedPlayers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FConnectedPlayer>    CurrentlyConnectedPlayers                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGSDKUtils::UpdateConnectedPlayers(TArray<struct FConnectedPlayer>& CurrentlyConnectedPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "UpdateConnectedPlayers");

	Params::UGSDKUtils_UpdateConnectedPlayers_Params Parms{};

	Parms.CurrentlyConnectedPlayers = CurrentlyConnectedPlayers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayFabGSDK.GSDKUtils.SetDefaultServerHostPort
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGSDKUtils::SetDefaultServerHostPort()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "SetDefaultServerHostPort");

	Params::UGSDKUtils_SetDefaultServerHostPort_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabGSDK.GSDKUtils.RegisterGSDKShutdownDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnGSDKShutdownDelegate                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSDKUtils::RegisterGSDKShutdownDelegate(FDelegateProperty_& OnGSDKShutdownDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "RegisterGSDKShutdownDelegate");

	Params::UGSDKUtils_RegisterGSDKShutdownDelegate_Params Parms{};

	Parms.OnGSDKShutdownDelegate = OnGSDKShutdownDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayFabGSDK.GSDKUtils.RegisterGSDKServerActiveDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnGSDKServerActiveDelegate                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSDKUtils::RegisterGSDKServerActiveDelegate(FDelegateProperty_& OnGSDKServerActiveDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "RegisterGSDKServerActiveDelegate");

	Params::UGSDKUtils_RegisterGSDKServerActiveDelegate_Params Parms{};

	Parms.OnGSDKServerActiveDelegate = OnGSDKServerActiveDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayFabGSDK.GSDKUtils.RegisterGSDKReadyForPlayers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnGSDKReadyForPlayersDelegate                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSDKUtils::RegisterGSDKReadyForPlayers(FDelegateProperty_& OnGSDKReadyForPlayersDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "RegisterGSDKReadyForPlayers");

	Params::UGSDKUtils_RegisterGSDKReadyForPlayers_Params Parms{};

	Parms.OnGSDKReadyForPlayersDelegate = OnGSDKReadyForPlayersDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayFabGSDK.GSDKUtils.RegisterGSDKMaintenanceDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnGSDKMaintenanceDelegate                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSDKUtils::RegisterGSDKMaintenanceDelegate(FDelegateProperty_& OnGSDKMaintenanceDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "RegisterGSDKMaintenanceDelegate");

	Params::UGSDKUtils_RegisterGSDKMaintenanceDelegate_Params Parms{};

	Parms.OnGSDKMaintenanceDelegate = OnGSDKMaintenanceDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayFabGSDK.GSDKUtils.RegisterGSDKHealthCheckDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnGSDKHealthCheckDelegate                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSDKUtils::RegisterGSDKHealthCheckDelegate(FDelegateProperty_& OnGSDKHealthCheckDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "RegisterGSDKHealthCheckDelegate");

	Params::UGSDKUtils_RegisterGSDKHealthCheckDelegate_Params Parms{};

	Parms.OnGSDKHealthCheckDelegate = OnGSDKHealthCheckDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayFabGSDK.GSDKUtils.ReadyForPlayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UGSDKUtils::ReadyForPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "ReadyForPlayers");

	Params::UGSDKUtils_ReadyForPlayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayFabGSDK.GSDKUtils.GetVMId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGSDKUtils::GetVMId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "GetVMId");

	Params::UGSDKUtils_GetVMId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabGSDK.GSDKUtils.GetTitleId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGSDKUtils::GetTitleId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "GetTitleId");

	Params::UGSDKUtils_GetTitleId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabGSDK.GSDKUtils.GetSharedContentDirectory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGSDKUtils::GetSharedContentDirectory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "GetSharedContentDirectory");

	Params::UGSDKUtils_GetSharedContentDirectory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabGSDK.GSDKUtils.GetServerId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGSDKUtils::GetServerId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "GetServerId");

	Params::UGSDKUtils_GetServerId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabGSDK.GSDKUtils.GetRegionName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGSDKUtils::GetRegionName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "GetRegionName");

	Params::UGSDKUtils_GetRegionName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabGSDK.GSDKUtils.GetMetaDataValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      MetaDataName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGSDKUtils::GetMetaDataValue(const class FString& MetaDataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "GetMetaDataValue");

	Params::UGSDKUtils_GetMetaDataValue_Params Parms{};

	Parms.MetaDataName = MetaDataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabGSDK.GSDKUtils.GetMatchSessionCookie
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGSDKUtils::GetMatchSessionCookie()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "GetMatchSessionCookie");

	Params::UGSDKUtils_GetMatchSessionCookie_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabGSDK.GSDKUtils.GetMatchId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGSDKUtils::GetMatchId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "GetMatchId");

	Params::UGSDKUtils_GetMatchId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabGSDK.GSDKUtils.GetLogsDirectory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGSDKUtils::GetLogsDirectory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "GetLogsDirectory");

	Params::UGSDKUtils_GetLogsDirectory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabGSDK.GSDKUtils.GetInitialPlayers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UGSDKUtils::GetInitialPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "GetInitialPlayers");

	Params::UGSDKUtils_GetInitialPlayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabGSDK.GSDKUtils.GetGameServerConnectionInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameServerConnectionInfo   ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameServerConnectionInfo UGSDKUtils::GetGameServerConnectionInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "GetGameServerConnectionInfo");

	Params::UGSDKUtils_GetGameServerConnectionInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayFabGSDK.GSDKUtils.GetBuildId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGSDKUtils::GetBuildId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSDKUtils", "GetBuildId");

	Params::UGSDKUtils_GetBuildId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}



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


// Function SteamCoreWeb.SteamCoreWebAsyncAction.HandleCallback
// (Native, Public)
// Parameters:
// class FString                      Data                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreWebAsyncAction::HandleCallback(const class FString& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncAction", "HandleCallback");

	Params::USteamCoreWebAsyncAction_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamWebUtilities.ParseJson
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamCoreJson>      Data                                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamWebUtilities::ParseJson(const class FString& JsonString, TArray<struct FSteamCoreJson>* Data)
{
	static auto Func = Class->GetFunction("SteamWebUtilities", "ParseJson");

	Params::USteamWebUtilities_ParseJson_Params Parms;

	Parms.JsonString = JsonString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Data != nullptr)
		*Data = Parms.Data;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamWebUtilities.GetProjectKey
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamWebUtilities::GetProjectKey()
{
	static auto Func = Class->GetFunction("SteamWebUtilities", "GetProjectKey");

	Params::USteamWebUtilities_GetProjectKey_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamWebUtilities.GetProjectAppID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USteamWebUtilities::GetProjectAppID()
{
	static auto Func = Class->GetFunction("SteamWebUtilities", "GetProjectAppID");

	Params::USteamWebUtilities_GetProjectAppID_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamWebUtilities.GetDevSteamID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamWebUtilities::GetDevSteamID()
{
	static auto Func = Class->GetFunction("SteamWebUtilities", "GetDevSteamID");

	Params::USteamWebUtilities_GetDevSteamID_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamWebUtilities.FindJsonStrings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Values                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class ESteamJsonResult        Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamWebUtilities::FindJsonStrings(const class FString& JsonString, const class FString& Key, TArray<class FString>* Values, enum class ESteamJsonResult* Result)
{
	static auto Func = Class->GetFunction("SteamWebUtilities", "FindJsonStrings");

	Params::USteamWebUtilities_FindJsonStrings_Params Parms;

	Parms.JsonString = JsonString;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Values != nullptr)
		*Values = Parms.Values;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCoreWeb.SteamWebUtilities.FindJsonString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamJsonResult        Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamWebUtilities::FindJsonString(const class FString& JsonString, const class FString& Key, class FString* Value, enum class ESteamJsonResult* Result)
{
	static auto Func = Class->GetFunction("SteamWebUtilities", "FindJsonString");

	Params::USteamWebUtilities_FindJsonString_Params Parms;

	Parms.JsonString = JsonString;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Value != nullptr)
		*Value = Parms.Value;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCoreWeb.SteamWebUtilities.FindJsonNumbers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Values                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class ESteamJsonResult        Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamWebUtilities::FindJsonNumbers(const class FString& JsonString, const class FString& Key, TArray<int32>* Values, enum class ESteamJsonResult* Result)
{
	static auto Func = Class->GetFunction("SteamWebUtilities", "FindJsonNumbers");

	Params::USteamWebUtilities_FindJsonNumbers_Params Parms;

	Parms.JsonString = JsonString;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Values != nullptr)
		*Values = Parms.Values;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCoreWeb.SteamWebUtilities.FindJsonNumber
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamJsonResult        Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamWebUtilities::FindJsonNumber(const class FString& JsonString, const class FString& Key, int32* Value, enum class ESteamJsonResult* Result)
{
	static auto Func = Class->GetFunction("SteamWebUtilities", "FindJsonNumber");

	Params::USteamWebUtilities_FindJsonNumber_Params Parms;

	Parms.JsonString = JsonString;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Value != nullptr)
		*Value = Parms.Value;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCoreWeb.SteamWebUtilities.FindJsonBools
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       bValues                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class ESteamJsonResult        Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamWebUtilities::FindJsonBools(const class FString& JsonString, const class FString& Key, TArray<bool>* bValues, enum class ESteamJsonResult* Result)
{
	static auto Func = Class->GetFunction("SteamWebUtilities", "FindJsonBools");

	Params::USteamWebUtilities_FindJsonBools_Params Parms;

	Parms.JsonString = JsonString;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bValues != nullptr)
		*bValues = Parms.bValues;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCoreWeb.SteamWebUtilities.FindJsonBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bValue                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamJsonResult        Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamWebUtilities::FindJsonBool(const class FString& JsonString, const class FString& Key, bool* bValue, enum class ESteamJsonResult* Result)
{
	static auto Func = Class->GetFunction("SteamWebUtilities", "FindJsonBool");

	Params::USteamWebUtilities_FindJsonBool_Params Parms;

	Parms.JsonString = JsonString;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bValue != nullptr)
		*bValue = Parms.bValue;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCoreWeb.WebApps.UpToDateCheck
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Version                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::UpToDateCheck(FDelegateProperty_& Callback, int32 AppID, int32 Version)
{
	static auto Func = Class->GetFunction("WebApps", "UpToDateCheck");

	Params::UWebApps_UpToDateCheck_Params Parms;

	Parms.Callback = Callback;
	Parms.AppID = AppID;
	Parms.Version = Version;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebApps.SetAppBuildLive
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BuildId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      BetaKey                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::SetAppBuildLive(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 BuildId, const class FString& BetaKey, const class FString& Description)
{
	static auto Func = Class->GetFunction("WebApps", "SetAppBuildLive");

	Params::UWebApps_SetAppBuildLive_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.BuildId = BuildId;
	Parms.BetaKey = BetaKey;
	Parms.Description = Description;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebApps.GetServersAtAddress
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Addr                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::GetServersAtAddress(FDelegateProperty_& Callback, const class FString& Addr)
{
	static auto Func = Class->GetFunction("WebApps", "GetServersAtAddress");

	Params::UWebApps_GetServersAtAddress_Params Parms;

	Parms.Callback = Callback;
	Parms.Addr = Addr;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebApps.GetServerList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filter                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Limit                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::GetServerList(FDelegateProperty_& Callback, const class FString& Key, const class FString& Filter, int32 Limit)
{
	static auto Func = Class->GetFunction("WebApps", "GetServerList");

	Params::UWebApps_GetServerList_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.Filter = Filter;
	Parms.Limit = Limit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebApps.GetPlayersBanned
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::GetPlayersBanned(FDelegateProperty_& Callback, const class FString& Key, int32 AppID)
{
	static auto Func = Class->GetFunction("WebApps", "GetPlayersBanned");

	Params::UWebApps_GetPlayersBanned_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebApps.GetCheatingReports
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TimeBegin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TimeEnd                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeReports                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeBans                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReportidMin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::GetCheatingReports(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin)
{
	static auto Func = Class->GetFunction("WebApps", "GetCheatingReports");

	Params::UWebApps_GetCheatingReports_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.TimeBegin = TimeBegin;
	Parms.TimeEnd = TimeEnd;
	Parms.bIncludeReports = bIncludeReports;
	Parms.bIncludeBans = bIncludeBans;
	Parms.ReportidMin = ReportidMin;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebApps.GetAppList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::GetAppList(FDelegateProperty_& Callback, const class FString& Key)
{
	static auto Func = Class->GetFunction("WebApps", "GetAppList");

	Params::UWebApps_GetAppList_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebApps.GetAppDepotVersions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::GetAppDepotVersions(FDelegateProperty_& Callback, const class FString& Key, int32 AppID)
{
	static auto Func = Class->GetFunction("WebApps", "GetAppDepotVersions");

	Params::UWebApps_GetAppDepotVersions_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebApps.GetAppBuilds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::GetAppBuilds(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 Count)
{
	static auto Func = Class->GetFunction("WebApps", "GetAppBuilds");

	Params::UWebApps_GetAppBuilds_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Count = Count;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebApps.GetAppBetas
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::GetAppBetas(FDelegateProperty_& Callback, const class FString& Key, int32 AppID)
{
	static auto Func = Class->GetFunction("WebApps", "GetAppBetas");

	Params::UWebApps_GetAppBetas_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas.GetAppBetasAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetAppBetas*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreAppsAsyncActionGetAppBetas* USteamCoreAppsAsyncActionGetAppBetas::GetAppBetasAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreAppsAsyncActionGetAppBetas", "GetAppBetasAsync");

	Params::USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds.GetAppBuildsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetAppBuilds*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreAppsAsyncActionGetAppBuilds* USteamCoreAppsAsyncActionGetAppBuilds::GetAppBuildsAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 Count)
{
	static auto Func = Class->GetFunction("SteamCoreAppsAsyncActionGetAppBuilds", "GetAppBuildsAsync");

	Params::USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Count = Count;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions.GetAppDepotVersionsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetAppDepotVersions*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreAppsAsyncActionGetAppDepotVersions* USteamCoreAppsAsyncActionGetAppDepotVersions::GetAppDepotVersionsAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreAppsAsyncActionGetAppDepotVersions", "GetAppDepotVersionsAsync");

	Params::USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList.HandleCallback
// (Native, Public, HasOutParams)
// Parameters:
// TArray<struct FWebAppsGetAppList>  Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreAppsAsyncActionGetAppList::HandleCallback(TArray<struct FWebAppsGetAppList>& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreAppsAsyncActionGetAppList", "HandleCallback");

	Params::USteamCoreAppsAsyncActionGetAppList_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList.GetAppListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetAppList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreAppsAsyncActionGetAppList* USteamCoreAppsAsyncActionGetAppList::GetAppListAsync(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("SteamCoreAppsAsyncActionGetAppList", "GetAppListAsync");

	Params::USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports.GetCheatingReportsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TimeBegin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TimeEnd                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeReports                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeBans                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReportidMin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetCheatingReports*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreAppsAsyncActionGetCheatingReports* USteamCoreAppsAsyncActionGetCheatingReports::GetCheatingReportsAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin)
{
	static auto Func = Class->GetFunction("SteamCoreAppsAsyncActionGetCheatingReports", "GetCheatingReportsAsync");

	Params::USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.TimeBegin = TimeBegin;
	Parms.TimeEnd = TimeEnd;
	Parms.bIncludeReports = bIncludeReports;
	Parms.bIncludeBans = bIncludeBans;
	Parms.ReportidMin = ReportidMin;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned.GetPlayersBannedAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetPlayersBanned*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreAppsAsyncActionGetPlayersBanned* USteamCoreAppsAsyncActionGetPlayersBanned::GetPlayersBannedAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreAppsAsyncActionGetPlayersBanned", "GetPlayersBannedAsync");

	Params::USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList.GetServerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filter                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Limit                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetServerList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreAppsAsyncActionGetServerList* USteamCoreAppsAsyncActionGetServerList::GetServerListAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& Filter, int32 Limit)
{
	static auto Func = Class->GetFunction("SteamCoreAppsAsyncActionGetServerList", "GetServerListAsync");

	Params::USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.Filter = Filter;
	Parms.Limit = Limit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress.GetServersAtAddressAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Addr                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetServersAtAddress*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreAppsAsyncActionGetServersAtAddress* USteamCoreAppsAsyncActionGetServersAtAddress::GetServersAtAddressAsync(class UObject* WorldContextObject, const class FString& Addr)
{
	static auto Func = Class->GetFunction("SteamCoreAppsAsyncActionGetServersAtAddress", "GetServersAtAddressAsync");

	Params::USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Addr = Addr;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive.SetAppBuildLiveAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BuildId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      BetaKey                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionSetAppBuildLive*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreAppsAsyncActionSetAppBuildLive* USteamCoreAppsAsyncActionSetAppBuildLive::SetAppBuildLiveAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 BuildId, const class FString& BetaKey, const class FString& Description)
{
	static auto Func = Class->GetFunction("SteamCoreAppsAsyncActionSetAppBuildLive", "SetAppBuildLiveAsync");

	Params::USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.BuildId = BuildId;
	Parms.BetaKey = BetaKey;
	Parms.Description = Description;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck.UpToDateCheckAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Version                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionUpToDateCheck*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreAppsAsyncActionUpToDateCheck* USteamCoreAppsAsyncActionUpToDateCheck::UpToDateCheckAsync(class UObject* WorldContextObject, int32 AppID, int32 Version)
{
	static auto Func = Class->GetFunction("SteamCoreAppsAsyncActionUpToDateCheck", "UpToDateCheckAsync");

	Params::USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;
	Parms.Version = Version;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebBroadcastService.PostGameDataFrame
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      BroadcastId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FrameData                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebBroadcastService::PostGameDataFrame(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& BroadcastId, const class FString& FrameData)
{
	static auto Func = Class->GetFunction("WebBroadcastService", "PostGameDataFrame");

	Params::UWebBroadcastService_PostGameDataFrame_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.BroadcastId = BroadcastId;
	Parms.FrameData = FrameData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame.PostGameDataFrameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      BroadcastId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FrameData                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionPostGameDataFrame*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionPostGameDataFrame* USteamCoreWebAsyncActionPostGameDataFrame::PostGameDataFrameAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& BroadcastId, const class FString& FrameData)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionPostGameDataFrame", "PostGameDataFrameAsync");

	Params::USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.BroadcastId = BroadcastId;
	Parms.FrameData = FrameData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebCheatReporting.StartSecureMultiplayerSession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebCheatReporting::StartSecureMultiplayerSession(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("WebCheatReporting", "StartSecureMultiplayerSession");

	Params::UWebCheatReporting_StartSecureMultiplayerSession_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebCheatReporting.RequestVacStatusForUser
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebCheatReporting::RequestVacStatusForUser(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& SessionId)
{
	static auto Func = Class->GetFunction("WebCheatReporting", "RequestVacStatusForUser");

	Params::UWebCheatReporting_RequestVacStatusForUser_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.SessionId = SessionId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebCheatReporting.RequestPlayerGameBan
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReportID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CheatDescription                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDelayBan                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebCheatReporting::RequestPlayerGameBan(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& ReportID, const class FString& CheatDescription, int32 Duration, bool bDelayBan)
{
	static auto Func = Class->GetFunction("WebCheatReporting", "RequestPlayerGameBan");

	Params::UWebCheatReporting_RequestPlayerGameBan_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ReportID = ReportID;
	Parms.CheatDescription = CheatDescription;
	Parms.Duration = Duration;
	Parms.bDelayBan = bDelayBan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebCheatReporting.ReportPlayerCheating
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamIdReporter                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AppData                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHeuristic                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDetection                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayerReport                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNoReportID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SuspicionStartTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Severity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebCheatReporting::ReportPlayerCheating(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& SteamIdReporter, const class FString& AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity)
{
	static auto Func = Class->GetFunction("WebCheatReporting", "ReportPlayerCheating");

	Params::UWebCheatReporting_ReportPlayerCheating_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.SteamIdReporter = SteamIdReporter;
	Parms.AppData = AppData;
	Parms.bHeuristic = bHeuristic;
	Parms.bDetection = bDetection;
	Parms.bPlayerReport = bPlayerReport;
	Parms.bNoReportID = bNoReportID;
	Parms.GameMode = GameMode;
	Parms.SuspicionStartTime = SuspicionStartTime;
	Parms.Severity = Severity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebCheatReporting.ReportCheatData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PathAndFileName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      WebCheatURL                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TimeNow                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TimeStarted                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TimeStopped                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CheatName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameProcessId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CheatProcessId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CheatParam1                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CheatParam2                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebCheatReporting::ReportCheatData(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& PathAndFileName, const class FString& WebCheatURL, const class FString& TimeNow, const class FString& TimeStarted, const class FString& TimeStopped, const class FString& CheatName, int32 GameProcessId, int32 CheatProcessId, const class FString& CheatParam1, const class FString& CheatParam2)
{
	static auto Func = Class->GetFunction("WebCheatReporting", "ReportCheatData");

	Params::UWebCheatReporting_ReportCheatData_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.PathAndFileName = PathAndFileName;
	Parms.WebCheatURL = WebCheatURL;
	Parms.TimeNow = TimeNow;
	Parms.TimeStarted = TimeStarted;
	Parms.TimeStopped = TimeStopped;
	Parms.CheatName = CheatName;
	Parms.GameProcessId = GameProcessId;
	Parms.CheatProcessId = CheatProcessId;
	Parms.CheatParam1 = CheatParam1;
	Parms.CheatParam2 = CheatParam2;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebCheatReporting.RemovePlayerGameBan
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebCheatReporting::RemovePlayerGameBan(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("WebCheatReporting", "RemovePlayerGameBan");

	Params::UWebCheatReporting_RemovePlayerGameBan_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebCheatReporting.GetCheatingReports
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TimeEnd                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TimeBegin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReportidMin                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeReports                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeBans                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebCheatReporting::GetCheatingReports(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, const class FString& ReportidMin, bool bIncludeReports, bool bIncludeBans, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("WebCheatReporting", "GetCheatingReports");

	Params::UWebCheatReporting_GetCheatingReports_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.TimeEnd = TimeEnd;
	Parms.TimeBegin = TimeBegin;
	Parms.ReportidMin = ReportidMin;
	Parms.bIncludeReports = bIncludeReports;
	Parms.bIncludeBans = bIncludeBans;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebCheatReporting.EndSecureMultiplayerSession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebCheatReporting::EndSecureMultiplayerSession(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& SessionId)
{
	static auto Func = Class->GetFunction("WebCheatReporting", "EndSecureMultiplayerSession");

	Params::UWebCheatReporting_EndSecureMultiplayerSession_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.SessionId = SessionId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating.ReportPlayerCheatingAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamIdReporter                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AppData                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHeuristic                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDetection                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayerReport                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNoReportID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SuspicionStartTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Severity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionReportPlayerCheating*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionReportPlayerCheating* USteamCoreWebAsyncActionReportPlayerCheating::ReportPlayerCheatingAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& SteamIdReporter, const class FString& AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionReportPlayerCheating", "ReportPlayerCheatingAsync");

	Params::USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.SteamIdReporter = SteamIdReporter;
	Parms.AppData = AppData;
	Parms.bHeuristic = bHeuristic;
	Parms.bDetection = bDetection;
	Parms.bPlayerReport = bPlayerReport;
	Parms.bNoReportID = bNoReportID;
	Parms.GameMode = GameMode;
	Parms.SuspicionStartTime = SuspicionStartTime;
	Parms.Severity = Severity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan.RequestPlayerGameBanAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReportID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CheatDescription                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDelayBan                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRequestPlayerGameBan*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionRequestPlayerGameBan* USteamCoreWebAsyncActionRequestPlayerGameBan::RequestPlayerGameBanAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& ReportID, const class FString& CheatDescription, int32 Duration, bool bDelayBan)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionRequestPlayerGameBan", "RequestPlayerGameBanAsync");

	Params::USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ReportID = ReportID;
	Parms.CheatDescription = CheatDescription;
	Parms.Duration = Duration;
	Parms.bDelayBan = bDelayBan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan.RemovePlayerGameBanAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRemovePlayerGameBan*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionRemovePlayerGameBan* USteamCoreWebAsyncActionRemovePlayerGameBan::RemovePlayerGameBanAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionRemovePlayerGameBan", "RemovePlayerGameBanAsync");

	Params::USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports.GetCheatingReportsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TimeEnd                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TimeBegin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReportidMin                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeReports                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeBans                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetCheatingReports*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetCheatingReports* USteamCoreWebAsyncActionGetCheatingReports::GetCheatingReportsAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, const class FString& ReportidMin, bool bIncludeReports, bool bIncludeBans, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetCheatingReports", "GetCheatingReportsAsync");

	Params::USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.TimeEnd = TimeEnd;
	Parms.TimeBegin = TimeBegin;
	Parms.ReportidMin = ReportidMin;
	Parms.bIncludeReports = bIncludeReports;
	Parms.bIncludeBans = bIncludeBans;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData.ReportCheatDataAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PathAndFileName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      WebCheatURL                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TimeNow                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TimeStarted                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TimeStopped                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CheatName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameProcessId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CheatProcessId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CheatParam1                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CheatParam2                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionReportCheatData*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionReportCheatData* USteamCoreWebAsyncActionReportCheatData::ReportCheatDataAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& PathAndFileName, const class FString& WebCheatURL, const class FString& TimeNow, const class FString& TimeStarted, const class FString& TimeStopped, const class FString& CheatName, int32 GameProcessId, int32 CheatProcessId, const class FString& CheatParam1, const class FString& CheatParam2)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionReportCheatData", "ReportCheatDataAsync");

	Params::USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.PathAndFileName = PathAndFileName;
	Parms.WebCheatURL = WebCheatURL;
	Parms.TimeNow = TimeNow;
	Parms.TimeStarted = TimeStarted;
	Parms.TimeStopped = TimeStopped;
	Parms.CheatName = CheatName;
	Parms.GameProcessId = GameProcessId;
	Parms.CheatProcessId = CheatProcessId;
	Parms.CheatParam1 = CheatParam1;
	Parms.CheatParam2 = CheatParam2;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser.RequestVacStatusForUserAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRequestVacStatusForUser*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionRequestVacStatusForUser* USteamCoreWebAsyncActionRequestVacStatusForUser::RequestVacStatusForUserAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& SessionId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionRequestVacStatusForUser", "RequestVacStatusForUserAsync");

	Params::USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.SessionId = SessionId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession.StartSecureMultiplayerSessionAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionStartSecureMultiplayerSession*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionStartSecureMultiplayerSession* USteamCoreWebAsyncActionStartSecureMultiplayerSession::StartSecureMultiplayerSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionStartSecureMultiplayerSession", "StartSecureMultiplayerSessionAsync");

	Params::USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession.EndSecureMultiplayerSessionAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionEndSecureMultiplayerSession*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionEndSecureMultiplayerSession* USteamCoreWebAsyncActionEndSecureMultiplayerSession::EndSecureMultiplayerSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& SessionId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionEndSecureMultiplayerSession", "EndSecureMultiplayerSessionAsync");

	Params::USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.SessionId = SessionId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebEconMarketService.GetPopular
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rows                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FilterAppId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ECurrency                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconMarketService::GetPopular(FDelegateProperty_& Callback, const class FString& Key, const class FString& Language, int32 Rows, int32 Start, int32 FilterAppId, int32 ECurrency)
{
	static auto Func = Class->GetFunction("WebEconMarketService", "GetPopular");

	Params::UWebEconMarketService_GetPopular_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.Language = Language;
	Parms.Rows = Rows;
	Parms.Start = Start;
	Parms.FilterAppId = FilterAppId;
	Parms.ECurrency = ECurrency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebEconMarketService.GetMarketEligibility
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconMarketService::GetMarketEligibility(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("WebEconMarketService", "GetMarketEligibility");

	Params::UWebEconMarketService_GetMarketEligibility_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebEconMarketService.GetAssetID
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ListingId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconMarketService::GetAssetID(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& ListingId)
{
	static auto Func = Class->GetFunction("WebEconMarketService", "GetAssetID");

	Params::UWebEconMarketService_GetAssetID_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ListingId = ListingId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebEconMarketService.CancelAppListingsForUser
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSynchronous                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconMarketService::CancelAppListingsForUser(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, bool bSynchronous)
{
	static auto Func = Class->GetFunction("WebEconMarketService", "CancelAppListingsForUser");

	Params::UWebEconMarketService_CancelAppListingsForUser_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.bSynchronous = bSynchronous;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility.GetMarketEligibilityAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetMarketEligibility*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetMarketEligibility* USteamCoreWebAsyncActionGetMarketEligibility::GetMarketEligibilityAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetMarketEligibility", "GetMarketEligibilityAsync");

	Params::USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser.CancelAppListingsForUserAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSynchronous                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionCancelAppListingsForUser*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionCancelAppListingsForUser* USteamCoreWebAsyncActionCancelAppListingsForUser::CancelAppListingsForUserAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, bool bSynchronous)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionCancelAppListingsForUser", "CancelAppListingsForUserAsync");

	Params::USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.bSynchronous = bSynchronous;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID.GetAssetIDAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ListingId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetAssetID*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetAssetID* USteamCoreWebAsyncActionGetAssetID::GetAssetIDAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& ListingId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetAssetID", "GetAssetIDAsync");

	Params::USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ListingId = ListingId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPopular.GetPopularAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Rows                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FilterAppId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ECurrency                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPopular*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetPopular* USteamCoreWebAsyncActionGetPopular::GetPopularAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& Language, int32 Rows, int32 Start, int32 FilterAppId, int32 ECurrency)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetPopular", "GetPopularAsync");

	Params::USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.Language = Language;
	Parms.Rows = Rows;
	Parms.Start = Start;
	Parms.FilterAppId = FilterAppId;
	Parms.ECurrency = ECurrency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebEconService.GetTradeOffersSummary
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TimeLastVisit                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconService::GetTradeOffersSummary(FDelegateProperty_& Callback, const class FString& Key, int32 TimeLastVisit)
{
	static auto Func = Class->GetFunction("WebEconService", "GetTradeOffersSummary");

	Params::UWebEconService_GetTradeOffersSummary_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.TimeLastVisit = TimeLastVisit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebEconService.GetTradeOffers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGetSentOffers                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGetReceivedOffers                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGetDescriptions                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActiveOnly                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHistoricalOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TimeHistoricalCutoff                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconService::GetTradeOffers(FDelegateProperty_& Callback, const class FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const class FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff)
{
	static auto Func = Class->GetFunction("WebEconService", "GetTradeOffers");

	Params::UWebEconService_GetTradeOffers_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.bGetSentOffers = bGetSentOffers;
	Parms.bGetReceivedOffers = bGetReceivedOffers;
	Parms.bGetDescriptions = bGetDescriptions;
	Parms.Language = Language;
	Parms.bActiveOnly = bActiveOnly;
	Parms.bHistoricalOnly = bHistoricalOnly;
	Parms.TimeHistoricalCutoff = TimeHistoricalCutoff;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebEconService.GetTradeOffer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TradeOfferId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconService::GetTradeOffer(FDelegateProperty_& Callback, const class FString& Key, const class FString& TradeOfferId, const class FString& Language)
{
	static auto Func = Class->GetFunction("WebEconService", "GetTradeOffer");

	Params::UWebEconService_GetTradeOffer_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.TradeOfferId = TradeOfferId;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebEconService.GetTradeHistory
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxTrades                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartAfterTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StartAfterTradeId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNavigatingBack                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGetDescriptions                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeFailed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeTotal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconService::GetTradeHistory(FDelegateProperty_& Callback, const class FString& Key, int32 MaxTrades, int32 StartAfterTime, const class FString& StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, const class FString& Language, bool bIncludeFailed, bool bIncludeTotal)
{
	static auto Func = Class->GetFunction("WebEconService", "GetTradeHistory");

	Params::UWebEconService_GetTradeHistory_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.MaxTrades = MaxTrades;
	Parms.StartAfterTime = StartAfterTime;
	Parms.StartAfterTradeId = StartAfterTradeId;
	Parms.bNavigatingBack = bNavigatingBack;
	Parms.bGetDescriptions = bGetDescriptions;
	Parms.Language = Language;
	Parms.bIncludeFailed = bIncludeFailed;
	Parms.bIncludeTotal = bIncludeTotal;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebEconService.FlushInventoryCache
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContextID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconService::FlushInventoryCache(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& ContextID)
{
	static auto Func = Class->GetFunction("WebEconService", "FlushInventoryCache");

	Params::UWebEconService_FlushInventoryCache_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ContextID = ContextID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebEconService.FlushContextCache
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconService::FlushContextCache(FDelegateProperty_& Callback, const class FString& Key, int32 AppID)
{
	static auto Func = Class->GetFunction("WebEconService", "FlushContextCache");

	Params::UWebEconService_FlushContextCache_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebEconService.FlushAssetAppearanceCache
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconService::FlushAssetAppearanceCache(FDelegateProperty_& Callback, const class FString& Key, int32 AppID)
{
	static auto Func = Class->GetFunction("WebEconService", "FlushAssetAppearanceCache");

	Params::UWebEconService_FlushAssetAppearanceCache_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebEconService.DeclineTradeOffer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TradeOfferId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconService::DeclineTradeOffer(FDelegateProperty_& Callback, const class FString& Key, const class FString& TradeOfferId)
{
	static auto Func = Class->GetFunction("WebEconService", "DeclineTradeOffer");

	Params::UWebEconService_DeclineTradeOffer_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.TradeOfferId = TradeOfferId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebEconService.CancelTradeOffer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TradeOfferId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconService::CancelTradeOffer(FDelegateProperty_& Callback, const class FString& Key, const class FString& TradeOfferId)
{
	static auto Func = Class->GetFunction("WebEconService", "CancelTradeOffer");

	Params::UWebEconService_CancelTradeOffer_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.TradeOfferId = TradeOfferId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory.GetTradeHistoryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxTrades                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartAfterTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StartAfterTradeId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNavigatingBack                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGetDescriptions                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeFailed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeTotal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetTradeHistory*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetTradeHistory* USteamCoreWebAsyncActionGetTradeHistory::GetTradeHistoryAsync(class UObject* WorldContextObject, const class FString& Key, int32 MaxTrades, int32 StartAfterTime, const class FString& StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, const class FString& Language, bool bIncludeFailed, bool bIncludeTotal)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetTradeHistory", "GetTradeHistoryAsync");

	Params::USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.MaxTrades = MaxTrades;
	Parms.StartAfterTime = StartAfterTime;
	Parms.StartAfterTradeId = StartAfterTradeId;
	Parms.bNavigatingBack = bNavigatingBack;
	Parms.bGetDescriptions = bGetDescriptions;
	Parms.Language = Language;
	Parms.bIncludeFailed = bIncludeFailed;
	Parms.bIncludeTotal = bIncludeTotal;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache.FlushInventoryCacheAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContextID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionFlushInventoryCache*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionFlushInventoryCache* USteamCoreWebAsyncActionFlushInventoryCache::FlushInventoryCacheAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& ContextID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionFlushInventoryCache", "FlushInventoryCacheAsync");

	Params::USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ContextID = ContextID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache.FlushAssetAppearanceCacheAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionFlushAssetAppearanceCache*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionFlushAssetAppearanceCache* USteamCoreWebAsyncActionFlushAssetAppearanceCache::FlushAssetAppearanceCacheAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionFlushAssetAppearanceCache", "FlushAssetAppearanceCacheAsync");

	Params::USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache.FlushContextCacheAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionFlushContextCache*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionFlushContextCache* USteamCoreWebAsyncActionFlushContextCache::FlushContextCacheAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionFlushContextCache", "FlushContextCacheAsync");

	Params::USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers.GetTradeOffersAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGetSentOffers                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGetReceivedOffers                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGetDescriptions                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActiveOnly                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHistoricalOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TimeHistoricalCutoff                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetTradeOffers*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetTradeOffers* USteamCoreWebAsyncActionGetTradeOffers::GetTradeOffersAsync(class UObject* WorldContextObject, const class FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const class FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetTradeOffers", "GetTradeOffersAsync");

	Params::USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.bGetSentOffers = bGetSentOffers;
	Parms.bGetReceivedOffers = bGetReceivedOffers;
	Parms.bGetDescriptions = bGetDescriptions;
	Parms.Language = Language;
	Parms.bActiveOnly = bActiveOnly;
	Parms.bHistoricalOnly = bHistoricalOnly;
	Parms.TimeHistoricalCutoff = TimeHistoricalCutoff;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer.GetTradeOfferAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TradeOfferId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetTradeOffer*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetTradeOffer* USteamCoreWebAsyncActionGetTradeOffer::GetTradeOfferAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& TradeOfferId, const class FString& Language)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetTradeOffer", "GetTradeOfferAsync");

	Params::USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.TradeOfferId = TradeOfferId;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary.GetTradeOffersSummaryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TimeLastVisit                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetTradeOffersSummary*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetTradeOffersSummary* USteamCoreWebAsyncActionGetTradeOffersSummary::GetTradeOffersSummaryAsync(class UObject* WorldContextObject, const class FString& Key, int32 TimeLastVisit)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetTradeOffersSummary", "GetTradeOffersSummaryAsync");

	Params::USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.TimeLastVisit = TimeLastVisit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer.DeclineTradeOfferAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TradeOfferId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionDeclineTradeOffer*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionDeclineTradeOffer* USteamCoreWebAsyncActionDeclineTradeOffer::DeclineTradeOfferAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& TradeOfferId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionDeclineTradeOffer", "DeclineTradeOfferAsync");

	Params::USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.TradeOfferId = TradeOfferId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer.CancelTradeOfferAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TradeOfferId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionCancelTradeOffer*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionCancelTradeOffer* USteamCoreWebAsyncActionCancelTradeOffer::CancelTradeOfferAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& TradeOfferId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionCancelTradeOffer", "CancelTradeOfferAsync");

	Params::USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.TradeOfferId = TradeOfferId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebGameInventory.UpdateItemDefs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWebGameInventory::UpdateItemDefs()
{
	static auto Func = Class->GetFunction("WebGameInventory", "UpdateItemDefs");

	Params::UWebGameInventory_UpdateItemDefs_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameInventory.SupportGetAssetHistory
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AssetId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContextID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameInventory::SupportGetAssetHistory(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& AssetId, const class FString& ContextID)
{
	static auto Func = Class->GetFunction("WebGameInventory", "SupportGetAssetHistory");

	Params::UWebGameInventory_SupportGetAssetHistory_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.AssetId = AssetId;
	Parms.ContextID = ContextID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameInventory.HistoryExecuteCommands
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContextID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ActorId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameInventory::HistoryExecuteCommands(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& ContextID, int32 ActorId)
{
	static auto Func = Class->GetFunction("WebGameInventory", "HistoryExecuteCommands");

	Params::UWebGameInventory_HistoryExecuteCommands_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ContextID = ContextID;
	Parms.ActorId = ActorId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameInventory.GetUserHistory
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContextID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EndTime                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameInventory::GetUserHistory(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& ContextID, int32 StartTime, int32 EndTime)
{
	static auto Func = Class->GetFunction("WebGameInventory", "GetUserHistory");

	Params::UWebGameInventory_GetUserHistory_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ContextID = ContextID;
	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameInventory.GetHistoryCommandDetails
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Command                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContextID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Arguments                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameInventory::GetHistoryCommandDetails(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& Command, const class FString& ContextID, const class FString& Arguments)
{
	static auto Func = Class->GetFunction("WebGameInventory", "GetHistoryCommandDetails");

	Params::UWebGameInventory_GetHistoryCommandDetails_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.Command = Command;
	Parms.ContextID = ContextID;
	Parms.Arguments = Arguments;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails.GetHistoryCommandDetailsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Command                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContextID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Arguments                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetHistoryCommandDetails*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetHistoryCommandDetails* USteamCoreWebAsyncActionGetHistoryCommandDetails::GetHistoryCommandDetailsAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& Command, const class FString& ContextID, const class FString& Arguments)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetHistoryCommandDetails", "GetHistoryCommandDetailsAsync");

	Params::USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.Command = Command;
	Parms.ContextID = ContextID;
	Parms.Arguments = Arguments;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory.GetUserHistoryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContextID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EndTime                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetUserHistory*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetUserHistory* USteamCoreWebAsyncActionGetUserHistory::GetUserHistoryAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& ContextID, int32 StartTime, int32 EndTime)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetUserHistory", "GetUserHistoryAsync");

	Params::USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ContextID = ContextID;
	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand.HistoryExecuteCommandAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContextID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ActorId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionHistoryExecuteCommand*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionHistoryExecuteCommand* USteamCoreWebAsyncActionHistoryExecuteCommand::HistoryExecuteCommandAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& ContextID, int32 ActorId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionHistoryExecuteCommand", "HistoryExecuteCommandAsync");

	Params::USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ContextID = ContextID;
	Parms.ActorId = ActorId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory.SupportGetAssetHistoryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AssetId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContextID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionSupportGetAssetHistory*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionSupportGetAssetHistory* USteamCoreWebAsyncActionSupportGetAssetHistory::SupportGetAssetHistoryAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& AssetId, const class FString& ContextID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionSupportGetAssetHistory", "SupportGetAssetHistoryAsync");

	Params::USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.AssetId = AssetId;
	Parms.ContextID = ContextID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebGameNotificationsService.UpdateSession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Title                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Users                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameNotificationsService::UpdateSession(FDelegateProperty_& Callback, const class FString& Key, const class FString& SessionId, int32 AppID, const class FString& Title, const class FString& Users, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("WebGameNotificationsService", "UpdateSession");

	Params::UWebGameNotificationsService_UpdateSession_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SessionId = SessionId;
	Parms.AppID = AppID;
	Parms.Title = Title;
	Parms.Users = Users;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameNotificationsService.RequestNotifications
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameNotificationsService::RequestNotifications(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("WebGameNotificationsService", "RequestNotifications");

	Params::UWebGameNotificationsService_RequestNotifications_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameNotificationsService.GetSessionDetailsForApp
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Sessions                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameNotificationsService::GetSessionDetailsForApp(FDelegateProperty_& Callback, const class FString& Key, const class FString& Sessions, int32 AppID, const class FString& Language)
{
	static auto Func = Class->GetFunction("WebGameNotificationsService", "GetSessionDetailsForApp");

	Params::UWebGameNotificationsService_GetSessionDetailsForApp_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.Sessions = Sessions;
	Parms.AppID = AppID;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameNotificationsService.EnumerateSessionsForApp
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeAllUserMessages                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeAuthUserMessage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameNotificationsService::EnumerateSessionsForApp(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const class FString& Language)
{
	static auto Func = Class->GetFunction("WebGameNotificationsService", "EnumerateSessionsForApp");

	Params::UWebGameNotificationsService_EnumerateSessionsForApp_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.bIncludeAllUserMessages = bIncludeAllUserMessages;
	Parms.bIncludeAuthUserMessage = bIncludeAuthUserMessage;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameNotificationsService.DeleteSessionBatch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameNotificationsService::DeleteSessionBatch(FDelegateProperty_& Callback, const class FString& Key, const class FString& SessionId, int32 AppID)
{
	static auto Func = Class->GetFunction("WebGameNotificationsService", "DeleteSessionBatch");

	Params::UWebGameNotificationsService_DeleteSessionBatch_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SessionId = SessionId;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameNotificationsService.DeleteSession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameNotificationsService::DeleteSession(FDelegateProperty_& Callback, const class FString& Key, const class FString& SessionId, int32 AppID, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("WebGameNotificationsService", "DeleteSession");

	Params::UWebGameNotificationsService_DeleteSession_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SessionId = SessionId;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameNotificationsService.CreateSession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Context                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Title                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Users                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameNotificationsService::CreateSession(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Context, const class FString& Title, const class FString& Users, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("WebGameNotificationsService", "CreateSession");

	Params::UWebGameNotificationsService_CreateSession_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Context = Context;
	Parms.Title = Title;
	Parms.Users = Users;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionCreateSession.CreateSessionAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Context                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Title                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Users                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionCreateSession*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionCreateSession* USteamCoreWebAsyncActionCreateSession::CreateSessionAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& Context, const class FString& Title, const class FString& Users, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionCreateSession", "CreateSessionAsync");

	Params::USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Context = Context;
	Parms.Title = Title;
	Parms.Users = Users;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession.UpdateSessionAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Title                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Users                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionUpdateSession*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionUpdateSession* USteamCoreWebAsyncActionUpdateSession::UpdateSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SessionId, int32 AppID, const class FString& Title, const class FString& Users, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionUpdateSession", "UpdateSessionAsync");

	Params::USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SessionId = SessionId;
	Parms.AppID = AppID;
	Parms.Title = Title;
	Parms.Users = Users;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp.EnumerateSessionsForAppAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeAllUserMessages                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeAuthUserMessage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionEnumerateSessionsForApp*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionEnumerateSessionsForApp* USteamCoreWebAsyncActionEnumerateSessionsForApp::EnumerateSessionsForAppAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const class FString& Language)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionEnumerateSessionsForApp", "EnumerateSessionsForAppAsync");

	Params::USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.bIncludeAllUserMessages = bIncludeAllUserMessages;
	Parms.bIncludeAuthUserMessage = bIncludeAuthUserMessage;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp.GetSessionDetailsForAppAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Sessions                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetSessionDetailsForApp*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetSessionDetailsForApp* USteamCoreWebAsyncActionGetSessionDetailsForApp::GetSessionDetailsForAppAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& Sessions, int32 AppID, const class FString& Language)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetSessionDetailsForApp", "GetSessionDetailsForAppAsync");

	Params::USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.Sessions = Sessions;
	Parms.AppID = AppID;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications.RequestNotificationsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRequestNotifications*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionRequestNotifications* USteamCoreWebAsyncActionRequestNotifications::RequestNotificationsAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionRequestNotifications", "RequestNotificationsAsync");

	Params::USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession.DeleteSessionAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionDeleteSession*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionDeleteSession* USteamCoreWebAsyncActionDeleteSession::DeleteSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SessionId, int32 AppID, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionDeleteSession", "DeleteSessionAsync");

	Params::USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SessionId = SessionId;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch.DeleteSessionBatchAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SessionId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionDeleteSessionBatch*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionDeleteSessionBatch* USteamCoreWebAsyncActionDeleteSessionBatch::DeleteSessionBatchAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SessionId, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionDeleteSessionBatch", "DeleteSessionBatchAsync");

	Params::USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SessionId = SessionId;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebGameServersService.SetMemo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Memo                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::SetMemo(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const class FString& Memo)
{
	static auto Func = Class->GetFunction("WebGameServersService", "SetMemo");

	Params::UWebGameServersService_SetMemo_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.Memo = Memo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameServersService.SetBanStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBanned                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              banSeconds                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::SetBanStatus(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, bool bBanned, int32 banSeconds)
{
	static auto Func = Class->GetFunction("WebGameServersService", "SetBanStatus");

	Params::UWebGameServersService_SetBanStatus_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.bBanned = bBanned;
	Parms.banSeconds = banSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameServersService.ResetLoginToken
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::ResetLoginToken(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("WebGameServersService", "ResetLoginToken");

	Params::UWebGameServersService_ResetLoginToken_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameServersService.QueryLoginToken
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LoginToken                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::QueryLoginToken(FDelegateProperty_& Callback, const class FString& Key, const class FString& LoginToken)
{
	static auto Func = Class->GetFunction("WebGameServersService", "QueryLoginToken");

	Params::UWebGameServersService_QueryLoginToken_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.LoginToken = LoginToken;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameServersService.GetServerSteamIDsByIP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ServerIP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::GetServerSteamIDsByIP(FDelegateProperty_& Callback, const class FString& Key, const class FString& ServerIP)
{
	static auto Func = Class->GetFunction("WebGameServersService", "GetServerSteamIDsByIP");

	Params::UWebGameServersService_GetServerSteamIDsByIP_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.ServerIP = ServerIP;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameServersService.GetServerIPsBySteamID
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ServerSteamId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::GetServerIPsBySteamID(FDelegateProperty_& Callback, const class FString& Key, const class FString& ServerSteamId)
{
	static auto Func = Class->GetFunction("WebGameServersService", "GetServerIPsBySteamID");

	Params::UWebGameServersService_GetServerIPsBySteamID_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.ServerSteamId = ServerSteamId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameServersService.GetAccountPublicInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::GetAccountPublicInfo(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("WebGameServersService", "GetAccountPublicInfo");

	Params::UWebGameServersService_GetAccountPublicInfo_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameServersService.GetAccountList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::GetAccountList(FDelegateProperty_& Callback, const class FString& Key)
{
	static auto Func = Class->GetFunction("WebGameServersService", "GetAccountList");

	Params::UWebGameServersService_GetAccountList_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameServersService.DeleteAccount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::DeleteAccount(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("WebGameServersService", "DeleteAccount");

	Params::UWebGameServersService_DeleteAccount_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebGameServersService.CreateAccount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Memo                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::CreateAccount(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Memo)
{
	static auto Func = Class->GetFunction("WebGameServersService", "CreateAccount");

	Params::UWebGameServersService_CreateAccount_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Memo = Memo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebInventoryService.ModifyItems
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InputJson                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Timestamp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Updates                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebInventoryService::ModifyItems(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& InputJson, const class FString& SteamID, int32 Timestamp, const class FString& Updates)
{
	static auto Func = Class->GetFunction("WebInventoryService", "ModifyItems");

	Params::UWebInventoryService_ModifyItems_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.InputJson = InputJson;
	Parms.SteamID = SteamID;
	Parms.Timestamp = Timestamp;
	Parms.Updates = Updates;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebInventoryService.GetQuantity
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ItemdefIDs                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebInventoryService::GetQuantity(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const TArray<int32>& ItemdefIDs, bool bForce)
{
	static auto Func = Class->GetFunction("WebInventoryService", "GetQuantity");

	Params::UWebInventoryService_GetQuantity_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ItemdefIDs = ItemdefIDs;
	Parms.bForce = bForce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebInventoryService.GetPriceSheet
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Currency                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebInventoryService::GetPriceSheet(FDelegateProperty_& Callback, const class FString& Key, int32 Currency)
{
	static auto Func = Class->GetFunction("WebInventoryService", "GetPriceSheet");

	Params::UWebInventoryService_GetPriceSheet_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.Currency = Currency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebInventoryService.GetItemDefs
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ModifiedSince                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ItemdefIDs                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      WorkshopIDs                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              CacheMaxAgeSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebInventoryService::GetItemDefs(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& ModifiedSince, const TArray<int32>& ItemdefIDs, const TArray<int32>& WorkshopIDs, int32 CacheMaxAgeSeconds)
{
	static auto Func = Class->GetFunction("WebInventoryService", "GetItemDefs");

	Params::UWebInventoryService_GetItemDefs_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ModifiedSince = ModifiedSince;
	Parms.ItemdefIDs = ItemdefIDs;
	Parms.WorkshopIDs = WorkshopIDs;
	Parms.CacheMaxAgeSeconds = CacheMaxAgeSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebInventoryService.GetInventory
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebInventoryService::GetInventory(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("WebInventoryService", "GetInventory");

	Params::UWebInventoryService_GetInventory_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebInventoryService.ExchangeItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      MaterialsItemID                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      MaterialsQuantity                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      OutputItemdefId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebInventoryService::ExchangeItem(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const TArray<int32>& MaterialsItemID, const TArray<int32>& MaterialsQuantity, const class FString& OutputItemdefId)
{
	static auto Func = Class->GetFunction("WebInventoryService", "ExchangeItem");

	Params::UWebInventoryService_ExchangeItem_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.MaterialsItemID = MaterialsItemID;
	Parms.MaterialsQuantity = MaterialsQuantity;
	Parms.OutputItemdefId = OutputItemdefId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebInventoryService.ConsumeItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ItemId                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Quantity                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RequestId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebInventoryService::ConsumeItem(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& ItemId, const class FString& Quantity, const class FString& SteamID, const class FString& RequestId)
{
	static auto Func = Class->GetFunction("WebInventoryService", "ConsumeItem");

	Params::UWebInventoryService_ConsumeItem_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ItemId = ItemId;
	Parms.Quantity = Quantity;
	Parms.SteamID = SteamID;
	Parms.RequestId = RequestId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebInventoryService.Consolidate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ItemdefIDs                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebInventoryService::Consolidate(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const TArray<int32>& ItemdefIDs, bool bForce)
{
	static auto Func = Class->GetFunction("WebInventoryService", "Consolidate");

	Params::UWebInventoryService_Consolidate_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ItemdefIDs = ItemdefIDs;
	Parms.bForce = bForce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebInventoryService.AddPromoItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ItemdefId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ItemPropsJson                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNotify                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RequestId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebInventoryService::AddPromoItem(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestId)
{
	static auto Func = Class->GetFunction("WebInventoryService", "AddPromoItem");

	Params::UWebInventoryService_AddPromoItem_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ItemdefId = ItemdefId;
	Parms.ItemPropsJson = ItemPropsJson;
	Parms.SteamID = SteamID;
	Parms.bNotify = bNotify;
	Parms.RequestId = RequestId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebInventoryService.AddItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ItemdefId                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      ItemPropsJson                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNotify                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RequestId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTradeRestriction                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebInventoryService::AddItem(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const TArray<int32>& ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestId, bool bTradeRestriction)
{
	static auto Func = Class->GetFunction("WebInventoryService", "AddItem");

	Params::UWebInventoryService_AddItem_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ItemdefId = ItemdefId;
	Parms.ItemPropsJson = ItemPropsJson;
	Parms.SteamID = SteamID;
	Parms.bNotify = bNotify;
	Parms.RequestId = RequestId;
	Parms.bTradeRestriction = bTradeRestriction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionAddItem.AddItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ItemdefId                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      ItemPropsJson                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNotify                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RequestId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTradeRestriction                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionAddItem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionAddItem* USteamCoreWebAsyncActionAddItem::AddItemAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const TArray<int32>& ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestId, bool bTradeRestriction)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionAddItem", "AddItemAsync");

	Params::USteamCoreWebAsyncActionAddItem_AddItemAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ItemdefId = ItemdefId;
	Parms.ItemPropsJson = ItemPropsJson;
	Parms.SteamID = SteamID;
	Parms.bNotify = bNotify;
	Parms.RequestId = RequestId;
	Parms.bTradeRestriction = bTradeRestriction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem.AddPromoItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ItemdefId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ItemPropsJson                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNotify                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RequestId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionAddPromoItem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionAddPromoItem* USteamCoreWebAsyncActionAddPromoItem::AddPromoItemAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionAddPromoItem", "AddPromoItemAsync");

	Params::USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ItemdefId = ItemdefId;
	Parms.ItemPropsJson = ItemPropsJson;
	Parms.SteamID = SteamID;
	Parms.bNotify = bNotify;
	Parms.RequestId = RequestId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem.ConsumeItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ItemId                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Quantity                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RequestId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionConsumeItem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionConsumeItem* USteamCoreWebAsyncActionConsumeItem::ConsumeItemAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& ItemId, const class FString& Quantity, const class FString& SteamID, const class FString& RequestId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionConsumeItem", "ConsumeItemAsync");

	Params::USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ItemId = ItemId;
	Parms.Quantity = Quantity;
	Parms.SteamID = SteamID;
	Parms.RequestId = RequestId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem.ExchangeItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      MaterialsItemID                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      MaterialsQuantity                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      OutputItemdefId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionExchangeItem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionExchangeItem* USteamCoreWebAsyncActionExchangeItem::ExchangeItemAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const TArray<int32>& MaterialsItemID, const TArray<int32>& MaterialsQuantity, const class FString& OutputItemdefId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionExchangeItem", "ExchangeItemAsync");

	Params::USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.MaterialsItemID = MaterialsItemID;
	Parms.MaterialsQuantity = MaterialsQuantity;
	Parms.OutputItemdefId = OutputItemdefId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetInventory.GetInventoryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetInventory*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetInventory* USteamCoreWebAsyncActionGetInventory::GetInventoryAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetInventory", "GetInventoryAsync");

	Params::USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs.GetItemDefsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ModifiedSince                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ItemdefIDs                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      WorkshopIDs                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              CacheMaxAgeSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetItemDefs*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetItemDefs* USteamCoreWebAsyncActionGetItemDefs::GetItemDefsAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& ModifiedSince, const TArray<int32>& ItemdefIDs, const TArray<int32>& WorkshopIDs, int32 CacheMaxAgeSeconds)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetItemDefs", "GetItemDefsAsync");

	Params::USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ModifiedSince = ModifiedSince;
	Parms.ItemdefIDs = ItemdefIDs;
	Parms.WorkshopIDs = WorkshopIDs;
	Parms.CacheMaxAgeSeconds = CacheMaxAgeSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet.GetPriceSheetAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Currency                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPriceSheet*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetPriceSheet* USteamCoreWebAsyncActionGetPriceSheet::GetPriceSheetAsync(class UObject* WorldContextObject, const class FString& Key, int32 Currency)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetPriceSheet", "GetPriceSheetAsync");

	Params::USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.Currency = Currency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionConsolidate.ConsolidateAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ItemdefIDs                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionConsolidate*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionConsolidate* USteamCoreWebAsyncActionConsolidate::ConsolidateAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const TArray<int32>& ItemdefIDs, bool bForce)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionConsolidate", "ConsolidateAsync");

	Params::USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ItemdefIDs = ItemdefIDs;
	Parms.bForce = bForce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity.GetQuantityAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ItemdefIDs                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetQuantity*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetQuantity* USteamCoreWebAsyncActionGetQuantity::GetQuantityAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const TArray<int32>& ItemdefIDs, bool bForce)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetQuantity", "GetQuantityAsync");

	Params::USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ItemdefIDs = ItemdefIDs;
	Parms.bForce = bForce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionModifyItems.ModifyItemsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InputJson                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Timestamp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Updates                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionModifyItems*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionModifyItems* USteamCoreWebAsyncActionModifyItems::ModifyItemsAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& InputJson, const class FString& SteamID, int32 Timestamp, const class FString& Updates)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionModifyItems", "ModifyItemsAsync");

	Params::USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.InputJson = InputJson;
	Parms.SteamID = SteamID;
	Parms.Timestamp = Timestamp;
	Parms.Updates = Updates;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebLeaderboards.SetLeaderboardScore
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LeaderbordId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Score                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Details                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      ScoreMethod                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebLeaderboards::SetLeaderboardScore(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 LeaderbordId, const class FString& SteamID, int32 Score, const TArray<uint8>& Details, const class FString& ScoreMethod)
{
	static auto Func = Class->GetFunction("WebLeaderboards", "SetLeaderboardScore");

	Params::UWebLeaderboards_SetLeaderboardScore_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.LeaderbordId = LeaderbordId;
	Parms.SteamID = SteamID;
	Parms.Score = Score;
	Parms.Details = Details;
	Parms.ScoreMethod = ScoreMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebLeaderboards.ResetLeaderboard
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LeaderboardId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebLeaderboards::ResetLeaderboard(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 LeaderboardId)
{
	static auto Func = Class->GetFunction("WebLeaderboards", "ResetLeaderboard");

	Params::UWebLeaderboards_ResetLeaderboard_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.LeaderboardId = LeaderboardId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebLeaderboards.GetLeaderboardsForGame
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebLeaderboards::GetLeaderboardsForGame(FDelegateProperty_& Callback, const class FString& Key, int32 AppID)
{
	static auto Func = Class->GetFunction("WebLeaderboards", "GetLeaderboardsForGame");

	Params::UWebLeaderboards_GetLeaderboardsForGame_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebLeaderboards.GetLeaderboardEntries
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeStart                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeEnd                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LeaderboardId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DataRequest                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebLeaderboards::GetLeaderboardEntries(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("WebLeaderboards", "GetLeaderboardEntries");

	Params::UWebLeaderboards_GetLeaderboardEntries_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.RangeStart = RangeStart;
	Parms.RangeEnd = RangeEnd;
	Parms.LeaderboardId = LeaderboardId;
	Parms.DataRequest = DataRequest;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebLeaderboards.FindOrCreateLeaderboard
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SortMethod                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DisplayType                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateIfNotFound                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyTrustedWrites                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyFriendsReads                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebLeaderboards::FindOrCreateLeaderboard(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Name, const class FString& SortMethod, const class FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads)
{
	static auto Func = Class->GetFunction("WebLeaderboards", "FindOrCreateLeaderboard");

	Params::UWebLeaderboards_FindOrCreateLeaderboard_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Name = Name;
	Parms.SortMethod = SortMethod;
	Parms.DisplayType = DisplayType;
	Parms.bCreateIfNotFound = bCreateIfNotFound;
	Parms.bOnlyTrustedWrites = bOnlyTrustedWrites;
	Parms.bOnlyFriendsReads = bOnlyFriendsReads;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebLeaderboards.DeleteLeaderboard
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebLeaderboards::DeleteLeaderboard(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Name)
{
	static auto Func = Class->GetFunction("WebLeaderboards", "DeleteLeaderboard");

	Params::UWebLeaderboards_DeleteLeaderboard_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard.DeleteLeaderboardAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionDeleteLeaderboard*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionDeleteLeaderboard* USteamCoreWebAsyncActionDeleteLeaderboard::DeleteLeaderboardAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& Name)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionDeleteLeaderboard", "DeleteLeaderboardAsync");

	Params::USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SortMethod                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DisplayType                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateIfNotFound                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyTrustedWrites                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyFriendsReads                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionFindOrCreateLeaderboard*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionFindOrCreateLeaderboard* USteamCoreWebAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& Name, const class FString& SortMethod, const class FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionFindOrCreateLeaderboard", "FindOrCreateLeaderboardAsync");

	Params::USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Name = Name;
	Parms.SortMethod = SortMethod;
	Parms.DisplayType = DisplayType;
	Parms.bCreateIfNotFound = bCreateIfNotFound;
	Parms.bOnlyTrustedWrites = bOnlyTrustedWrites;
	Parms.bOnlyFriendsReads = bOnlyFriendsReads;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries.GetLeaderboardEntriesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeStart                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeEnd                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LeaderboardId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DataRequest                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetLeaderboardEntries*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetLeaderboardEntries* USteamCoreWebAsyncActionGetLeaderboardEntries::GetLeaderboardEntriesAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetLeaderboardEntries", "GetLeaderboardEntriesAsync");

	Params::USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.RangeStart = RangeStart;
	Parms.RangeEnd = RangeEnd;
	Parms.LeaderboardId = LeaderboardId;
	Parms.DataRequest = DataRequest;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame.GetLeaderboardsForGameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetLeaderboardsForGame*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetLeaderboardsForGame* USteamCoreWebAsyncActionGetLeaderboardsForGame::GetLeaderboardsForGameAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetLeaderboardsForGame", "GetLeaderboardsForGameAsync");

	Params::USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard.ResetLeaderboardAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LeaderboardId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionResetLeaderboard*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionResetLeaderboard* USteamCoreWebAsyncActionResetLeaderboard::ResetLeaderboardAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 LeaderboardId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionResetLeaderboard", "ResetLeaderboardAsync");

	Params::USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.LeaderboardId = LeaderboardId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore.SetLeaderboardScoreAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LeaderboardId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Score                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Details                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      ScoreMethod                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionSetLeaderboardScore*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionSetLeaderboardScore* USteamCoreWebAsyncActionSetLeaderboardScore::SetLeaderboardScoreAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 LeaderboardId, const class FString& SteamID, int32 Score, const TArray<uint8>& Details, const class FString& ScoreMethod)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionSetLeaderboardScore", "SetLeaderboardScoreAsync");

	Params::USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.LeaderboardId = LeaderboardId;
	Parms.SteamID = SteamID;
	Parms.Score = Score;
	Parms.Details = Details;
	Parms.ScoreMethod = ScoreMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebLobbyMatchmakingService.RemoveUserFromLobby
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamIdToRemove                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamIDLobby                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InputJson                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebLobbyMatchmakingService::RemoveUserFromLobby(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamIdToRemove, const class FString& SteamIDLobby, const class FString& InputJson)
{
	static auto Func = Class->GetFunction("WebLobbyMatchmakingService", "RemoveUserFromLobby");

	Params::UWebLobbyMatchmakingService_RemoveUserFromLobby_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamIdToRemove = SteamIdToRemove;
	Parms.SteamIDLobby = SteamIDLobby;
	Parms.InputJson = InputJson;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebLobbyMatchmakingService.CreateLobby
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxMembers                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamCoreWebLobbyType  LobbyType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LobbyName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InputJson                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              SteamIdInvitedMembers                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      LobbyMetaData                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebLobbyMatchmakingService::CreateLobby(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 MaxMembers, enum class ESteamCoreWebLobbyType LobbyType, const class FString& LobbyName, const class FString& InputJson, const TArray<class FString>& SteamIdInvitedMembers, const class FString& LobbyMetaData)
{
	static auto Func = Class->GetFunction("WebLobbyMatchmakingService", "CreateLobby");

	Params::UWebLobbyMatchmakingService_CreateLobby_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.MaxMembers = MaxMembers;
	Parms.LobbyType = LobbyType;
	Parms.LobbyName = LobbyName;
	Parms.InputJson = InputJson;
	Parms.SteamIdInvitedMembers = SteamIdInvitedMembers;
	Parms.LobbyMetaData = LobbyMetaData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebMicroTxn.RefundTxn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OrderID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebMicroTxn::RefundTxn(FDelegateProperty_& Callback, const class FString& Key, const class FString& OrderID, int32 AppID)
{
	static auto Func = Class->GetFunction("WebMicroTxn", "RefundTxn");

	Params::UWebMicroTxn_RefundTxn_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.OrderID = OrderID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebMicroTxn.QueryTxn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OrderID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TransId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebMicroTxn::QueryTxn(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& OrderID, const class FString& TransId)
{
	static auto Func = Class->GetFunction("WebMicroTxn", "QueryTxn");

	Params::UWebMicroTxn_QueryTxn_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.OrderID = OrderID;
	Parms.TransId = TransId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebMicroTxn.ProcessAgreement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OrderID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AgreementId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Currency                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebMicroTxn::ProcessAgreement(FDelegateProperty_& Callback, const class FString& Key, const class FString& OrderID, const class FString& SteamID, const class FString& AgreementId, int32 AppID, int32 Amount, const class FString& Currency)
{
	static auto Func = Class->GetFunction("WebMicroTxn", "ProcessAgreement");

	Params::UWebMicroTxn_ProcessAgreement_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.OrderID = OrderID;
	Parms.SteamID = SteamID;
	Parms.AgreementId = AgreementId;
	Parms.AppID = AppID;
	Parms.Amount = Amount;
	Parms.Currency = Currency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebMicroTxn.MakeTransactionID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWebMicroTxn::MakeTransactionID()
{
	static auto Func = Class->GetFunction("WebMicroTxn", "MakeTransactionID");

	Params::UWebMicroTxn_MakeTransactionID_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebMicroTxn.InitTxn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OrderID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Currency                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserSession                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ipaddress                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ItemId                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Quantity                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              Amount                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              Description                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              Category                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      AssociatedBundle                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              BillingType                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              StartDate                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              EndDate                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              Period                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Frequency                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              RecurringAmt                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      BundleCount                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      BundleId                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      BundleQty                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              BundleDesc                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              BundleCategory                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebMicroTxn::InitTxn(FDelegateProperty_& Callback, const class FString& Key, const class FString& OrderID, const class FString& SteamID, int32 AppID, const class FString& Language, const class FString& Currency, const class FString& UserSession, const class FString& Ipaddress, const TArray<int32>& ItemId, const TArray<int32>& Quantity, const TArray<class FString>& Amount, const TArray<class FString>& Description, const TArray<class FString>& Category, const TArray<int32>& AssociatedBundle, const TArray<class FString>& BillingType, const TArray<class FString>& StartDate, const TArray<class FString>& EndDate, const TArray<class FString>& Period, const TArray<int32>& Frequency, const TArray<class FString>& RecurringAmt, const TArray<int32>& BundleCount, const TArray<int32>& BundleId, const TArray<int32>& BundleQty, const TArray<class FString>& BundleDesc, const TArray<class FString>& BundleCategory)
{
	static auto Func = Class->GetFunction("WebMicroTxn", "InitTxn");

	Params::UWebMicroTxn_InitTxn_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.OrderID = OrderID;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.Language = Language;
	Parms.Currency = Currency;
	Parms.UserSession = UserSession;
	Parms.Ipaddress = Ipaddress;
	Parms.ItemId = ItemId;
	Parms.Quantity = Quantity;
	Parms.Amount = Amount;
	Parms.Description = Description;
	Parms.Category = Category;
	Parms.AssociatedBundle = AssociatedBundle;
	Parms.BillingType = BillingType;
	Parms.StartDate = StartDate;
	Parms.EndDate = EndDate;
	Parms.Period = Period;
	Parms.Frequency = Frequency;
	Parms.RecurringAmt = RecurringAmt;
	Parms.BundleCount = BundleCount;
	Parms.BundleId = BundleId;
	Parms.BundleQty = BundleQty;
	Parms.BundleDesc = BundleDesc;
	Parms.BundleCategory = BundleCategory;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebMicroTxn.GetUserInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ipaddress                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebMicroTxn::GetUserInfo(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const class FString& Ipaddress)
{
	static auto Func = Class->GetFunction("WebMicroTxn", "GetUserInfo");

	Params::UWebMicroTxn_GetUserInfo_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.Ipaddress = Ipaddress;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebMicroTxn.GetUserAgreementInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebMicroTxn::GetUserAgreementInfo(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("WebMicroTxn", "GetUserAgreementInfo");

	Params::UWebMicroTxn_GetUserAgreementInfo_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebMicroTxn.GetReport
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Time                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebMicroTxn::GetReport(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Time, const class FString& Type, int32 MaxResults)
{
	static auto Func = Class->GetFunction("WebMicroTxn", "GetReport");

	Params::UWebMicroTxn_GetReport_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Time = Time;
	Parms.Type = Type;
	Parms.MaxResults = MaxResults;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebMicroTxn.FinalizeTxn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OrderID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebMicroTxn::FinalizeTxn(FDelegateProperty_& Callback, const class FString& Key, const class FString& OrderID, int32 AppID)
{
	static auto Func = Class->GetFunction("WebMicroTxn", "FinalizeTxn");

	Params::UWebMicroTxn_FinalizeTxn_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.OrderID = OrderID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebMicroTxn.CancelAgreement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AgreementId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebMicroTxn::CancelAgreement(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32 AppID)
{
	static auto Func = Class->GetFunction("WebMicroTxn", "CancelAgreement");

	Params::UWebMicroTxn_CancelAgreement_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AgreementId = AgreementId;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebMicroTxn.AdjustAgreement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AgreementId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NextProcessDate                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebMicroTxn::AdjustAgreement(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32 AppID, const class FString& NextProcessDate)
{
	static auto Func = Class->GetFunction("WebMicroTxn", "AdjustAgreement");

	Params::UWebMicroTxn_AdjustAgreement_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AgreementId = AgreementId;
	Parms.AppID = AppID;
	Parms.NextProcessDate = NextProcessDate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement.AdjustAgreementAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AgreementId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NextProcessDate                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionAdjustAgreement*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionAdjustAgreement* USteamCoreWebAsyncActionAdjustAgreement::AdjustAgreementAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32 AppID, const class FString& NextProcessDate)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionAdjustAgreement", "AdjustAgreementAsync");

	Params::USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AgreementId = AgreementId;
	Parms.AppID = AppID;
	Parms.NextProcessDate = NextProcessDate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement.CancelAgreementAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AgreementId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionCancelAgreement*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionCancelAgreement* USteamCoreWebAsyncActionCancelAgreement::CancelAgreementAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionCancelAgreement", "CancelAgreementAsync");

	Params::USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AgreementId = AgreementId;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn.FinalizeTxnAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OrderID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionFinalizeTxn*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionFinalizeTxn* USteamCoreWebAsyncActionFinalizeTxn::FinalizeTxnAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderID, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionFinalizeTxn", "FinalizeTxnAsync");

	Params::USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.OrderID = OrderID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetReport.GetReportAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Time                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetReport*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetReport* USteamCoreWebAsyncActionGetReport::GetReportAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& Time, const class FString& Type, int32 MaxResults)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetReport", "GetReportAsync");

	Params::USteamCoreWebAsyncActionGetReport_GetReportAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Time = Time;
	Parms.Type = Type;
	Parms.MaxResults = MaxResults;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo.GetUserAgreementInfoAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetUserAgreementInfo*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetUserAgreementInfo* USteamCoreWebAsyncActionGetUserAgreementInfo::GetUserAgreementInfoAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetUserAgreementInfo", "GetUserAgreementInfoAsync");

	Params::USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo.GetUserInfoAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ipaddress                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetUserInfo*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetUserInfo* USteamCoreWebAsyncActionGetUserInfo::GetUserInfoAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& Ipaddress)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetUserInfo", "GetUserInfoAsync");

	Params::USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.Ipaddress = Ipaddress;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionInitTxn.InitTxnAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OrderID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Currency                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserSession                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ipaddress                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ItemId                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Quantity                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              Amount                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              Description                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              Category                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      AssociatedBundle                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              BillingType                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              StartDate                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              EndDate                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              Period                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Frequency                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              RecurringAmt                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      BundleCount                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      BundleId                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      BundleQty                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              BundleDesc                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              BundleCategory                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionInitTxn*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionInitTxn* USteamCoreWebAsyncActionInitTxn::InitTxnAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderID, const class FString& SteamID, int32 AppID, const class FString& Language, const class FString& Currency, const class FString& UserSession, const class FString& Ipaddress, const TArray<int32>& ItemId, const TArray<int32>& Quantity, const TArray<class FString>& Amount, const TArray<class FString>& Description, const TArray<class FString>& Category, const TArray<int32>& AssociatedBundle, const TArray<class FString>& BillingType, const TArray<class FString>& StartDate, const TArray<class FString>& EndDate, const TArray<class FString>& Period, const TArray<int32>& Frequency, const TArray<class FString>& RecurringAmt, const TArray<int32>& BundleCount, const TArray<int32>& BundleId, const TArray<int32>& BundleQty, const TArray<class FString>& BundleDesc, const TArray<class FString>& BundleCategory)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionInitTxn", "InitTxnAsync");

	Params::USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.OrderID = OrderID;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.Language = Language;
	Parms.Currency = Currency;
	Parms.UserSession = UserSession;
	Parms.Ipaddress = Ipaddress;
	Parms.ItemId = ItemId;
	Parms.Quantity = Quantity;
	Parms.Amount = Amount;
	Parms.Description = Description;
	Parms.Category = Category;
	Parms.AssociatedBundle = AssociatedBundle;
	Parms.BillingType = BillingType;
	Parms.StartDate = StartDate;
	Parms.EndDate = EndDate;
	Parms.Period = Period;
	Parms.Frequency = Frequency;
	Parms.RecurringAmt = RecurringAmt;
	Parms.BundleCount = BundleCount;
	Parms.BundleId = BundleId;
	Parms.BundleQty = BundleQty;
	Parms.BundleDesc = BundleDesc;
	Parms.BundleCategory = BundleCategory;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement.ProcessAgreementAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OrderID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AgreementId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Currency                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionProcessAgreement*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionProcessAgreement* USteamCoreWebAsyncActionProcessAgreement::ProcessAgreementAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderID, const class FString& SteamID, const class FString& AgreementId, int32 AppID, int32 Amount, const class FString& Currency)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionProcessAgreement", "ProcessAgreementAsync");

	Params::USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.OrderID = OrderID;
	Parms.SteamID = SteamID;
	Parms.AgreementId = AgreementId;
	Parms.AppID = AppID;
	Parms.Amount = Amount;
	Parms.Currency = Currency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn.QueryTxnAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OrderID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TransId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionQueryTxn*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionQueryTxn* USteamCoreWebAsyncActionQueryTxn::QueryTxnAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& OrderID, const class FString& TransId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionQueryTxn", "QueryTxnAsync");

	Params::USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.OrderID = OrderID;
	Parms.TransId = TransId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn.RefundTxnAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OrderID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRefundTxn*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionRefundTxn* USteamCoreWebAsyncActionRefundTxn::RefundTxnAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderID, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionRefundTxn", "RefundTxnAsync");

	Params::USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.OrderID = OrderID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebPlayerService.IsPlayingSharedGame
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppIdPlaying                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebPlayerService::IsPlayingSharedGame(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppIdPlaying)
{
	static auto Func = Class->GetFunction("WebPlayerService", "IsPlayingSharedGame");

	Params::UWebPlayerService_IsPlayingSharedGame_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppIdPlaying = AppIdPlaying;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebPlayerService.GetSteamLevel
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebPlayerService::GetSteamLevel(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("WebPlayerService", "GetSteamLevel");

	Params::UWebPlayerService_GetSteamLevel_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebPlayerService.GetRecentlyPlayedGames
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebPlayerService::GetRecentlyPlayedGames(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 Count)
{
	static auto Func = Class->GetFunction("WebPlayerService", "GetRecentlyPlayedGames");

	Params::UWebPlayerService_GetRecentlyPlayedGames_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.Count = Count;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebPlayerService.GetOwnedGames
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeAppInfo                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludePlayedFreeGames                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Filter                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebPlayerService::GetOwnedGames(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, const TArray<int32>& Filter)
{
	static auto Func = Class->GetFunction("WebPlayerService", "GetOwnedGames");

	Params::UWebPlayerService_GetOwnedGames_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.bIncludeAppInfo = bIncludeAppInfo;
	Parms.bIncludePlayedFreeGames = bIncludePlayedFreeGames;
	Parms.Filter = Filter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebPlayerService.GetCommunityBadgeProgress
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BadgeId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebPlayerService::GetCommunityBadgeProgress(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 BadgeId)
{
	static auto Func = Class->GetFunction("WebPlayerService", "GetCommunityBadgeProgress");

	Params::UWebPlayerService_GetCommunityBadgeProgress_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.BadgeId = BadgeId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebPlayerService.GetBadges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebPlayerService::GetBadges(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("WebPlayerService", "GetBadges");

	Params::UWebPlayerService_GetBadges_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames.GetRecentlyPlayedGamesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetRecentlyPlayedGames*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetRecentlyPlayedGames* USteamCoreWebAsyncActionGetRecentlyPlayedGames::GetRecentlyPlayedGamesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 Count)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetRecentlyPlayedGames", "GetRecentlyPlayedGamesAsync");

	Params::USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.Count = Count;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames.GetOwnedGamesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeAppInfo                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludePlayedFreeGames                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Filter                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetOwnedGames*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetOwnedGames* USteamCoreWebAsyncActionGetOwnedGames::GetOwnedGamesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, const TArray<int32>& Filter)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetOwnedGames", "GetOwnedGamesAsync");

	Params::USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.bIncludeAppInfo = bIncludeAppInfo;
	Parms.bIncludePlayedFreeGames = bIncludePlayedFreeGames;
	Parms.Filter = Filter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel.GetSteamLevelAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetSteamLevel*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetSteamLevel* USteamCoreWebAsyncActionGetSteamLevel::GetSteamLevelAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetSteamLevel", "GetSteamLevelAsync");

	Params::USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetBadges.GetBadgesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetBadges*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetBadges* USteamCoreWebAsyncActionGetBadges::GetBadgesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetBadges", "GetBadgesAsync");

	Params::USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress.GetCommunityBadgeProgressAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BadgeId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetCommunityBadgeProgress*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetCommunityBadgeProgress* USteamCoreWebAsyncActionGetCommunityBadgeProgress::GetCommunityBadgeProgressAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 BadgeId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetCommunityBadgeProgress", "GetCommunityBadgeProgressAsync");

	Params::USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.BadgeId = BadgeId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame.IsPlayingSharedGameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppIdPlaying                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionIsPlayingSharedGame*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionIsPlayingSharedGame* USteamCoreWebAsyncActionIsPlayingSharedGame::IsPlayingSharedGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppIdPlaying)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionIsPlayingSharedGame", "IsPlayingSharedGameAsync");

	Params::USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppIdPlaying = AppIdPlaying;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebPublishedFileService.UpdateTags
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PublishedFileID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AddTags                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RemoveTags                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebPublishedFileService::UpdateTags(FDelegateProperty_& Callback, const class FString& Key, const class FString& PublishedFileID, int32 AppID, const class FString& AddTags, const class FString& RemoveTags)
{
	static auto Func = Class->GetFunction("WebPublishedFileService", "UpdateTags");

	Params::UWebPublishedFileService_UpdateTags_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.PublishedFileID = PublishedFileID;
	Parms.AppID = AppID;
	Parms.AddTags = AddTags;
	Parms.RemoveTags = RemoveTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebPublishedFileService.UpdateIncompatibleStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PublishedFileID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncompatible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebPublishedFileService::UpdateIncompatibleStatus(FDelegateProperty_& Callback, const class FString& Key, const class FString& PublishedFileID, int32 AppID, bool bIncompatible)
{
	static auto Func = Class->GetFunction("WebPublishedFileService", "UpdateIncompatibleStatus");

	Params::UWebPublishedFileService_UpdateIncompatibleStatus_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.PublishedFileID = PublishedFileID;
	Parms.AppID = AppID;
	Parms.bIncompatible = bIncompatible;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebPublishedFileService.UpdateBanStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PublishedFileID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBanned                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Reason                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebPublishedFileService::UpdateBanStatus(FDelegateProperty_& Callback, const class FString& Key, const class FString& PublishedFileID, int32 AppID, bool bBanned, const class FString& Reason)
{
	static auto Func = Class->GetFunction("WebPublishedFileService", "UpdateBanStatus");

	Params::UWebPublishedFileService_UpdateBanStatus_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.PublishedFileID = PublishedFileID;
	Parms.AppID = AppID;
	Parms.bBanned = bBanned;
	Parms.Reason = Reason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebPublishedFileService.SetDeveloperMetadata
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PublishedFileID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MetaData                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebPublishedFileService::SetDeveloperMetadata(FDelegateProperty_& Callback, const class FString& Key, const class FString& PublishedFileID, int32 AppID, const class FString& MetaData)
{
	static auto Func = Class->GetFunction("WebPublishedFileService", "SetDeveloperMetadata");

	Params::UWebPublishedFileService_SetDeveloperMetadata_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.PublishedFileID = PublishedFileID;
	Parms.AppID = AppID;
	Parms.MetaData = MetaData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebPublishedFileService.QueryFiles
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              QueryType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Page                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Cursor                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumPerPage                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CreatorAppID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RequiredTags                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExcludedTags                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMatchAllTags                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RequiredFlags                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OmittedFlags                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SearchText                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FileType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ChildPublishedFileId                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Days                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeRecentVotesOnly                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CacheMaxAgeSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Language                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RequiredKvTags                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTotalOnly                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIDsOnly                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReturnVoteData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReturnTags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReturnKvTags                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReturnPreviews                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReturnChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReturnShortDescription                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReturnForSaleData                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReturnMetadata                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnPlaytimeStats                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebPublishedFileService::QueryFiles(FDelegateProperty_& Callback, const class FString& Key, int32 QueryType, int32 Page, const class FString& Cursor, int32 NumPerPage, int32 CreatorAppID, int32 AppID, const class FString& RequiredTags, const class FString& ExcludedTags, bool bMatchAllTags, const class FString& RequiredFlags, const class FString& OmittedFlags, const class FString& SearchText, int32 FileType, const class FString& ChildPublishedFileId, int32 Days, bool bIncludeRecentVotesOnly, int32 CacheMaxAgeSeconds, int32 Language, const class FString& RequiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int32 ReturnPlaytimeStats)
{
	static auto Func = Class->GetFunction("WebPublishedFileService", "QueryFiles");

	Params::UWebPublishedFileService_QueryFiles_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.QueryType = QueryType;
	Parms.Page = Page;
	Parms.Cursor = Cursor;
	Parms.NumPerPage = NumPerPage;
	Parms.CreatorAppID = CreatorAppID;
	Parms.AppID = AppID;
	Parms.RequiredTags = RequiredTags;
	Parms.ExcludedTags = ExcludedTags;
	Parms.bMatchAllTags = bMatchAllTags;
	Parms.RequiredFlags = RequiredFlags;
	Parms.OmittedFlags = OmittedFlags;
	Parms.SearchText = SearchText;
	Parms.FileType = FileType;
	Parms.ChildPublishedFileId = ChildPublishedFileId;
	Parms.Days = Days;
	Parms.bIncludeRecentVotesOnly = bIncludeRecentVotesOnly;
	Parms.CacheMaxAgeSeconds = CacheMaxAgeSeconds;
	Parms.Language = Language;
	Parms.RequiredKvTags = RequiredKvTags;
	Parms.bTotalOnly = bTotalOnly;
	Parms.bIDsOnly = bIDsOnly;
	Parms.bReturnVoteData = bReturnVoteData;
	Parms.bReturnTags = bReturnTags;
	Parms.bReturnKvTags = bReturnKvTags;
	Parms.bReturnPreviews = bReturnPreviews;
	Parms.bReturnChildren = bReturnChildren;
	Parms.bReturnShortDescription = bReturnShortDescription;
	Parms.bReturnForSaleData = bReturnForSaleData;
	Parms.bReturnMetadata = bReturnMetadata;
	Parms.ReturnPlaytimeStats = ReturnPlaytimeStats;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamPublishedItemSearch.ResultSetSummary
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasAppAdminAccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FileType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Tag                                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              UserTag                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebSteamPublishedItemSearch::ResultSetSummary(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, bool bHasAppAdminAccess, int32 FileType, const TArray<class FString>& Tag, const TArray<class FString>& UserTag)
{
	static auto Func = Class->GetFunction("WebSteamPublishedItemSearch", "ResultSetSummary");

	Params::UWebSteamPublishedItemSearch_ResultSetSummary_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.StartId = StartId;
	Parms.bHasAppAdminAccess = bHasAppAdminAccess;
	Parms.FileType = FileType;
	Parms.Tag = Tag;
	Parms.UserTag = UserTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByVote
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasAppAdminAccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FileType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Tag                                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              UserTag                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebSteamPublishedItemSearch::RankedByVote(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, const TArray<class FString>& Tag, const TArray<class FString>& UserTag)
{
	static auto Func = Class->GetFunction("WebSteamPublishedItemSearch", "RankedByVote");

	Params::UWebSteamPublishedItemSearch_RankedByVote_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.StartId = StartId;
	Parms.Count = Count;
	Parms.bHasAppAdminAccess = bHasAppAdminAccess;
	Parms.FileType = FileType;
	Parms.Tag = Tag;
	Parms.UserTag = UserTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByTrend
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasAppAdminAccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FileType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Days                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Tag                                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              UserTag                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebSteamPublishedItemSearch::RankedByTrend(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 Days, const TArray<class FString>& Tag, const TArray<class FString>& UserTag)
{
	static auto Func = Class->GetFunction("WebSteamPublishedItemSearch", "RankedByTrend");

	Params::UWebSteamPublishedItemSearch_RankedByTrend_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.StartId = StartId;
	Parms.Count = Count;
	Parms.bHasAppAdminAccess = bHasAppAdminAccess;
	Parms.FileType = FileType;
	Parms.Days = Days;
	Parms.Tag = Tag;
	Parms.UserTag = UserTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamPublishedItemSearch.RankedByPublicationOrder
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasAppAdminAccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FileType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Tag                                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              UserTag                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebSteamPublishedItemSearch::RankedByPublicationOrder(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, const TArray<class FString>& Tag, const TArray<class FString>& UserTag)
{
	static auto Func = Class->GetFunction("WebSteamPublishedItemSearch", "RankedByPublicationOrder");

	Params::UWebSteamPublishedItemSearch_RankedByPublicationOrder_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.StartId = StartId;
	Parms.Count = Count;
	Parms.bHasAppAdminAccess = bHasAppAdminAccess;
	Parms.FileType = FileType;
	Parms.Tag = Tag;
	Parms.UserTag = UserTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder.RankedByPublicationOrderAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasAppAdminAccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FileType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Tag                                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              UserTag                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRankedByPublicationOrder*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionRankedByPublicationOrder* USteamCoreWebAsyncActionRankedByPublicationOrder::RankedByPublicationOrderAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, const TArray<class FString>& Tag, const TArray<class FString>& UserTag)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionRankedByPublicationOrder", "RankedByPublicationOrderAsync");

	Params::USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.StartId = StartId;
	Parms.Count = Count;
	Parms.bHasAppAdminAccess = bHasAppAdminAccess;
	Parms.FileType = FileType;
	Parms.Tag = Tag;
	Parms.UserTag = UserTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend.RankedByTrendAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasAppAdminAccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FileType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Days                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Tag                                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              UserTag                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRankedByTrend*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionRankedByTrend* USteamCoreWebAsyncActionRankedByTrend::RankedByTrendAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 Days, const TArray<class FString>& Tag, const TArray<class FString>& UserTag)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionRankedByTrend", "RankedByTrendAsync");

	Params::USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.StartId = StartId;
	Parms.Count = Count;
	Parms.bHasAppAdminAccess = bHasAppAdminAccess;
	Parms.FileType = FileType;
	Parms.Days = Days;
	Parms.Tag = Tag;
	Parms.UserTag = UserTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote.RankedByVoteAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasAppAdminAccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FileType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Tag                                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              UserTag                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionRankedByVote*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionRankedByVote* USteamCoreWebAsyncActionRankedByVote::RankedByVoteAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, const TArray<class FString>& Tag, const TArray<class FString>& UserTag)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionRankedByVote", "RankedByVoteAsync");

	Params::USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.StartId = StartId;
	Parms.Count = Count;
	Parms.bHasAppAdminAccess = bHasAppAdminAccess;
	Parms.FileType = FileType;
	Parms.Tag = Tag;
	Parms.UserTag = UserTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary.ResultSetSummaryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasAppAdminAccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FileType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Tag                                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              UserTag                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionResultSetSummary*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionResultSetSummary* USteamCoreWebAsyncActionResultSetSummary::ResultSetSummaryAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, bool bHasAppAdminAccess, int32 FileType, const TArray<class FString>& Tag, const TArray<class FString>& UserTag)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionResultSetSummary", "ResultSetSummaryAsync");

	Params::USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.StartId = StartId;
	Parms.bHasAppAdminAccess = bHasAppAdminAccess;
	Parms.FileType = FileType;
	Parms.Tag = Tag;
	Parms.UserTag = UserTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebPublishedItemVoting.UserVoteSummary
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              PublishedFileIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebPublishedItemVoting::UserVoteSummary(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const TArray<class FString>& PublishedFileIDs)
{
	static auto Func = Class->GetFunction("WebPublishedItemVoting", "UserVoteSummary");

	Params::UWebPublishedItemVoting_UserVoteSummary_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebPublishedItemVoting.ItemVoteSummary
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              PublishedFileIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebPublishedItemVoting::ItemVoteSummary(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const TArray<class FString>& PublishedFileIDs)
{
	static auto Func = Class->GetFunction("WebPublishedItemVoting", "ItemVoteSummary");

	Params::UWebPublishedItemVoting_ItemVoteSummary_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary.ItemVoteSummaryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              PublishedFileIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionItemVoteSummary*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionItemVoteSummary* USteamCoreWebAsyncActionItemVoteSummary::ItemVoteSummaryAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const TArray<class FString>& PublishedFileIDs)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionItemVoteSummary", "ItemVoteSummaryAsync");

	Params::USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary.UserVoteSummaryAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              PublishedFileIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionUserVoteSummary*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionUserVoteSummary* USteamCoreWebAsyncActionUserVoteSummary::UserVoteSummaryAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const TArray<class FString>& PublishedFileIDs)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionUserVoteSummary", "UserVoteSummaryAsync");

	Params::USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebRemoteStorage.UnsubscribePublishedFile
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PublishedFileIDs                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebRemoteStorage::UnsubscribePublishedFile(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& PublishedFileIDs)
{
	static auto Func = Class->GetFunction("WebRemoteStorage", "UnsubscribePublishedFile");

	Params::UWebRemoteStorage_UnsubscribePublishedFile_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebRemoteStorage.SubscribePublishedFile
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PublishedFileIDs                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebRemoteStorage::SubscribePublishedFile(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& PublishedFileIDs)
{
	static auto Func = Class->GetFunction("WebRemoteStorage", "SubscribePublishedFile");

	Params::UWebRemoteStorage_SubscribePublishedFile_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebRemoteStorage.SetUGCUsedByGC
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UGCID                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsed                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebRemoteStorage::SetUGCUsedByGC(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32 AppID, bool bUsed)
{
	static auto Func = Class->GetFunction("WebRemoteStorage", "SetUGCUsedByGC");

	Params::UWebRemoteStorage_SetUGCUsedByGC_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.UGCID = UGCID;
	Parms.AppID = AppID;
	Parms.bUsed = bUsed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebRemoteStorage.GetUGCFileDetails
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UGCID                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebRemoteStorage::GetUGCFileDetails(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32 AppID)
{
	static auto Func = Class->GetFunction("WebRemoteStorage", "GetUGCFileDetails");

	Params::UWebRemoteStorage_GetUGCFileDetails_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.UGCID = UGCID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebRemoteStorage.GetPublishedFileDetails
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PublishedFileIDs                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebRemoteStorage::GetPublishedFileDetails(FDelegateProperty_& Callback, const class FString& PublishedFileIDs)
{
	static auto Func = Class->GetFunction("WebRemoteStorage", "GetPublishedFileDetails");

	Params::UWebRemoteStorage_GetPublishedFileDetails_Params Parms;

	Parms.Callback = Callback;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebRemoteStorage.GetCollectionDetails
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              PublishedFileIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebRemoteStorage::GetCollectionDetails(FDelegateProperty_& Callback, const TArray<class FString>& PublishedFileIDs)
{
	static auto Func = Class->GetFunction("WebRemoteStorage", "GetCollectionDetails");

	Params::UWebRemoteStorage_GetCollectionDetails_Params Parms;

	Parms.Callback = Callback;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebRemoteStorage.EnumerateUserSubscribedFiles
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ListType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebRemoteStorage::EnumerateUserSubscribedFiles(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, int32 ListType)
{
	static auto Func = Class->GetFunction("WebRemoteStorage", "EnumerateUserSubscribedFiles");

	Params::UWebRemoteStorage_EnumerateUserSubscribedFiles_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ListType = ListType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebRemoteStorage.EnumerateUserPublishedFiles
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebRemoteStorage::EnumerateUserPublishedFiles(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("WebRemoteStorage", "EnumerateUserPublishedFiles");

	Params::UWebRemoteStorage_EnumerateUserPublishedFiles_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles.EnumerateUserPublishedFilesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionEnumerateUserPublishedFiles*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionEnumerateUserPublishedFiles* USteamCoreWebAsyncActionEnumerateUserPublishedFiles::EnumerateUserPublishedFilesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionEnumerateUserPublishedFiles", "EnumerateUserPublishedFilesAsync");

	Params::USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles.EnumerateUserSubscribedFilesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ListType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::EnumerateUserSubscribedFilesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, int32 ListType)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionEnumerateUserSubscribedFiles", "EnumerateUserSubscribedFilesAsync");

	Params::USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ListType = ListType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails.GetCollectionDetailsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              PublishedFileIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetCollectionDetails*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetCollectionDetails* USteamCoreWebAsyncActionGetCollectionDetails::GetCollectionDetailsAsync(class UObject* WorldContextObject, const TArray<class FString>& PublishedFileIDs)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetCollectionDetails", "GetCollectionDetailsAsync");

	Params::USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails.GetPublishedFileDetailsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PublishedFileIDs                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPublishedFileDetails*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetPublishedFileDetails* USteamCoreWebAsyncActionGetPublishedFileDetails::GetPublishedFileDetailsAsync(class UObject* WorldContextObject, const class FString& PublishedFileIDs)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetPublishedFileDetails", "GetPublishedFileDetailsAsync");

	Params::USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails.GetUGCFileDetailsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UGCID                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetUGCFileDetails*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetUGCFileDetails* USteamCoreWebAsyncActionGetUGCFileDetails::GetUGCFileDetailsAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetUGCFileDetails", "GetUGCFileDetailsAsync");

	Params::USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.UGCID = UGCID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC.SetUGCUsedByGCAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UGCID                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsed                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionSetUGCUsedByGC*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionSetUGCUsedByGC* USteamCoreWebAsyncActionSetUGCUsedByGC::SetUGCUsedByGCAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32 AppID, bool bUsed)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionSetUGCUsedByGC", "SetUGCUsedByGCAsync");

	Params::USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.UGCID = UGCID;
	Parms.AppID = AppID;
	Parms.bUsed = bUsed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile.SubscribePublishedFileAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PublishedFileIDs                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionSubscribePublishedFile*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionSubscribePublishedFile* USteamCoreWebAsyncActionSubscribePublishedFile::SubscribePublishedFileAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& PublishedFileIDs)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionSubscribePublishedFile", "SubscribePublishedFileAsync");

	Params::USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile.UnsubscribePublishedFileAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PublishedFileIDs                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionUnsubscribePublishedFile*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionUnsubscribePublishedFile* USteamCoreWebAsyncActionUnsubscribePublishedFile::UnsubscribePublishedFileAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& PublishedFileIDs)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionUnsubscribePublishedFile", "UnsubscribePublishedFileAsync");

	Params::USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebSteamCommunity.ReportAbuse
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamIdActor                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamIdTarget                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AbuseType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ContentType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Gid                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamCommunity::ReportAbuse(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamIdActor, const class FString& SteamIdTarget, int32 AppID, int32 AbuseType, int32 ContentType, const class FString& Description, const class FString& Gid)
{
	static auto Func = Class->GetFunction("WebSteamCommunity", "ReportAbuse");

	Params::UWebSteamCommunity_ReportAbuse_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamIdActor = SteamIdActor;
	Parms.SteamIdTarget = SteamIdTarget;
	Parms.AppID = AppID;
	Parms.AbuseType = AbuseType;
	Parms.ContentType = ContentType;
	Parms.Description = Description;
	Parms.Gid = Gid;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse.ReportAbuseAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamIdActor                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamIdTarget                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AbuseType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ContentType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Gid                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionReportAbuse*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionReportAbuse* USteamCoreWebAsyncActionReportAbuse::ReportAbuseAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamIdActor, const class FString& SteamIdTarget, int32 AppID, int32 AbuseType, int32 ContentType, const class FString& Description, const class FString& Gid)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionReportAbuse", "ReportAbuseAsync");

	Params::USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamIdActor = SteamIdActor;
	Parms.SteamIdTarget = SteamIdTarget;
	Parms.AppID = AppID;
	Parms.AbuseType = AbuseType;
	Parms.ContentType = ContentType;
	Parms.Description = Description;
	Parms.Gid = Gid;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebSteamEconomy.StartTrade
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamIDd                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamId2                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamEconomy::StartTrade(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamIDd, const class FString& SteamId2)
{
	static auto Func = Class->GetFunction("WebSteamEconomy", "StartTrade");

	Params::UWebSteamEconomy_StartTrade_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamIDd = SteamIDd;
	Parms.SteamId2 = SteamId2;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamEconomy.StartAssetTransaction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AssetId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AssetQuantity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Currency                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ipaddress                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Referer                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bClientAuth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamEconomy::StartAssetTransaction(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& AssetId, int32 AssetQuantity, const class FString& Currency, const class FString& Language, const class FString& Ipaddress, const class FString& Referer, bool bClientAuth)
{
	static auto Func = Class->GetFunction("WebSteamEconomy", "StartAssetTransaction");

	Params::UWebSteamEconomy_StartAssetTransaction_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.AssetId = AssetId;
	Parms.AssetQuantity = AssetQuantity;
	Parms.Currency = Currency;
	Parms.Language = Language;
	Parms.Ipaddress = Ipaddress;
	Parms.Referer = Referer;
	Parms.bClientAuth = bClientAuth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamEconomy.GetMarketPrices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamEconomy::GetMarketPrices(FDelegateProperty_& Callback, const class FString& Key, int32 AppID)
{
	static auto Func = Class->GetFunction("WebSteamEconomy", "GetMarketPrices");

	Params::UWebSteamEconomy_GetMarketPrices_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamEconomy.GetExportedAssetsForUser
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContextID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamEconomy::GetExportedAssetsForUser(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& ContextID)
{
	static auto Func = Class->GetFunction("WebSteamEconomy", "GetExportedAssetsForUser");

	Params::UWebSteamEconomy_GetExportedAssetsForUser_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ContextID = ContextID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamEconomy.GetAssetPrices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Currency                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamEconomy::GetAssetPrices(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Currency, const class FString& Language)
{
	static auto Func = Class->GetFunction("WebSteamEconomy", "GetAssetPrices");

	Params::UWebSteamEconomy_GetAssetPrices_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Currency = Currency;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamEconomy.GetAssetClassInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ClassCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ClassID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InstanceId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamEconomy::GetAssetClassInfo(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Language, int32 ClassCount, const class FString& ClassID, const class FString& InstanceId)
{
	static auto Func = Class->GetFunction("WebSteamEconomy", "GetAssetClassInfo");

	Params::UWebSteamEconomy_GetAssetClassInfo_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Language = Language;
	Parms.ClassCount = ClassCount;
	Parms.ClassID = ClassID;
	Parms.InstanceId = InstanceId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamEconomy.FinalizeAssetTransaction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TxnId                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamEconomy::FinalizeAssetTransaction(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& TxnId, const class FString& Language)
{
	static auto Func = Class->GetFunction("WebSteamEconomy", "FinalizeAssetTransaction");

	Params::UWebSteamEconomy_FinalizeAssetTransaction_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.TxnId = TxnId;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamEconomy.CanTrade
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamEconomy::CanTrade(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& TargetId)
{
	static auto Func = Class->GetFunction("WebSteamEconomy", "CanTrade");

	Params::UWebSteamEconomy_CanTrade_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.TargetId = TargetId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionCanTrade.CanTradeAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionCanTrade*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionCanTrade* USteamCoreWebAsyncActionCanTrade::CanTradeAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& TargetId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionCanTrade", "CanTradeAsync");

	Params::USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.TargetId = TargetId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction.FinalizeAssetTransactionAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TxnId                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionFinalizeAssetTransaction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionFinalizeAssetTransaction* USteamCoreWebAsyncActionFinalizeAssetTransaction::FinalizeAssetTransactionAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& TxnId, const class FString& Language)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionFinalizeAssetTransaction", "FinalizeAssetTransactionAsync");

	Params::USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.TxnId = TxnId;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo.GetAssetClassInfoAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ClassCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ClassID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InstanceId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetAssetClassInfo*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetAssetClassInfo* USteamCoreWebAsyncActionGetAssetClassInfo::GetAssetClassInfoAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& Language, int32 ClassCount, const class FString& ClassID, const class FString& InstanceId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetAssetClassInfo", "GetAssetClassInfoAsync");

	Params::USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Language = Language;
	Parms.ClassCount = ClassCount;
	Parms.ClassID = ClassID;
	Parms.InstanceId = InstanceId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices.GetAssetPricesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Currency                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetAssetPrices*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetAssetPrices* USteamCoreWebAsyncActionGetAssetPrices::GetAssetPricesAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& Currency, const class FString& Language)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetAssetPrices", "GetAssetPricesAsync");

	Params::USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Currency = Currency;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser.GetExportedAssetsForUserAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContextID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetExportedAssetsForUser*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetExportedAssetsForUser* USteamCoreWebAsyncActionGetExportedAssetsForUser::GetExportedAssetsForUserAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& ContextID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetExportedAssetsForUser", "GetExportedAssetsForUserAsync");

	Params::USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ContextID = ContextID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices.GetMarketPricesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetMarketPrices*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetMarketPrices* USteamCoreWebAsyncActionGetMarketPrices::GetMarketPricesAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetMarketPrices", "GetMarketPricesAsync");

	Params::USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction.StartAssetTransactionAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AssetId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AssetQuantity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Currency                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ipaddress                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Referer                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bClientAuth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionStartAssetTransaction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionStartAssetTransaction* USteamCoreWebAsyncActionStartAssetTransaction::StartAssetTransactionAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& AssetId, int32 AssetQuantity, const class FString& Currency, const class FString& Language, const class FString& Ipaddress, const class FString& Referer, bool bClientAuth)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionStartAssetTransaction", "StartAssetTransactionAsync");

	Params::USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.AssetId = AssetId;
	Parms.AssetQuantity = AssetQuantity;
	Parms.Currency = Currency;
	Parms.Language = Language;
	Parms.Ipaddress = Ipaddress;
	Parms.Referer = Referer;
	Parms.bClientAuth = bClientAuth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionStartTrade.StartTradeAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamId1                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamId2                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionStartTrade*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionStartTrade* USteamCoreWebAsyncActionStartTrade::StartTradeAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamId1, const class FString& SteamId2)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionStartTrade", "StartTradeAsync");

	Params::USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamId1 = SteamId1;
	Parms.SteamId2 = SteamId2;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebSteamGameServerStats.GetGameServerPlayerStatsForGame
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      GameID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RangeStart                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RangeEnd                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamGameServerStats::GetGameServerPlayerStatsForGame(FDelegateProperty_& Callback, const class FString& Key, const class FString& GameID, int32 AppID, const class FString& RangeStart, const class FString& RangeEnd, int32 MaxResults)
{
	static auto Func = Class->GetFunction("WebSteamGameServerStats", "GetGameServerPlayerStatsForGame");

	Params::UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.GameID = GameID;
	Parms.AppID = AppID;
	Parms.RangeStart = RangeStart;
	Parms.RangeEnd = RangeEnd;
	Parms.MaxResults = MaxResults;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamNews.GetNewsForAppAuthed
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxLength                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Feeds                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              EndDate                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamNews::GetNewsForAppAuthed(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 MaxLength, const TArray<class FString>& Feeds, int32 EndDate, int32 Count)
{
	static auto Func = Class->GetFunction("WebSteamNews", "GetNewsForAppAuthed");

	Params::UWebSteamNews_GetNewsForAppAuthed_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.MaxLength = MaxLength;
	Parms.Feeds = Feeds;
	Parms.EndDate = EndDate;
	Parms.Count = Count;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamNews.GetNewsForApp
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxLength                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Feeds                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              EndDate                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamNews::GetNewsForApp(FDelegateProperty_& Callback, int32 AppID, int32 MaxLength, const TArray<class FString>& Feeds, int32 EndDate, int32 Count)
{
	static auto Func = Class->GetFunction("WebSteamNews", "GetNewsForApp");

	Params::UWebSteamNews_GetNewsForApp_Params Parms;

	Parms.Callback = Callback;
	Parms.AppID = AppID;
	Parms.MaxLength = MaxLength;
	Parms.Feeds = Feeds;
	Parms.EndDate = EndDate;
	Parms.Count = Count;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp.GetNewsForAppAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxLength                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Feeds                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              EndDate                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetNewsForApp*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetNewsForApp* USteamCoreWebAsyncActionGetNewsForApp::GetNewsForAppAsync(class UObject* WorldContextObject, int32 AppID, int32 MaxLength, const TArray<class FString>& Feeds, int32 EndDate, int32 Count)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetNewsForApp", "GetNewsForAppAsync");

	Params::USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;
	Parms.MaxLength = MaxLength;
	Parms.Feeds = Feeds;
	Parms.EndDate = EndDate;
	Parms.Count = Count;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed.GetNewsForAppAuthedAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxLength                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Feeds                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              EndDate                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetNewsForAppAuthed*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetNewsForAppAuthed* USteamCoreWebAsyncActionGetNewsForAppAuthed::GetNewsForAppAuthedAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 MaxLength, const TArray<class FString>& Feeds, int32 EndDate, int32 Count)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetNewsForAppAuthed", "GetNewsForAppAuthedAsync");

	Params::USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.MaxLength = MaxLength;
	Parms.Feeds = Feeds;
	Parms.EndDate = EndDate;
	Parms.Count = Count;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebSteamUser.ResolveVanityURL
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VanityURL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVanityUrlType          URLType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamUser::ResolveVanityURL(FDelegateProperty_& Callback, const class FString& Key, const class FString& VanityURL, enum class EVanityUrlType URLType)
{
	static auto Func = Class->GetFunction("WebSteamUser", "ResolveVanityURL");

	Params::UWebSteamUser_ResolveVanityURL_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.VanityURL = VanityURL;
	Parms.URLType = URLType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamUser.GrantPackage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PackageId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ipaddress                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ThirdPartyKey                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ThirdPartyAppId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamUser::GrantPackage(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 PackageId, const class FString& Ipaddress, const class FString& ThirdPartyKey, int32 ThirdPartyAppId)
{
	static auto Func = Class->GetFunction("WebSteamUser", "GrantPackage");

	Params::UWebSteamUser_GrantPackage_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.PackageId = PackageId;
	Parms.Ipaddress = Ipaddress;
	Parms.ThirdPartyKey = ThirdPartyKey;
	Parms.ThirdPartyAppId = ThirdPartyAppId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamUser.GetUserGroupList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamUser::GetUserGroupList(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("WebSteamUser", "GetUserGroupList");

	Params::UWebSteamUser_GetUserGroupList_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnershipChanges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PackageRowVersion                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CDKeyRowVersion                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamUser::GetPublisherAppOwnershipChanges(FDelegateProperty_& Callback, const class FString& Key, const class FString& PackageRowVersion, const class FString& CDKeyRowVersion)
{
	static auto Func = Class->GetFunction("WebSteamUser", "GetPublisherAppOwnershipChanges");

	Params::UWebSteamUser_GetPublisherAppOwnershipChanges_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.PackageRowVersion = PackageRowVersion;
	Parms.CDKeyRowVersion = CDKeyRowVersion;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnership
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamUser::GetPublisherAppOwnership(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("WebSteamUser", "GetPublisherAppOwnership");

	Params::UWebSteamUser_GetPublisherAppOwnership_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamUser.GetPlayerSummaries
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              SteamIDs                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebSteamUser::GetPlayerSummaries(FDelegateProperty_& Callback, const class FString& Key, const TArray<class FString>& SteamIDs)
{
	static auto Func = Class->GetFunction("WebSteamUser", "GetPlayerSummaries");

	Params::UWebSteamUser_GetPlayerSummaries_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamIDs = SteamIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamUser.GetPlayerBans
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              SteamIDs                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebSteamUser::GetPlayerBans(FDelegateProperty_& Callback, const class FString& Key, const TArray<class FString>& SteamIDs)
{
	static auto Func = Class->GetFunction("WebSteamUser", "GetPlayerBans");

	Params::UWebSteamUser_GetPlayerBans_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamIDs = SteamIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamUser.GetFriendList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Relationship                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamUser::GetFriendList(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const class FString& Relationship)
{
	static auto Func = Class->GetFunction("WebSteamUser", "GetFriendList");

	Params::UWebSteamUser_GetFriendList_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.Relationship = Relationship;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamUser.GetAppPriceInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      AppIDs                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebSteamUser::GetAppPriceInfo(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const TArray<int32>& AppIDs)
{
	static auto Func = Class->GetFunction("WebSteamUser", "GetAppPriceInfo");

	Params::UWebSteamUser_GetAppPriceInfo_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppIDs = AppIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebSteamUser.CheckAppOwnership
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamUser::CheckAppOwnership(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("WebSteamUser", "CheckAppOwnership");

	Params::UWebSteamUser_CheckAppOwnership_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership.CheckAppOwnershipAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionCheckAppOwnership*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionCheckAppOwnership* USteamCoreWebAsyncActionCheckAppOwnership::CheckAppOwnershipAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionCheckAppOwnership", "CheckAppOwnershipAsync");

	Params::USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo.GetAppPriceInfoAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      AppIDs                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetAppPriceInfo*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetAppPriceInfo* USteamCoreWebAsyncActionGetAppPriceInfo::GetAppPriceInfoAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const TArray<int32>& AppIDs)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetAppPriceInfo", "GetAppPriceInfoAsync");

	Params::USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppIDs = AppIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList.GetFriendListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Relationship                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetFriendList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetFriendList* USteamCoreWebAsyncActionGetFriendList::GetFriendListAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& Relationship)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetFriendList", "GetFriendListAsync");

	Params::USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.Relationship = Relationship;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans.GetPlayerBansAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              SteamIDs                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPlayerBans*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetPlayerBans* USteamCoreWebAsyncActionGetPlayerBans::GetPlayerBansAsync(class UObject* WorldContextObject, const class FString& Key, const TArray<class FString>& SteamIDs)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetPlayerBans", "GetPlayerBansAsync");

	Params::USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamIDs = SteamIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries.GetPlayerSummariesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              SteamIDs                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPlayerSummaries*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetPlayerSummaries* USteamCoreWebAsyncActionGetPlayerSummaries::GetPlayerSummariesAsync(class UObject* WorldContextObject, const class FString& Key, const TArray<class FString>& SteamIDs)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetPlayerSummaries", "GetPlayerSummariesAsync");

	Params::USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamIDs = SteamIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership.GetPublisherAppOwnershipAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPublisherAppOwnership*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetPublisherAppOwnership* USteamCoreWebAsyncActionGetPublisherAppOwnership::GetPublisherAppOwnershipAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetPublisherAppOwnership", "GetPublisherAppOwnershipAsync");

	Params::USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.GetPublisherAppOwnershipChangesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PackageRowVersion                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CDKeyRowVersion                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::GetPublisherAppOwnershipChangesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& PackageRowVersion, const class FString& CDKeyRowVersion)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges", "GetPublisherAppOwnershipChangesAsync");

	Params::USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.PackageRowVersion = PackageRowVersion;
	Parms.CDKeyRowVersion = CDKeyRowVersion;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList.GetUserGroupListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetUserGroupList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetUserGroupList* USteamCoreWebAsyncActionGetUserGroupList::GetUserGroupListAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetUserGroupList", "GetUserGroupListAsync");

	Params::USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage.GrantPackageAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PackageId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ipaddress                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ThirdPartyKey                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ThirdPartyAppId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGrantPackage*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGrantPackage* USteamCoreWebAsyncActionGrantPackage::GrantPackageAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 PackageId, const class FString& Ipaddress, const class FString& ThirdPartyKey, int32 ThirdPartyAppId)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGrantPackage", "GrantPackageAsync");

	Params::USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.PackageId = PackageId;
	Parms.Ipaddress = Ipaddress;
	Parms.ThirdPartyKey = ThirdPartyKey;
	Parms.ThirdPartyAppId = ThirdPartyAppId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL.ResolveVanityURLAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VanityURL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVanityUrlType          URLType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionResolveVanityURL*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionResolveVanityURL* USteamCoreWebAsyncActionResolveVanityURL::ResolveVanityURLAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& VanityURL, enum class EVanityUrlType URLType)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionResolveVanityURL", "ResolveVanityURLAsync");

	Params::USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.VanityURL = VanityURL;
	Parms.URLType = URLType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebUserAuth.AuthenticateUserTicket
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ticket                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebUserAuth::AuthenticateUserTicket(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Ticket)
{
	static auto Func = Class->GetFunction("WebUserAuth", "AuthenticateUserTicket");

	Params::UWebUserAuth_AuthenticateUserTicket_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Ticket = Ticket;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebUserAuth.AuthenticateUser
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      SessionKey                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<uint8>                      EncryptedLoginKey                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebUserAuth::AuthenticateUser(FDelegateProperty_& Callback, const class FString& SteamID, const TArray<uint8>& SessionKey, const TArray<uint8>& EncryptedLoginKey)
{
	static auto Func = Class->GetFunction("WebUserAuth", "AuthenticateUser");

	Params::UWebUserAuth_AuthenticateUser_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamID = SteamID;
	Parms.SessionKey = SessionKey;
	Parms.EncryptedLoginKey = EncryptedLoginKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser.AuthenticateUserAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      SessionKey                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<uint8>                      EncryptedLoginKey                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionAuthenticateUser*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionAuthenticateUser* USteamCoreWebAsyncActionAuthenticateUser::AuthenticateUserAsync(class UObject* WorldContextObject, const class FString& SteamID, const TArray<uint8>& SessionKey, const TArray<uint8>& EncryptedLoginKey)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionAuthenticateUser", "AuthenticateUserAsync");

	Params::USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamID = SteamID;
	Parms.SessionKey = SessionKey;
	Parms.EncryptedLoginKey = EncryptedLoginKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket.AuthenticateUserTicketAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ticket                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionAuthenticateUserTicket*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionAuthenticateUserTicket* USteamCoreWebAsyncActionAuthenticateUserTicket::AuthenticateUserTicketAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& Ticket)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionAuthenticateUserTicket", "AuthenticateUserTicketAsync");

	Params::USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Ticket = Ticket;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.WebUserStats.SetUserStatsForGame
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Names                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Values                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebUserStats::SetUserStatsForGame(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const TArray<class FString>& Names, const TArray<int32>& Values)
{
	static auto Func = Class->GetFunction("WebUserStats", "SetUserStatsForGame");

	Params::UWebUserStats_SetUserStatsForGame_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.Names = Names;
	Parms.Values = Values;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebUserStats.GetUserStatsForGame
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebUserStats::GetUserStatsForGame(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("WebUserStats", "GetUserStatsForGame");

	Params::UWebUserStats_GetUserStatsForGame_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebUserStats.GetSchemaForGame
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebUserStats::GetSchemaForGame(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& Language)
{
	static auto Func = Class->GetFunction("WebUserStats", "GetSchemaForGame");

	Params::UWebUserStats_GetSchemaForGame_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebUserStats.GetPlayerAchievements
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebUserStats::GetPlayerAchievements(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& Language)
{
	static auto Func = Class->GetFunction("WebUserStats", "GetPlayerAchievements");

	Params::UWebUserStats_GetPlayerAchievements_Params Parms;

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebUserStats.GetNumberOfCurrentPlayers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebUserStats::GetNumberOfCurrentPlayers(FDelegateProperty_& Callback, int32 AppID)
{
	static auto Func = Class->GetFunction("WebUserStats", "GetNumberOfCurrentPlayers");

	Params::UWebUserStats_GetNumberOfCurrentPlayers_Params Parms;

	Parms.Callback = Callback;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebUserStats.GetGlobalStatsForGame
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Names                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              StartDate                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EndDate                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebUserStats::GetGlobalStatsForGame(FDelegateProperty_& Callback, int32 AppID, const TArray<class FString>& Names, int32 StartDate, int32 EndDate)
{
	static auto Func = Class->GetFunction("WebUserStats", "GetGlobalStatsForGame");

	Params::UWebUserStats_GetGlobalStatsForGame_Params Parms;

	Parms.Callback = Callback;
	Parms.AppID = AppID;
	Parms.Names = Names;
	Parms.StartDate = StartDate;
	Parms.EndDate = EndDate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.WebUserStats.GetGlobalAchievementPercentagesForApp
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      GameID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebUserStats::GetGlobalAchievementPercentagesForApp(FDelegateProperty_& Callback, const class FString& GameID)
{
	static auto Func = Class->GetFunction("WebUserStats", "GetGlobalAchievementPercentagesForApp");

	Params::UWebUserStats_GetGlobalAchievementPercentagesForApp_Params Parms;

	Parms.Callback = Callback;
	Parms.GameID = GameID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.GetGlobalAchievementPercentagesForAppAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      GameID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::GetGlobalAchievementPercentagesForAppAsync(class UObject* WorldContextObject, const class FString& GameID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp", "GetGlobalAchievementPercentagesForAppAsync");

	Params::USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.GameID = GameID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame.GetGlobalStatsForGameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Names                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              StartDate                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EndDate                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetGlobalStatsForGame*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetGlobalStatsForGame* USteamCoreWebAsyncActionGetGlobalStatsForGame::GetGlobalStatsForGameAsync(class UObject* WorldContextObject, int32 AppID, const TArray<class FString>& Names, int32 StartDate, int32 EndDate)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetGlobalStatsForGame", "GetGlobalStatsForGameAsync");

	Params::USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;
	Parms.Names = Names;
	Parms.StartDate = StartDate;
	Parms.EndDate = EndDate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetNumberOfCurrentPlayers", "GetNumberOfCurrentPlayersAsync");

	Params::USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements.GetPlayerAchievementsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPlayerAchievements*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetPlayerAchievements* USteamCoreWebAsyncActionGetPlayerAchievements::GetPlayerAchievementsAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& Language)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetPlayerAchievements", "GetPlayerAchievementsAsync");

	Params::USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame.GetSchemaForGameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetSchemaForGame*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetSchemaForGame* USteamCoreWebAsyncActionGetSchemaForGame::GetSchemaForGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& Language)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetSchemaForGame", "GetSchemaForGameAsync");

	Params::USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame.GetUserStatsForGameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetUserStatsForGame*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetUserStatsForGame* USteamCoreWebAsyncActionGetUserStatsForGame::GetUserStatsForGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionGetUserStatsForGame", "GetUserStatsForGameAsync");

	Params::USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame.SetUserStatsForGameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Names                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Values                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionSetUserStatsForGame*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionSetUserStatsForGame* USteamCoreWebAsyncActionSetUserStatsForGame::SetUserStatsForGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const TArray<class FString>& Names, const TArray<int32>& Values)
{
	static auto Func = Class->GetFunction("SteamCoreWebAsyncActionSetUserStatsForGame", "SetUserStatsForGameAsync");

	Params::USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.Names = Names;
	Parms.Values = Values;

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

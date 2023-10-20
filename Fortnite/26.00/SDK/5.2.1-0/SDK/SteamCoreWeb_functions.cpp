#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SteamCoreWeb.SteamCoreWeb
// (None)

class UClass* USteamCoreWeb::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWeb");

	return Clss;
}


// SteamCoreWeb SteamCoreWeb.Default__SteamCoreWeb
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWeb* USteamCoreWeb::GetDefaultObj()
{
	static class USteamCoreWeb* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWeb*>(USteamCoreWeb::StaticClass()->DefaultObject);

	return Default;
}


// Class SteamCoreWeb.SteamCoreWebSubsystem
// (None)

class UClass* USteamCoreWebSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebSubsystem");

	return Clss;
}


// SteamCoreWebSubsystem SteamCoreWeb.Default__SteamCoreWebSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebSubsystem* USteamCoreWebSubsystem::GetDefaultObj()
{
	static class USteamCoreWebSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebSubsystem*>(USteamCoreWebSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class SteamCoreWeb.SteamCoreWebAsyncAction
// (None)

class UClass* USteamCoreWebAsyncAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncAction");

	return Clss;
}


// SteamCoreWebAsyncAction SteamCoreWeb.Default__SteamCoreWebAsyncAction
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncAction* USteamCoreWebAsyncAction::GetDefaultObj()
{
	static class USteamCoreWebAsyncAction* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncAction*>(USteamCoreWebAsyncAction::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamCoreWeb.SteamCoreWebAsyncAction.HandleCallback
// (Native, Public)
// Parameters:
// class FString                      Data                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreWebAsyncAction::HandleCallback(const class FString& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncAction", "HandleCallback");

	Params::USteamCoreWebAsyncAction_HandleCallback_Params Parms{};

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebSettings
// (None)

class UClass* USteamCoreWebSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebSettings");

	return Clss;
}


// SteamCoreWebSettings SteamCoreWeb.Default__SteamCoreWebSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebSettings* USteamCoreWebSettings::GetDefaultObj()
{
	static class USteamCoreWebSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebSettings*>(USteamCoreWebSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class SteamCoreWeb.SteamWebUtilities
// (None)

class UClass* USteamWebUtilities::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamWebUtilities");

	return Clss;
}


// SteamWebUtilities SteamCoreWeb.Default__SteamWebUtilities
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamWebUtilities* USteamWebUtilities::GetDefaultObj()
{
	static class USteamWebUtilities* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamWebUtilities*>(USteamWebUtilities::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamCoreWeb.SteamWebUtilities.ParseJson
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamCoreJson>      Data                                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamWebUtilities::ParseJson(const class FString& JsonString, TArray<struct FSteamCoreJson>* Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamWebUtilities", "ParseJson");

	Params::USteamWebUtilities_ParseJson_Params Parms{};

	Parms.JsonString = JsonString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamWebUtilities", "GetProjectKey");

	Params::USteamWebUtilities_GetProjectKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamWebUtilities.GetProjectAppID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USteamWebUtilities::GetProjectAppID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamWebUtilities", "GetProjectAppID");

	Params::USteamWebUtilities_GetProjectAppID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SteamCoreWeb.SteamWebUtilities.GetDevSteamID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamWebUtilities::GetDevSteamID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamWebUtilities", "GetDevSteamID");

	Params::USteamWebUtilities_GetDevSteamID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamWebUtilities", "FindJsonStrings");

	Params::USteamWebUtilities_FindJsonStrings_Params Parms{};

	Parms.JsonString = JsonString;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamWebUtilities", "FindJsonString");

	Params::USteamWebUtilities_FindJsonString_Params Parms{};

	Parms.JsonString = JsonString;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamWebUtilities", "FindJsonNumbers");

	Params::USteamWebUtilities_FindJsonNumbers_Params Parms{};

	Parms.JsonString = JsonString;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamWebUtilities", "FindJsonNumber");

	Params::USteamWebUtilities_FindJsonNumber_Params Parms{};

	Parms.JsonString = JsonString;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamWebUtilities", "FindJsonBools");

	Params::USteamWebUtilities_FindJsonBools_Params Parms{};

	Parms.JsonString = JsonString;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamWebUtilities", "FindJsonBool");

	Params::USteamWebUtilities_FindJsonBool_Params Parms{};

	Parms.JsonString = JsonString;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bValue != nullptr)
		*bValue = Parms.bValue;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Class SteamCoreWeb.WebApps
// (None)

class UClass* UWebApps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebApps");

	return Clss;
}


// WebApps SteamCoreWeb.Default__WebApps
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebApps* UWebApps::GetDefaultObj()
{
	static class UWebApps* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebApps*>(UWebApps::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamCoreWeb.WebApps.UpToDateCheck
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Version                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::UpToDateCheck(FDelegateProperty_& Callback, int32 AppID, int32 Version)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebApps", "UpToDateCheck");

	Params::UWebApps_UpToDateCheck_Params Parms{};

	Parms.Callback = Callback;
	Parms.AppID = AppID;
	Parms.Version = Version;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebApps", "SetAppBuildLive");

	Params::UWebApps_SetAppBuildLive_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.BuildId = BuildId;
	Parms.BetaKey = BetaKey;
	Parms.Description = Description;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebApps.GetServersAtAddress
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Addr                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::GetServersAtAddress(FDelegateProperty_& Callback, const class FString& Addr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebApps", "GetServersAtAddress");

	Params::UWebApps_GetServersAtAddress_Params Parms{};

	Parms.Callback = Callback;
	Parms.Addr = Addr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebApps", "GetServerList");

	Params::UWebApps_GetServerList_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.Filter = Filter;
	Parms.Limit = Limit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebApps.GetPlayersBanned
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::GetPlayersBanned(FDelegateProperty_& Callback, const class FString& Key, int32 AppID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebApps", "GetPlayersBanned");

	Params::UWebApps_GetPlayersBanned_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebApps", "GetCheatingReports");

	Params::UWebApps_GetCheatingReports_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.TimeBegin = TimeBegin;
	Parms.TimeEnd = TimeEnd;
	Parms.bIncludeReports = bIncludeReports;
	Parms.bIncludeBans = bIncludeBans;
	Parms.ReportidMin = ReportidMin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebApps.GetAppList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::GetAppList(FDelegateProperty_& Callback, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebApps", "GetAppList");

	Params::UWebApps_GetAppList_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebApps.GetAppDepotVersions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::GetAppDepotVersions(FDelegateProperty_& Callback, const class FString& Key, int32 AppID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebApps", "GetAppDepotVersions");

	Params::UWebApps_GetAppDepotVersions_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebApps", "GetAppBuilds");

	Params::UWebApps_GetAppBuilds_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebApps.GetAppBetas
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebApps::GetAppBetas(FDelegateProperty_& Callback, const class FString& Key, int32 AppID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebApps", "GetAppBetas");

	Params::UWebApps_GetAppBetas_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas
// (None)

class UClass* USteamCoreAppsAsyncActionGetAppBetas::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetAppBetas");

	return Clss;
}


// SteamCoreAppsAsyncActionGetAppBetas SteamCoreWeb.Default__SteamCoreAppsAsyncActionGetAppBetas
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreAppsAsyncActionGetAppBetas* USteamCoreAppsAsyncActionGetAppBetas::GetDefaultObj()
{
	static class USteamCoreAppsAsyncActionGetAppBetas* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreAppsAsyncActionGetAppBetas*>(USteamCoreAppsAsyncActionGetAppBetas::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreAppsAsyncActionGetAppBetas", "GetAppBetasAsync");

	Params::USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds
// (None)

class UClass* USteamCoreAppsAsyncActionGetAppBuilds::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetAppBuilds");

	return Clss;
}


// SteamCoreAppsAsyncActionGetAppBuilds SteamCoreWeb.Default__SteamCoreAppsAsyncActionGetAppBuilds
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreAppsAsyncActionGetAppBuilds* USteamCoreAppsAsyncActionGetAppBuilds::GetDefaultObj()
{
	static class USteamCoreAppsAsyncActionGetAppBuilds* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreAppsAsyncActionGetAppBuilds*>(USteamCoreAppsAsyncActionGetAppBuilds::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreAppsAsyncActionGetAppBuilds", "GetAppBuildsAsync");

	Params::USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions
// (None)

class UClass* USteamCoreAppsAsyncActionGetAppDepotVersions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetAppDepotVersions");

	return Clss;
}


// SteamCoreAppsAsyncActionGetAppDepotVersions SteamCoreWeb.Default__SteamCoreAppsAsyncActionGetAppDepotVersions
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreAppsAsyncActionGetAppDepotVersions* USteamCoreAppsAsyncActionGetAppDepotVersions::GetDefaultObj()
{
	static class USteamCoreAppsAsyncActionGetAppDepotVersions* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreAppsAsyncActionGetAppDepotVersions*>(USteamCoreAppsAsyncActionGetAppDepotVersions::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreAppsAsyncActionGetAppDepotVersions", "GetAppDepotVersionsAsync");

	Params::USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList
// (None)

class UClass* USteamCoreAppsAsyncActionGetAppList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetAppList");

	return Clss;
}


// SteamCoreAppsAsyncActionGetAppList SteamCoreWeb.Default__SteamCoreAppsAsyncActionGetAppList
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreAppsAsyncActionGetAppList* USteamCoreAppsAsyncActionGetAppList::GetDefaultObj()
{
	static class USteamCoreAppsAsyncActionGetAppList* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreAppsAsyncActionGetAppList*>(USteamCoreAppsAsyncActionGetAppList::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList.HandleCallback
// (Native, Public, HasOutParams)
// Parameters:
// TArray<struct FWebAppsGetAppList>  Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreAppsAsyncActionGetAppList::HandleCallback(TArray<struct FWebAppsGetAppList>& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreAppsAsyncActionGetAppList", "HandleCallback");

	Params::USteamCoreAppsAsyncActionGetAppList_HandleCallback_Params Parms{};

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList.GetAppListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetAppList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreAppsAsyncActionGetAppList* USteamCoreAppsAsyncActionGetAppList::GetAppListAsync(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreAppsAsyncActionGetAppList", "GetAppListAsync");

	Params::USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports
// (None)

class UClass* USteamCoreAppsAsyncActionGetCheatingReports::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetCheatingReports");

	return Clss;
}


// SteamCoreAppsAsyncActionGetCheatingReports SteamCoreWeb.Default__SteamCoreAppsAsyncActionGetCheatingReports
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreAppsAsyncActionGetCheatingReports* USteamCoreAppsAsyncActionGetCheatingReports::GetDefaultObj()
{
	static class USteamCoreAppsAsyncActionGetCheatingReports* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreAppsAsyncActionGetCheatingReports*>(USteamCoreAppsAsyncActionGetCheatingReports::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreAppsAsyncActionGetCheatingReports", "GetCheatingReportsAsync");

	Params::USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.TimeBegin = TimeBegin;
	Parms.TimeEnd = TimeEnd;
	Parms.bIncludeReports = bIncludeReports;
	Parms.bIncludeBans = bIncludeBans;
	Parms.ReportidMin = ReportidMin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned
// (None)

class UClass* USteamCoreAppsAsyncActionGetPlayersBanned::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetPlayersBanned");

	return Clss;
}


// SteamCoreAppsAsyncActionGetPlayersBanned SteamCoreWeb.Default__SteamCoreAppsAsyncActionGetPlayersBanned
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreAppsAsyncActionGetPlayersBanned* USteamCoreAppsAsyncActionGetPlayersBanned::GetDefaultObj()
{
	static class USteamCoreAppsAsyncActionGetPlayersBanned* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreAppsAsyncActionGetPlayersBanned*>(USteamCoreAppsAsyncActionGetPlayersBanned::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreAppsAsyncActionGetPlayersBanned", "GetPlayersBannedAsync");

	Params::USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList
// (None)

class UClass* USteamCoreAppsAsyncActionGetServerList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetServerList");

	return Clss;
}


// SteamCoreAppsAsyncActionGetServerList SteamCoreWeb.Default__SteamCoreAppsAsyncActionGetServerList
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreAppsAsyncActionGetServerList* USteamCoreAppsAsyncActionGetServerList::GetDefaultObj()
{
	static class USteamCoreAppsAsyncActionGetServerList* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreAppsAsyncActionGetServerList*>(USteamCoreAppsAsyncActionGetServerList::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreAppsAsyncActionGetServerList", "GetServerListAsync");

	Params::USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.Filter = Filter;
	Parms.Limit = Limit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress
// (None)

class UClass* USteamCoreAppsAsyncActionGetServersAtAddress::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetServersAtAddress");

	return Clss;
}


// SteamCoreAppsAsyncActionGetServersAtAddress SteamCoreWeb.Default__SteamCoreAppsAsyncActionGetServersAtAddress
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreAppsAsyncActionGetServersAtAddress* USteamCoreAppsAsyncActionGetServersAtAddress::GetDefaultObj()
{
	static class USteamCoreAppsAsyncActionGetServersAtAddress* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreAppsAsyncActionGetServersAtAddress*>(USteamCoreAppsAsyncActionGetServersAtAddress::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress.GetServersAtAddressAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Addr                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetServersAtAddress*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreAppsAsyncActionGetServersAtAddress* USteamCoreAppsAsyncActionGetServersAtAddress::GetServersAtAddressAsync(class UObject* WorldContextObject, const class FString& Addr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreAppsAsyncActionGetServersAtAddress", "GetServersAtAddressAsync");

	Params::USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Addr = Addr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive
// (None)

class UClass* USteamCoreAppsAsyncActionSetAppBuildLive::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionSetAppBuildLive");

	return Clss;
}


// SteamCoreAppsAsyncActionSetAppBuildLive SteamCoreWeb.Default__SteamCoreAppsAsyncActionSetAppBuildLive
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreAppsAsyncActionSetAppBuildLive* USteamCoreAppsAsyncActionSetAppBuildLive::GetDefaultObj()
{
	static class USteamCoreAppsAsyncActionSetAppBuildLive* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreAppsAsyncActionSetAppBuildLive*>(USteamCoreAppsAsyncActionSetAppBuildLive::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreAppsAsyncActionSetAppBuildLive", "SetAppBuildLiveAsync");

	Params::USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.BuildId = BuildId;
	Parms.BetaKey = BetaKey;
	Parms.Description = Description;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck
// (None)

class UClass* USteamCoreAppsAsyncActionUpToDateCheck::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionUpToDateCheck");

	return Clss;
}


// SteamCoreAppsAsyncActionUpToDateCheck SteamCoreWeb.Default__SteamCoreAppsAsyncActionUpToDateCheck
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreAppsAsyncActionUpToDateCheck* USteamCoreAppsAsyncActionUpToDateCheck::GetDefaultObj()
{
	static class USteamCoreAppsAsyncActionUpToDateCheck* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreAppsAsyncActionUpToDateCheck*>(USteamCoreAppsAsyncActionUpToDateCheck::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreAppsAsyncActionUpToDateCheck", "UpToDateCheckAsync");

	Params::USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;
	Parms.Version = Version;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebBroadcastService
// (None)

class UClass* UWebBroadcastService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebBroadcastService");

	return Clss;
}


// WebBroadcastService SteamCoreWeb.Default__WebBroadcastService
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebBroadcastService* UWebBroadcastService::GetDefaultObj()
{
	static class UWebBroadcastService* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebBroadcastService*>(UWebBroadcastService::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBroadcastService", "PostGameDataFrame");

	Params::UWebBroadcastService_PostGameDataFrame_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.BroadcastId = BroadcastId;
	Parms.FrameData = FrameData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame
// (None)

class UClass* USteamCoreWebAsyncActionPostGameDataFrame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionPostGameDataFrame");

	return Clss;
}


// SteamCoreWebAsyncActionPostGameDataFrame SteamCoreWeb.Default__SteamCoreWebAsyncActionPostGameDataFrame
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionPostGameDataFrame* USteamCoreWebAsyncActionPostGameDataFrame::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionPostGameDataFrame* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionPostGameDataFrame*>(USteamCoreWebAsyncActionPostGameDataFrame::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionPostGameDataFrame", "PostGameDataFrameAsync");

	Params::USteamCoreWebAsyncActionPostGameDataFrame_PostGameDataFrameAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.BroadcastId = BroadcastId;
	Parms.FrameData = FrameData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebCheatReporting
// (None)

class UClass* UWebCheatReporting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebCheatReporting");

	return Clss;
}


// WebCheatReporting SteamCoreWeb.Default__WebCheatReporting
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebCheatReporting* UWebCheatReporting::GetDefaultObj()
{
	static class UWebCheatReporting* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebCheatReporting*>(UWebCheatReporting::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebCheatReporting", "StartSecureMultiplayerSession");

	Params::UWebCheatReporting_StartSecureMultiplayerSession_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebCheatReporting", "RequestVacStatusForUser");

	Params::UWebCheatReporting_RequestVacStatusForUser_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebCheatReporting", "RequestPlayerGameBan");

	Params::UWebCheatReporting_RequestPlayerGameBan_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ReportID = ReportID;
	Parms.CheatDescription = CheatDescription;
	Parms.Duration = Duration;
	Parms.bDelayBan = bDelayBan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebCheatReporting", "ReportPlayerCheating");

	Params::UWebCheatReporting_ReportPlayerCheating_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebCheatReporting", "ReportCheatData");

	Params::UWebCheatReporting_ReportCheatData_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebCheatReporting", "RemovePlayerGameBan");

	Params::UWebCheatReporting_RemovePlayerGameBan_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebCheatReporting", "GetCheatingReports");

	Params::UWebCheatReporting_GetCheatingReports_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.TimeEnd = TimeEnd;
	Parms.TimeBegin = TimeBegin;
	Parms.ReportidMin = ReportidMin;
	Parms.bIncludeReports = bIncludeReports;
	Parms.bIncludeBans = bIncludeBans;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebCheatReporting", "EndSecureMultiplayerSession");

	Params::UWebCheatReporting_EndSecureMultiplayerSession_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating
// (None)

class UClass* USteamCoreWebAsyncActionReportPlayerCheating::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionReportPlayerCheating");

	return Clss;
}


// SteamCoreWebAsyncActionReportPlayerCheating SteamCoreWeb.Default__SteamCoreWebAsyncActionReportPlayerCheating
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionReportPlayerCheating* USteamCoreWebAsyncActionReportPlayerCheating::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionReportPlayerCheating* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionReportPlayerCheating*>(USteamCoreWebAsyncActionReportPlayerCheating::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionReportPlayerCheating", "ReportPlayerCheatingAsync");

	Params::USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan
// (None)

class UClass* USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRequestPlayerGameBan");

	return Clss;
}


// SteamCoreWebAsyncActionRequestPlayerGameBan SteamCoreWeb.Default__SteamCoreWebAsyncActionRequestPlayerGameBan
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionRequestPlayerGameBan* USteamCoreWebAsyncActionRequestPlayerGameBan::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionRequestPlayerGameBan* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionRequestPlayerGameBan*>(USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionRequestPlayerGameBan", "RequestPlayerGameBanAsync");

	Params::USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ReportID = ReportID;
	Parms.CheatDescription = CheatDescription;
	Parms.Duration = Duration;
	Parms.bDelayBan = bDelayBan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan
// (None)

class UClass* USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRemovePlayerGameBan");

	return Clss;
}


// SteamCoreWebAsyncActionRemovePlayerGameBan SteamCoreWeb.Default__SteamCoreWebAsyncActionRemovePlayerGameBan
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionRemovePlayerGameBan* USteamCoreWebAsyncActionRemovePlayerGameBan::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionRemovePlayerGameBan* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionRemovePlayerGameBan*>(USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionRemovePlayerGameBan", "RemovePlayerGameBanAsync");

	Params::USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports
// (None)

class UClass* USteamCoreWebAsyncActionGetCheatingReports::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetCheatingReports");

	return Clss;
}


// SteamCoreWebAsyncActionGetCheatingReports SteamCoreWeb.Default__SteamCoreWebAsyncActionGetCheatingReports
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetCheatingReports* USteamCoreWebAsyncActionGetCheatingReports::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetCheatingReports* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetCheatingReports*>(USteamCoreWebAsyncActionGetCheatingReports::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetCheatingReports", "GetCheatingReportsAsync");

	Params::USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.TimeEnd = TimeEnd;
	Parms.TimeBegin = TimeBegin;
	Parms.ReportidMin = ReportidMin;
	Parms.bIncludeReports = bIncludeReports;
	Parms.bIncludeBans = bIncludeBans;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData
// (None)

class UClass* USteamCoreWebAsyncActionReportCheatData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionReportCheatData");

	return Clss;
}


// SteamCoreWebAsyncActionReportCheatData SteamCoreWeb.Default__SteamCoreWebAsyncActionReportCheatData
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionReportCheatData* USteamCoreWebAsyncActionReportCheatData::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionReportCheatData* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionReportCheatData*>(USteamCoreWebAsyncActionReportCheatData::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionReportCheatData", "ReportCheatDataAsync");

	Params::USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser
// (None)

class UClass* USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRequestVacStatusForUser");

	return Clss;
}


// SteamCoreWebAsyncActionRequestVacStatusForUser SteamCoreWeb.Default__SteamCoreWebAsyncActionRequestVacStatusForUser
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionRequestVacStatusForUser* USteamCoreWebAsyncActionRequestVacStatusForUser::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionRequestVacStatusForUser* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionRequestVacStatusForUser*>(USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionRequestVacStatusForUser", "RequestVacStatusForUserAsync");

	Params::USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession
// (None)

class UClass* USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionStartSecureMultiplayerSession");

	return Clss;
}


// SteamCoreWebAsyncActionStartSecureMultiplayerSession SteamCoreWeb.Default__SteamCoreWebAsyncActionStartSecureMultiplayerSession
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionStartSecureMultiplayerSession* USteamCoreWebAsyncActionStartSecureMultiplayerSession::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionStartSecureMultiplayerSession* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionStartSecureMultiplayerSession*>(USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionStartSecureMultiplayerSession", "StartSecureMultiplayerSessionAsync");

	Params::USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession
// (None)

class UClass* USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionEndSecureMultiplayerSession");

	return Clss;
}


// SteamCoreWebAsyncActionEndSecureMultiplayerSession SteamCoreWeb.Default__SteamCoreWebAsyncActionEndSecureMultiplayerSession
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionEndSecureMultiplayerSession* USteamCoreWebAsyncActionEndSecureMultiplayerSession::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionEndSecureMultiplayerSession* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionEndSecureMultiplayerSession*>(USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionEndSecureMultiplayerSession", "EndSecureMultiplayerSessionAsync");

	Params::USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.SessionId = SessionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebEconMarketService
// (None)

class UClass* UWebEconMarketService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebEconMarketService");

	return Clss;
}


// WebEconMarketService SteamCoreWeb.Default__WebEconMarketService
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebEconMarketService* UWebEconMarketService::GetDefaultObj()
{
	static class UWebEconMarketService* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebEconMarketService*>(UWebEconMarketService::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebEconMarketService", "GetPopular");

	Params::UWebEconMarketService_GetPopular_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.Language = Language;
	Parms.Rows = Rows;
	Parms.Start = Start;
	Parms.FilterAppId = FilterAppId;
	Parms.ECurrency = ECurrency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebEconMarketService.GetMarketEligibility
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconMarketService::GetMarketEligibility(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebEconMarketService", "GetMarketEligibility");

	Params::UWebEconMarketService_GetMarketEligibility_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebEconMarketService", "GetAssetID");

	Params::UWebEconMarketService_GetAssetID_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ListingId = ListingId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebEconMarketService", "CancelAppListingsForUser");

	Params::UWebEconMarketService_CancelAppListingsForUser_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.bSynchronous = bSynchronous;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility
// (None)

class UClass* USteamCoreWebAsyncActionGetMarketEligibility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetMarketEligibility");

	return Clss;
}


// SteamCoreWebAsyncActionGetMarketEligibility SteamCoreWeb.Default__SteamCoreWebAsyncActionGetMarketEligibility
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetMarketEligibility* USteamCoreWebAsyncActionGetMarketEligibility::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetMarketEligibility* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetMarketEligibility*>(USteamCoreWebAsyncActionGetMarketEligibility::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetMarketEligibility", "GetMarketEligibilityAsync");

	Params::USteamCoreWebAsyncActionGetMarketEligibility_GetMarketEligibilityAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser
// (None)

class UClass* USteamCoreWebAsyncActionCancelAppListingsForUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionCancelAppListingsForUser");

	return Clss;
}


// SteamCoreWebAsyncActionCancelAppListingsForUser SteamCoreWeb.Default__SteamCoreWebAsyncActionCancelAppListingsForUser
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionCancelAppListingsForUser* USteamCoreWebAsyncActionCancelAppListingsForUser::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionCancelAppListingsForUser* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionCancelAppListingsForUser*>(USteamCoreWebAsyncActionCancelAppListingsForUser::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionCancelAppListingsForUser", "CancelAppListingsForUserAsync");

	Params::USteamCoreWebAsyncActionCancelAppListingsForUser_CancelAppListingsForUserAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.bSynchronous = bSynchronous;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID
// (None)

class UClass* USteamCoreWebAsyncActionGetAssetID::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetAssetID");

	return Clss;
}


// SteamCoreWebAsyncActionGetAssetID SteamCoreWeb.Default__SteamCoreWebAsyncActionGetAssetID
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetAssetID* USteamCoreWebAsyncActionGetAssetID::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetAssetID* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetAssetID*>(USteamCoreWebAsyncActionGetAssetID::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetAssetID", "GetAssetIDAsync");

	Params::USteamCoreWebAsyncActionGetAssetID_GetAssetIDAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ListingId = ListingId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPopular
// (None)

class UClass* USteamCoreWebAsyncActionGetPopular::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPopular");

	return Clss;
}


// SteamCoreWebAsyncActionGetPopular SteamCoreWeb.Default__SteamCoreWebAsyncActionGetPopular
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetPopular* USteamCoreWebAsyncActionGetPopular::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetPopular* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetPopular*>(USteamCoreWebAsyncActionGetPopular::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetPopular", "GetPopularAsync");

	Params::USteamCoreWebAsyncActionGetPopular_GetPopularAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.Language = Language;
	Parms.Rows = Rows;
	Parms.Start = Start;
	Parms.FilterAppId = FilterAppId;
	Parms.ECurrency = ECurrency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebEconService
// (None)

class UClass* UWebEconService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebEconService");

	return Clss;
}


// WebEconService SteamCoreWeb.Default__WebEconService
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebEconService* UWebEconService::GetDefaultObj()
{
	static class UWebEconService* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebEconService*>(UWebEconService::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamCoreWeb.WebEconService.GetTradeOffersSummary
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TimeLastVisit                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconService::GetTradeOffersSummary(FDelegateProperty_& Callback, const class FString& Key, int32 TimeLastVisit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebEconService", "GetTradeOffersSummary");

	Params::UWebEconService_GetTradeOffersSummary_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.TimeLastVisit = TimeLastVisit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebEconService", "GetTradeOffers");

	Params::UWebEconService_GetTradeOffers_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.bGetSentOffers = bGetSentOffers;
	Parms.bGetReceivedOffers = bGetReceivedOffers;
	Parms.bGetDescriptions = bGetDescriptions;
	Parms.Language = Language;
	Parms.bActiveOnly = bActiveOnly;
	Parms.bHistoricalOnly = bHistoricalOnly;
	Parms.TimeHistoricalCutoff = TimeHistoricalCutoff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebEconService", "GetTradeOffer");

	Params::UWebEconService_GetTradeOffer_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.TradeOfferId = TradeOfferId;
	Parms.Language = Language;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebEconService", "GetTradeHistory");

	Params::UWebEconService_GetTradeHistory_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebEconService", "FlushInventoryCache");

	Params::UWebEconService_FlushInventoryCache_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ContextID = ContextID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebEconService.FlushContextCache
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconService::FlushContextCache(FDelegateProperty_& Callback, const class FString& Key, int32 AppID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebEconService", "FlushContextCache");

	Params::UWebEconService_FlushContextCache_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebEconService.FlushAssetAppearanceCache
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconService::FlushAssetAppearanceCache(FDelegateProperty_& Callback, const class FString& Key, int32 AppID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebEconService", "FlushAssetAppearanceCache");

	Params::UWebEconService_FlushAssetAppearanceCache_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebEconService.DeclineTradeOffer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TradeOfferId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconService::DeclineTradeOffer(FDelegateProperty_& Callback, const class FString& Key, const class FString& TradeOfferId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebEconService", "DeclineTradeOffer");

	Params::UWebEconService_DeclineTradeOffer_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.TradeOfferId = TradeOfferId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebEconService.CancelTradeOffer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TradeOfferId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebEconService::CancelTradeOffer(FDelegateProperty_& Callback, const class FString& Key, const class FString& TradeOfferId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebEconService", "CancelTradeOffer");

	Params::UWebEconService_CancelTradeOffer_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.TradeOfferId = TradeOfferId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory
// (None)

class UClass* USteamCoreWebAsyncActionGetTradeHistory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetTradeHistory");

	return Clss;
}


// SteamCoreWebAsyncActionGetTradeHistory SteamCoreWeb.Default__SteamCoreWebAsyncActionGetTradeHistory
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetTradeHistory* USteamCoreWebAsyncActionGetTradeHistory::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetTradeHistory* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetTradeHistory*>(USteamCoreWebAsyncActionGetTradeHistory::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetTradeHistory", "GetTradeHistoryAsync");

	Params::USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache
// (None)

class UClass* USteamCoreWebAsyncActionFlushInventoryCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionFlushInventoryCache");

	return Clss;
}


// SteamCoreWebAsyncActionFlushInventoryCache SteamCoreWeb.Default__SteamCoreWebAsyncActionFlushInventoryCache
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionFlushInventoryCache* USteamCoreWebAsyncActionFlushInventoryCache::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionFlushInventoryCache* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionFlushInventoryCache*>(USteamCoreWebAsyncActionFlushInventoryCache::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionFlushInventoryCache", "FlushInventoryCacheAsync");

	Params::USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ContextID = ContextID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache
// (None)

class UClass* USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionFlushAssetAppearanceCache");

	return Clss;
}


// SteamCoreWebAsyncActionFlushAssetAppearanceCache SteamCoreWeb.Default__SteamCoreWebAsyncActionFlushAssetAppearanceCache
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionFlushAssetAppearanceCache* USteamCoreWebAsyncActionFlushAssetAppearanceCache::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionFlushAssetAppearanceCache* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionFlushAssetAppearanceCache*>(USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionFlushAssetAppearanceCache", "FlushAssetAppearanceCacheAsync");

	Params::USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache
// (None)

class UClass* USteamCoreWebAsyncActionFlushContextCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionFlushContextCache");

	return Clss;
}


// SteamCoreWebAsyncActionFlushContextCache SteamCoreWeb.Default__SteamCoreWebAsyncActionFlushContextCache
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionFlushContextCache* USteamCoreWebAsyncActionFlushContextCache::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionFlushContextCache* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionFlushContextCache*>(USteamCoreWebAsyncActionFlushContextCache::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionFlushContextCache", "FlushContextCacheAsync");

	Params::USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers
// (None)

class UClass* USteamCoreWebAsyncActionGetTradeOffers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetTradeOffers");

	return Clss;
}


// SteamCoreWebAsyncActionGetTradeOffers SteamCoreWeb.Default__SteamCoreWebAsyncActionGetTradeOffers
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetTradeOffers* USteamCoreWebAsyncActionGetTradeOffers::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetTradeOffers* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetTradeOffers*>(USteamCoreWebAsyncActionGetTradeOffers::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetTradeOffers", "GetTradeOffersAsync");

	Params::USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.bGetSentOffers = bGetSentOffers;
	Parms.bGetReceivedOffers = bGetReceivedOffers;
	Parms.bGetDescriptions = bGetDescriptions;
	Parms.Language = Language;
	Parms.bActiveOnly = bActiveOnly;
	Parms.bHistoricalOnly = bHistoricalOnly;
	Parms.TimeHistoricalCutoff = TimeHistoricalCutoff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer
// (None)

class UClass* USteamCoreWebAsyncActionGetTradeOffer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetTradeOffer");

	return Clss;
}


// SteamCoreWebAsyncActionGetTradeOffer SteamCoreWeb.Default__SteamCoreWebAsyncActionGetTradeOffer
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetTradeOffer* USteamCoreWebAsyncActionGetTradeOffer::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetTradeOffer* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetTradeOffer*>(USteamCoreWebAsyncActionGetTradeOffer::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetTradeOffer", "GetTradeOfferAsync");

	Params::USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.TradeOfferId = TradeOfferId;
	Parms.Language = Language;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary
// (None)

class UClass* USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetTradeOffersSummary");

	return Clss;
}


// SteamCoreWebAsyncActionGetTradeOffersSummary SteamCoreWeb.Default__SteamCoreWebAsyncActionGetTradeOffersSummary
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetTradeOffersSummary* USteamCoreWebAsyncActionGetTradeOffersSummary::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetTradeOffersSummary* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetTradeOffersSummary*>(USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetTradeOffersSummary", "GetTradeOffersSummaryAsync");

	Params::USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.TimeLastVisit = TimeLastVisit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer
// (None)

class UClass* USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionDeclineTradeOffer");

	return Clss;
}


// SteamCoreWebAsyncActionDeclineTradeOffer SteamCoreWeb.Default__SteamCoreWebAsyncActionDeclineTradeOffer
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionDeclineTradeOffer* USteamCoreWebAsyncActionDeclineTradeOffer::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionDeclineTradeOffer* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionDeclineTradeOffer*>(USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionDeclineTradeOffer", "DeclineTradeOfferAsync");

	Params::USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.TradeOfferId = TradeOfferId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer
// (None)

class UClass* USteamCoreWebAsyncActionCancelTradeOffer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionCancelTradeOffer");

	return Clss;
}


// SteamCoreWebAsyncActionCancelTradeOffer SteamCoreWeb.Default__SteamCoreWebAsyncActionCancelTradeOffer
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionCancelTradeOffer* USteamCoreWebAsyncActionCancelTradeOffer::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionCancelTradeOffer* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionCancelTradeOffer*>(USteamCoreWebAsyncActionCancelTradeOffer::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionCancelTradeOffer", "CancelTradeOfferAsync");

	Params::USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.TradeOfferId = TradeOfferId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebGameInventory
// (None)

class UClass* UWebGameInventory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebGameInventory");

	return Clss;
}


// WebGameInventory SteamCoreWeb.Default__WebGameInventory
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebGameInventory* UWebGameInventory::GetDefaultObj()
{
	static class UWebGameInventory* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebGameInventory*>(UWebGameInventory::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamCoreWeb.WebGameInventory.UpdateItemDefs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWebGameInventory::UpdateItemDefs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameInventory", "UpdateItemDefs");

	Params::UWebGameInventory_UpdateItemDefs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameInventory", "SupportGetAssetHistory");

	Params::UWebGameInventory_SupportGetAssetHistory_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.AssetId = AssetId;
	Parms.ContextID = ContextID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameInventory", "HistoryExecuteCommands");

	Params::UWebGameInventory_HistoryExecuteCommands_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ContextID = ContextID;
	Parms.ActorId = ActorId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameInventory", "GetUserHistory");

	Params::UWebGameInventory_GetUserHistory_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ContextID = ContextID;
	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameInventory", "GetHistoryCommandDetails");

	Params::UWebGameInventory_GetHistoryCommandDetails_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.Command = Command;
	Parms.ContextID = ContextID;
	Parms.Arguments = Arguments;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails
// (None)

class UClass* USteamCoreWebAsyncActionGetHistoryCommandDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetHistoryCommandDetails");

	return Clss;
}


// SteamCoreWebAsyncActionGetHistoryCommandDetails SteamCoreWeb.Default__SteamCoreWebAsyncActionGetHistoryCommandDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetHistoryCommandDetails* USteamCoreWebAsyncActionGetHistoryCommandDetails::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetHistoryCommandDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetHistoryCommandDetails*>(USteamCoreWebAsyncActionGetHistoryCommandDetails::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetHistoryCommandDetails", "GetHistoryCommandDetailsAsync");

	Params::USteamCoreWebAsyncActionGetHistoryCommandDetails_GetHistoryCommandDetailsAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.Command = Command;
	Parms.ContextID = ContextID;
	Parms.Arguments = Arguments;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory
// (None)

class UClass* USteamCoreWebAsyncActionGetUserHistory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetUserHistory");

	return Clss;
}


// SteamCoreWebAsyncActionGetUserHistory SteamCoreWeb.Default__SteamCoreWebAsyncActionGetUserHistory
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetUserHistory* USteamCoreWebAsyncActionGetUserHistory::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetUserHistory* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetUserHistory*>(USteamCoreWebAsyncActionGetUserHistory::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetUserHistory", "GetUserHistoryAsync");

	Params::USteamCoreWebAsyncActionGetUserHistory_GetUserHistoryAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ContextID = ContextID;
	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand
// (None)

class UClass* USteamCoreWebAsyncActionHistoryExecuteCommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionHistoryExecuteCommand");

	return Clss;
}


// SteamCoreWebAsyncActionHistoryExecuteCommand SteamCoreWeb.Default__SteamCoreWebAsyncActionHistoryExecuteCommand
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionHistoryExecuteCommand* USteamCoreWebAsyncActionHistoryExecuteCommand::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionHistoryExecuteCommand* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionHistoryExecuteCommand*>(USteamCoreWebAsyncActionHistoryExecuteCommand::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionHistoryExecuteCommand", "HistoryExecuteCommandAsync");

	Params::USteamCoreWebAsyncActionHistoryExecuteCommand_HistoryExecuteCommandAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ContextID = ContextID;
	Parms.ActorId = ActorId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory
// (None)

class UClass* USteamCoreWebAsyncActionSupportGetAssetHistory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionSupportGetAssetHistory");

	return Clss;
}


// SteamCoreWebAsyncActionSupportGetAssetHistory SteamCoreWeb.Default__SteamCoreWebAsyncActionSupportGetAssetHistory
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionSupportGetAssetHistory* USteamCoreWebAsyncActionSupportGetAssetHistory::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionSupportGetAssetHistory* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionSupportGetAssetHistory*>(USteamCoreWebAsyncActionSupportGetAssetHistory::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionSupportGetAssetHistory", "SupportGetAssetHistoryAsync");

	Params::USteamCoreWebAsyncActionSupportGetAssetHistory_SupportGetAssetHistoryAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.AssetId = AssetId;
	Parms.ContextID = ContextID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebGameNotificationsService
// (None)

class UClass* UWebGameNotificationsService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebGameNotificationsService");

	return Clss;
}


// WebGameNotificationsService SteamCoreWeb.Default__WebGameNotificationsService
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebGameNotificationsService* UWebGameNotificationsService::GetDefaultObj()
{
	static class UWebGameNotificationsService* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebGameNotificationsService*>(UWebGameNotificationsService::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameNotificationsService", "UpdateSession");

	Params::UWebGameNotificationsService_UpdateSession_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SessionId = SessionId;
	Parms.AppID = AppID;
	Parms.Title = Title;
	Parms.Users = Users;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameNotificationsService", "RequestNotifications");

	Params::UWebGameNotificationsService_RequestNotifications_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameNotificationsService", "GetSessionDetailsForApp");

	Params::UWebGameNotificationsService_GetSessionDetailsForApp_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.Sessions = Sessions;
	Parms.AppID = AppID;
	Parms.Language = Language;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameNotificationsService", "EnumerateSessionsForApp");

	Params::UWebGameNotificationsService_EnumerateSessionsForApp_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.bIncludeAllUserMessages = bIncludeAllUserMessages;
	Parms.bIncludeAuthUserMessage = bIncludeAuthUserMessage;
	Parms.Language = Language;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameNotificationsService", "DeleteSessionBatch");

	Params::UWebGameNotificationsService_DeleteSessionBatch_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SessionId = SessionId;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameNotificationsService", "DeleteSession");

	Params::UWebGameNotificationsService_DeleteSession_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SessionId = SessionId;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameNotificationsService", "CreateSession");

	Params::UWebGameNotificationsService_CreateSession_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Context = Context;
	Parms.Title = Title;
	Parms.Users = Users;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionCreateSession
// (None)

class UClass* USteamCoreWebAsyncActionCreateSession::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionCreateSession");

	return Clss;
}


// SteamCoreWebAsyncActionCreateSession SteamCoreWeb.Default__SteamCoreWebAsyncActionCreateSession
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionCreateSession* USteamCoreWebAsyncActionCreateSession::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionCreateSession* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionCreateSession*>(USteamCoreWebAsyncActionCreateSession::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionCreateSession", "CreateSessionAsync");

	Params::USteamCoreWebAsyncActionCreateSession_CreateSessionAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Context = Context;
	Parms.Title = Title;
	Parms.Users = Users;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession
// (None)

class UClass* USteamCoreWebAsyncActionUpdateSession::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionUpdateSession");

	return Clss;
}


// SteamCoreWebAsyncActionUpdateSession SteamCoreWeb.Default__SteamCoreWebAsyncActionUpdateSession
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionUpdateSession* USteamCoreWebAsyncActionUpdateSession::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionUpdateSession* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionUpdateSession*>(USteamCoreWebAsyncActionUpdateSession::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionUpdateSession", "UpdateSessionAsync");

	Params::USteamCoreWebAsyncActionUpdateSession_UpdateSessionAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SessionId = SessionId;
	Parms.AppID = AppID;
	Parms.Title = Title;
	Parms.Users = Users;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp
// (None)

class UClass* USteamCoreWebAsyncActionEnumerateSessionsForApp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionEnumerateSessionsForApp");

	return Clss;
}


// SteamCoreWebAsyncActionEnumerateSessionsForApp SteamCoreWeb.Default__SteamCoreWebAsyncActionEnumerateSessionsForApp
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionEnumerateSessionsForApp* USteamCoreWebAsyncActionEnumerateSessionsForApp::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionEnumerateSessionsForApp* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionEnumerateSessionsForApp*>(USteamCoreWebAsyncActionEnumerateSessionsForApp::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionEnumerateSessionsForApp", "EnumerateSessionsForAppAsync");

	Params::USteamCoreWebAsyncActionEnumerateSessionsForApp_EnumerateSessionsForAppAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.bIncludeAllUserMessages = bIncludeAllUserMessages;
	Parms.bIncludeAuthUserMessage = bIncludeAuthUserMessage;
	Parms.Language = Language;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp
// (None)

class UClass* USteamCoreWebAsyncActionGetSessionDetailsForApp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetSessionDetailsForApp");

	return Clss;
}


// SteamCoreWebAsyncActionGetSessionDetailsForApp SteamCoreWeb.Default__SteamCoreWebAsyncActionGetSessionDetailsForApp
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetSessionDetailsForApp* USteamCoreWebAsyncActionGetSessionDetailsForApp::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetSessionDetailsForApp* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetSessionDetailsForApp*>(USteamCoreWebAsyncActionGetSessionDetailsForApp::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetSessionDetailsForApp", "GetSessionDetailsForAppAsync");

	Params::USteamCoreWebAsyncActionGetSessionDetailsForApp_GetSessionDetailsForAppAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.Sessions = Sessions;
	Parms.AppID = AppID;
	Parms.Language = Language;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications
// (None)

class UClass* USteamCoreWebAsyncActionRequestNotifications::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRequestNotifications");

	return Clss;
}


// SteamCoreWebAsyncActionRequestNotifications SteamCoreWeb.Default__SteamCoreWebAsyncActionRequestNotifications
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionRequestNotifications* USteamCoreWebAsyncActionRequestNotifications::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionRequestNotifications* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionRequestNotifications*>(USteamCoreWebAsyncActionRequestNotifications::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionRequestNotifications", "RequestNotificationsAsync");

	Params::USteamCoreWebAsyncActionRequestNotifications_RequestNotificationsAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession
// (None)

class UClass* USteamCoreWebAsyncActionDeleteSession::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionDeleteSession");

	return Clss;
}


// SteamCoreWebAsyncActionDeleteSession SteamCoreWeb.Default__SteamCoreWebAsyncActionDeleteSession
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionDeleteSession* USteamCoreWebAsyncActionDeleteSession::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionDeleteSession* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionDeleteSession*>(USteamCoreWebAsyncActionDeleteSession::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionDeleteSession", "DeleteSessionAsync");

	Params::USteamCoreWebAsyncActionDeleteSession_DeleteSessionAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SessionId = SessionId;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch
// (None)

class UClass* USteamCoreWebAsyncActionDeleteSessionBatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionDeleteSessionBatch");

	return Clss;
}


// SteamCoreWebAsyncActionDeleteSessionBatch SteamCoreWeb.Default__SteamCoreWebAsyncActionDeleteSessionBatch
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionDeleteSessionBatch* USteamCoreWebAsyncActionDeleteSessionBatch::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionDeleteSessionBatch* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionDeleteSessionBatch*>(USteamCoreWebAsyncActionDeleteSessionBatch::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionDeleteSessionBatch", "DeleteSessionBatchAsync");

	Params::USteamCoreWebAsyncActionDeleteSessionBatch_DeleteSessionBatchAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SessionId = SessionId;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebGameServersService
// (None)

class UClass* UWebGameServersService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebGameServersService");

	return Clss;
}


// WebGameServersService SteamCoreWeb.Default__WebGameServersService
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebGameServersService* UWebGameServersService::GetDefaultObj()
{
	static class UWebGameServersService* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebGameServersService*>(UWebGameServersService::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameServersService", "SetMemo");

	Params::UWebGameServersService_SetMemo_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.Memo = Memo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameServersService", "SetBanStatus");

	Params::UWebGameServersService_SetBanStatus_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.bBanned = bBanned;
	Parms.banSeconds = banSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebGameServersService.ResetLoginToken
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::ResetLoginToken(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameServersService", "ResetLoginToken");

	Params::UWebGameServersService_ResetLoginToken_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebGameServersService.QueryLoginToken
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LoginToken                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::QueryLoginToken(FDelegateProperty_& Callback, const class FString& Key, const class FString& LoginToken)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameServersService", "QueryLoginToken");

	Params::UWebGameServersService_QueryLoginToken_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.LoginToken = LoginToken;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebGameServersService.GetServerSteamIDsByIP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ServerIP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::GetServerSteamIDsByIP(FDelegateProperty_& Callback, const class FString& Key, const class FString& ServerIP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameServersService", "GetServerSteamIDsByIP");

	Params::UWebGameServersService_GetServerSteamIDsByIP_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.ServerIP = ServerIP;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebGameServersService.GetServerIPsBySteamID
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ServerSteamId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::GetServerIPsBySteamID(FDelegateProperty_& Callback, const class FString& Key, const class FString& ServerSteamId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameServersService", "GetServerIPsBySteamID");

	Params::UWebGameServersService_GetServerIPsBySteamID_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.ServerSteamId = ServerSteamId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebGameServersService.GetAccountPublicInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::GetAccountPublicInfo(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameServersService", "GetAccountPublicInfo");

	Params::UWebGameServersService_GetAccountPublicInfo_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebGameServersService.GetAccountList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::GetAccountList(FDelegateProperty_& Callback, const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameServersService", "GetAccountList");

	Params::UWebGameServersService_GetAccountList_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebGameServersService.DeleteAccount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebGameServersService::DeleteAccount(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameServersService", "DeleteAccount");

	Params::UWebGameServersService_DeleteAccount_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebGameServersService", "CreateAccount");

	Params::UWebGameServersService_CreateAccount_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Memo = Memo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.WebInventoryService
// (None)

class UClass* UWebInventoryService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebInventoryService");

	return Clss;
}


// WebInventoryService SteamCoreWeb.Default__WebInventoryService
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebInventoryService* UWebInventoryService::GetDefaultObj()
{
	static class UWebInventoryService* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebInventoryService*>(UWebInventoryService::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebInventoryService", "ModifyItems");

	Params::UWebInventoryService_ModifyItems_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.InputJson = InputJson;
	Parms.SteamID = SteamID;
	Parms.Timestamp = Timestamp;
	Parms.Updates = Updates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebInventoryService", "GetQuantity");

	Params::UWebInventoryService_GetQuantity_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ItemdefIDs = ItemdefIDs;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebInventoryService.GetPriceSheet
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Currency                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebInventoryService::GetPriceSheet(FDelegateProperty_& Callback, const class FString& Key, int32 Currency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebInventoryService", "GetPriceSheet");

	Params::UWebInventoryService_GetPriceSheet_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.Currency = Currency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebInventoryService", "GetItemDefs");

	Params::UWebInventoryService_GetItemDefs_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ModifiedSince = ModifiedSince;
	Parms.ItemdefIDs = ItemdefIDs;
	Parms.WorkshopIDs = WorkshopIDs;
	Parms.CacheMaxAgeSeconds = CacheMaxAgeSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebInventoryService", "GetInventory");

	Params::UWebInventoryService_GetInventory_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebInventoryService", "ExchangeItem");

	Params::UWebInventoryService_ExchangeItem_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.MaterialsItemID = MaterialsItemID;
	Parms.MaterialsQuantity = MaterialsQuantity;
	Parms.OutputItemdefId = OutputItemdefId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebInventoryService", "ConsumeItem");

	Params::UWebInventoryService_ConsumeItem_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ItemId = ItemId;
	Parms.Quantity = Quantity;
	Parms.SteamID = SteamID;
	Parms.RequestId = RequestId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebInventoryService", "Consolidate");

	Params::UWebInventoryService_Consolidate_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ItemdefIDs = ItemdefIDs;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebInventoryService", "AddPromoItem");

	Params::UWebInventoryService_AddPromoItem_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ItemdefId = ItemdefId;
	Parms.ItemPropsJson = ItemPropsJson;
	Parms.SteamID = SteamID;
	Parms.bNotify = bNotify;
	Parms.RequestId = RequestId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebInventoryService", "AddItem");

	Params::UWebInventoryService_AddItem_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ItemdefId = ItemdefId;
	Parms.ItemPropsJson = ItemPropsJson;
	Parms.SteamID = SteamID;
	Parms.bNotify = bNotify;
	Parms.RequestId = RequestId;
	Parms.bTradeRestriction = bTradeRestriction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionAddItem
// (None)

class UClass* USteamCoreWebAsyncActionAddItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionAddItem");

	return Clss;
}


// SteamCoreWebAsyncActionAddItem SteamCoreWeb.Default__SteamCoreWebAsyncActionAddItem
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionAddItem* USteamCoreWebAsyncActionAddItem::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionAddItem* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionAddItem*>(USteamCoreWebAsyncActionAddItem::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionAddItem", "AddItemAsync");

	Params::USteamCoreWebAsyncActionAddItem_AddItemAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ItemdefId = ItemdefId;
	Parms.ItemPropsJson = ItemPropsJson;
	Parms.SteamID = SteamID;
	Parms.bNotify = bNotify;
	Parms.RequestId = RequestId;
	Parms.bTradeRestriction = bTradeRestriction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem
// (None)

class UClass* USteamCoreWebAsyncActionAddPromoItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionAddPromoItem");

	return Clss;
}


// SteamCoreWebAsyncActionAddPromoItem SteamCoreWeb.Default__SteamCoreWebAsyncActionAddPromoItem
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionAddPromoItem* USteamCoreWebAsyncActionAddPromoItem::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionAddPromoItem* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionAddPromoItem*>(USteamCoreWebAsyncActionAddPromoItem::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionAddPromoItem", "AddPromoItemAsync");

	Params::USteamCoreWebAsyncActionAddPromoItem_AddPromoItemAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ItemdefId = ItemdefId;
	Parms.ItemPropsJson = ItemPropsJson;
	Parms.SteamID = SteamID;
	Parms.bNotify = bNotify;
	Parms.RequestId = RequestId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem
// (None)

class UClass* USteamCoreWebAsyncActionConsumeItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionConsumeItem");

	return Clss;
}


// SteamCoreWebAsyncActionConsumeItem SteamCoreWeb.Default__SteamCoreWebAsyncActionConsumeItem
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionConsumeItem* USteamCoreWebAsyncActionConsumeItem::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionConsumeItem* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionConsumeItem*>(USteamCoreWebAsyncActionConsumeItem::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionConsumeItem", "ConsumeItemAsync");

	Params::USteamCoreWebAsyncActionConsumeItem_ConsumeItemAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ItemId = ItemId;
	Parms.Quantity = Quantity;
	Parms.SteamID = SteamID;
	Parms.RequestId = RequestId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem
// (None)

class UClass* USteamCoreWebAsyncActionExchangeItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionExchangeItem");

	return Clss;
}


// SteamCoreWebAsyncActionExchangeItem SteamCoreWeb.Default__SteamCoreWebAsyncActionExchangeItem
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionExchangeItem* USteamCoreWebAsyncActionExchangeItem::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionExchangeItem* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionExchangeItem*>(USteamCoreWebAsyncActionExchangeItem::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionExchangeItem", "ExchangeItemAsync");

	Params::USteamCoreWebAsyncActionExchangeItem_ExchangeItemAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.MaterialsItemID = MaterialsItemID;
	Parms.MaterialsQuantity = MaterialsQuantity;
	Parms.OutputItemdefId = OutputItemdefId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetInventory
// (None)

class UClass* USteamCoreWebAsyncActionGetInventory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetInventory");

	return Clss;
}


// SteamCoreWebAsyncActionGetInventory SteamCoreWeb.Default__SteamCoreWebAsyncActionGetInventory
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetInventory* USteamCoreWebAsyncActionGetInventory::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetInventory* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetInventory*>(USteamCoreWebAsyncActionGetInventory::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetInventory", "GetInventoryAsync");

	Params::USteamCoreWebAsyncActionGetInventory_GetInventoryAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs
// (None)

class UClass* USteamCoreWebAsyncActionGetItemDefs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetItemDefs");

	return Clss;
}


// SteamCoreWebAsyncActionGetItemDefs SteamCoreWeb.Default__SteamCoreWebAsyncActionGetItemDefs
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetItemDefs* USteamCoreWebAsyncActionGetItemDefs::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetItemDefs* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetItemDefs*>(USteamCoreWebAsyncActionGetItemDefs::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetItemDefs", "GetItemDefsAsync");

	Params::USteamCoreWebAsyncActionGetItemDefs_GetItemDefsAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.ModifiedSince = ModifiedSince;
	Parms.ItemdefIDs = ItemdefIDs;
	Parms.WorkshopIDs = WorkshopIDs;
	Parms.CacheMaxAgeSeconds = CacheMaxAgeSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet
// (None)

class UClass* USteamCoreWebAsyncActionGetPriceSheet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPriceSheet");

	return Clss;
}


// SteamCoreWebAsyncActionGetPriceSheet SteamCoreWeb.Default__SteamCoreWebAsyncActionGetPriceSheet
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetPriceSheet* USteamCoreWebAsyncActionGetPriceSheet::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetPriceSheet* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetPriceSheet*>(USteamCoreWebAsyncActionGetPriceSheet::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetPriceSheet", "GetPriceSheetAsync");

	Params::USteamCoreWebAsyncActionGetPriceSheet_GetPriceSheetAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.Currency = Currency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionConsolidate
// (None)

class UClass* USteamCoreWebAsyncActionConsolidate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionConsolidate");

	return Clss;
}


// SteamCoreWebAsyncActionConsolidate SteamCoreWeb.Default__SteamCoreWebAsyncActionConsolidate
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionConsolidate* USteamCoreWebAsyncActionConsolidate::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionConsolidate* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionConsolidate*>(USteamCoreWebAsyncActionConsolidate::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionConsolidate", "ConsolidateAsync");

	Params::USteamCoreWebAsyncActionConsolidate_ConsolidateAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ItemdefIDs = ItemdefIDs;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity
// (None)

class UClass* USteamCoreWebAsyncActionGetQuantity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetQuantity");

	return Clss;
}


// SteamCoreWebAsyncActionGetQuantity SteamCoreWeb.Default__SteamCoreWebAsyncActionGetQuantity
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetQuantity* USteamCoreWebAsyncActionGetQuantity::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetQuantity* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetQuantity*>(USteamCoreWebAsyncActionGetQuantity::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetQuantity", "GetQuantityAsync");

	Params::USteamCoreWebAsyncActionGetQuantity_GetQuantityAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.ItemdefIDs = ItemdefIDs;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionModifyItems
// (None)

class UClass* USteamCoreWebAsyncActionModifyItems::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionModifyItems");

	return Clss;
}


// SteamCoreWebAsyncActionModifyItems SteamCoreWeb.Default__SteamCoreWebAsyncActionModifyItems
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionModifyItems* USteamCoreWebAsyncActionModifyItems::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionModifyItems* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionModifyItems*>(USteamCoreWebAsyncActionModifyItems::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionModifyItems", "ModifyItemsAsync");

	Params::USteamCoreWebAsyncActionModifyItems_ModifyItemsAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.InputJson = InputJson;
	Parms.SteamID = SteamID;
	Parms.Timestamp = Timestamp;
	Parms.Updates = Updates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebLeaderboards
// (None)

class UClass* UWebLeaderboards::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebLeaderboards");

	return Clss;
}


// WebLeaderboards SteamCoreWeb.Default__WebLeaderboards
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebLeaderboards* UWebLeaderboards::GetDefaultObj()
{
	static class UWebLeaderboards* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebLeaderboards*>(UWebLeaderboards::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebLeaderboards", "SetLeaderboardScore");

	Params::UWebLeaderboards_SetLeaderboardScore_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.LeaderbordId = LeaderbordId;
	Parms.SteamID = SteamID;
	Parms.Score = Score;
	Parms.Details = Details;
	Parms.ScoreMethod = ScoreMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebLeaderboards", "ResetLeaderboard");

	Params::UWebLeaderboards_ResetLeaderboard_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.LeaderboardId = LeaderboardId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebLeaderboards.GetLeaderboardsForGame
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebLeaderboards::GetLeaderboardsForGame(FDelegateProperty_& Callback, const class FString& Key, int32 AppID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebLeaderboards", "GetLeaderboardsForGame");

	Params::UWebLeaderboards_GetLeaderboardsForGame_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebLeaderboards", "GetLeaderboardEntries");

	Params::UWebLeaderboards_GetLeaderboardEntries_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.RangeStart = RangeStart;
	Parms.RangeEnd = RangeEnd;
	Parms.LeaderboardId = LeaderboardId;
	Parms.DataRequest = DataRequest;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebLeaderboards", "FindOrCreateLeaderboard");

	Params::UWebLeaderboards_FindOrCreateLeaderboard_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Name = Name;
	Parms.SortMethod = SortMethod;
	Parms.DisplayType = DisplayType;
	Parms.bCreateIfNotFound = bCreateIfNotFound;
	Parms.bOnlyTrustedWrites = bOnlyTrustedWrites;
	Parms.bOnlyFriendsReads = bOnlyFriendsReads;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebLeaderboards", "DeleteLeaderboard");

	Params::UWebLeaderboards_DeleteLeaderboard_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard
// (None)

class UClass* USteamCoreWebAsyncActionDeleteLeaderboard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionDeleteLeaderboard");

	return Clss;
}


// SteamCoreWebAsyncActionDeleteLeaderboard SteamCoreWeb.Default__SteamCoreWebAsyncActionDeleteLeaderboard
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionDeleteLeaderboard* USteamCoreWebAsyncActionDeleteLeaderboard::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionDeleteLeaderboard* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionDeleteLeaderboard*>(USteamCoreWebAsyncActionDeleteLeaderboard::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionDeleteLeaderboard", "DeleteLeaderboardAsync");

	Params::USteamCoreWebAsyncActionDeleteLeaderboard_DeleteLeaderboardAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard
// (None)

class UClass* USteamCoreWebAsyncActionFindOrCreateLeaderboard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionFindOrCreateLeaderboard");

	return Clss;
}


// SteamCoreWebAsyncActionFindOrCreateLeaderboard SteamCoreWeb.Default__SteamCoreWebAsyncActionFindOrCreateLeaderboard
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionFindOrCreateLeaderboard* USteamCoreWebAsyncActionFindOrCreateLeaderboard::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionFindOrCreateLeaderboard* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionFindOrCreateLeaderboard*>(USteamCoreWebAsyncActionFindOrCreateLeaderboard::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionFindOrCreateLeaderboard", "FindOrCreateLeaderboardAsync");

	Params::USteamCoreWebAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Name = Name;
	Parms.SortMethod = SortMethod;
	Parms.DisplayType = DisplayType;
	Parms.bCreateIfNotFound = bCreateIfNotFound;
	Parms.bOnlyTrustedWrites = bOnlyTrustedWrites;
	Parms.bOnlyFriendsReads = bOnlyFriendsReads;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries
// (None)

class UClass* USteamCoreWebAsyncActionGetLeaderboardEntries::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetLeaderboardEntries");

	return Clss;
}


// SteamCoreWebAsyncActionGetLeaderboardEntries SteamCoreWeb.Default__SteamCoreWebAsyncActionGetLeaderboardEntries
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetLeaderboardEntries* USteamCoreWebAsyncActionGetLeaderboardEntries::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetLeaderboardEntries* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetLeaderboardEntries*>(USteamCoreWebAsyncActionGetLeaderboardEntries::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetLeaderboardEntries", "GetLeaderboardEntriesAsync");

	Params::USteamCoreWebAsyncActionGetLeaderboardEntries_GetLeaderboardEntriesAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.RangeStart = RangeStart;
	Parms.RangeEnd = RangeEnd;
	Parms.LeaderboardId = LeaderboardId;
	Parms.DataRequest = DataRequest;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame
// (None)

class UClass* USteamCoreWebAsyncActionGetLeaderboardsForGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetLeaderboardsForGame");

	return Clss;
}


// SteamCoreWebAsyncActionGetLeaderboardsForGame SteamCoreWeb.Default__SteamCoreWebAsyncActionGetLeaderboardsForGame
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetLeaderboardsForGame* USteamCoreWebAsyncActionGetLeaderboardsForGame::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetLeaderboardsForGame* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetLeaderboardsForGame*>(USteamCoreWebAsyncActionGetLeaderboardsForGame::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetLeaderboardsForGame", "GetLeaderboardsForGameAsync");

	Params::USteamCoreWebAsyncActionGetLeaderboardsForGame_GetLeaderboardsForGameAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard
// (None)

class UClass* USteamCoreWebAsyncActionResetLeaderboard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionResetLeaderboard");

	return Clss;
}


// SteamCoreWebAsyncActionResetLeaderboard SteamCoreWeb.Default__SteamCoreWebAsyncActionResetLeaderboard
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionResetLeaderboard* USteamCoreWebAsyncActionResetLeaderboard::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionResetLeaderboard* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionResetLeaderboard*>(USteamCoreWebAsyncActionResetLeaderboard::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionResetLeaderboard", "ResetLeaderboardAsync");

	Params::USteamCoreWebAsyncActionResetLeaderboard_ResetLeaderboardAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.LeaderboardId = LeaderboardId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore
// (None)

class UClass* USteamCoreWebAsyncActionSetLeaderboardScore::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionSetLeaderboardScore");

	return Clss;
}


// SteamCoreWebAsyncActionSetLeaderboardScore SteamCoreWeb.Default__SteamCoreWebAsyncActionSetLeaderboardScore
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionSetLeaderboardScore* USteamCoreWebAsyncActionSetLeaderboardScore::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionSetLeaderboardScore* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionSetLeaderboardScore*>(USteamCoreWebAsyncActionSetLeaderboardScore::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionSetLeaderboardScore", "SetLeaderboardScoreAsync");

	Params::USteamCoreWebAsyncActionSetLeaderboardScore_SetLeaderboardScoreAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.LeaderboardId = LeaderboardId;
	Parms.SteamID = SteamID;
	Parms.Score = Score;
	Parms.Details = Details;
	Parms.ScoreMethod = ScoreMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebLobbyMatchmakingService
// (None)

class UClass* UWebLobbyMatchmakingService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebLobbyMatchmakingService");

	return Clss;
}


// WebLobbyMatchmakingService SteamCoreWeb.Default__WebLobbyMatchmakingService
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebLobbyMatchmakingService* UWebLobbyMatchmakingService::GetDefaultObj()
{
	static class UWebLobbyMatchmakingService* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebLobbyMatchmakingService*>(UWebLobbyMatchmakingService::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebLobbyMatchmakingService", "RemoveUserFromLobby");

	Params::UWebLobbyMatchmakingService_RemoveUserFromLobby_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamIdToRemove = SteamIdToRemove;
	Parms.SteamIDLobby = SteamIDLobby;
	Parms.InputJson = InputJson;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebLobbyMatchmakingService", "CreateLobby");

	Params::UWebLobbyMatchmakingService_CreateLobby_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.MaxMembers = MaxMembers;
	Parms.LobbyType = LobbyType;
	Parms.LobbyName = LobbyName;
	Parms.InputJson = InputJson;
	Parms.SteamIdInvitedMembers = SteamIdInvitedMembers;
	Parms.LobbyMetaData = LobbyMetaData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.WebMicroTxn
// (None)

class UClass* UWebMicroTxn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebMicroTxn");

	return Clss;
}


// WebMicroTxn SteamCoreWeb.Default__WebMicroTxn
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebMicroTxn* UWebMicroTxn::GetDefaultObj()
{
	static class UWebMicroTxn* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebMicroTxn*>(UWebMicroTxn::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebMicroTxn", "RefundTxn");

	Params::UWebMicroTxn_RefundTxn_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.OrderID = OrderID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebMicroTxn", "QueryTxn");

	Params::UWebMicroTxn_QueryTxn_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.OrderID = OrderID;
	Parms.TransId = TransId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebMicroTxn", "ProcessAgreement");

	Params::UWebMicroTxn_ProcessAgreement_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.OrderID = OrderID;
	Parms.SteamID = SteamID;
	Parms.AgreementId = AgreementId;
	Parms.AppID = AppID;
	Parms.Amount = Amount;
	Parms.Currency = Currency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebMicroTxn.MakeTransactionID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWebMicroTxn::MakeTransactionID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebMicroTxn", "MakeTransactionID");

	Params::UWebMicroTxn_MakeTransactionID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebMicroTxn", "InitTxn");

	Params::UWebMicroTxn_InitTxn_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebMicroTxn", "GetUserInfo");

	Params::UWebMicroTxn_GetUserInfo_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.Ipaddress = Ipaddress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebMicroTxn", "GetUserAgreementInfo");

	Params::UWebMicroTxn_GetUserAgreementInfo_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebMicroTxn", "GetReport");

	Params::UWebMicroTxn_GetReport_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Time = Time;
	Parms.Type = Type;
	Parms.MaxResults = MaxResults;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebMicroTxn", "FinalizeTxn");

	Params::UWebMicroTxn_FinalizeTxn_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.OrderID = OrderID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebMicroTxn", "CancelAgreement");

	Params::UWebMicroTxn_CancelAgreement_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AgreementId = AgreementId;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebMicroTxn", "AdjustAgreement");

	Params::UWebMicroTxn_AdjustAgreement_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AgreementId = AgreementId;
	Parms.AppID = AppID;
	Parms.NextProcessDate = NextProcessDate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement
// (None)

class UClass* USteamCoreWebAsyncActionAdjustAgreement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionAdjustAgreement");

	return Clss;
}


// SteamCoreWebAsyncActionAdjustAgreement SteamCoreWeb.Default__SteamCoreWebAsyncActionAdjustAgreement
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionAdjustAgreement* USteamCoreWebAsyncActionAdjustAgreement::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionAdjustAgreement* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionAdjustAgreement*>(USteamCoreWebAsyncActionAdjustAgreement::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionAdjustAgreement", "AdjustAgreementAsync");

	Params::USteamCoreWebAsyncActionAdjustAgreement_AdjustAgreementAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AgreementId = AgreementId;
	Parms.AppID = AppID;
	Parms.NextProcessDate = NextProcessDate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement
// (None)

class UClass* USteamCoreWebAsyncActionCancelAgreement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionCancelAgreement");

	return Clss;
}


// SteamCoreWebAsyncActionCancelAgreement SteamCoreWeb.Default__SteamCoreWebAsyncActionCancelAgreement
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionCancelAgreement* USteamCoreWebAsyncActionCancelAgreement::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionCancelAgreement* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionCancelAgreement*>(USteamCoreWebAsyncActionCancelAgreement::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionCancelAgreement", "CancelAgreementAsync");

	Params::USteamCoreWebAsyncActionCancelAgreement_CancelAgreementAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AgreementId = AgreementId;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn
// (None)

class UClass* USteamCoreWebAsyncActionFinalizeTxn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionFinalizeTxn");

	return Clss;
}


// SteamCoreWebAsyncActionFinalizeTxn SteamCoreWeb.Default__SteamCoreWebAsyncActionFinalizeTxn
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionFinalizeTxn* USteamCoreWebAsyncActionFinalizeTxn::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionFinalizeTxn* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionFinalizeTxn*>(USteamCoreWebAsyncActionFinalizeTxn::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionFinalizeTxn", "FinalizeTxnAsync");

	Params::USteamCoreWebAsyncActionFinalizeTxn_FinalizeTxnAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.OrderID = OrderID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetReport
// (None)

class UClass* USteamCoreWebAsyncActionGetReport::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetReport");

	return Clss;
}


// SteamCoreWebAsyncActionGetReport SteamCoreWeb.Default__SteamCoreWebAsyncActionGetReport
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetReport* USteamCoreWebAsyncActionGetReport::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetReport* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetReport*>(USteamCoreWebAsyncActionGetReport::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetReport", "GetReportAsync");

	Params::USteamCoreWebAsyncActionGetReport_GetReportAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Time = Time;
	Parms.Type = Type;
	Parms.MaxResults = MaxResults;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo
// (None)

class UClass* USteamCoreWebAsyncActionGetUserAgreementInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetUserAgreementInfo");

	return Clss;
}


// SteamCoreWebAsyncActionGetUserAgreementInfo SteamCoreWeb.Default__SteamCoreWebAsyncActionGetUserAgreementInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetUserAgreementInfo* USteamCoreWebAsyncActionGetUserAgreementInfo::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetUserAgreementInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetUserAgreementInfo*>(USteamCoreWebAsyncActionGetUserAgreementInfo::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetUserAgreementInfo", "GetUserAgreementInfoAsync");

	Params::USteamCoreWebAsyncActionGetUserAgreementInfo_GetUserAgreementInfoAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo
// (None)

class UClass* USteamCoreWebAsyncActionGetUserInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetUserInfo");

	return Clss;
}


// SteamCoreWebAsyncActionGetUserInfo SteamCoreWeb.Default__SteamCoreWebAsyncActionGetUserInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetUserInfo* USteamCoreWebAsyncActionGetUserInfo::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetUserInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetUserInfo*>(USteamCoreWebAsyncActionGetUserInfo::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetUserInfo", "GetUserInfoAsync");

	Params::USteamCoreWebAsyncActionGetUserInfo_GetUserInfoAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.Ipaddress = Ipaddress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionInitTxn
// (None)

class UClass* USteamCoreWebAsyncActionInitTxn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionInitTxn");

	return Clss;
}


// SteamCoreWebAsyncActionInitTxn SteamCoreWeb.Default__SteamCoreWebAsyncActionInitTxn
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionInitTxn* USteamCoreWebAsyncActionInitTxn::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionInitTxn* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionInitTxn*>(USteamCoreWebAsyncActionInitTxn::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionInitTxn", "InitTxnAsync");

	Params::USteamCoreWebAsyncActionInitTxn_InitTxnAsync_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement
// (None)

class UClass* USteamCoreWebAsyncActionProcessAgreement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionProcessAgreement");

	return Clss;
}


// SteamCoreWebAsyncActionProcessAgreement SteamCoreWeb.Default__SteamCoreWebAsyncActionProcessAgreement
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionProcessAgreement* USteamCoreWebAsyncActionProcessAgreement::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionProcessAgreement* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionProcessAgreement*>(USteamCoreWebAsyncActionProcessAgreement::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionProcessAgreement", "ProcessAgreementAsync");

	Params::USteamCoreWebAsyncActionProcessAgreement_ProcessAgreementAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.OrderID = OrderID;
	Parms.SteamID = SteamID;
	Parms.AgreementId = AgreementId;
	Parms.AppID = AppID;
	Parms.Amount = Amount;
	Parms.Currency = Currency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn
// (None)

class UClass* USteamCoreWebAsyncActionQueryTxn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionQueryTxn");

	return Clss;
}


// SteamCoreWebAsyncActionQueryTxn SteamCoreWeb.Default__SteamCoreWebAsyncActionQueryTxn
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionQueryTxn* USteamCoreWebAsyncActionQueryTxn::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionQueryTxn* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionQueryTxn*>(USteamCoreWebAsyncActionQueryTxn::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionQueryTxn", "QueryTxnAsync");

	Params::USteamCoreWebAsyncActionQueryTxn_QueryTxnAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.OrderID = OrderID;
	Parms.TransId = TransId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn
// (None)

class UClass* USteamCoreWebAsyncActionRefundTxn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRefundTxn");

	return Clss;
}


// SteamCoreWebAsyncActionRefundTxn SteamCoreWeb.Default__SteamCoreWebAsyncActionRefundTxn
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionRefundTxn* USteamCoreWebAsyncActionRefundTxn::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionRefundTxn* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionRefundTxn*>(USteamCoreWebAsyncActionRefundTxn::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionRefundTxn", "RefundTxnAsync");

	Params::USteamCoreWebAsyncActionRefundTxn_RefundTxnAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.OrderID = OrderID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebPlayerService
// (None)

class UClass* UWebPlayerService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebPlayerService");

	return Clss;
}


// WebPlayerService SteamCoreWeb.Default__WebPlayerService
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebPlayerService* UWebPlayerService::GetDefaultObj()
{
	static class UWebPlayerService* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebPlayerService*>(UWebPlayerService::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPlayerService", "IsPlayingSharedGame");

	Params::UWebPlayerService_IsPlayingSharedGame_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppIdPlaying = AppIdPlaying;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebPlayerService.GetSteamLevel
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebPlayerService::GetSteamLevel(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPlayerService", "GetSteamLevel");

	Params::UWebPlayerService_GetSteamLevel_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPlayerService", "GetRecentlyPlayedGames");

	Params::UWebPlayerService_GetRecentlyPlayedGames_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPlayerService", "GetOwnedGames");

	Params::UWebPlayerService_GetOwnedGames_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.bIncludeAppInfo = bIncludeAppInfo;
	Parms.bIncludePlayedFreeGames = bIncludePlayedFreeGames;
	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPlayerService", "GetCommunityBadgeProgress");

	Params::UWebPlayerService_GetCommunityBadgeProgress_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.BadgeId = BadgeId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebPlayerService.GetBadges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebPlayerService::GetBadges(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPlayerService", "GetBadges");

	Params::UWebPlayerService_GetBadges_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames
// (None)

class UClass* USteamCoreWebAsyncActionGetRecentlyPlayedGames::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetRecentlyPlayedGames");

	return Clss;
}


// SteamCoreWebAsyncActionGetRecentlyPlayedGames SteamCoreWeb.Default__SteamCoreWebAsyncActionGetRecentlyPlayedGames
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetRecentlyPlayedGames* USteamCoreWebAsyncActionGetRecentlyPlayedGames::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetRecentlyPlayedGames* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetRecentlyPlayedGames*>(USteamCoreWebAsyncActionGetRecentlyPlayedGames::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetRecentlyPlayedGames", "GetRecentlyPlayedGamesAsync");

	Params::USteamCoreWebAsyncActionGetRecentlyPlayedGames_GetRecentlyPlayedGamesAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames
// (None)

class UClass* USteamCoreWebAsyncActionGetOwnedGames::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetOwnedGames");

	return Clss;
}


// SteamCoreWebAsyncActionGetOwnedGames SteamCoreWeb.Default__SteamCoreWebAsyncActionGetOwnedGames
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetOwnedGames* USteamCoreWebAsyncActionGetOwnedGames::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetOwnedGames* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetOwnedGames*>(USteamCoreWebAsyncActionGetOwnedGames::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetOwnedGames", "GetOwnedGamesAsync");

	Params::USteamCoreWebAsyncActionGetOwnedGames_GetOwnedGamesAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.bIncludeAppInfo = bIncludeAppInfo;
	Parms.bIncludePlayedFreeGames = bIncludePlayedFreeGames;
	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel
// (None)

class UClass* USteamCoreWebAsyncActionGetSteamLevel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetSteamLevel");

	return Clss;
}


// SteamCoreWebAsyncActionGetSteamLevel SteamCoreWeb.Default__SteamCoreWebAsyncActionGetSteamLevel
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetSteamLevel* USteamCoreWebAsyncActionGetSteamLevel::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetSteamLevel* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetSteamLevel*>(USteamCoreWebAsyncActionGetSteamLevel::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetSteamLevel", "GetSteamLevelAsync");

	Params::USteamCoreWebAsyncActionGetSteamLevel_GetSteamLevelAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetBadges
// (None)

class UClass* USteamCoreWebAsyncActionGetBadges::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetBadges");

	return Clss;
}


// SteamCoreWebAsyncActionGetBadges SteamCoreWeb.Default__SteamCoreWebAsyncActionGetBadges
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetBadges* USteamCoreWebAsyncActionGetBadges::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetBadges* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetBadges*>(USteamCoreWebAsyncActionGetBadges::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetBadges", "GetBadgesAsync");

	Params::USteamCoreWebAsyncActionGetBadges_GetBadgesAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress
// (None)

class UClass* USteamCoreWebAsyncActionGetCommunityBadgeProgress::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetCommunityBadgeProgress");

	return Clss;
}


// SteamCoreWebAsyncActionGetCommunityBadgeProgress SteamCoreWeb.Default__SteamCoreWebAsyncActionGetCommunityBadgeProgress
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetCommunityBadgeProgress* USteamCoreWebAsyncActionGetCommunityBadgeProgress::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetCommunityBadgeProgress* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetCommunityBadgeProgress*>(USteamCoreWebAsyncActionGetCommunityBadgeProgress::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetCommunityBadgeProgress", "GetCommunityBadgeProgressAsync");

	Params::USteamCoreWebAsyncActionGetCommunityBadgeProgress_GetCommunityBadgeProgressAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.BadgeId = BadgeId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame
// (None)

class UClass* USteamCoreWebAsyncActionIsPlayingSharedGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionIsPlayingSharedGame");

	return Clss;
}


// SteamCoreWebAsyncActionIsPlayingSharedGame SteamCoreWeb.Default__SteamCoreWebAsyncActionIsPlayingSharedGame
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionIsPlayingSharedGame* USteamCoreWebAsyncActionIsPlayingSharedGame::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionIsPlayingSharedGame* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionIsPlayingSharedGame*>(USteamCoreWebAsyncActionIsPlayingSharedGame::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionIsPlayingSharedGame", "IsPlayingSharedGameAsync");

	Params::USteamCoreWebAsyncActionIsPlayingSharedGame_IsPlayingSharedGameAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppIdPlaying = AppIdPlaying;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebPublishedFileService
// (None)

class UClass* UWebPublishedFileService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebPublishedFileService");

	return Clss;
}


// WebPublishedFileService SteamCoreWeb.Default__WebPublishedFileService
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebPublishedFileService* UWebPublishedFileService::GetDefaultObj()
{
	static class UWebPublishedFileService* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebPublishedFileService*>(UWebPublishedFileService::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPublishedFileService", "UpdateTags");

	Params::UWebPublishedFileService_UpdateTags_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.PublishedFileID = PublishedFileID;
	Parms.AppID = AppID;
	Parms.AddTags = AddTags;
	Parms.RemoveTags = RemoveTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPublishedFileService", "UpdateIncompatibleStatus");

	Params::UWebPublishedFileService_UpdateIncompatibleStatus_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.PublishedFileID = PublishedFileID;
	Parms.AppID = AppID;
	Parms.bIncompatible = bIncompatible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPublishedFileService", "UpdateBanStatus");

	Params::UWebPublishedFileService_UpdateBanStatus_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.PublishedFileID = PublishedFileID;
	Parms.AppID = AppID;
	Parms.bBanned = bBanned;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPublishedFileService", "SetDeveloperMetadata");

	Params::UWebPublishedFileService_SetDeveloperMetadata_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.PublishedFileID = PublishedFileID;
	Parms.AppID = AppID;
	Parms.MetaData = MetaData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPublishedFileService", "QueryFiles");

	Params::UWebPublishedFileService_QueryFiles_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.WebSteamPublishedItemSearch
// (None)

class UClass* UWebSteamPublishedItemSearch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebSteamPublishedItemSearch");

	return Clss;
}


// WebSteamPublishedItemSearch SteamCoreWeb.Default__WebSteamPublishedItemSearch
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebSteamPublishedItemSearch* UWebSteamPublishedItemSearch::GetDefaultObj()
{
	static class UWebSteamPublishedItemSearch* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebSteamPublishedItemSearch*>(UWebSteamPublishedItemSearch::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamPublishedItemSearch", "ResultSetSummary");

	Params::UWebSteamPublishedItemSearch_ResultSetSummary_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.StartId = StartId;
	Parms.bHasAppAdminAccess = bHasAppAdminAccess;
	Parms.FileType = FileType;
	Parms.Tag = Tag;
	Parms.UserTag = UserTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamPublishedItemSearch", "RankedByVote");

	Params::UWebSteamPublishedItemSearch_RankedByVote_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamPublishedItemSearch", "RankedByTrend");

	Params::UWebSteamPublishedItemSearch_RankedByTrend_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamPublishedItemSearch", "RankedByPublicationOrder");

	Params::UWebSteamPublishedItemSearch_RankedByPublicationOrder_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder
// (None)

class UClass* USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRankedByPublicationOrder");

	return Clss;
}


// SteamCoreWebAsyncActionRankedByPublicationOrder SteamCoreWeb.Default__SteamCoreWebAsyncActionRankedByPublicationOrder
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionRankedByPublicationOrder* USteamCoreWebAsyncActionRankedByPublicationOrder::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionRankedByPublicationOrder* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionRankedByPublicationOrder*>(USteamCoreWebAsyncActionRankedByPublicationOrder::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionRankedByPublicationOrder", "RankedByPublicationOrderAsync");

	Params::USteamCoreWebAsyncActionRankedByPublicationOrder_RankedByPublicationOrderAsync_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend
// (None)

class UClass* USteamCoreWebAsyncActionRankedByTrend::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRankedByTrend");

	return Clss;
}


// SteamCoreWebAsyncActionRankedByTrend SteamCoreWeb.Default__SteamCoreWebAsyncActionRankedByTrend
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionRankedByTrend* USteamCoreWebAsyncActionRankedByTrend::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionRankedByTrend* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionRankedByTrend*>(USteamCoreWebAsyncActionRankedByTrend::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionRankedByTrend", "RankedByTrendAsync");

	Params::USteamCoreWebAsyncActionRankedByTrend_RankedByTrendAsync_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote
// (None)

class UClass* USteamCoreWebAsyncActionRankedByVote::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRankedByVote");

	return Clss;
}


// SteamCoreWebAsyncActionRankedByVote SteamCoreWeb.Default__SteamCoreWebAsyncActionRankedByVote
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionRankedByVote* USteamCoreWebAsyncActionRankedByVote::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionRankedByVote* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionRankedByVote*>(USteamCoreWebAsyncActionRankedByVote::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionRankedByVote", "RankedByVoteAsync");

	Params::USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary
// (None)

class UClass* USteamCoreWebAsyncActionResultSetSummary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionResultSetSummary");

	return Clss;
}


// SteamCoreWebAsyncActionResultSetSummary SteamCoreWeb.Default__SteamCoreWebAsyncActionResultSetSummary
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionResultSetSummary* USteamCoreWebAsyncActionResultSetSummary::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionResultSetSummary* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionResultSetSummary*>(USteamCoreWebAsyncActionResultSetSummary::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionResultSetSummary", "ResultSetSummaryAsync");

	Params::USteamCoreWebAsyncActionResultSetSummary_ResultSetSummaryAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.StartId = StartId;
	Parms.bHasAppAdminAccess = bHasAppAdminAccess;
	Parms.FileType = FileType;
	Parms.Tag = Tag;
	Parms.UserTag = UserTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebPublishedItemVoting
// (None)

class UClass* UWebPublishedItemVoting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebPublishedItemVoting");

	return Clss;
}


// WebPublishedItemVoting SteamCoreWeb.Default__WebPublishedItemVoting
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebPublishedItemVoting* UWebPublishedItemVoting::GetDefaultObj()
{
	static class UWebPublishedItemVoting* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebPublishedItemVoting*>(UWebPublishedItemVoting::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPublishedItemVoting", "UserVoteSummary");

	Params::UWebPublishedItemVoting_UserVoteSummary_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebPublishedItemVoting", "ItemVoteSummary");

	Params::UWebPublishedItemVoting_ItemVoteSummary_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary
// (None)

class UClass* USteamCoreWebAsyncActionItemVoteSummary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionItemVoteSummary");

	return Clss;
}


// SteamCoreWebAsyncActionItemVoteSummary SteamCoreWeb.Default__SteamCoreWebAsyncActionItemVoteSummary
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionItemVoteSummary* USteamCoreWebAsyncActionItemVoteSummary::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionItemVoteSummary* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionItemVoteSummary*>(USteamCoreWebAsyncActionItemVoteSummary::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionItemVoteSummary", "ItemVoteSummaryAsync");

	Params::USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary
// (None)

class UClass* USteamCoreWebAsyncActionUserVoteSummary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionUserVoteSummary");

	return Clss;
}


// SteamCoreWebAsyncActionUserVoteSummary SteamCoreWeb.Default__SteamCoreWebAsyncActionUserVoteSummary
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionUserVoteSummary* USteamCoreWebAsyncActionUserVoteSummary::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionUserVoteSummary* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionUserVoteSummary*>(USteamCoreWebAsyncActionUserVoteSummary::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionUserVoteSummary", "UserVoteSummaryAsync");

	Params::USteamCoreWebAsyncActionUserVoteSummary_UserVoteSummaryAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebRemoteStorage
// (None)

class UClass* UWebRemoteStorage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebRemoteStorage");

	return Clss;
}


// WebRemoteStorage SteamCoreWeb.Default__WebRemoteStorage
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebRemoteStorage* UWebRemoteStorage::GetDefaultObj()
{
	static class UWebRemoteStorage* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebRemoteStorage*>(UWebRemoteStorage::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebRemoteStorage", "UnsubscribePublishedFile");

	Params::UWebRemoteStorage_UnsubscribePublishedFile_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebRemoteStorage", "SubscribePublishedFile");

	Params::UWebRemoteStorage_SubscribePublishedFile_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebRemoteStorage", "SetUGCUsedByGC");

	Params::UWebRemoteStorage_SetUGCUsedByGC_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.UGCID = UGCID;
	Parms.AppID = AppID;
	Parms.bUsed = bUsed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebRemoteStorage", "GetUGCFileDetails");

	Params::UWebRemoteStorage_GetUGCFileDetails_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.UGCID = UGCID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebRemoteStorage.GetPublishedFileDetails
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PublishedFileIDs                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebRemoteStorage::GetPublishedFileDetails(FDelegateProperty_& Callback, const class FString& PublishedFileIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebRemoteStorage", "GetPublishedFileDetails");

	Params::UWebRemoteStorage_GetPublishedFileDetails_Params Parms{};

	Parms.Callback = Callback;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebRemoteStorage.GetCollectionDetails
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              PublishedFileIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebRemoteStorage::GetCollectionDetails(FDelegateProperty_& Callback, const TArray<class FString>& PublishedFileIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebRemoteStorage", "GetCollectionDetails");

	Params::UWebRemoteStorage_GetCollectionDetails_Params Parms{};

	Parms.Callback = Callback;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebRemoteStorage", "EnumerateUserSubscribedFiles");

	Params::UWebRemoteStorage_EnumerateUserSubscribedFiles_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ListType = ListType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebRemoteStorage", "EnumerateUserPublishedFiles");

	Params::UWebRemoteStorage_EnumerateUserPublishedFiles_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles
// (None)

class UClass* USteamCoreWebAsyncActionEnumerateUserPublishedFiles::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionEnumerateUserPublishedFiles");

	return Clss;
}


// SteamCoreWebAsyncActionEnumerateUserPublishedFiles SteamCoreWeb.Default__SteamCoreWebAsyncActionEnumerateUserPublishedFiles
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionEnumerateUserPublishedFiles* USteamCoreWebAsyncActionEnumerateUserPublishedFiles::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionEnumerateUserPublishedFiles* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionEnumerateUserPublishedFiles*>(USteamCoreWebAsyncActionEnumerateUserPublishedFiles::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionEnumerateUserPublishedFiles", "EnumerateUserPublishedFilesAsync");

	Params::USteamCoreWebAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles
// (None)

class UClass* USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionEnumerateUserSubscribedFiles");

	return Clss;
}


// SteamCoreWebAsyncActionEnumerateUserSubscribedFiles SteamCoreWeb.Default__SteamCoreWebAsyncActionEnumerateUserSubscribedFiles
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionEnumerateUserSubscribedFiles*>(USteamCoreWebAsyncActionEnumerateUserSubscribedFiles::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionEnumerateUserSubscribedFiles", "EnumerateUserSubscribedFilesAsync");

	Params::USteamCoreWebAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ListType = ListType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails
// (None)

class UClass* USteamCoreWebAsyncActionGetCollectionDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetCollectionDetails");

	return Clss;
}


// SteamCoreWebAsyncActionGetCollectionDetails SteamCoreWeb.Default__SteamCoreWebAsyncActionGetCollectionDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetCollectionDetails* USteamCoreWebAsyncActionGetCollectionDetails::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetCollectionDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetCollectionDetails*>(USteamCoreWebAsyncActionGetCollectionDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails.GetCollectionDetailsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              PublishedFileIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetCollectionDetails*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetCollectionDetails* USteamCoreWebAsyncActionGetCollectionDetails::GetCollectionDetailsAsync(class UObject* WorldContextObject, const TArray<class FString>& PublishedFileIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetCollectionDetails", "GetCollectionDetailsAsync");

	Params::USteamCoreWebAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails
// (None)

class UClass* USteamCoreWebAsyncActionGetPublishedFileDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPublishedFileDetails");

	return Clss;
}


// SteamCoreWebAsyncActionGetPublishedFileDetails SteamCoreWeb.Default__SteamCoreWebAsyncActionGetPublishedFileDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetPublishedFileDetails* USteamCoreWebAsyncActionGetPublishedFileDetails::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetPublishedFileDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetPublishedFileDetails*>(USteamCoreWebAsyncActionGetPublishedFileDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails.GetPublishedFileDetailsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PublishedFileIDs                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetPublishedFileDetails*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetPublishedFileDetails* USteamCoreWebAsyncActionGetPublishedFileDetails::GetPublishedFileDetailsAsync(class UObject* WorldContextObject, const class FString& PublishedFileIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetPublishedFileDetails", "GetPublishedFileDetailsAsync");

	Params::USteamCoreWebAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails
// (None)

class UClass* USteamCoreWebAsyncActionGetUGCFileDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetUGCFileDetails");

	return Clss;
}


// SteamCoreWebAsyncActionGetUGCFileDetails SteamCoreWeb.Default__SteamCoreWebAsyncActionGetUGCFileDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetUGCFileDetails* USteamCoreWebAsyncActionGetUGCFileDetails::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetUGCFileDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetUGCFileDetails*>(USteamCoreWebAsyncActionGetUGCFileDetails::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetUGCFileDetails", "GetUGCFileDetailsAsync");

	Params::USteamCoreWebAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.UGCID = UGCID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC
// (None)

class UClass* USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionSetUGCUsedByGC");

	return Clss;
}


// SteamCoreWebAsyncActionSetUGCUsedByGC SteamCoreWeb.Default__SteamCoreWebAsyncActionSetUGCUsedByGC
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionSetUGCUsedByGC* USteamCoreWebAsyncActionSetUGCUsedByGC::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionSetUGCUsedByGC* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionSetUGCUsedByGC*>(USteamCoreWebAsyncActionSetUGCUsedByGC::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionSetUGCUsedByGC", "SetUGCUsedByGCAsync");

	Params::USteamCoreWebAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.UGCID = UGCID;
	Parms.AppID = AppID;
	Parms.bUsed = bUsed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile
// (None)

class UClass* USteamCoreWebAsyncActionSubscribePublishedFile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionSubscribePublishedFile");

	return Clss;
}


// SteamCoreWebAsyncActionSubscribePublishedFile SteamCoreWeb.Default__SteamCoreWebAsyncActionSubscribePublishedFile
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionSubscribePublishedFile* USteamCoreWebAsyncActionSubscribePublishedFile::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionSubscribePublishedFile* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionSubscribePublishedFile*>(USteamCoreWebAsyncActionSubscribePublishedFile::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionSubscribePublishedFile", "SubscribePublishedFileAsync");

	Params::USteamCoreWebAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile
// (None)

class UClass* USteamCoreWebAsyncActionUnsubscribePublishedFile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionUnsubscribePublishedFile");

	return Clss;
}


// SteamCoreWebAsyncActionUnsubscribePublishedFile SteamCoreWeb.Default__SteamCoreWebAsyncActionUnsubscribePublishedFile
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionUnsubscribePublishedFile* USteamCoreWebAsyncActionUnsubscribePublishedFile::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionUnsubscribePublishedFile* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionUnsubscribePublishedFile*>(USteamCoreWebAsyncActionUnsubscribePublishedFile::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionUnsubscribePublishedFile", "UnsubscribePublishedFileAsync");

	Params::USteamCoreWebAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebSteamCommunity
// (None)

class UClass* UWebSteamCommunity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebSteamCommunity");

	return Clss;
}


// WebSteamCommunity SteamCoreWeb.Default__WebSteamCommunity
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebSteamCommunity* UWebSteamCommunity::GetDefaultObj()
{
	static class UWebSteamCommunity* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebSteamCommunity*>(UWebSteamCommunity::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamCommunity", "ReportAbuse");

	Params::UWebSteamCommunity_ReportAbuse_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamIdActor = SteamIdActor;
	Parms.SteamIdTarget = SteamIdTarget;
	Parms.AppID = AppID;
	Parms.AbuseType = AbuseType;
	Parms.ContentType = ContentType;
	Parms.Description = Description;
	Parms.Gid = Gid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse
// (None)

class UClass* USteamCoreWebAsyncActionReportAbuse::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionReportAbuse");

	return Clss;
}


// SteamCoreWebAsyncActionReportAbuse SteamCoreWeb.Default__SteamCoreWebAsyncActionReportAbuse
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionReportAbuse* USteamCoreWebAsyncActionReportAbuse::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionReportAbuse* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionReportAbuse*>(USteamCoreWebAsyncActionReportAbuse::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionReportAbuse", "ReportAbuseAsync");

	Params::USteamCoreWebAsyncActionReportAbuse_ReportAbuseAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamIdActor = SteamIdActor;
	Parms.SteamIdTarget = SteamIdTarget;
	Parms.AppID = AppID;
	Parms.AbuseType = AbuseType;
	Parms.ContentType = ContentType;
	Parms.Description = Description;
	Parms.Gid = Gid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebSteamEconomy
// (None)

class UClass* UWebSteamEconomy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebSteamEconomy");

	return Clss;
}


// WebSteamEconomy SteamCoreWeb.Default__WebSteamEconomy
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebSteamEconomy* UWebSteamEconomy::GetDefaultObj()
{
	static class UWebSteamEconomy* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebSteamEconomy*>(UWebSteamEconomy::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamEconomy", "StartTrade");

	Params::UWebSteamEconomy_StartTrade_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamIDd = SteamIDd;
	Parms.SteamId2 = SteamId2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamEconomy", "StartAssetTransaction");

	Params::UWebSteamEconomy_StartAssetTransaction_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebSteamEconomy.GetMarketPrices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamEconomy::GetMarketPrices(FDelegateProperty_& Callback, const class FString& Key, int32 AppID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamEconomy", "GetMarketPrices");

	Params::UWebSteamEconomy_GetMarketPrices_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamEconomy", "GetExportedAssetsForUser");

	Params::UWebSteamEconomy_GetExportedAssetsForUser_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ContextID = ContextID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamEconomy", "GetAssetPrices");

	Params::UWebSteamEconomy_GetAssetPrices_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Currency = Currency;
	Parms.Language = Language;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamEconomy", "GetAssetClassInfo");

	Params::UWebSteamEconomy_GetAssetClassInfo_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Language = Language;
	Parms.ClassCount = ClassCount;
	Parms.ClassID = ClassID;
	Parms.InstanceId = InstanceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamEconomy", "FinalizeAssetTransaction");

	Params::UWebSteamEconomy_FinalizeAssetTransaction_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.TxnId = TxnId;
	Parms.Language = Language;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamEconomy", "CanTrade");

	Params::UWebSteamEconomy_CanTrade_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.TargetId = TargetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionCanTrade
// (None)

class UClass* USteamCoreWebAsyncActionCanTrade::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionCanTrade");

	return Clss;
}


// SteamCoreWebAsyncActionCanTrade SteamCoreWeb.Default__SteamCoreWebAsyncActionCanTrade
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionCanTrade* USteamCoreWebAsyncActionCanTrade::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionCanTrade* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionCanTrade*>(USteamCoreWebAsyncActionCanTrade::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionCanTrade", "CanTradeAsync");

	Params::USteamCoreWebAsyncActionCanTrade_CanTradeAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.TargetId = TargetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction
// (None)

class UClass* USteamCoreWebAsyncActionFinalizeAssetTransaction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionFinalizeAssetTransaction");

	return Clss;
}


// SteamCoreWebAsyncActionFinalizeAssetTransaction SteamCoreWeb.Default__SteamCoreWebAsyncActionFinalizeAssetTransaction
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionFinalizeAssetTransaction* USteamCoreWebAsyncActionFinalizeAssetTransaction::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionFinalizeAssetTransaction* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionFinalizeAssetTransaction*>(USteamCoreWebAsyncActionFinalizeAssetTransaction::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionFinalizeAssetTransaction", "FinalizeAssetTransactionAsync");

	Params::USteamCoreWebAsyncActionFinalizeAssetTransaction_FinalizeAssetTransactionAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamID = SteamID;
	Parms.TxnId = TxnId;
	Parms.Language = Language;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo
// (None)

class UClass* USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetAssetClassInfo");

	return Clss;
}


// SteamCoreWebAsyncActionGetAssetClassInfo SteamCoreWeb.Default__SteamCoreWebAsyncActionGetAssetClassInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetAssetClassInfo* USteamCoreWebAsyncActionGetAssetClassInfo::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetAssetClassInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetAssetClassInfo*>(USteamCoreWebAsyncActionGetAssetClassInfo::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetAssetClassInfo", "GetAssetClassInfoAsync");

	Params::USteamCoreWebAsyncActionGetAssetClassInfo_GetAssetClassInfoAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Language = Language;
	Parms.ClassCount = ClassCount;
	Parms.ClassID = ClassID;
	Parms.InstanceId = InstanceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices
// (None)

class UClass* USteamCoreWebAsyncActionGetAssetPrices::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetAssetPrices");

	return Clss;
}


// SteamCoreWebAsyncActionGetAssetPrices SteamCoreWeb.Default__SteamCoreWebAsyncActionGetAssetPrices
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetAssetPrices* USteamCoreWebAsyncActionGetAssetPrices::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetAssetPrices* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetAssetPrices*>(USteamCoreWebAsyncActionGetAssetPrices::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetAssetPrices", "GetAssetPricesAsync");

	Params::USteamCoreWebAsyncActionGetAssetPrices_GetAssetPricesAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Currency = Currency;
	Parms.Language = Language;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser
// (None)

class UClass* USteamCoreWebAsyncActionGetExportedAssetsForUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetExportedAssetsForUser");

	return Clss;
}


// SteamCoreWebAsyncActionGetExportedAssetsForUser SteamCoreWeb.Default__SteamCoreWebAsyncActionGetExportedAssetsForUser
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetExportedAssetsForUser* USteamCoreWebAsyncActionGetExportedAssetsForUser::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetExportedAssetsForUser* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetExportedAssetsForUser*>(USteamCoreWebAsyncActionGetExportedAssetsForUser::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetExportedAssetsForUser", "GetExportedAssetsForUserAsync");

	Params::USteamCoreWebAsyncActionGetExportedAssetsForUser_GetExportedAssetsForUserAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.ContextID = ContextID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices
// (None)

class UClass* USteamCoreWebAsyncActionGetMarketPrices::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetMarketPrices");

	return Clss;
}


// SteamCoreWebAsyncActionGetMarketPrices SteamCoreWeb.Default__SteamCoreWebAsyncActionGetMarketPrices
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetMarketPrices* USteamCoreWebAsyncActionGetMarketPrices::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetMarketPrices* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetMarketPrices*>(USteamCoreWebAsyncActionGetMarketPrices::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetMarketPrices", "GetMarketPricesAsync");

	Params::USteamCoreWebAsyncActionGetMarketPrices_GetMarketPricesAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction
// (None)

class UClass* USteamCoreWebAsyncActionStartAssetTransaction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionStartAssetTransaction");

	return Clss;
}


// SteamCoreWebAsyncActionStartAssetTransaction SteamCoreWeb.Default__SteamCoreWebAsyncActionStartAssetTransaction
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionStartAssetTransaction* USteamCoreWebAsyncActionStartAssetTransaction::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionStartAssetTransaction* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionStartAssetTransaction*>(USteamCoreWebAsyncActionStartAssetTransaction::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionStartAssetTransaction", "StartAssetTransactionAsync");

	Params::USteamCoreWebAsyncActionStartAssetTransaction_StartAssetTransactionAsync_Params Parms{};

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionStartTrade
// (None)

class UClass* USteamCoreWebAsyncActionStartTrade::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionStartTrade");

	return Clss;
}


// SteamCoreWebAsyncActionStartTrade SteamCoreWeb.Default__SteamCoreWebAsyncActionStartTrade
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionStartTrade* USteamCoreWebAsyncActionStartTrade::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionStartTrade* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionStartTrade*>(USteamCoreWebAsyncActionStartTrade::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionStartTrade", "StartTradeAsync");

	Params::USteamCoreWebAsyncActionStartTrade_StartTradeAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.SteamId1 = SteamId1;
	Parms.SteamId2 = SteamId2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebSteamGameServerStats
// (None)

class UClass* UWebSteamGameServerStats::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebSteamGameServerStats");

	return Clss;
}


// WebSteamGameServerStats SteamCoreWeb.Default__WebSteamGameServerStats
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebSteamGameServerStats* UWebSteamGameServerStats::GetDefaultObj()
{
	static class UWebSteamGameServerStats* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebSteamGameServerStats*>(UWebSteamGameServerStats::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamGameServerStats", "GetGameServerPlayerStatsForGame");

	Params::UWebSteamGameServerStats_GetGameServerPlayerStatsForGame_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.GameID = GameID;
	Parms.AppID = AppID;
	Parms.RangeStart = RangeStart;
	Parms.RangeEnd = RangeEnd;
	Parms.MaxResults = MaxResults;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.WebSteamNews
// (None)

class UClass* UWebSteamNews::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebSteamNews");

	return Clss;
}


// WebSteamNews SteamCoreWeb.Default__WebSteamNews
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebSteamNews* UWebSteamNews::GetDefaultObj()
{
	static class UWebSteamNews* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebSteamNews*>(UWebSteamNews::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamNews", "GetNewsForAppAuthed");

	Params::UWebSteamNews_GetNewsForAppAuthed_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.MaxLength = MaxLength;
	Parms.Feeds = Feeds;
	Parms.EndDate = EndDate;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamNews", "GetNewsForApp");

	Params::UWebSteamNews_GetNewsForApp_Params Parms{};

	Parms.Callback = Callback;
	Parms.AppID = AppID;
	Parms.MaxLength = MaxLength;
	Parms.Feeds = Feeds;
	Parms.EndDate = EndDate;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp
// (None)

class UClass* USteamCoreWebAsyncActionGetNewsForApp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetNewsForApp");

	return Clss;
}


// SteamCoreWebAsyncActionGetNewsForApp SteamCoreWeb.Default__SteamCoreWebAsyncActionGetNewsForApp
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetNewsForApp* USteamCoreWebAsyncActionGetNewsForApp::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetNewsForApp* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetNewsForApp*>(USteamCoreWebAsyncActionGetNewsForApp::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetNewsForApp", "GetNewsForAppAsync");

	Params::USteamCoreWebAsyncActionGetNewsForApp_GetNewsForAppAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;
	Parms.MaxLength = MaxLength;
	Parms.Feeds = Feeds;
	Parms.EndDate = EndDate;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed
// (None)

class UClass* USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetNewsForAppAuthed");

	return Clss;
}


// SteamCoreWebAsyncActionGetNewsForAppAuthed SteamCoreWeb.Default__SteamCoreWebAsyncActionGetNewsForAppAuthed
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetNewsForAppAuthed* USteamCoreWebAsyncActionGetNewsForAppAuthed::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetNewsForAppAuthed* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetNewsForAppAuthed*>(USteamCoreWebAsyncActionGetNewsForAppAuthed::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetNewsForAppAuthed", "GetNewsForAppAuthedAsync");

	Params::USteamCoreWebAsyncActionGetNewsForAppAuthed_GetNewsForAppAuthedAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.MaxLength = MaxLength;
	Parms.Feeds = Feeds;
	Parms.EndDate = EndDate;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebSteamUser
// (None)

class UClass* UWebSteamUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebSteamUser");

	return Clss;
}


// WebSteamUser SteamCoreWeb.Default__WebSteamUser
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebSteamUser* UWebSteamUser::GetDefaultObj()
{
	static class UWebSteamUser* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebSteamUser*>(UWebSteamUser::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamUser", "ResolveVanityURL");

	Params::UWebSteamUser_ResolveVanityURL_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.VanityURL = VanityURL;
	Parms.URLType = URLType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamUser", "GrantPackage");

	Params::UWebSteamUser_GrantPackage_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.PackageId = PackageId;
	Parms.Ipaddress = Ipaddress;
	Parms.ThirdPartyKey = ThirdPartyKey;
	Parms.ThirdPartyAppId = ThirdPartyAppId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebSteamUser.GetUserGroupList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamUser::GetUserGroupList(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamUser", "GetUserGroupList");

	Params::UWebSteamUser_GetUserGroupList_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamUser", "GetPublisherAppOwnershipChanges");

	Params::UWebSteamUser_GetPublisherAppOwnershipChanges_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.PackageRowVersion = PackageRowVersion;
	Parms.CDKeyRowVersion = CDKeyRowVersion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebSteamUser.GetPublisherAppOwnership
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SteamID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebSteamUser::GetPublisherAppOwnership(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamUser", "GetPublisherAppOwnership");

	Params::UWebSteamUser_GetPublisherAppOwnership_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebSteamUser.GetPlayerSummaries
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              SteamIDs                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebSteamUser::GetPlayerSummaries(FDelegateProperty_& Callback, const class FString& Key, const TArray<class FString>& SteamIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamUser", "GetPlayerSummaries");

	Params::UWebSteamUser_GetPlayerSummaries_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamIDs = SteamIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebSteamUser.GetPlayerBans
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              SteamIDs                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWebSteamUser::GetPlayerBans(FDelegateProperty_& Callback, const class FString& Key, const TArray<class FString>& SteamIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamUser", "GetPlayerBans");

	Params::UWebSteamUser_GetPlayerBans_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamIDs = SteamIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamUser", "GetFriendList");

	Params::UWebSteamUser_GetFriendList_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.Relationship = Relationship;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamUser", "GetAppPriceInfo");

	Params::UWebSteamUser_GetAppPriceInfo_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppIDs = AppIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebSteamUser", "CheckAppOwnership");

	Params::UWebSteamUser_CheckAppOwnership_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership
// (None)

class UClass* USteamCoreWebAsyncActionCheckAppOwnership::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionCheckAppOwnership");

	return Clss;
}


// SteamCoreWebAsyncActionCheckAppOwnership SteamCoreWeb.Default__SteamCoreWebAsyncActionCheckAppOwnership
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionCheckAppOwnership* USteamCoreWebAsyncActionCheckAppOwnership::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionCheckAppOwnership* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionCheckAppOwnership*>(USteamCoreWebAsyncActionCheckAppOwnership::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionCheckAppOwnership", "CheckAppOwnershipAsync");

	Params::USteamCoreWebAsyncActionCheckAppOwnership_CheckAppOwnershipAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo
// (None)

class UClass* USteamCoreWebAsyncActionGetAppPriceInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetAppPriceInfo");

	return Clss;
}


// SteamCoreWebAsyncActionGetAppPriceInfo SteamCoreWeb.Default__SteamCoreWebAsyncActionGetAppPriceInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetAppPriceInfo* USteamCoreWebAsyncActionGetAppPriceInfo::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetAppPriceInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetAppPriceInfo*>(USteamCoreWebAsyncActionGetAppPriceInfo::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetAppPriceInfo", "GetAppPriceInfoAsync");

	Params::USteamCoreWebAsyncActionGetAppPriceInfo_GetAppPriceInfoAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppIDs = AppIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList
// (None)

class UClass* USteamCoreWebAsyncActionGetFriendList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetFriendList");

	return Clss;
}


// SteamCoreWebAsyncActionGetFriendList SteamCoreWeb.Default__SteamCoreWebAsyncActionGetFriendList
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetFriendList* USteamCoreWebAsyncActionGetFriendList::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetFriendList* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetFriendList*>(USteamCoreWebAsyncActionGetFriendList::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetFriendList", "GetFriendListAsync");

	Params::USteamCoreWebAsyncActionGetFriendList_GetFriendListAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.Relationship = Relationship;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans
// (None)

class UClass* USteamCoreWebAsyncActionGetPlayerBans::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPlayerBans");

	return Clss;
}


// SteamCoreWebAsyncActionGetPlayerBans SteamCoreWeb.Default__SteamCoreWebAsyncActionGetPlayerBans
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetPlayerBans* USteamCoreWebAsyncActionGetPlayerBans::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetPlayerBans* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetPlayerBans*>(USteamCoreWebAsyncActionGetPlayerBans::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetPlayerBans", "GetPlayerBansAsync");

	Params::USteamCoreWebAsyncActionGetPlayerBans_GetPlayerBansAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamIDs = SteamIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries
// (None)

class UClass* USteamCoreWebAsyncActionGetPlayerSummaries::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPlayerSummaries");

	return Clss;
}


// SteamCoreWebAsyncActionGetPlayerSummaries SteamCoreWeb.Default__SteamCoreWebAsyncActionGetPlayerSummaries
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetPlayerSummaries* USteamCoreWebAsyncActionGetPlayerSummaries::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetPlayerSummaries* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetPlayerSummaries*>(USteamCoreWebAsyncActionGetPlayerSummaries::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetPlayerSummaries", "GetPlayerSummariesAsync");

	Params::USteamCoreWebAsyncActionGetPlayerSummaries_GetPlayerSummariesAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamIDs = SteamIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership
// (None)

class UClass* USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPublisherAppOwnership");

	return Clss;
}


// SteamCoreWebAsyncActionGetPublisherAppOwnership SteamCoreWeb.Default__SteamCoreWebAsyncActionGetPublisherAppOwnership
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetPublisherAppOwnership* USteamCoreWebAsyncActionGetPublisherAppOwnership::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetPublisherAppOwnership* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetPublisherAppOwnership*>(USteamCoreWebAsyncActionGetPublisherAppOwnership::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetPublisherAppOwnership", "GetPublisherAppOwnershipAsync");

	Params::USteamCoreWebAsyncActionGetPublisherAppOwnership_GetPublisherAppOwnershipAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges
// (None)

class UClass* USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges");

	return Clss;
}


// SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges SteamCoreWeb.Default__SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges*>(USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges", "GetPublisherAppOwnershipChangesAsync");

	Params::USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges_GetPublisherAppOwnershipChangesAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.PackageRowVersion = PackageRowVersion;
	Parms.CDKeyRowVersion = CDKeyRowVersion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList
// (None)

class UClass* USteamCoreWebAsyncActionGetUserGroupList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetUserGroupList");

	return Clss;
}


// SteamCoreWebAsyncActionGetUserGroupList SteamCoreWeb.Default__SteamCoreWebAsyncActionGetUserGroupList
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetUserGroupList* USteamCoreWebAsyncActionGetUserGroupList::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetUserGroupList* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetUserGroupList*>(USteamCoreWebAsyncActionGetUserGroupList::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetUserGroupList", "GetUserGroupListAsync");

	Params::USteamCoreWebAsyncActionGetUserGroupList_GetUserGroupListAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage
// (None)

class UClass* USteamCoreWebAsyncActionGrantPackage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGrantPackage");

	return Clss;
}


// SteamCoreWebAsyncActionGrantPackage SteamCoreWeb.Default__SteamCoreWebAsyncActionGrantPackage
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGrantPackage* USteamCoreWebAsyncActionGrantPackage::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGrantPackage* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGrantPackage*>(USteamCoreWebAsyncActionGrantPackage::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGrantPackage", "GrantPackageAsync");

	Params::USteamCoreWebAsyncActionGrantPackage_GrantPackageAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.PackageId = PackageId;
	Parms.Ipaddress = Ipaddress;
	Parms.ThirdPartyKey = ThirdPartyKey;
	Parms.ThirdPartyAppId = ThirdPartyAppId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL
// (None)

class UClass* USteamCoreWebAsyncActionResolveVanityURL::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionResolveVanityURL");

	return Clss;
}


// SteamCoreWebAsyncActionResolveVanityURL SteamCoreWeb.Default__SteamCoreWebAsyncActionResolveVanityURL
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionResolveVanityURL* USteamCoreWebAsyncActionResolveVanityURL::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionResolveVanityURL* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionResolveVanityURL*>(USteamCoreWebAsyncActionResolveVanityURL::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionResolveVanityURL", "ResolveVanityURLAsync");

	Params::USteamCoreWebAsyncActionResolveVanityURL_ResolveVanityURLAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.VanityURL = VanityURL;
	Parms.URLType = URLType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebUserAuth
// (None)

class UClass* UWebUserAuth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebUserAuth");

	return Clss;
}


// WebUserAuth SteamCoreWeb.Default__WebUserAuth
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebUserAuth* UWebUserAuth::GetDefaultObj()
{
	static class UWebUserAuth* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebUserAuth*>(UWebUserAuth::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebUserAuth", "AuthenticateUserTicket");

	Params::UWebUserAuth_AuthenticateUserTicket_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Ticket = Ticket;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebUserAuth", "AuthenticateUser");

	Params::UWebUserAuth_AuthenticateUser_Params Parms{};

	Parms.Callback = Callback;
	Parms.SteamID = SteamID;
	Parms.SessionKey = SessionKey;
	Parms.EncryptedLoginKey = EncryptedLoginKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser
// (None)

class UClass* USteamCoreWebAsyncActionAuthenticateUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionAuthenticateUser");

	return Clss;
}


// SteamCoreWebAsyncActionAuthenticateUser SteamCoreWeb.Default__SteamCoreWebAsyncActionAuthenticateUser
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionAuthenticateUser* USteamCoreWebAsyncActionAuthenticateUser::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionAuthenticateUser* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionAuthenticateUser*>(USteamCoreWebAsyncActionAuthenticateUser::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionAuthenticateUser", "AuthenticateUserAsync");

	Params::USteamCoreWebAsyncActionAuthenticateUser_AuthenticateUserAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamID = SteamID;
	Parms.SessionKey = SessionKey;
	Parms.EncryptedLoginKey = EncryptedLoginKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket
// (None)

class UClass* USteamCoreWebAsyncActionAuthenticateUserTicket::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionAuthenticateUserTicket");

	return Clss;
}


// SteamCoreWebAsyncActionAuthenticateUserTicket SteamCoreWeb.Default__SteamCoreWebAsyncActionAuthenticateUserTicket
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionAuthenticateUserTicket* USteamCoreWebAsyncActionAuthenticateUserTicket::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionAuthenticateUserTicket* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionAuthenticateUserTicket*>(USteamCoreWebAsyncActionAuthenticateUserTicket::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionAuthenticateUserTicket", "AuthenticateUserTicketAsync");

	Params::USteamCoreWebAsyncActionAuthenticateUserTicket_AuthenticateUserTicketAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.AppID = AppID;
	Parms.Ticket = Ticket;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.WebUserStats
// (None)

class UClass* UWebUserStats::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebUserStats");

	return Clss;
}


// WebUserStats SteamCoreWeb.Default__WebUserStats
// (Public, ClassDefaultObject, ArchetypeObject)

class UWebUserStats* UWebUserStats::GetDefaultObj()
{
	static class UWebUserStats* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebUserStats*>(UWebUserStats::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebUserStats", "SetUserStatsForGame");

	Params::UWebUserStats_SetUserStatsForGame_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.Names = Names;
	Parms.Values = Values;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebUserStats", "GetUserStatsForGame");

	Params::UWebUserStats_GetUserStatsForGame_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebUserStats", "GetSchemaForGame");

	Params::UWebUserStats_GetSchemaForGame_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.Language = Language;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebUserStats", "GetPlayerAchievements");

	Params::UWebUserStats_GetPlayerAchievements_Params Parms{};

	Parms.Callback = Callback;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.Language = Language;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebUserStats.GetNumberOfCurrentPlayers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebUserStats::GetNumberOfCurrentPlayers(FDelegateProperty_& Callback, int32 AppID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebUserStats", "GetNumberOfCurrentPlayers");

	Params::UWebUserStats_GetNumberOfCurrentPlayers_Params Parms{};

	Parms.Callback = Callback;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebUserStats", "GetGlobalStatsForGame");

	Params::UWebUserStats_GetGlobalStatsForGame_Params Parms{};

	Parms.Callback = Callback;
	Parms.AppID = AppID;
	Parms.Names = Names;
	Parms.StartDate = StartDate;
	Parms.EndDate = EndDate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamCoreWeb.WebUserStats.GetGlobalAchievementPercentagesForApp
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      GameID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWebUserStats::GetGlobalAchievementPercentagesForApp(FDelegateProperty_& Callback, const class FString& GameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebUserStats", "GetGlobalAchievementPercentagesForApp");

	Params::UWebUserStats_GetGlobalAchievementPercentagesForApp_Params Parms{};

	Parms.Callback = Callback;
	Parms.GameID = GameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp
// (None)

class UClass* USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp");

	return Clss;
}


// SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp SteamCoreWeb.Default__SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp*>(USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.GetGlobalAchievementPercentagesForAppAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      GameID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp::GetGlobalAchievementPercentagesForAppAsync(class UObject* WorldContextObject, const class FString& GameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp", "GetGlobalAchievementPercentagesForAppAsync");

	Params::USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp_GetGlobalAchievementPercentagesForAppAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GameID = GameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame
// (None)

class UClass* USteamCoreWebAsyncActionGetGlobalStatsForGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetGlobalStatsForGame");

	return Clss;
}


// SteamCoreWebAsyncActionGetGlobalStatsForGame SteamCoreWeb.Default__SteamCoreWebAsyncActionGetGlobalStatsForGame
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetGlobalStatsForGame* USteamCoreWebAsyncActionGetGlobalStatsForGame::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetGlobalStatsForGame* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetGlobalStatsForGame*>(USteamCoreWebAsyncActionGetGlobalStatsForGame::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetGlobalStatsForGame", "GetGlobalStatsForGameAsync");

	Params::USteamCoreWebAsyncActionGetGlobalStatsForGame_GetGlobalStatsForGameAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;
	Parms.Names = Names;
	Parms.StartDate = StartDate;
	Parms.EndDate = EndDate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers
// (None)

class UClass* USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetNumberOfCurrentPlayers");

	return Clss;
}


// SteamCoreWebAsyncActionGetNumberOfCurrentPlayers SteamCoreWeb.Default__SteamCoreWebAsyncActionGetNumberOfCurrentPlayers
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetNumberOfCurrentPlayers*>(USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* USteamCoreWebAsyncActionGetNumberOfCurrentPlayers::GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, int32 AppID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetNumberOfCurrentPlayers", "GetNumberOfCurrentPlayersAsync");

	Params::USteamCoreWebAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements
// (None)

class UClass* USteamCoreWebAsyncActionGetPlayerAchievements::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPlayerAchievements");

	return Clss;
}


// SteamCoreWebAsyncActionGetPlayerAchievements SteamCoreWeb.Default__SteamCoreWebAsyncActionGetPlayerAchievements
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetPlayerAchievements* USteamCoreWebAsyncActionGetPlayerAchievements::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetPlayerAchievements* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetPlayerAchievements*>(USteamCoreWebAsyncActionGetPlayerAchievements::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetPlayerAchievements", "GetPlayerAchievementsAsync");

	Params::USteamCoreWebAsyncActionGetPlayerAchievements_GetPlayerAchievementsAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.Language = Language;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame
// (None)

class UClass* USteamCoreWebAsyncActionGetSchemaForGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetSchemaForGame");

	return Clss;
}


// SteamCoreWebAsyncActionGetSchemaForGame SteamCoreWeb.Default__SteamCoreWebAsyncActionGetSchemaForGame
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetSchemaForGame* USteamCoreWebAsyncActionGetSchemaForGame::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetSchemaForGame* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetSchemaForGame*>(USteamCoreWebAsyncActionGetSchemaForGame::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetSchemaForGame", "GetSchemaForGameAsync");

	Params::USteamCoreWebAsyncActionGetSchemaForGame_GetSchemaForGameAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.Language = Language;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame
// (None)

class UClass* USteamCoreWebAsyncActionGetUserStatsForGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetUserStatsForGame");

	return Clss;
}


// SteamCoreWebAsyncActionGetUserStatsForGame SteamCoreWeb.Default__SteamCoreWebAsyncActionGetUserStatsForGame
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionGetUserStatsForGame* USteamCoreWebAsyncActionGetUserStatsForGame::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionGetUserStatsForGame* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionGetUserStatsForGame*>(USteamCoreWebAsyncActionGetUserStatsForGame::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionGetUserStatsForGame", "GetUserStatsForGameAsync");

	Params::USteamCoreWebAsyncActionGetUserStatsForGame_GetUserStatsForGameAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame
// (None)

class UClass* USteamCoreWebAsyncActionSetUserStatsForGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamCoreWebAsyncActionSetUserStatsForGame");

	return Clss;
}


// SteamCoreWebAsyncActionSetUserStatsForGame SteamCoreWeb.Default__SteamCoreWebAsyncActionSetUserStatsForGame
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamCoreWebAsyncActionSetUserStatsForGame* USteamCoreWebAsyncActionSetUserStatsForGame::GetDefaultObj()
{
	static class USteamCoreWebAsyncActionSetUserStatsForGame* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamCoreWebAsyncActionSetUserStatsForGame*>(USteamCoreWebAsyncActionSetUserStatsForGame::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamCoreWebAsyncActionSetUserStatsForGame", "SetUserStatsForGameAsync");

	Params::USteamCoreWebAsyncActionSetUserStatsForGame_SetUserStatsForGameAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Key = Key;
	Parms.SteamID = SteamID;
	Parms.AppID = AppID;
	Parms.Names = Names;
	Parms.Values = Values;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}



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


// Function SteamCore.AppList.GetNumInstalledApps
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAppList::GetNumInstalledApps()
{
	static auto Func = Class->GetFunction("AppList", "GetNumInstalledApps");

	Params::UAppList_GetNumInstalledApps_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.AppList.GetInstalledApps
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      AppIDs                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              MaxAppIDs                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAppList::GetInstalledApps(TArray<int32>* AppIDs, int32 MaxAppIDs)
{
	static auto Func = Class->GetFunction("AppList", "GetInstalledApps");

	Params::UAppList_GetInstalledApps_Params Parms;

	Parms.MaxAppIDs = MaxAppIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AppIDs != nullptr)
		*AppIDs = Parms.AppIDs;

	return Parms.ReturnValue;

}


// Function SteamCore.AppList.GetAppName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAppList::GetAppName(int32 AppID, class FString* Name)
{
	static auto Func = Class->GetFunction("AppList", "GetAppName");

	Params::UAppList_GetAppName_Params Parms;

	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Name != nullptr)
		*Name = Parms.Name;

	return Parms.ReturnValue;

}


// Function SteamCore.AppList.GetAppInstallDir
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Directory                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAppList::GetAppInstallDir(int32 AppID, class FString* Directory)
{
	static auto Func = Class->GetFunction("AppList", "GetAppInstallDir");

	Params::UAppList_GetAppInstallDir_Params Parms;

	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Directory != nullptr)
		*Directory = Parms.Directory;

	return Parms.ReturnValue;

}


// Function SteamCore.AppList.GetAppBuildId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAppList::GetAppBuildId(int32 AppID)
{
	static auto Func = Class->GetFunction("AppList", "GetAppBuildId");

	Params::UAppList_GetAppBuildId_Params Parms;

	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.UninstallDLC
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UApps::UninstallDLC(int32 AppID)
{
	static auto Func = Class->GetFunction("Apps", "UninstallDLC");

	Params::UApps_UninstallDLC_Params Parms;

	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Apps.MarkContentCorrupt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bMissingFilesOnly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UApps::MarkContentCorrupt(bool bMissingFilesOnly)
{
	static auto Func = Class->GetFunction("Apps", "MarkContentCorrupt");

	Params::UApps_MarkContentCorrupt_Params Parms;

	Parms.bMissingFilesOnly = bMissingFilesOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.InstallDLC
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UApps::InstallDLC(int32 AppID)
{
	static auto Func = Class->GetFunction("Apps", "InstallDLC");

	Params::UApps_InstallDLC_Params Parms;

	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Apps.GetLaunchQueryParam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UApps::GetLaunchQueryParam(const class FString& Key)
{
	static auto Func = Class->GetFunction("Apps", "GetLaunchQueryParam");

	Params::UApps_GetLaunchQueryParam_Params Parms;

	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.GetLaunchCommandLine
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      CommandLine                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UApps::GetLaunchCommandLine(class FString* CommandLine)
{
	static auto Func = Class->GetFunction("Apps", "GetLaunchCommandLine");

	Params::UApps_GetLaunchCommandLine_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (CommandLine != nullptr)
		*CommandLine = Parms.CommandLine;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.GetInstalledDepots
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxDepots                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Depots                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UApps::GetInstalledDepots(int32 AppID, int32 MaxDepots, TArray<int32>* Depots)
{
	static auto Func = Class->GetFunction("Apps", "GetInstalledDepots");

	Params::UApps_GetInstalledDepots_Params Parms;

	Parms.AppID = AppID;
	Parms.MaxDepots = MaxDepots;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Depots != nullptr)
		*Depots = Parms.Depots;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.GetFileDetails
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UApps::GetFileDetails(FDelegateProperty_& Callback, const class FString& Filename)
{
	static auto Func = Class->GetFunction("Apps", "GetFileDetails");

	Params::UApps_GetFileDetails_Params Parms;

	Parms.Callback = Callback;
	Parms.Filename = Filename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Apps.GetEarliestPurchaseUnixTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UApps::GetEarliestPurchaseUnixTime(int32 AppID)
{
	static auto Func = Class->GetFunction("Apps", "GetEarliestPurchaseUnixTime");

	Params::UApps_GetEarliestPurchaseUnixTime_Params Parms;

	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.GetDlcDownloadProgress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BytesDownloaded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BytesTotal                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UApps::GetDlcDownloadProgress(int32 AppID, int32* BytesDownloaded, int32* BytesTotal)
{
	static auto Func = Class->GetFunction("Apps", "GetDlcDownloadProgress");

	Params::UApps_GetDlcDownloadProgress_Params Parms;

	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (BytesDownloaded != nullptr)
		*BytesDownloaded = Parms.BytesDownloaded;

	if (BytesTotal != nullptr)
		*BytesTotal = Parms.BytesTotal;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.GetDLCCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UApps::GetDLCCount()
{
	static auto Func = Class->GetFunction("Apps", "GetDLCCount");

	Params::UApps_GetDLCCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.GetCurrentGameLanguage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UApps::GetCurrentGameLanguage()
{
	static auto Func = Class->GetFunction("Apps", "GetCurrentGameLanguage");

	Params::UApps_GetCurrentGameLanguage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.GetCurrentBetaName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UApps::GetCurrentBetaName(class FString* Name)
{
	static auto Func = Class->GetFunction("Apps", "GetCurrentBetaName");

	Params::UApps_GetCurrentBetaName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Name != nullptr)
		*Name = Parms.Name;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.GetAvailableGameLanguages
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UApps::GetAvailableGameLanguages()
{
	static auto Func = Class->GetFunction("Apps", "GetAvailableGameLanguages");

	Params::UApps_GetAvailableGameLanguages_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.GetAppOwner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID UApps::GetAppOwner()
{
	static auto Func = Class->GetFunction("Apps", "GetAppOwner");

	Params::UApps_GetAppOwner_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.GetAppInstallDir
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Folder                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UApps::GetAppInstallDir(int32 AppID, class FString* Folder)
{
	static auto Func = Class->GetFunction("Apps", "GetAppInstallDir");

	Params::UApps_GetAppInstallDir_Params Parms;

	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Folder != nullptr)
		*Folder = Parms.Folder;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.GetAppBuildId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UApps::GetAppBuildId()
{
	static auto Func = Class->GetFunction("Apps", "GetAppBuildId");

	Params::UApps_GetAppBuildId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.BIsVACBanned
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UApps::BIsVACBanned()
{
	static auto Func = Class->GetFunction("Apps", "BIsVACBanned");

	Params::UApps_BIsVACBanned_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.BIsTimedTrial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SecondsAllowed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SecondsPlayed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UApps::BIsTimedTrial(int32* SecondsAllowed, int32* SecondsPlayed)
{
	static auto Func = Class->GetFunction("Apps", "BIsTimedTrial");

	Params::UApps_BIsTimedTrial_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SecondsAllowed != nullptr)
		*SecondsAllowed = Parms.SecondsAllowed;

	if (SecondsPlayed != nullptr)
		*SecondsPlayed = Parms.SecondsPlayed;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.BIsSubscribedFromFreeWeekend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UApps::BIsSubscribedFromFreeWeekend()
{
	static auto Func = Class->GetFunction("Apps", "BIsSubscribedFromFreeWeekend");

	Params::UApps_BIsSubscribedFromFreeWeekend_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.BIsSubscribedFromFamilySharing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UApps::BIsSubscribedFromFamilySharing()
{
	static auto Func = Class->GetFunction("Apps", "BIsSubscribedFromFamilySharing");

	Params::UApps_BIsSubscribedFromFamilySharing_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.BIsSubscribedApp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UApps::BIsSubscribedApp(int32 AppID)
{
	static auto Func = Class->GetFunction("Apps", "BIsSubscribedApp");

	Params::UApps_BIsSubscribedApp_Params Parms;

	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.BIsSubscribed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UApps::BIsSubscribed()
{
	static auto Func = Class->GetFunction("Apps", "BIsSubscribed");

	Params::UApps_BIsSubscribed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.BIsLowViolence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UApps::BIsLowViolence()
{
	static auto Func = Class->GetFunction("Apps", "BIsLowViolence");

	Params::UApps_BIsLowViolence_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.BIsDlcInstalled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UApps::BIsDlcInstalled(int32 AppID)
{
	static auto Func = Class->GetFunction("Apps", "BIsDlcInstalled");

	Params::UApps_BIsDlcInstalled_Params Parms;

	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.BIsCybercafe
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UApps::BIsCybercafe()
{
	static auto Func = Class->GetFunction("Apps", "BIsCybercafe");

	Params::UApps_BIsCybercafe_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.BIsAppInstalled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UApps::BIsAppInstalled(int32 AppID)
{
	static auto Func = Class->GetFunction("Apps", "BIsAppInstalled");

	Params::UApps_BIsAppInstalled_Params Parms;

	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Apps.BGetDLCDataByIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              DLC                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAvailable                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UApps::BGetDLCDataByIndex(int32 DLC, int32* AppID, bool* bAvailable, class FString* Name)
{
	static auto Func = Class->GetFunction("Apps", "BGetDLCDataByIndex");

	Params::UApps_BGetDLCDataByIndex_Params Parms;

	Parms.DLC = DLC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AppID != nullptr)
		*AppID = Parms.AppID;

	if (bAvailable != nullptr)
		*bAvailable = Parms.bAvailable;

	if (Name != nullptr)
		*Name = Parms.Name;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FFileDetailsResult          Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreAppsAsyncActionGetFileDetails::HandleCallback(struct FFileDetailsResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreAppsAsyncActionGetFileDetails", "HandleCallback");

	Params::USteamCoreAppsAsyncActionGetFileDetails_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.GetFileDetailsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAppsAsyncActionGetFileDetails*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreAppsAsyncActionGetFileDetails* USteamCoreAppsAsyncActionGetFileDetails::GetFileDetailsAsync(class UObject* WorldContextObject, const class FString& Filename, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreAppsAsyncActionGetFileDetails", "GetFileDetailsAsync");

	Params::USteamCoreAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Filename = Filename;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.SetRichPresence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::SetRichPresence(const class FString& Key, const class FString& Value)
{
	static auto Func = Class->GetFunction("Friends", "SetRichPresence");

	Params::UFriends_SetRichPresence_Params Parms;

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.SetPlayedWith
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUserPlayedWith                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UFriends::SetPlayedWith(const struct FSteamID& SteamIDUserPlayedWith)
{
	static auto Func = Class->GetFunction("Friends", "SetPlayedWith");

	Params::UFriends_SetPlayedWith_Params Parms;

	Parms.SteamIDUserPlayedWith = SteamIDUserPlayedWith;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.SetPersonaName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFriends::SetPersonaName(FDelegateProperty_& Callback, const class FString& Name)
{
	static auto Func = Class->GetFunction("Friends", "SetPersonaName");

	Params::UFriends_SetPersonaName_Params Parms;

	Parms.Callback = Callback;
	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.SetListenForFriendsMessages
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bInterceptEnabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::SetListenForFriendsMessages(bool bInterceptEnabled)
{
	static auto Func = Class->GetFunction("Friends", "SetListenForFriendsMessages");

	Params::UFriends_SetListenForFriendsMessages_Params Parms;

	Parms.bInterceptEnabled = bInterceptEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.SetInGameVoiceSpeaking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bSpeaking                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFriends::SetInGameVoiceSpeaking(const struct FSteamID& SteamIDUser, bool bSpeaking)
{
	static auto Func = Class->GetFunction("Friends", "SetInGameVoiceSpeaking");

	Params::UFriends_SetInGameVoiceSpeaking_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.bSpeaking = bSpeaking;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.SendClanChatMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClanChat                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Text                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::SendClanChatMessage(const struct FSteamID& SteamIDClanChat, const class FString& Text)
{
	static auto Func = Class->GetFunction("Friends", "SendClanChatMessage");

	Params::UFriends_SendClanChatMessage_Params Parms;

	Parms.SteamIDClanChat = SteamIDClanChat;
	Parms.Text = Text;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.RequestUserInformation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bRequireNameOnly                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::RequestUserInformation(const struct FSteamID& SteamIDUser, bool bRequireNameOnly)
{
	static auto Func = Class->GetFunction("Friends", "RequestUserInformation");

	Params::UFriends_RequestUserInformation_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.bRequireNameOnly = bRequireNameOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.RequestFriendRichPresence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UFriends::RequestFriendRichPresence(const struct FSteamID& SteamIDFriend)
{
	static auto Func = Class->GetFunction("Friends", "RequestFriendRichPresence");

	Params::UFriends_RequestFriendRichPresence_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.RequestClanOfficerList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UFriends::RequestClanOfficerList(FDelegateProperty_& Callback, const struct FSteamID& SteamIDClan)
{
	static auto Func = Class->GetFunction("Friends", "RequestClanOfficerList");

	Params::UFriends_RequestClanOfficerList_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamIDClan = SteamIDClan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.ReplyToFriendMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      MsgToSend                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::ReplyToFriendMessage(const struct FSteamID& SteamIDFriend, const class FString& MsgToSend)
{
	static auto Func = Class->GetFunction("Friends", "ReplyToFriendMessage");

	Params::UFriends_ReplyToFriendMessage_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;
	Parms.MsgToSend = MsgToSend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.RegisterProtocolInOverlayBrowser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Protocol                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::RegisterProtocolInOverlayBrowser(const class FString& Protocol)
{
	static auto Func = Class->GetFunction("Friends", "RegisterProtocolInOverlayBrowser");

	Params::UFriends_RegisterProtocolInOverlayBrowser_Params Parms;

	Parms.Protocol = Protocol;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.OpenClanChatWindowInSteam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClanChat                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::OpenClanChatWindowInSteam(const struct FSteamID& SteamIDClanChat)
{
	static auto Func = Class->GetFunction("Friends", "OpenClanChatWindowInSteam");

	Params::UFriends_OpenClanChatWindowInSteam_Params Parms;

	Parms.SteamIDClanChat = SteamIDClanChat;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.LeaveClanChatRoom
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::LeaveClanChatRoom(const struct FSteamID& SteamIDClan)
{
	static auto Func = Class->GetFunction("Friends", "LeaveClanChatRoom");

	Params::UFriends_LeaveClanChatRoom_Params Parms;

	Parms.SteamIDClan = SteamIDClan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.JoinClanChatRoom
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UFriends::JoinClanChatRoom(FDelegateProperty_& Callback, const struct FSteamID& SteamIDClan)
{
	static auto Func = Class->GetFunction("Friends", "JoinClanChatRoom");

	Params::UFriends_JoinClanChatRoom_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamIDClan = SteamIDClan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.IsUserInSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDSource                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::IsUserInSource(const struct FSteamID& SteamIDUser, const struct FSteamID& SteamIDSource)
{
	static auto Func = Class->GetFunction("Friends", "IsUserInSource");

	Params::UFriends_IsUserInSource_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.SteamIDSource = SteamIDSource;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.IsFollowing
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UFriends::IsFollowing(FDelegateProperty_& Callback, const struct FSteamID& SteamID)
{
	static auto Func = Class->GetFunction("Friends", "IsFollowing");

	Params::UFriends_IsFollowing_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.IsClanPublic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::IsClanPublic(const struct FSteamID& SteamIDClan)
{
	static auto Func = Class->GetFunction("Friends", "IsClanPublic");

	Params::UFriends_IsClanPublic_Params Parms;

	Parms.SteamIDClan = SteamIDClan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.IsClanOfficialGameGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::IsClanOfficialGameGroup(const struct FSteamID& SteamIDClan)
{
	static auto Func = Class->GetFunction("Friends", "IsClanOfficialGameGroup");

	Params::UFriends_IsClanOfficialGameGroup_Params Parms;

	Parms.SteamIDClan = SteamIDClan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.IsClanChatWindowOpenInSteam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClanChat                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::IsClanChatWindowOpenInSteam(const struct FSteamID& SteamIDClanChat)
{
	static auto Func = Class->GetFunction("Friends", "IsClanChatWindowOpenInSteam");

	Params::UFriends_IsClanChatWindowOpenInSteam_Params Parms;

	Parms.SteamIDClanChat = SteamIDClanChat;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.IsClanChatAdmin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClanChat                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::IsClanChatAdmin(const struct FSteamID& SteamIDClanChat, const struct FSteamID& SteamIDUser)
{
	static auto Func = Class->GetFunction("Friends", "IsClanChatAdmin");

	Params::UFriends_IsClanChatAdmin_Params Parms;

	Parms.SteamIDClanChat = SteamIDClanChat;
	Parms.SteamIDUser = SteamIDUser;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.InviteUserToGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ConnectString                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::InviteUserToGame(const struct FSteamID& SteamIDFriend, const class FString& ConnectString)
{
	static auto Func = Class->GetFunction("Friends", "InviteUserToGame");

	Params::UFriends_InviteUserToGame_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;
	Parms.ConnectString = ConnectString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.HasFriend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<enum class ESteamFriendFlags>Flags                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::HasFriend(const struct FSteamID& SteamIDFriend, const TArray<enum class ESteamFriendFlags>& Flags)
{
	static auto Func = Class->GetFunction("Friends", "HasFriend");

	Params::UFriends_HasFriend_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;
	Parms.Flags = Flags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetUserRestrictions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<enum class ESteamUserRestriction>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<enum class ESteamUserRestriction> UFriends::GetUserRestrictions()
{
	static auto Func = Class->GetFunction("Friends", "GetUserRestrictions");

	Params::UFriends_GetUserRestrictions_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetSmallFriendAvatar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UFriends::GetSmallFriendAvatar(const struct FSteamID& SteamIDFriend)
{
	static auto Func = Class->GetFunction("Friends", "GetSmallFriendAvatar");

	Params::UFriends_GetSmallFriendAvatar_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetPlayerNickname_Pure
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                    SteamIDPlayer                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFriends::GetPlayerNickname_Pure(const struct FSteamID& SteamIDPlayer)
{
	static auto Func = Class->GetFunction("Friends", "GetPlayerNickname_Pure");

	Params::UFriends_GetPlayerNickname_Pure_Params Parms;

	Parms.SteamIDPlayer = SteamIDPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetPlayerNickname
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDPlayer                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFriends::GetPlayerNickname(const struct FSteamID& SteamIDPlayer)
{
	static auto Func = Class->GetFunction("Friends", "GetPlayerNickname");

	Params::UFriends_GetPlayerNickname_Params Parms;

	Parms.SteamIDPlayer = SteamIDPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetPersonaState_Pure
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ESteamPersonaState      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamPersonaState UFriends::GetPersonaState_Pure()
{
	static auto Func = Class->GetFunction("Friends", "GetPersonaState_Pure");

	Params::UFriends_GetPersonaState_Pure_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetPersonaState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ESteamPersonaState      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamPersonaState UFriends::GetPersonaState()
{
	static auto Func = Class->GetFunction("Friends", "GetPersonaState");

	Params::UFriends_GetPersonaState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetPersonaName_Pure
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFriends::GetPersonaName_Pure()
{
	static auto Func = Class->GetFunction("Friends", "GetPersonaName_Pure");

	Params::UFriends_GetPersonaName_Pure_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetPersonaName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFriends::GetPersonaName()
{
	static auto Func = Class->GetFunction("Friends", "GetPersonaName");

	Params::UFriends_GetPersonaName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetMediumFriendAvatar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UFriends::GetMediumFriendAvatar(const struct FSteamID& SteamIDFriend)
{
	static auto Func = Class->GetFunction("Friends", "GetMediumFriendAvatar");

	Params::UFriends_GetMediumFriendAvatar_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetLargeFriendAvatar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UFriends::GetLargeFriendAvatar(const struct FSteamID& SteamIDFriend)
{
	static auto Func = Class->GetFunction("Friends", "GetLargeFriendAvatar");

	Params::UFriends_GetLargeFriendAvatar_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendSteamLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFriends::GetFriendSteamLevel(const struct FSteamID& SteamIDFriend)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendSteamLevel");

	Params::UFriends_GetFriendSteamLevel_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendsGroupName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamFriendsGroupID        FriendsGroupID                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFriends::GetFriendsGroupName(const struct FSteamFriendsGroupID& FriendsGroupID)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendsGroupName");

	Params::UFriends_GetFriendsGroupName_Params Parms;

	Parms.FriendsGroupID = FriendsGroupID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendsGroupMembersList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamFriendsGroupID        FriendsGroupID                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FSteamID>            SteamIDMembers                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              MembersCount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFriends::GetFriendsGroupMembersList(const struct FSteamFriendsGroupID& FriendsGroupID, TArray<struct FSteamID>* SteamIDMembers, int32 MembersCount)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendsGroupMembersList");

	Params::UFriends_GetFriendsGroupMembersList_Params Parms;

	Parms.FriendsGroupID = FriendsGroupID;
	Parms.MembersCount = MembersCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SteamIDMembers != nullptr)
		*SteamIDMembers = Parms.SteamIDMembers;

}


// Function SteamCore.Friends.GetFriendsGroupMembersCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamFriendsGroupID        FriendsGroupID                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFriends::GetFriendsGroupMembersCount(const struct FSteamFriendsGroupID& FriendsGroupID)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendsGroupMembersCount");

	Params::UFriends_GetFriendsGroupMembersCount_Params Parms;

	Parms.FriendsGroupID = FriendsGroupID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendsGroupIDByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              FriendGroup                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamFriendsGroupID        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamFriendsGroupID UFriends::GetFriendsGroupIDByIndex(int32 FriendGroup)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendsGroupIDByIndex");

	Params::UFriends_GetFriendsGroupIDByIndex_Params Parms;

	Parms.FriendGroup = FriendGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendsGroupCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFriends::GetFriendsGroupCount()
{
	static auto Func = Class->GetFunction("Friends", "GetFriendsGroupCount");

	Params::UFriends_GetFriendsGroupCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendRichPresenceKeyCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFriends::GetFriendRichPresenceKeyCount(const struct FSteamID& SteamIDFriend)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendRichPresenceKeyCount");

	Params::UFriends_GetFriendRichPresenceKeyCount_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendRichPresenceKeyByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFriends::GetFriendRichPresenceKeyByIndex(const struct FSteamID& SteamIDFriend, int32 Key)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendRichPresenceKeyByIndex");

	Params::UFriends_GetFriendRichPresenceKeyByIndex_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendRichPresence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFriends::GetFriendRichPresence(const struct FSteamID& SteamIDFriend, const class FString& Key)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendRichPresence");

	Params::UFriends_GetFriendRichPresence_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendRelationship
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamFriendRelationshipReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamFriendRelationship UFriends::GetFriendRelationship(const struct FSteamID& SteamIDFriend)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendRelationship");

	Params::UFriends_GetFriendRelationship_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendPersonaState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamPersonaState      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamPersonaState UFriends::GetFriendPersonaState(const struct FSteamID& SteamIDFriend)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendPersonaState");

	Params::UFriends_GetFriendPersonaState_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendPersonaNameHistory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              PersonaName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFriends::GetFriendPersonaNameHistory(const struct FSteamID& SteamIDFriend, int32 PersonaName)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendPersonaNameHistory");

	Params::UFriends_GetFriendPersonaNameHistory_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;
	Parms.PersonaName = PersonaName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendPersonaName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFriends::GetFriendPersonaName(const struct FSteamID& SteamIDFriend)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendPersonaName");

	Params::UFriends_GetFriendPersonaName_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendMessage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              MessageID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Text                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamChatEntryType     ChatEntryType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFriends::GetFriendMessage(const struct FSteamID& SteamIDFriend, int32 MessageID, class FString* Text, enum class ESteamChatEntryType* ChatEntryType)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendMessage");

	Params::UFriends_GetFriendMessage_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;
	Parms.MessageID = MessageID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Text != nullptr)
		*Text = Parms.Text;

	if (ChatEntryType != nullptr)
		*ChatEntryType = Parms.ChatEntryType;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendGamePlayed
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamGameID                GameID                                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      GameIP                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ConnectionPort                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              QueryPort                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDLobby                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::GetFriendGamePlayed(const struct FSteamID& SteamIDFriend, struct FSteamGameID* GameID, class FString* GameIP, int32* ConnectionPort, int32* QueryPort, struct FSteamID* SteamIDLobby)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendGamePlayed");

	Params::UFriends_GetFriendGamePlayed_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (GameID != nullptr)
		*GameID = Parms.GameID;

	if (GameIP != nullptr)
		*GameIP = Parms.GameIP;

	if (ConnectionPort != nullptr)
		*ConnectionPort = Parms.ConnectionPort;

	if (QueryPort != nullptr)
		*QueryPort = Parms.QueryPort;

	if (SteamIDLobby != nullptr)
		*SteamIDLobby = Parms.SteamIDLobby;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendFromSourceByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDSource                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Ifriend                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID UFriends::GetFriendFromSourceByIndex(const struct FSteamID& SteamIDSource, int32 Ifriend)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendFromSourceByIndex");

	Params::UFriends_GetFriendFromSourceByIndex_Params Parms;

	Parms.SteamIDSource = SteamIDSource;
	Parms.Ifriend = Ifriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendCountFromSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDSource                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFriends::GetFriendCountFromSource(const struct FSteamID& SteamIDSource)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendCountFromSource");

	Params::UFriends_GetFriendCountFromSource_Params Parms;

	Parms.SteamIDSource = SteamIDSource;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<enum class ESteamFriendFlags>Flags                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFriends::GetFriendCount(const TArray<enum class ESteamFriendFlags>& Flags)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendCount");

	Params::UFriends_GetFriendCount_Params Parms;

	Parms.Flags = Flags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendCoplayTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFriends::GetFriendCoplayTime(const struct FSteamID& SteamIDFriend)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendCoplayTime");

	Params::UFriends_GetFriendCoplayTime_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendCoplayGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFriends::GetFriendCoplayGame(const struct FSteamID& SteamIDFriend)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendCoplayGame");

	Params::UFriends_GetFriendCoplayGame_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFriendByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Ifriend                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class ESteamFriendFlags>Flags                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID UFriends::GetFriendByIndex(int32 Ifriend, const TArray<enum class ESteamFriendFlags>& Flags)
{
	static auto Func = Class->GetFunction("Friends", "GetFriendByIndex");

	Params::UFriends_GetFriendByIndex_Params Parms;

	Parms.Ifriend = Ifriend;
	Parms.Flags = Flags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetFollowerCount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UFriends::GetFollowerCount(FDelegateProperty_& Callback, const struct FSteamID& SteamID)
{
	static auto Func = Class->GetFunction("Friends", "GetFollowerCount");

	Params::UFriends_GetFollowerCount_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.GetCoplayFriendCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFriends::GetCoplayFriendCount()
{
	static auto Func = Class->GetFunction("Friends", "GetCoplayFriendCount");

	Params::UFriends_GetCoplayFriendCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetCoplayFriend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              CoplayFriend                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID UFriends::GetCoplayFriend(int32 CoplayFriend)
{
	static auto Func = Class->GetFunction("Friends", "GetCoplayFriend");

	Params::UFriends_GetCoplayFriend_Params Parms;

	Parms.CoplayFriend = CoplayFriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetClanTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFriends::GetClanTag(const struct FSteamID& SteamIDClan)
{
	static auto Func = Class->GetFunction("Friends", "GetClanTag");

	Params::UFriends_GetClanTag_Params Parms;

	Parms.SteamIDClan = SteamIDClan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetClanOwner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID UFriends::GetClanOwner(const struct FSteamID& SteamIDClan)
{
	static auto Func = Class->GetFunction("Friends", "GetClanOwner");

	Params::UFriends_GetClanOwner_Params Parms;

	Parms.SteamIDClan = SteamIDClan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetClanOfficerCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFriends::GetClanOfficerCount(const struct FSteamID& SteamIDClan)
{
	static auto Func = Class->GetFunction("Friends", "GetClanOfficerCount");

	Params::UFriends_GetClanOfficerCount_Params Parms;

	Parms.SteamIDClan = SteamIDClan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetClanOfficerByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Officer                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID UFriends::GetClanOfficerByIndex(const struct FSteamID& SteamIDClan, int32 Officer)
{
	static auto Func = Class->GetFunction("Friends", "GetClanOfficerByIndex");

	Params::UFriends_GetClanOfficerByIndex_Params Parms;

	Parms.SteamIDClan = SteamIDClan;
	Parms.Officer = Officer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetClanName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFriends::GetClanName(const struct FSteamID& SteamIDClan)
{
	static auto Func = Class->GetFunction("Friends", "GetClanName");

	Params::UFriends_GetClanName_Params Parms;

	Parms.SteamIDClan = SteamIDClan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetClanCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFriends::GetClanCount()
{
	static auto Func = Class->GetFunction("Friends", "GetClanCount");

	Params::UFriends_GetClanCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetClanChatMessage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClanChat                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              MessageID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Text                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamChatEntryType     ChatEntryType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDChatter                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFriends::GetClanChatMessage(const struct FSteamID& SteamIDClanChat, int32 MessageID, class FString* Text, enum class ESteamChatEntryType* ChatEntryType, struct FSteamID* SteamIDChatter)
{
	static auto Func = Class->GetFunction("Friends", "GetClanChatMessage");

	Params::UFriends_GetClanChatMessage_Params Parms;

	Parms.SteamIDClanChat = SteamIDClanChat;
	Parms.MessageID = MessageID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Text != nullptr)
		*Text = Parms.Text;

	if (ChatEntryType != nullptr)
		*ChatEntryType = Parms.ChatEntryType;

	if (SteamIDChatter != nullptr)
		*SteamIDChatter = Parms.SteamIDChatter;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetClanChatMemberCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFriends::GetClanChatMemberCount(const struct FSteamID& SteamIDClan)
{
	static auto Func = Class->GetFunction("Friends", "GetClanChatMemberCount");

	Params::UFriends_GetClanChatMemberCount_Params Parms;

	Parms.SteamIDClan = SteamIDClan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetClanByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Clan                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID UFriends::GetClanByIndex(int32 Clan)
{
	static auto Func = Class->GetFunction("Friends", "GetClanByIndex");

	Params::UFriends_GetClanByIndex_Params Parms;

	Parms.Clan = Clan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetClanActivityCounts
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Online                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InGame                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Chatting                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::GetClanActivityCounts(const struct FSteamID& SteamIDClan, int32* Online, int32* InGame, int32* Chatting)
{
	static auto Func = Class->GetFunction("Friends", "GetClanActivityCounts");

	Params::UFriends_GetClanActivityCounts_Params Parms;

	Parms.SteamIDClan = SteamIDClan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Online != nullptr)
		*Online = Parms.Online;

	if (InGame != nullptr)
		*InGame = Parms.InGame;

	if (Chatting != nullptr)
		*Chatting = Parms.Chatting;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.GetChatMemberByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID UFriends::GetChatMemberByIndex(const struct FSteamID& SteamIDClan, int32 User)
{
	static auto Func = Class->GetFunction("Friends", "GetChatMemberByIndex");

	Params::UFriends_GetChatMemberByIndex_Params Parms;

	Parms.SteamIDClan = SteamIDClan;
	Parms.User = User;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.EnumerateFollowingList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFriends::EnumerateFollowingList(FDelegateProperty_& Callback, int32 StartIndex)
{
	static auto Func = Class->GetFunction("Friends", "EnumerateFollowingList");

	Params::UFriends_EnumerateFollowingList_Params Parms;

	Parms.Callback = Callback;
	Parms.StartIndex = StartIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.DownloadClanActivityCounts
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamID>            SteamIDClans                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFriends::DownloadClanActivityCounts(FDelegateProperty_& Callback, const TArray<struct FSteamID>& SteamIDClans)
{
	static auto Func = Class->GetFunction("Friends", "DownloadClanActivityCounts");

	Params::UFriends_DownloadClanActivityCounts_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamIDClans = SteamIDClans;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.CloseClanChatWindowInSteam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDClanChat                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFriends::CloseClanChatWindowInSteam(const struct FSteamID& SteamIDClanChat)
{
	static auto Func = Class->GetFunction("Friends", "CloseClanChatWindowInSteam");

	Params::UFriends_CloseClanChatWindowInSteam_Params Parms;

	Parms.SteamIDClanChat = SteamIDClanChat;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Friends.ClearRichPresence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UFriends::ClearRichPresence()
{
	static auto Func = Class->GetFunction("Friends", "ClearRichPresence");

	Params::UFriends_ClearRichPresence_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.ActivateGameOverlayToWebPage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamActivateGameOverlayToWebPageModeMode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFriends::ActivateGameOverlayToWebPage(const class FString& URL, enum class ESteamActivateGameOverlayToWebPageMode Mode)
{
	static auto Func = Class->GetFunction("Friends", "ActivateGameOverlayToWebPage");

	Params::UFriends_ActivateGameOverlayToWebPage_Params Parms;

	Parms.URL = URL;
	Parms.Mode = Mode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.ActivateGameOverlayToUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Dialog                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UFriends::ActivateGameOverlayToUser(const class FString& Dialog, const struct FSteamID& SteamID)
{
	static auto Func = Class->GetFunction("Friends", "ActivateGameOverlayToUser");

	Params::UFriends_ActivateGameOverlayToUser_Params Parms;

	Parms.Dialog = Dialog;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.ActivateGameOverlayToStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamOverlayToStoreFlagFlag                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFriends::ActivateGameOverlayToStore(int32 AppID, enum class ESteamOverlayToStoreFlag Flag)
{
	static auto Func = Class->GetFunction("Friends", "ActivateGameOverlayToStore");

	Params::UFriends_ActivateGameOverlayToStore_Params Parms;

	Parms.AppID = AppID;
	Parms.Flag = Flag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.ActivateGameOverlayInviteDialogConnectString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ConnectString                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFriends::ActivateGameOverlayInviteDialogConnectString(const class FString& ConnectString)
{
	static auto Func = Class->GetFunction("Friends", "ActivateGameOverlayInviteDialogConnectString");

	Params::UFriends_ActivateGameOverlayInviteDialogConnectString_Params Parms;

	Parms.ConnectString = ConnectString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.ActivateGameOverlayInvitedialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UFriends::ActivateGameOverlayInvitedialog(const struct FSteamID& SteamIDLobby)
{
	static auto Func = Class->GetFunction("Friends", "ActivateGameOverlayInvitedialog");

	Params::UFriends_ActivateGameOverlayInvitedialog_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Friends.ActivateGameOverlay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Dialog                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFriends::ActivateGameOverlay(const class FString& Dialog)
{
	static auto Func = Class->GetFunction("Friends", "ActivateGameOverlay");

	Params::UFriends_ActivateGameOverlay_Params Parms;

	Parms.Dialog = Dialog;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.SetPersonaNameAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionSetPersonaName*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreFriendsAsyncActionSetPersonaName* USteamCoreFriendsAsyncActionSetPersonaName::SetPersonaNameAsync(class UObject* WorldContextObject, const class FString& Name, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionSetPersonaName", "SetPersonaNameAsync");

	Params::USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Name = Name;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FSetPersonaNameResponse     Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreFriendsAsyncActionSetPersonaName::HandleCallback(struct FSetPersonaNameResponse& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionSetPersonaName", "HandleCallback");

	Params::USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FDownloadClanActivityCountsResultData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreFriendsAsyncActionDownloadClanActivityCounts::HandleCallback(struct FDownloadClanActivityCountsResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionDownloadClanActivityCounts", "HandleCallback");

	Params::USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.DownloadClanActivityCountsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamID>            SteamIDClans                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionDownloadClanActivityCounts*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreFriendsAsyncActionDownloadClanActivityCounts* USteamCoreFriendsAsyncActionDownloadClanActivityCounts::DownloadClanActivityCountsAsync(class UObject* WorldContextObject, const TArray<struct FSteamID>& SteamIDClans, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionDownloadClanActivityCounts", "DownloadClanActivityCountsAsync");

	Params::USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamIDClans = SteamIDClans;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.RequestClanOfficerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionRequestClanOfficerList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreFriendsAsyncActionRequestClanOfficerList* USteamCoreFriendsAsyncActionRequestClanOfficerList::RequestClanOfficerListAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDClan, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionRequestClanOfficerList", "RequestClanOfficerListAsync");

	Params::USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamIDClan = SteamIDClan;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FClanOfficerListResponse    Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreFriendsAsyncActionRequestClanOfficerList::HandleCallback(struct FClanOfficerListResponse& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionRequestClanOfficerList", "HandleCallback");

	Params::USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.JoinClanChatRoomAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionJoinClanChatRoom*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreFriendsAsyncActionJoinClanChatRoom* USteamCoreFriendsAsyncActionJoinClanChatRoom::JoinClanChatRoomAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDClan, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionJoinClanChatRoom", "JoinClanChatRoomAsync");

	Params::USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamIDClan = SteamIDClan;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FJoinClanChatRoomCompletionResultData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreFriendsAsyncActionJoinClanChatRoom::HandleCallback(struct FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionJoinClanChatRoom", "HandleCallback");

	Params::USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FFriendsEnumerateFollowingListData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreFriendsAsyncActionEnumerateFollowingList::HandleCallback(struct FFriendsEnumerateFollowingList& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionEnumerateFollowingList", "HandleCallback");

	Params::USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.EnumerateFollowingListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionEnumerateFollowingList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreFriendsAsyncActionEnumerateFollowingList* USteamCoreFriendsAsyncActionEnumerateFollowingList::EnumerateFollowingListAsync(class UObject* WorldContextObject, int32 StartIndex, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionEnumerateFollowingList", "EnumerateFollowingListAsync");

	Params::USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.StartIndex = StartIndex;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.IsFollowingAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionIsFollowing*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreFriendsAsyncActionIsFollowing* USteamCoreFriendsAsyncActionIsFollowing::IsFollowingAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionIsFollowing", "IsFollowingAsync");

	Params::USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamID = SteamID;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FFriendsIsFollowing         Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreFriendsAsyncActionIsFollowing::HandleCallback(struct FFriendsIsFollowing& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionIsFollowing", "HandleCallback");

	Params::USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FFriendsGetFollowerCount    Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreFriendsAsyncActionGetFollowerCount::HandleCallback(struct FFriendsGetFollowerCount& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionGetFollowerCount", "HandleCallback");

	Params::USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.GetFollowerCountAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionGetFollowerCount*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreFriendsAsyncActionGetFollowerCount* USteamCoreFriendsAsyncActionGetFollowerCount::GetFollowerCountAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionGetFollowerCount", "GetFollowerCountAsync");

	Params::USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamID = SteamID;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.RequestUserInformationAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bRequireNameOnly                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFriendsAsyncActionRequestUserInformation*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreFriendsAsyncActionRequestUserInformation* USteamCoreFriendsAsyncActionRequestUserInformation::RequestUserInformationAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDUser, bool bRequireNameOnly, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionRequestUserInformation", "RequestUserInformationAsync");

	Params::USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamIDUser = SteamIDUser;
	Parms.bRequireNameOnly = bRequireNameOnly;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.HandleCallback
// (Final, Native, Public)
// Parameters:

void USteamCoreFriendsAsyncActionRequestUserInformation::HandleCallback()
{
	static auto Func = Class->GetFunction("SteamCoreFriendsAsyncActionRequestUserInformation", "HandleCallback");

	Params::USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameSearch.SubmitPlayerResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UniqueGameID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDPlayer                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamPlayerResult      PlayerResult                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamGameSearchErrorCodeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamGameSearchErrorCode USteamGameSearch::SubmitPlayerResult(const class FString& UniqueGameID, const struct FSteamID& SteamIDPlayer, enum class ESteamPlayerResult PlayerResult)
{
	static auto Func = Class->GetFunction("SteamGameSearch", "SubmitPlayerResult");

	Params::USteamGameSearch_SubmitPlayerResult_Params Parms;

	Parms.UniqueGameID = UniqueGameID;
	Parms.SteamIDPlayer = SteamIDPlayer;
	Parms.PlayerResult = PlayerResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameSearch.SetGameHostParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Values                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class ESteamGameSearchErrorCodeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamGameSearchErrorCode USteamGameSearch::SetGameHostParams(const class FString& Key, const TArray<class FString>& Values)
{
	static auto Func = Class->GetFunction("SteamGameSearch", "SetGameHostParams");

	Params::USteamGameSearch_SetGameHostParams_Params Parms;

	Parms.Key = Key;
	Parms.Values = Values;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameSearch.SetConnectionDetails
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ConnectionDetails                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamGameSearchErrorCodeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamGameSearchErrorCode USteamGameSearch::SetConnectionDetails(const class FString& ConnectionDetails)
{
	static auto Func = Class->GetFunction("SteamGameSearch", "SetConnectionDetails");

	Params::USteamGameSearch_SetConnectionDetails_Params Parms;

	Parms.ConnectionDetails = ConnectionDetails;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameSearch.SearchForGameWithLobby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              PlayerMin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerMax                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamGameSearchErrorCodeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamGameSearchErrorCode USteamGameSearch::SearchForGameWithLobby(const struct FSteamID& SteamIDLobby, int32 PlayerMin, int32 PlayerMax)
{
	static auto Func = Class->GetFunction("SteamGameSearch", "SearchForGameWithLobby");

	Params::USteamGameSearch_SearchForGameWithLobby_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.PlayerMin = PlayerMin;
	Parms.PlayerMax = PlayerMax;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameSearch.SearchForGameSolo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerMin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerMax                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamGameSearchErrorCodeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamGameSearchErrorCode USteamGameSearch::SearchForGameSolo(int32 PlayerMin, int32 PlayerMax)
{
	static auto Func = Class->GetFunction("SteamGameSearch", "SearchForGameSolo");

	Params::USteamGameSearch_SearchForGameSolo_Params Parms;

	Parms.PlayerMin = PlayerMin;
	Parms.PlayerMax = PlayerMax;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameSearch.RetrieveConnectionDetails
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDHost                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ConnectionDetails                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumConnectionDetails                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamGameSearchErrorCodeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamGameSearchErrorCode USteamGameSearch::RetrieveConnectionDetails(const struct FSteamID& SteamIDHost, class FString* ConnectionDetails, int32 NumConnectionDetails)
{
	static auto Func = Class->GetFunction("SteamGameSearch", "RetrieveConnectionDetails");

	Params::USteamGameSearch_RetrieveConnectionDetails_Params Parms;

	Parms.SteamIDHost = SteamIDHost;
	Parms.NumConnectionDetails = NumConnectionDetails;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ConnectionDetails != nullptr)
		*ConnectionDetails = Parms.ConnectionDetails;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameSearch.RequestPlayersForGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerMin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerMax                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxTeamSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamGameSearchErrorCodeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamGameSearchErrorCode USteamGameSearch::RequestPlayersForGame(int32 PlayerMin, int32 PlayerMax, int32 MaxTeamSize)
{
	static auto Func = Class->GetFunction("SteamGameSearch", "RequestPlayersForGame");

	Params::USteamGameSearch_RequestPlayersForGame_Params Parms;

	Parms.PlayerMin = PlayerMin;
	Parms.PlayerMax = PlayerMax;
	Parms.MaxTeamSize = MaxTeamSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameSearch.HostConfirmGameStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UniqueGameID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamGameSearchErrorCodeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamGameSearchErrorCode USteamGameSearch::HostConfirmGameStart(const class FString& UniqueGameID)
{
	static auto Func = Class->GetFunction("SteamGameSearch", "HostConfirmGameStart");

	Params::USteamGameSearch_HostConfirmGameStart_Params Parms;

	Parms.UniqueGameID = UniqueGameID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameSearch.EndGameSearch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESteamGameSearchErrorCodeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamGameSearchErrorCode USteamGameSearch::EndGameSearch()
{
	static auto Func = Class->GetFunction("SteamGameSearch", "EndGameSearch");

	Params::USteamGameSearch_EndGameSearch_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameSearch.EndGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UniqueGameID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamGameSearchErrorCodeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamGameSearchErrorCode USteamGameSearch::EndGame(const class FString& UniqueGameID)
{
	static auto Func = Class->GetFunction("SteamGameSearch", "EndGame");

	Params::USteamGameSearch_EndGame_Params Parms;

	Parms.UniqueGameID = UniqueGameID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameSearch.DeclineGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESteamGameSearchErrorCodeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamGameSearchErrorCode USteamGameSearch::DeclineGame()
{
	static auto Func = Class->GetFunction("SteamGameSearch", "DeclineGame");

	Params::USteamGameSearch_DeclineGame_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameSearch.CancelRequestPlayersForGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESteamGameSearchErrorCodeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamGameSearchErrorCode USteamGameSearch::CancelRequestPlayersForGame()
{
	static auto Func = Class->GetFunction("SteamGameSearch", "CancelRequestPlayersForGame");

	Params::USteamGameSearch_CancelRequestPlayersForGame_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameSearch.AddGameSearchParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      KeyToFind                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ValuesToFind                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class ESteamGameSearchErrorCodeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamGameSearchErrorCode USteamGameSearch::AddGameSearchParams(const class FString& KeyToFind, const TArray<class FString>& ValuesToFind)
{
	static auto Func = Class->GetFunction("SteamGameSearch", "AddGameSearchParams");

	Params::USteamGameSearch_AddGameSearchParams_Params Parms;

	Parms.KeyToFind = KeyToFind;
	Parms.ValuesToFind = ValuesToFind;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameSearch.AcceptGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESteamGameSearchErrorCodeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamGameSearchErrorCode USteamGameSearch::AcceptGame()
{
	static auto Func = Class->GetFunction("SteamGameSearch", "AcceptGame");

	Params::USteamGameSearch_AcceptGame_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.WasRestartRequested
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamGameServer::WasRestartRequested()
{
	static auto Func = Class->GetFunction("SteamGameServer", "WasRestartRequested");

	Params::USteamGameServer_WasRestartRequested_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.UserHasLicenseForApp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamUserHasLicenseForAppResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamUserHasLicenseForAppResult USteamGameServer::UserHasLicenseForApp(const struct FSteamID& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("SteamGameServer", "UserHasLicenseForApp");

	Params::USteamGameServer_UserHasLicenseForApp_Params Parms;

	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.SetSpectatorServerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SpectatorServerName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetSpectatorServerName(const class FString& SpectatorServerName)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetSpectatorServerName");

	Params::USteamGameServer_SetSpectatorServerName_Params Parms;

	Parms.SpectatorServerName = SpectatorServerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetSpectatorPort
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SpectatorPort                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetSpectatorPort(int32 SpectatorPort)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetSpectatorPort");

	Params::USteamGameServer_SetSpectatorPort_Params Parms;

	Parms.SpectatorPort = SpectatorPort;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetServerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ServerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetServerName(const class FString& ServerName)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetServerName");

	Params::USteamGameServer_SetServerName_Params Parms;

	Parms.ServerName = ServerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetRegion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Region                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetRegion(const class FString& Region)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetRegion");

	Params::USteamGameServer_SetRegion_Params Parms;

	Parms.Region = Region;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetProduct
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Product                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetProduct(const class FString& Product)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetProduct");

	Params::USteamGameServer_SetProduct_Params Parms;

	Parms.Product = Product;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetPasswordProtected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPasswordProtected                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetPasswordProtected(bool bPasswordProtected)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetPasswordProtected");

	Params::USteamGameServer_SetPasswordProtected_Params Parms;

	Parms.bPasswordProtected = bPasswordProtected;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetModDir
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ModDir                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetModDir(const class FString& ModDir)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetModDir");

	Params::USteamGameServer_SetModDir_Params Parms;

	Parms.ModDir = ModDir;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetMaxPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              PlayersMax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetMaxPlayerCount(int32 PlayersMax)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetMaxPlayerCount");

	Params::USteamGameServer_SetMaxPlayerCount_Params Parms;

	Parms.PlayersMax = PlayersMax;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetMapName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MapName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetMapName(const class FString& MapName)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetMapName");

	Params::USteamGameServer_SetMapName_Params Parms;

	Parms.MapName = MapName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetKeyValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetKeyValue(const class FString& Key, const class FString& Value)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetKeyValue");

	Params::USteamGameServer_SetKeyValue_Params Parms;

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetHeartbeatInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              HeartbeatInterval                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetHeartbeatInterval(int32 HeartbeatInterval)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetHeartbeatInterval");

	Params::USteamGameServer_SetHeartbeatInterval_Params Parms;

	Parms.HeartbeatInterval = HeartbeatInterval;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetGameTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      GameTags                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetGameTags(const class FString& GameTags)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetGameTags");

	Params::USteamGameServer_SetGameTags_Params Parms;

	Parms.GameTags = GameTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetGameDescription
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      GameDescription                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetGameDescription(const class FString& GameDescription)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetGameDescription");

	Params::USteamGameServer_SetGameDescription_Params Parms;

	Parms.GameDescription = GameDescription;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetGameData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      GameData                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetGameData(const class FString& GameData)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetGameData");

	Params::USteamGameServer_SetGameData_Params Parms;

	Parms.GameData = GameData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetDedicatedServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDedicated                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetDedicatedServer(bool bDedicated)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetDedicatedServer");

	Params::USteamGameServer_SetDedicatedServer_Params Parms;

	Parms.bDedicated = bDedicated;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetBotPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BotPlayers                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetBotPlayerCount(int32 BotPlayers)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetBotPlayerCount");

	Params::USteamGameServer_SetBotPlayerCount_Params Parms;

	Parms.BotPlayers = BotPlayers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.SetAdvertiseServerActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::SetAdvertiseServerActive(bool bActive)
{
	static auto Func = Class->GetFunction("SteamGameServer", "SetAdvertiseServerActive");

	Params::USteamGameServer_SetAdvertiseServerActive_Params Parms;

	Parms.bActive = bActive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.RequestUserGroupStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDGroup                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamGameServer::RequestUserGroupStatus(const struct FSteamID& SteamIDUser, const struct FSteamID& SteamIDGroup)
{
	static auto Func = Class->GetFunction("SteamGameServer", "RequestUserGroupStatus");

	Params::USteamGameServer_RequestUserGroupStatus_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.SteamIDGroup = SteamIDGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.LogOnAnonymous
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USteamGameServer::LogOnAnonymous()
{
	static auto Func = Class->GetFunction("SteamGameServer", "LogOnAnonymous");

	Params::USteamGameServer_LogOnAnonymous_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.LogOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Token                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::LogOn(const class FString& Token)
{
	static auto Func = Class->GetFunction("SteamGameServer", "LogOn");

	Params::USteamGameServer_LogOn_Params Parms;

	Parms.Token = Token;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.LogOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USteamGameServer::LogOff()
{
	static auto Func = Class->GetFunction("SteamGameServer", "LogOff");

	Params::USteamGameServer_LogOff_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.GetServerSteamID_PureCompact
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID USteamGameServer::GetServerSteamID_PureCompact()
{
	static auto Func = Class->GetFunction("SteamGameServer", "GetServerSteamID_PureCompact");

	Params::USteamGameServer_GetServerSteamID_PureCompact_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.GetServerSteamID_Pure
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID USteamGameServer::GetServerSteamID_Pure()
{
	static auto Func = Class->GetFunction("SteamGameServer", "GetServerSteamID_Pure");

	Params::USteamGameServer_GetServerSteamID_Pure_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.GetServerSteamID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID USteamGameServer::GetServerSteamID()
{
	static auto Func = Class->GetFunction("SteamGameServer", "GetServerSteamID");

	Params::USteamGameServer_GetServerSteamID_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.GetServerPublicIP_PureCompact
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamGameServer::GetServerPublicIP_PureCompact()
{
	static auto Func = Class->GetFunction("SteamGameServer", "GetServerPublicIP_PureCompact");

	Params::USteamGameServer_GetServerPublicIP_PureCompact_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.GetServerPublicIP_Pure
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamGameServer::GetServerPublicIP_Pure()
{
	static auto Func = Class->GetFunction("SteamGameServer", "GetServerPublicIP_Pure");

	Params::USteamGameServer_GetServerPublicIP_Pure_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.GetServerPublicIP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamGameServer::GetServerPublicIP()
{
	static auto Func = Class->GetFunction("SteamGameServer", "GetServerPublicIP");

	Params::USteamGameServer_GetServerPublicIP_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.GetAuthSessionTicket
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Ticket                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FSteamTicketHandle          ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamTicketHandle USteamGameServer::GetAuthSessionTicket(TArray<uint8>* Ticket)
{
	static auto Func = Class->GetFunction("SteamGameServer", "GetAuthSessionTicket");

	Params::USteamGameServer_GetAuthSessionTicket_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Ticket != nullptr)
		*Ticket = Parms.Ticket;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.ForceHeartbeat
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USteamGameServer::ForceHeartbeat()
{
	static auto Func = Class->GetFunction("SteamGameServer", "ForceHeartbeat");

	Params::USteamGameServer_ForceHeartbeat_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.EndAuthSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USteamGameServer::EndAuthSession(const struct FSteamID& SteamID)
{
	static auto Func = Class->GetFunction("SteamGameServer", "EndAuthSession");

	Params::USteamGameServer_EndAuthSession_Params Parms;

	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.EnableHeartbeats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamGameServer::EnableHeartbeats(bool bActive)
{
	static auto Func = Class->GetFunction("SteamGameServer", "EnableHeartbeats");

	Params::USteamGameServer_EnableHeartbeats_Params Parms;

	Parms.bActive = bActive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.CreateUnauthenticatedUserConnection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID USteamGameServer::CreateUnauthenticatedUserConnection()
{
	static auto Func = Class->GetFunction("SteamGameServer", "CreateUnauthenticatedUserConnection");

	Params::USteamGameServer_CreateUnauthenticatedUserConnection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.ComputeNewPlayerCompatibility
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDNewPlayer                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USteamGameServer::ComputeNewPlayerCompatibility(FDelegateProperty_& Callback, const struct FSteamID& SteamIDNewPlayer)
{
	static auto Func = Class->GetFunction("SteamGameServer", "ComputeNewPlayerCompatibility");

	Params::USteamGameServer_ComputeNewPlayerCompatibility_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamIDNewPlayer = SteamIDNewPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.ClearAllKeyValues
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USteamGameServer::ClearAllKeyValues()
{
	static auto Func = Class->GetFunction("SteamGameServer", "ClearAllKeyValues");

	Params::USteamGameServer_ClearAllKeyValues_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.CancelAuthTicket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamTicketHandle          TicketHandle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USteamGameServer::CancelAuthTicket(const struct FSteamTicketHandle& TicketHandle)
{
	static auto Func = Class->GetFunction("SteamGameServer", "CancelAuthTicket");

	Params::USteamGameServer_CancelAuthTicket_Params Parms;

	Parms.TicketHandle = TicketHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamGameServer.BUpdateUserData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Score                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamGameServer::BUpdateUserData(const struct FSteamID& SteamIDUser, const class FString& PlayerName, int32 Score)
{
	static auto Func = Class->GetFunction("SteamGameServer", "BUpdateUserData");

	Params::USteamGameServer_BUpdateUserData_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.PlayerName = PlayerName;
	Parms.Score = Score;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.BSecure
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamGameServer::BSecure()
{
	static auto Func = Class->GetFunction("SteamGameServer", "BSecure");

	Params::USteamGameServer_BSecure_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.BLoggedOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamGameServer::BLoggedOn()
{
	static auto Func = Class->GetFunction("SteamGameServer", "BLoggedOn");

	Params::USteamGameServer_BLoggedOn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.BeginAuthSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Ticket                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamBeginAuthSessionResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamBeginAuthSessionResult USteamGameServer::BeginAuthSession(const TArray<uint8>& Ticket, const struct FSteamID& SteamID)
{
	static auto Func = Class->GetFunction("SteamGameServer", "BeginAuthSession");

	Params::USteamGameServer_BeginAuthSession_Params Parms;

	Parms.Ticket = Ticket;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamGameServer.AssociateWithClan
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDClan                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USteamGameServer::AssociateWithClan(FDelegateProperty_& Callback, const struct FSteamID& SteamIDClan)
{
	static auto Func = Class->GetFunction("SteamGameServer", "AssociateWithClan");

	Params::USteamGameServer_AssociateWithClan_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamIDClan = SteamIDClan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.GameServerStats.UpdateUserAvgRateStat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CountThisSession                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SessionLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameServerStats::UpdateUserAvgRateStat(const struct FSteamID& SteamIDUser, const class FString& Name, float CountThisSession, float SessionLength)
{
	static auto Func = Class->GetFunction("GameServerStats", "UpdateUserAvgRateStat");

	Params::UGameServerStats_UpdateUserAvgRateStat_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.Name = Name;
	Parms.CountThisSession = CountThisSession;
	Parms.SessionLength = SessionLength;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.GameServerStats.SetUserStatInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Data                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameServerStats::SetUserStatInt(const struct FSteamID& SteamIDUser, const class FString& Name, int32 Data)
{
	static auto Func = Class->GetFunction("GameServerStats", "SetUserStatInt");

	Params::UGameServerStats_SetUserStatInt_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.Name = Name;
	Parms.Data = Data;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.GameServerStats.SetUserStatFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Data                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameServerStats::SetUserStatFloat(const struct FSteamID& SteamIDUser, const class FString& Name, float Data)
{
	static auto Func = Class->GetFunction("GameServerStats", "SetUserStatFloat");

	Params::UGameServerStats_SetUserStatFloat_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.Name = Name;
	Parms.Data = Data;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.GameServerStats.SetUserAchievement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameServerStats::SetUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name)
{
	static auto Func = Class->GetFunction("GameServerStats", "SetUserAchievement");

	Params::UGameServerStats_SetUserAchievement_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.GameServerStats.ServerStoreUserStats
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UGameServerStats::ServerStoreUserStats(FDelegateProperty_& Callback, const struct FSteamID& SteamIDUser)
{
	static auto Func = Class->GetFunction("GameServerStats", "ServerStoreUserStats");

	Params::UGameServerStats_ServerStoreUserStats_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamIDUser = SteamIDUser;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.GameServerStats.ServerRequestUserStats
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UGameServerStats::ServerRequestUserStats(FDelegateProperty_& Callback, const struct FSteamID& SteamIDUser)
{
	static auto Func = Class->GetFunction("GameServerStats", "ServerRequestUserStats");

	Params::UGameServerStats_ServerRequestUserStats_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamIDUser = SteamIDUser;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.GameServerStats.GetUserStatInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Data                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameServerStats::GetUserStatInt(const struct FSteamID& SteamIDUser, const class FString& Name, int32* Data)
{
	static auto Func = Class->GetFunction("GameServerStats", "GetUserStatInt");

	Params::UGameServerStats_GetUserStatInt_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Data != nullptr)
		*Data = Parms.Data;

	return Parms.ReturnValue;

}


// Function SteamCore.GameServerStats.GetUserStatFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Data                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameServerStats::GetUserStatFloat(const struct FSteamID& SteamIDUser, const class FString& Name, float* Data)
{
	static auto Func = Class->GetFunction("GameServerStats", "GetUserStatFloat");

	Params::UGameServerStats_GetUserStatFloat_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Data != nullptr)
		*Data = Parms.Data;

	return Parms.ReturnValue;

}


// Function SteamCore.GameServerStats.GetUserAchievement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAchieved                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameServerStats::GetUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name, bool* bAchieved)
{
	static auto Func = Class->GetFunction("GameServerStats", "GetUserAchievement");

	Params::UGameServerStats_GetUserAchievement_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bAchieved != nullptr)
		*bAchieved = Parms.bAchieved;

	return Parms.ReturnValue;

}


// Function SteamCore.GameServerStats.ClearUserAchievement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameServerStats::ClearUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name)
{
	static auto Func = Class->GetFunction("GameServerStats", "ClearUserAchievement");

	Params::UGameServerStats_ClearUserAchievement_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.TriggerVibration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// uint8                              LeftSpeed                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              RightSpeed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInput::TriggerVibration(const struct FInputHandle& Handle, uint8 LeftSpeed, uint8 RightSpeed)
{
	static auto Func = Class->GetFunction("Input", "TriggerVibration");

	Params::UInput_TriggerVibration_Params Parms;

	Parms.Handle = Handle;
	Parms.LeftSpeed = LeftSpeed;
	Parms.RightSpeed = RightSpeed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Input.TriggerRepeatedHapticPulse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamCoreControllerPad TargetPad                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              DurationMicroSec                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              OffMicroSec                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Repeat                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Flags                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInput::TriggerRepeatedHapticPulse(const struct FInputHandle& Handle, enum class ESteamCoreControllerPad TargetPad, uint8 DurationMicroSec, uint8 OffMicroSec, uint8 Repeat, uint8 Flags)
{
	static auto Func = Class->GetFunction("Input", "TriggerRepeatedHapticPulse");

	Params::UInput_TriggerRepeatedHapticPulse_Params Parms;

	Parms.Handle = Handle;
	Parms.TargetPad = TargetPad;
	Parms.DurationMicroSec = DurationMicroSec;
	Parms.OffMicroSec = OffMicroSec;
	Parms.Repeat = Repeat;
	Parms.Flags = Flags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Input.TriggerHapticPulse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamCoreControllerPad TargetPad                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              DurationMicroSec                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInput::TriggerHapticPulse(const struct FInputHandle& Handle, enum class ESteamCoreControllerPad TargetPad, uint8 DurationMicroSec)
{
	static auto Func = Class->GetFunction("Input", "TriggerHapticPulse");

	Params::UInput_TriggerHapticPulse_Params Parms;

	Parms.Handle = Handle;
	Parms.TargetPad = TargetPad;
	Parms.DurationMicroSec = DurationMicroSec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Input.TranslateActionOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESteamCoreInputType     DestinationInputType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamCoreInputActionOriginSourceOrigin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamCoreInputActionOriginReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamCoreInputActionOrigin UInput::TranslateActionOrigin(enum class ESteamCoreInputType DestinationInputType, enum class ESteamCoreInputActionOrigin SourceOrigin)
{
	static auto Func = Class->GetFunction("Input", "TranslateActionOrigin");

	Params::UInput_TranslateActionOrigin_Params Parms;

	Parms.DestinationInputType = DestinationInputType;
	Parms.SourceOrigin = SourceOrigin;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.StopAnalogActionMomentum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputAnalogActionHandle    EAction                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UInput::StopAnalogActionMomentum(const struct FInputHandle& Handle, const struct FInputAnalogActionHandle& EAction)
{
	static auto Func = Class->GetFunction("Input", "StopAnalogActionMomentum");

	Params::UInput_StopAnalogActionMomentum_Params Parms;

	Parms.Handle = Handle;
	Parms.EAction = EAction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Input.Shutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInput::Shutdown()
{
	static auto Func = Class->GetFunction("Input", "Shutdown");

	Params::UInput_Shutdown_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.ShowBindingPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInput::ShowBindingPanel(const struct FInputHandle& Handle)
{
	static auto Func = Class->GetFunction("Input", "ShowBindingPanel");

	Params::UInput_ShowBindingPanel_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.SetLEDColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// uint8                              ColorR                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ColorG                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ColorB                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamCoreInputLEDFlag  Flags                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInput::SetLEDColor(const struct FInputHandle& Handle, uint8 ColorR, uint8 ColorG, uint8 ColorB, enum class ESteamCoreInputLEDFlag Flags)
{
	static auto Func = Class->GetFunction("Input", "SetLEDColor");

	Params::UInput_SetLEDColor_Params Parms;

	Parms.Handle = Handle;
	Parms.ColorR = ColorR;
	Parms.ColorG = ColorG;
	Parms.ColorB = ColorB;
	Parms.Flags = Flags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Input.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInput::Init()
{
	static auto Func = Class->GetFunction("Input", "Init");

	Params::UInput_Init_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetStringForXboxOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESteamCoreXboxOrigin    Origin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInput::GetStringForXboxOrigin(enum class ESteamCoreXboxOrigin Origin)
{
	static auto Func = Class->GetFunction("Input", "GetStringForXboxOrigin");

	Params::UInput_GetStringForXboxOrigin_Params Parms;

	Parms.Origin = Origin;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetStringForActionOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESteamCoreInputActionOriginOrigin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInput::GetStringForActionOrigin(enum class ESteamCoreInputActionOrigin Origin)
{
	static auto Func = Class->GetFunction("Input", "GetStringForActionOrigin");

	Params::UInput_GetStringForActionOrigin_Params Parms;

	Parms.Origin = Origin;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetRemotePlaySessionID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInput::GetRemotePlaySessionID(const struct FInputHandle& Handle)
{
	static auto Func = Class->GetFunction("Input", "GetRemotePlaySessionID");

	Params::UInput_GetRemotePlaySessionID_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetMotionData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputMotionData            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputMotionData UInput::GetMotionData(const struct FInputHandle& Handle)
{
	static auto Func = Class->GetFunction("Input", "GetMotionData");

	Params::UInput_GetMotionData_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetInputTypeForHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamCoreInputType     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamCoreInputType UInput::GetInputTypeForHandle(const struct FInputHandle& Handle)
{
	static auto Func = Class->GetFunction("Input", "GetInputTypeForHandle");

	Params::UInput_GetInputTypeForHandle_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetGlyphForXboxOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESteamCoreXboxOrigin    Origin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInput::GetGlyphForXboxOrigin(enum class ESteamCoreXboxOrigin Origin)
{
	static auto Func = Class->GetFunction("Input", "GetGlyphForXboxOrigin");

	Params::UInput_GetGlyphForXboxOrigin_Params Parms;

	Parms.Origin = Origin;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetGlyphForActionOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESteamCoreInputActionOriginOrigin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UInput::GetGlyphForActionOrigin(enum class ESteamCoreInputActionOrigin Origin)
{
	static auto Func = Class->GetFunction("Input", "GetGlyphForActionOrigin");

	Params::UInput_GetGlyphForActionOrigin_Params Parms;

	Parms.Origin = Origin;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetGamepadIndexForController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInput::GetGamepadIndexForController(const struct FInputHandle& Handle)
{
	static auto Func = Class->GetFunction("Input", "GetGamepadIndexForController");

	Params::UInput_GetGamepadIndexForController_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetDigitalActionOrigins
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputActionSetHandle       ActionSetHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputDigitalActionHandle   DigitalActionHandle                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<enum class ESteamCoreInputActionOrigin>OriginsOut                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInput::GetDigitalActionOrigins(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetHandle, const struct FInputDigitalActionHandle& DigitalActionHandle, TArray<enum class ESteamCoreInputActionOrigin>* OriginsOut)
{
	static auto Func = Class->GetFunction("Input", "GetDigitalActionOrigins");

	Params::UInput_GetDigitalActionOrigins_Params Parms;

	Parms.Handle = Handle;
	Parms.ActionSetHandle = ActionSetHandle;
	Parms.DigitalActionHandle = DigitalActionHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OriginsOut != nullptr)
		*OriginsOut = Parms.OriginsOut;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetDigitalActionHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PszActionName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputDigitalActionHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputDigitalActionHandle UInput::GetDigitalActionHandle(const class FString& PszActionName)
{
	static auto Func = Class->GetFunction("Input", "GetDigitalActionHandle");

	Params::UInput_GetDigitalActionHandle_Params Parms;

	Parms.PszActionName = PszActionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetDigitalActionData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputDigitalActionHandle   DigitalActionHandle                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputDigitalActionData     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputDigitalActionData UInput::GetDigitalActionData(const struct FInputHandle& Handle, const struct FInputDigitalActionHandle& DigitalActionHandle)
{
	static auto Func = Class->GetFunction("Input", "GetDigitalActionData");

	Params::UInput_GetDigitalActionData_Params Parms;

	Parms.Handle = Handle;
	Parms.DigitalActionHandle = DigitalActionHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetDeviceBindingRevision
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Major                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Minor                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInput::GetDeviceBindingRevision(const struct FInputHandle& Handle, int32* Major, int32* Minor)
{
	static auto Func = Class->GetFunction("Input", "GetDeviceBindingRevision");

	Params::UInput_GetDeviceBindingRevision_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Major != nullptr)
		*Major = Parms.Major;

	if (Minor != nullptr)
		*Minor = Parms.Minor;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetCurrentActionSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputActionSetHandle       ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionSetHandle UInput::GetCurrentActionSet(const struct FInputHandle& Handle)
{
	static auto Func = Class->GetFunction("Input", "GetCurrentActionSet");

	Params::UInput_GetCurrentActionSet_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetControllerForGamepadIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputHandle                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputHandle UInput::GetControllerForGamepadIndex(int32 Index)
{
	static auto Func = Class->GetFunction("Input", "GetControllerForGamepadIndex");

	Params::UInput_GetControllerForGamepadIndex_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetConnectedControllers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FInputHandle>        OutHandles                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInput::GetConnectedControllers(TArray<struct FInputHandle>* OutHandles)
{
	static auto Func = Class->GetFunction("Input", "GetConnectedControllers");

	Params::UInput_GetConnectedControllers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutHandles != nullptr)
		*OutHandles = Parms.OutHandles;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetAnalogActionOrigins
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputActionSetHandle       ActionSetHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputAnalogActionHandle    AnalogActionHandle                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<enum class ESteamCoreInputActionOrigin>OriginsOut                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInput::GetAnalogActionOrigins(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetHandle, const struct FInputAnalogActionHandle& AnalogActionHandle, TArray<enum class ESteamCoreInputActionOrigin>* OriginsOut)
{
	static auto Func = Class->GetFunction("Input", "GetAnalogActionOrigins");

	Params::UInput_GetAnalogActionOrigins_Params Parms;

	Parms.Handle = Handle;
	Parms.ActionSetHandle = ActionSetHandle;
	Parms.AnalogActionHandle = AnalogActionHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OriginsOut != nullptr)
		*OriginsOut = Parms.OriginsOut;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetAnalogActionHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PszActionName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputAnalogActionHandle    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputAnalogActionHandle UInput::GetAnalogActionHandle(const class FString& PszActionName)
{
	static auto Func = Class->GetFunction("Input", "GetAnalogActionHandle");

	Params::UInput_GetAnalogActionHandle_Params Parms;

	Parms.PszActionName = PszActionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetAnalogActionData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputAnalogActionHandle    AnalogActionHandle                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputAnalogActionData      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputAnalogActionData UInput::GetAnalogActionData(const struct FInputHandle& Handle, const struct FInputAnalogActionHandle& AnalogActionHandle)
{
	static auto Func = Class->GetFunction("Input", "GetAnalogActionData");

	Params::UInput_GetAnalogActionData_Params Parms;

	Parms.Handle = Handle;
	Parms.AnalogActionHandle = AnalogActionHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetActiveActionSetLayers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FInputActionSetHandle>Data                                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInput::GetActiveActionSetLayers(const struct FInputHandle& Handle, TArray<struct FInputActionSetHandle>* Data)
{
	static auto Func = Class->GetFunction("Input", "GetActiveActionSetLayers");

	Params::UInput_GetActiveActionSetLayers_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Data != nullptr)
		*Data = Parms.Data;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetActionSetHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ActionSetName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionSetHandle       ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionSetHandle UInput::GetActionSetHandle(const class FString& ActionSetName)
{
	static auto Func = Class->GetFunction("Input", "GetActionSetHandle");

	Params::UInput_GetActionSetHandle_Params Parms;

	Parms.ActionSetName = ActionSetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.GetActionOriginFromXboxOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamCoreXboxOrigin    Origin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamCoreInputActionOriginReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamCoreInputActionOrigin UInput::GetActionOriginFromXboxOrigin(const struct FInputHandle& Handle, enum class ESteamCoreXboxOrigin Origin)
{
	static auto Func = Class->GetFunction("Input", "GetActionOriginFromXboxOrigin");

	Params::UInput_GetActionOriginFromXboxOrigin_Params Parms;

	Parms.Handle = Handle;
	Parms.Origin = Origin;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Input.DeactivateAllActionSetLayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UInput::DeactivateAllActionSetLayers(const struct FInputHandle& Handle)
{
	static auto Func = Class->GetFunction("Input", "DeactivateAllActionSetLayers");

	Params::UInput_DeactivateAllActionSetLayers_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Input.DeactivateActionSetLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputActionSetHandle       ActionSetLayerHandle                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UInput::DeactivateActionSetLayer(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetLayerHandle)
{
	static auto Func = Class->GetFunction("Input", "DeactivateActionSetLayer");

	Params::UInput_DeactivateActionSetLayer_Params Parms;

	Parms.Handle = Handle;
	Parms.ActionSetLayerHandle = ActionSetLayerHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Input.ActivateActionSetLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputActionSetHandle       ActionSetLayerHandle                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UInput::ActivateActionSetLayer(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetLayerHandle)
{
	static auto Func = Class->GetFunction("Input", "ActivateActionSetLayer");

	Params::UInput_ActivateActionSetLayer_Params Parms;

	Parms.Handle = Handle;
	Parms.ActionSetLayerHandle = ActionSetLayerHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Input.ActivateActionSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FInputHandle                Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputActionSetHandle       ActionSetHandle                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UInput::ActivateActionSet(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetHandle)
{
	static auto Func = Class->GetFunction("Input", "ActivateActionSet");

	Params::UInput_ActivateActionSet_Params Parms;

	Parms.Handle = Handle;
	Parms.ActionSetHandle = ActionSetHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Inventory.TriggerItemDrop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Result                                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamItemDef               ListDefinition                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::TriggerItemDrop(struct FSteamInventoryResult* Result, const struct FSteamItemDef& ListDefinition)
{
	static auto Func = Class->GetFunction("Inventory", "TriggerItemDrop");

	Params::UInventory_TriggerItemDrop_Params Parms;

	Parms.ListDefinition = ListDefinition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.TransferItemQuantity
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Result                                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID        ItemIDSource                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID        ItemIDDest                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::TransferItemQuantity(struct FSteamInventoryResult* Result, const struct FSteamItemInstanceID& ItemIDSource, int32 Quantity, const struct FSteamItemInstanceID& ItemIDDest)
{
	static auto Func = Class->GetFunction("Inventory", "TransferItemQuantity");

	Params::UInventory_TransferItemQuantity_Params Parms;

	Parms.ItemIDSource = ItemIDSource;
	Parms.Quantity = Quantity;
	Parms.ItemIDDest = ItemIDDest;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.SubmitUpdateProperties
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamInventoryResult       ResultHandle                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::SubmitUpdateProperties(const struct FSteamInventoryUpdateHandle& Handle, struct FSteamInventoryResult* ResultHandle)
{
	static auto Func = Class->GetFunction("Inventory", "SubmitUpdateProperties");

	Params::UInventory_SubmitUpdateProperties_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ResultHandle != nullptr)
		*ResultHandle = Parms.ResultHandle;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.StartUpdateProperties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamInventoryUpdateHandle UInventory::StartUpdateProperties()
{
	static auto Func = Class->GetFunction("Inventory", "StartUpdateProperties");

	Params::UInventory_StartUpdateProperties_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.StartPurchase
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemDef>       ItemDefs                                                         (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Quantity                                                         (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInventory::StartPurchase(FDelegateProperty_& Callback, const TArray<struct FSteamItemDef>& ItemDefs, const TArray<int32>& Quantity)
{
	static auto Func = Class->GetFunction("Inventory", "StartPurchase");

	Params::UInventory_StartPurchase_Params Parms;

	Parms.Callback = Callback;
	Parms.ItemDefs = ItemDefs;
	Parms.Quantity = Quantity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Inventory.SetPropertyString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID        ItemId                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      PropertyName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::SetPropertyString(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, const class FString& Value)
{
	static auto Func = Class->GetFunction("Inventory", "SetPropertyString");

	Params::UInventory_SetPropertyString_Params Parms;

	Parms.Handle = Handle;
	Parms.ItemId = ItemId;
	Parms.PropertyName = PropertyName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.SetPropertyInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID        ItemId                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      PropertyName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::SetPropertyInt(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, int32 Value)
{
	static auto Func = Class->GetFunction("Inventory", "SetPropertyInt");

	Params::UInventory_SetPropertyInt_Params Parms;

	Parms.Handle = Handle;
	Parms.ItemId = ItemId;
	Parms.PropertyName = PropertyName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.SetPropertyFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID        ItemId                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      PropertyName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::SetPropertyFloat(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, float Value)
{
	static auto Func = Class->GetFunction("Inventory", "SetPropertyFloat");

	Params::UInventory_SetPropertyFloat_Params Parms;

	Parms.Handle = Handle;
	Parms.ItemId = ItemId;
	Parms.PropertyName = PropertyName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.SetPropertyBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID        ItemId                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      PropertyName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::SetPropertyBool(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, bool bValue)
{
	static auto Func = Class->GetFunction("Inventory", "SetPropertyBool");

	Params::UInventory_SetPropertyBool_Params Parms;

	Parms.Handle = Handle;
	Parms.ItemId = ItemId;
	Parms.PropertyName = PropertyName;
	Parms.bValue = bValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.SerializeResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<uint8>                      Buffer                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::SerializeResult(const struct FSteamInventoryResult& Handle, TArray<uint8>* Buffer)
{
	static auto Func = Class->GetFunction("Inventory", "SerializeResult");

	Params::UInventory_SerializeResult_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Buffer != nullptr)
		*Buffer = Parms.Buffer;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.RequestPrices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventory::RequestPrices(FDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("Inventory", "RequestPrices");

	Params::UInventory_RequestPrices_Params Parms;

	Parms.Callback = Callback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Inventory.RequestEligiblePromoItemDefinitionsIDs
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UInventory::RequestEligiblePromoItemDefinitionsIDs(FDelegateProperty_& Callback, const struct FSteamID& SteamID)
{
	static auto Func = Class->GetFunction("Inventory", "RequestEligiblePromoItemDefinitionsIDs");

	Params::UInventory_RequestEligiblePromoItemDefinitionsIDs_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Inventory.RemoveProperty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID        ItemId                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      PropertyName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::RemoveProperty(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName)
{
	static auto Func = Class->GetFunction("Inventory", "RemoveProperty");

	Params::UInventory_RemoveProperty_Params Parms;

	Parms.Handle = Handle;
	Parms.ItemId = ItemId;
	Parms.PropertyName = PropertyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.LoadItemDefinitions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::LoadItemDefinitions()
{
	static auto Func = Class->GetFunction("Inventory", "LoadItemDefinitions");

	Params::UInventory_LoadItemDefinitions_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.GrantPromoItems
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Result                                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::GrantPromoItems(struct FSteamInventoryResult* Result)
{
	static auto Func = Class->GetFunction("Inventory", "GrantPromoItems");

	Params::UInventory_GrantPromoItems_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.GetResultTimestamp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInventory::GetResultTimestamp(const struct FSteamInventoryResult& Handle)
{
	static auto Func = Class->GetFunction("Inventory", "GetResultTimestamp");

	Params::UInventory_GetResultTimestamp_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.GetResultStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamResult            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamResult UInventory::GetResultStatus(const struct FSteamInventoryResult& Handle)
{
	static auto Func = Class->GetFunction("Inventory", "GetResultStatus");

	Params::UInventory_GetResultStatus_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.GetResultItems
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemDetails>   Items                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::GetResultItems(const struct FSteamInventoryResult& Handle, TArray<struct FSteamItemDetails>* Items)
{
	static auto Func = Class->GetFunction("Inventory", "GetResultItems");

	Params::UInventory_GetResultItems_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Items != nullptr)
		*Items = Parms.Items;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.GetResultItemProperty
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ItemIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PropertyName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::GetResultItemProperty(const struct FSteamInventoryResult& Handle, int32 ItemIndex, const class FString& PropertyName, class FString* Value)
{
	static auto Func = Class->GetFunction("Inventory", "GetResultItemProperty");

	Params::UInventory_GetResultItemProperty_Params Parms;

	Parms.Handle = Handle;
	Parms.ItemIndex = ItemIndex;
	Parms.PropertyName = PropertyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.GetNumItemsWithPrices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInventory::GetNumItemsWithPrices()
{
	static auto Func = Class->GetFunction("Inventory", "GetNumItemsWithPrices");

	Params::UInventory_GetNumItemsWithPrices_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.GetItemsWithPrices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSteamItemDef>       ItemDefs                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Prices                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      BasePrices                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::GetItemsWithPrices(TArray<struct FSteamItemDef>* ItemDefs, TArray<int32>* Prices, TArray<int32>* BasePrices)
{
	static auto Func = Class->GetFunction("Inventory", "GetItemsWithPrices");

	Params::UInventory_GetItemsWithPrices_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ItemDefs != nullptr)
		*ItemDefs = Parms.ItemDefs;

	if (Prices != nullptr)
		*Prices = Parms.Prices;

	if (BasePrices != nullptr)
		*BasePrices = Parms.BasePrices;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.GetItemsByID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       InventoryResult                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemInstanceID>InstanceIDs                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::GetItemsByID(struct FSteamInventoryResult* InventoryResult, const TArray<struct FSteamItemInstanceID>& InstanceIDs)
{
	static auto Func = Class->GetFunction("Inventory", "GetItemsByID");

	Params::UInventory_GetItemsByID_Params Parms;

	Parms.InstanceIDs = InstanceIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InventoryResult != nullptr)
		*InventoryResult = Parms.InventoryResult;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.GetItemPrice
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamItemDef               ItemDef                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Price                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BasePrice                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::GetItemPrice(const struct FSteamItemDef& ItemDef, int32* Price, int32* BasePrice)
{
	static auto Func = Class->GetFunction("Inventory", "GetItemPrice");

	Params::UInventory_GetItemPrice_Params Parms;

	Parms.ItemDef = ItemDef;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Price != nullptr)
		*Price = Parms.Price;

	if (BasePrice != nullptr)
		*BasePrice = Parms.BasePrice;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.GetItemDefinitionProperty
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamItemDef               ItemDef                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      PropertyName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::GetItemDefinitionProperty(const struct FSteamItemDef& ItemDef, const class FString& PropertyName, class FString* Value)
{
	static auto Func = Class->GetFunction("Inventory", "GetItemDefinitionProperty");

	Params::UInventory_GetItemDefinitionProperty_Params Parms;

	Parms.ItemDef = ItemDef;
	Parms.PropertyName = PropertyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.GetItemDefinitionIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSteamItemDef>       ItemDefs                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::GetItemDefinitionIDs(TArray<struct FSteamItemDef>* ItemDefs)
{
	static auto Func = Class->GetFunction("Inventory", "GetItemDefinitionIDs");

	Params::UInventory_GetItemDefinitionIDs_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ItemDefs != nullptr)
		*ItemDefs = Parms.ItemDefs;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.GetEligiblePromoItemDefinitionIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemDef>       ItemDefs                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::GetEligiblePromoItemDefinitionIDs(const struct FSteamID& SteamID, TArray<struct FSteamItemDef>* ItemDefs)
{
	static auto Func = Class->GetFunction("Inventory", "GetEligiblePromoItemDefinitionIDs");

	Params::UInventory_GetEligiblePromoItemDefinitionIDs_Params Parms;

	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ItemDefs != nullptr)
		*ItemDefs = Parms.ItemDefs;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.GetAllItems
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Handle                                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::GetAllItems(struct FSteamInventoryResult* Handle)
{
	static auto Func = Class->GetFunction("Inventory", "GetAllItems");

	Params::UInventory_GetAllItems_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Handle != nullptr)
		*Handle = Parms.Handle;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.GenerateItems
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Result                                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemDef>       ItemDefs                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Quantity                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::GenerateItems(struct FSteamInventoryResult* Result, const TArray<struct FSteamItemDef>& ItemDefs, const TArray<int32>& Quantity)
{
	static auto Func = Class->GetFunction("Inventory", "GenerateItems");

	Params::UInventory_GenerateItems_Params Parms;

	Parms.ItemDefs = ItemDefs;
	Parms.Quantity = Quantity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.ExchangeItems
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Result                                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemDef>       ArrayGenerate                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      ArrayGenerateQuantity                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemInstanceID>ArrayDestroy                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      ArrayDestroyQuantity                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::ExchangeItems(struct FSteamInventoryResult* Result, const TArray<struct FSteamItemDef>& ArrayGenerate, const TArray<int32>& ArrayGenerateQuantity, const TArray<struct FSteamItemInstanceID>& ArrayDestroy, const TArray<int32>& ArrayDestroyQuantity)
{
	static auto Func = Class->GetFunction("Inventory", "ExchangeItems");

	Params::UInventory_ExchangeItems_Params Parms;

	Parms.ArrayGenerate = ArrayGenerate;
	Parms.ArrayGenerateQuantity = ArrayGenerateQuantity;
	Parms.ArrayDestroy = ArrayDestroy;
	Parms.ArrayDestroyQuantity = ArrayDestroyQuantity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.DestroyResult
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UInventory::DestroyResult(const struct FSteamInventoryResult& Handle)
{
	static auto Func = Class->GetFunction("Inventory", "DestroyResult");

	Params::UInventory_DestroyResult_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Inventory.DeserializeResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Result                                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<uint8>                      Buffer                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bReservedMustBeFalse                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::DeserializeResult(struct FSteamInventoryResult* Result, const TArray<uint8>& Buffer, bool bReservedMustBeFalse)
{
	static auto Func = Class->GetFunction("Inventory", "DeserializeResult");

	Params::UInventory_DeserializeResult_Params Parms;

	Parms.Buffer = Buffer;
	Parms.bReservedMustBeFalse = bReservedMustBeFalse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.ConsumeItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Result                                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID        ItemConsume                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Quantity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::ConsumeItem(struct FSteamInventoryResult* Result, const struct FSteamItemInstanceID& ItemConsume, int32 Quantity)
{
	static auto Func = Class->GetFunction("Inventory", "ConsumeItem");

	Params::UInventory_ConsumeItem_Params Parms;

	Parms.ItemConsume = ItemConsume;
	Parms.Quantity = Quantity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.CheckResultSteamID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDExpected                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::CheckResultSteamID(const struct FSteamInventoryResult& Handle, const struct FSteamID& SteamIDExpected)
{
	static auto Func = Class->GetFunction("Inventory", "CheckResultSteamID");

	Params::UInventory_CheckResultSteamID_Params Parms;

	Parms.Handle = Handle;
	Parms.SteamIDExpected = SteamIDExpected;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.AddPromoItems
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemDef>       ItemDefs                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::AddPromoItems(struct FSteamInventoryResult* OutResult, const TArray<struct FSteamItemDef>& ItemDefs)
{
	static auto Func = Class->GetFunction("Inventory", "AddPromoItems");

	Params::UInventory_AddPromoItems_Params Parms;

	Parms.ItemDefs = ItemDefs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

	return Parms.ReturnValue;

}


// Function SteamCore.Inventory.AddPromoItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryResult       Result                                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamItemDef               ItemDef                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventory::AddPromoItem(struct FSteamInventoryResult* Result, const struct FSteamItemDef& ItemDef)
{
	static auto Func = Class->GetFunction("Inventory", "AddPromoItem");

	Params::UInventory_AddPromoItem_Params Parms;

	Parms.ItemDef = ItemDef;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.RequestEligiblePromoItemDefinitionsIDsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::RequestEligiblePromoItemDefinitionsIDsAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs", "RequestEligiblePromoItemDefinitionsIDsAsync");

	Params::USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamID = SteamID;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FSteamInventoryEligiblePromoItemDefIDsData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::HandleCallback(struct FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs", "HandleCallback");

	Params::USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.RequestPricesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreInventoryAsyncActionRequestPricesResult*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreInventoryAsyncActionRequestPricesResult* USteamCoreInventoryAsyncActionRequestPricesResult::RequestPricesAsync(class UObject* WorldContextObject, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreInventoryAsyncActionRequestPricesResult", "RequestPricesAsync");

	Params::USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FSteamInventoryRequestPricesResultData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreInventoryAsyncActionRequestPricesResult::HandleCallback(struct FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreInventoryAsyncActionRequestPricesResult", "HandleCallback");

	Params::USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.StartPurchaseAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamItemDef>       ItemDefs                                                         (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Quantity                                                         (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreInventoryAsyncActionStartPurchaseResult*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreInventoryAsyncActionStartPurchaseResult* USteamCoreInventoryAsyncActionStartPurchaseResult::StartPurchaseAsync(class UObject* WorldContextObject, const TArray<struct FSteamItemDef>& ItemDefs, const TArray<int32>& Quantity, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreInventoryAsyncActionStartPurchaseResult", "StartPurchaseAsync");

	Params::USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.ItemDefs = ItemDefs;
	Parms.Quantity = Quantity;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FSteamInventoryStartPurchaseResultData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreInventoryAsyncActionStartPurchaseResult::HandleCallback(struct FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreInventoryAsyncActionStartPurchaseResult", "HandleCallback");

	Params::USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Matchmaking.SetLobbyType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamLobbyType         LobbyType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatchmaking::SetLobbyType(const struct FSteamID& SteamIDLobby, enum class ESteamLobbyType LobbyType)
{
	static auto Func = Class->GetFunction("Matchmaking", "SetLobbyType");

	Params::UMatchmaking_SetLobbyType_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.LobbyType = LobbyType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.SetLobbyOwner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDNewOwner                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatchmaking::SetLobbyOwner(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDNewOwner)
{
	static auto Func = Class->GetFunction("Matchmaking", "SetLobbyOwner");

	Params::UMatchmaking_SetLobbyOwner_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.SteamIDNewOwner = SteamIDNewOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.SetLobbyMemberLimit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              MaxMembers                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatchmaking::SetLobbyMemberLimit(const struct FSteamID& SteamIDLobby, int32 MaxMembers)
{
	static auto Func = Class->GetFunction("Matchmaking", "SetLobbyMemberLimit");

	Params::UMatchmaking_SetLobbyMemberLimit_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.MaxMembers = MaxMembers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.SetLobbyMemberData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmaking::SetLobbyMemberData(const struct FSteamID& SteamIDLobby, const class FString& Key, const class FString& Value)
{
	static auto Func = Class->GetFunction("Matchmaking", "SetLobbyMemberData");

	Params::UMatchmaking_SetLobbyMemberData_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Matchmaking.SetLobbyJoinable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bLobbyJoinable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatchmaking::SetLobbyJoinable(const struct FSteamID& SteamIDLobby, bool bLobbyJoinable)
{
	static auto Func = Class->GetFunction("Matchmaking", "SetLobbyJoinable");

	Params::UMatchmaking_SetLobbyJoinable_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.bLobbyJoinable = bLobbyJoinable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.SetLobbyGameServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      GameServerIP                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameServerPort                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDGameServer                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMatchmaking::SetLobbyGameServer(const struct FSteamID& SteamIDLobby, const class FString& GameServerIP, int32 GameServerPort, const struct FSteamID& SteamIDGameServer)
{
	static auto Func = Class->GetFunction("Matchmaking", "SetLobbyGameServer");

	Params::UMatchmaking_SetLobbyGameServer_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.GameServerIP = GameServerIP;
	Parms.GameServerPort = GameServerPort;
	Parms.SteamIDGameServer = SteamIDGameServer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Matchmaking.SetLobbyData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatchmaking::SetLobbyData(const struct FSteamID& SteamIDLobby, const class FString& Key, const class FString& Value)
{
	static auto Func = Class->GetFunction("Matchmaking", "SetLobbyData");

	Params::UMatchmaking_SetLobbyData_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.SetLinkedLobby
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDLobbyDependent                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatchmaking::SetLinkedLobby(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDLobbyDependent)
{
	static auto Func = Class->GetFunction("Matchmaking", "SetLinkedLobby");

	Params::UMatchmaking_SetLinkedLobby_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.SteamIDLobbyDependent = SteamIDLobbyDependent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.SendLobbyChatMsg
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatchmaking::SendLobbyChatMsg(const struct FSteamID& SteamIDLobby, const class FString& Message)
{
	static auto Func = Class->GetFunction("Matchmaking", "SendLobbyChatMsg");

	Params::UMatchmaking_SendLobbyChatMsg_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.Message = Message;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.RequestLobbyList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmaking::RequestLobbyList(FDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("Matchmaking", "RequestLobbyList");

	Params::UMatchmaking_RequestLobbyList_Params Parms;

	Parms.Callback = Callback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Matchmaking.RequestLobbyData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatchmaking::RequestLobbyData(const struct FSteamID& SteamIDLobby)
{
	static auto Func = Class->GetFunction("Matchmaking", "RequestLobbyData");

	Params::UMatchmaking_RequestLobbyData_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.RemoveFavoriteGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IP                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ConnectionPort                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              QueryPort                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class ESteamFavoriteFlags>Flags                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatchmaking::RemoveFavoriteGame(int32 AppID, const class FString& IP, int32 ConnectionPort, int32 QueryPort, const TArray<enum class ESteamFavoriteFlags>& Flags)
{
	static auto Func = Class->GetFunction("Matchmaking", "RemoveFavoriteGame");

	Params::UMatchmaking_RemoveFavoriteGame_Params Parms;

	Parms.AppID = AppID;
	Parms.IP = IP;
	Parms.ConnectionPort = ConnectionPort;
	Parms.QueryPort = QueryPort;
	Parms.Flags = Flags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.LeaveLobby
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMatchmaking::LeaveLobby(const struct FSteamID& SteamIDLobby)
{
	static auto Func = Class->GetFunction("Matchmaking", "LeaveLobby");

	Params::UMatchmaking_LeaveLobby_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Matchmaking.JoinLobby
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMatchmaking::JoinLobby(FDelegateProperty_& Callback, const struct FSteamID& SteamIDLobby)
{
	static auto Func = Class->GetFunction("Matchmaking", "JoinLobby");

	Params::UMatchmaking_JoinLobby_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamIDLobby = SteamIDLobby;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Matchmaking.InviteUserToLobby
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDInvitee                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatchmaking::InviteUserToLobby(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDInvitee)
{
	static auto Func = Class->GetFunction("Matchmaking", "InviteUserToLobby");

	Params::UMatchmaking_InviteUserToLobby_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.SteamIDInvitee = SteamIDInvitee;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.GetNumLobbyMembers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMatchmaking::GetNumLobbyMembers(const struct FSteamID& SteamIDLobby)
{
	static auto Func = Class->GetFunction("Matchmaking", "GetNumLobbyMembers");

	Params::UMatchmaking_GetNumLobbyMembers_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.GetLobbyOwner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID UMatchmaking::GetLobbyOwner(const struct FSteamID& SteamIDLobby)
{
	static auto Func = Class->GetFunction("Matchmaking", "GetLobbyOwner");

	Params::UMatchmaking_GetLobbyOwner_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.GetLobbyMemberLimit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMatchmaking::GetLobbyMemberLimit(const struct FSteamID& SteamIDLobby)
{
	static auto Func = Class->GetFunction("Matchmaking", "GetLobbyMemberLimit");

	Params::UMatchmaking_GetLobbyMemberLimit_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.GetLobbyMemberData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMatchmaking::GetLobbyMemberData(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDUser, const class FString& Key)
{
	static auto Func = Class->GetFunction("Matchmaking", "GetLobbyMemberData");

	Params::UMatchmaking_GetLobbyMemberData_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.SteamIDUser = SteamIDUser;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.GetLobbyMemberByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Member                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID UMatchmaking::GetLobbyMemberByIndex(const struct FSteamID& SteamIDLobby, int32 Member)
{
	static auto Func = Class->GetFunction("Matchmaking", "GetLobbyMemberByIndex");

	Params::UMatchmaking_GetLobbyMemberByIndex_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.Member = Member;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.GetLobbyGameServer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      GameServerIP                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameServerPort                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDGameServer                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatchmaking::GetLobbyGameServer(const struct FSteamID& SteamIDLobby, class FString* GameServerIP, int32* GameServerPort, struct FSteamID* SteamIDGameServer)
{
	static auto Func = Class->GetFunction("Matchmaking", "GetLobbyGameServer");

	Params::UMatchmaking_GetLobbyGameServer_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (GameServerIP != nullptr)
		*GameServerIP = Parms.GameServerIP;

	if (GameServerPort != nullptr)
		*GameServerPort = Parms.GameServerPort;

	if (SteamIDGameServer != nullptr)
		*SteamIDGameServer = Parms.SteamIDGameServer;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.GetLobbyDataCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMatchmaking::GetLobbyDataCount(const struct FSteamID& SteamIDLobby)
{
	static auto Func = Class->GetFunction("Matchmaking", "GetLobbyDataCount");

	Params::UMatchmaking_GetLobbyDataCount_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.GetLobbyDataByIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              LobbyData                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatchmaking::GetLobbyDataByIndex(const struct FSteamID& SteamIDLobby, int32 LobbyData, class FString* Key, class FString* Value)
{
	static auto Func = Class->GetFunction("Matchmaking", "GetLobbyDataByIndex");

	Params::UMatchmaking_GetLobbyDataByIndex_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.LobbyData = LobbyData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Key != nullptr)
		*Key = Parms.Key;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.GetLobbyData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMatchmaking::GetLobbyData(const struct FSteamID& SteamIDLobby, const class FString& Key)
{
	static auto Func = Class->GetFunction("Matchmaking", "GetLobbyData");

	Params::UMatchmaking_GetLobbyData_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.GetLobbyChatEntry
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              MessageID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDUser                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamChatEntryType     ChatEntryType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMatchmaking::GetLobbyChatEntry(const struct FSteamID& SteamIDLobby, int32 MessageID, struct FSteamID* SteamIDUser, class FString* Message, enum class ESteamChatEntryType* ChatEntryType)
{
	static auto Func = Class->GetFunction("Matchmaking", "GetLobbyChatEntry");

	Params::UMatchmaking_GetLobbyChatEntry_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.MessageID = MessageID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SteamIDUser != nullptr)
		*SteamIDUser = Parms.SteamIDUser;

	if (Message != nullptr)
		*Message = Parms.Message;

	if (ChatEntryType != nullptr)
		*ChatEntryType = Parms.ChatEntryType;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.GetLobbyByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Lobby                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID UMatchmaking::GetLobbyByIndex(int32 Lobby)
{
	static auto Func = Class->GetFunction("Matchmaking", "GetLobbyByIndex");

	Params::UMatchmaking_GetLobbyByIndex_Params Parms;

	Parms.Lobby = Lobby;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.GetFavoriteGameCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMatchmaking::GetFavoriteGameCount()
{
	static auto Func = Class->GetFunction("Matchmaking", "GetFavoriteGameCount");

	Params::UMatchmaking_GetFavoriteGameCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.GetFavoriteGame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Game                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IP                                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ConnectionPort                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              QueryPort                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class ESteamFavoriteFlags>Flags                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              TimeLastPlayedOnServer                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatchmaking::GetFavoriteGame(int32 Game, int32* AppID, class FString* IP, int32* ConnectionPort, int32* QueryPort, TArray<enum class ESteamFavoriteFlags>* Flags, int32* TimeLastPlayedOnServer)
{
	static auto Func = Class->GetFunction("Matchmaking", "GetFavoriteGame");

	Params::UMatchmaking_GetFavoriteGame_Params Parms;

	Parms.Game = Game;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AppID != nullptr)
		*AppID = Parms.AppID;

	if (IP != nullptr)
		*IP = Parms.IP;

	if (ConnectionPort != nullptr)
		*ConnectionPort = Parms.ConnectionPort;

	if (QueryPort != nullptr)
		*QueryPort = Parms.QueryPort;

	if (Flags != nullptr)
		*Flags = Parms.Flags;

	if (TimeLastPlayedOnServer != nullptr)
		*TimeLastPlayedOnServer = Parms.TimeLastPlayedOnServer;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.DeleteLobbyData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatchmaking::DeleteLobbyData(const struct FSteamID& SteamIDLobby, const class FString& Key)
{
	static auto Func = Class->GetFunction("Matchmaking", "DeleteLobbyData");

	Params::UMatchmaking_DeleteLobbyData_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Matchmaking.CreateLobby
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamLobbyType         LobbyType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxMembers                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmaking::CreateLobby(FDelegateProperty_& Callback, enum class ESteamLobbyType LobbyType, int32 MaxMembers)
{
	static auto Func = Class->GetFunction("Matchmaking", "CreateLobby");

	Params::UMatchmaking_CreateLobby_Params Parms;

	Parms.Callback = Callback;
	Parms.LobbyType = LobbyType;
	Parms.MaxMembers = MaxMembers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Matchmaking.AddRequestLobbyListStringFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      KeyToMatch                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ValueToMatch                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamLobbyComparison   ComparisonType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmaking::AddRequestLobbyListStringFilter(const class FString& KeyToMatch, const class FString& ValueToMatch, enum class ESteamLobbyComparison ComparisonType)
{
	static auto Func = Class->GetFunction("Matchmaking", "AddRequestLobbyListStringFilter");

	Params::UMatchmaking_AddRequestLobbyListStringFilter_Params Parms;

	Parms.KeyToMatch = KeyToMatch;
	Parms.ValueToMatch = ValueToMatch;
	Parms.ComparisonType = ComparisonType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Matchmaking.AddRequestLobbyListResultCountFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmaking::AddRequestLobbyListResultCountFilter(int32 MaxResults)
{
	static auto Func = Class->GetFunction("Matchmaking", "AddRequestLobbyListResultCountFilter");

	Params::UMatchmaking_AddRequestLobbyListResultCountFilter_Params Parms;

	Parms.MaxResults = MaxResults;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Matchmaking.AddRequestLobbyListNumericalFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      KeyToMatch                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ValueToMatch                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamLobbyComparison   ComparisonType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmaking::AddRequestLobbyListNumericalFilter(const class FString& KeyToMatch, int32 ValueToMatch, enum class ESteamLobbyComparison ComparisonType)
{
	static auto Func = Class->GetFunction("Matchmaking", "AddRequestLobbyListNumericalFilter");

	Params::UMatchmaking_AddRequestLobbyListNumericalFilter_Params Parms;

	Parms.KeyToMatch = KeyToMatch;
	Parms.ValueToMatch = ValueToMatch;
	Parms.ComparisonType = ComparisonType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Matchmaking.AddRequestLobbyListNearValueFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      KeyToMatch                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ValueToBeCloseTo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmaking::AddRequestLobbyListNearValueFilter(const class FString& KeyToMatch, int32 ValueToBeCloseTo)
{
	static auto Func = Class->GetFunction("Matchmaking", "AddRequestLobbyListNearValueFilter");

	Params::UMatchmaking_AddRequestLobbyListNearValueFilter_Params Parms;

	Parms.KeyToMatch = KeyToMatch;
	Parms.ValueToBeCloseTo = ValueToBeCloseTo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Matchmaking.AddRequestLobbyListFilterSlotsAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              SlotsAvailable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmaking::AddRequestLobbyListFilterSlotsAvailable(int32 SlotsAvailable)
{
	static auto Func = Class->GetFunction("Matchmaking", "AddRequestLobbyListFilterSlotsAvailable");

	Params::UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Params Parms;

	Parms.SlotsAvailable = SlotsAvailable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Matchmaking.AddRequestLobbyListDistanceFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ESteamLobbyDistanceFilterLobbyDistanceFilter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmaking::AddRequestLobbyListDistanceFilter(enum class ESteamLobbyDistanceFilter LobbyDistanceFilter)
{
	static auto Func = Class->GetFunction("Matchmaking", "AddRequestLobbyListDistanceFilter");

	Params::UMatchmaking_AddRequestLobbyListDistanceFilter_Params Parms;

	Parms.LobbyDistanceFilter = LobbyDistanceFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Matchmaking.AddRequestLobbyListCompatibleMembersFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMatchmaking::AddRequestLobbyListCompatibleMembersFilter(const struct FSteamID& SteamIDLobby)
{
	static auto Func = Class->GetFunction("Matchmaking", "AddRequestLobbyListCompatibleMembersFilter");

	Params::UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Params Parms;

	Parms.SteamIDLobby = SteamIDLobby;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Matchmaking.AddFavoriteGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IP                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ConnectionPort                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              QueryPort                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class ESteamFavoriteFlags>Flags                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              TimeLastPlayedOnServer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMatchmaking::AddFavoriteGame(int32 AppID, const class FString& IP, int32 ConnectionPort, int32 QueryPort, const TArray<enum class ESteamFavoriteFlags>& Flags, int32 TimeLastPlayedOnServer)
{
	static auto Func = Class->GetFunction("Matchmaking", "AddFavoriteGame");

	Params::UMatchmaking_AddFavoriteGame_Params Parms;

	Parms.AppID = AppID;
	Parms.IP = IP;
	Parms.ConnectionPort = ConnectionPort;
	Parms.QueryPort = QueryPort;
	Parms.Flags = Flags;
	Parms.TimeLastPlayedOnServer = TimeLastPlayedOnServer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FCreateLobbyData            Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreMatchmakingAsyncActionCreateLobby::HandleCallback(struct FCreateLobbyData& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingAsyncActionCreateLobby", "HandleCallback");

	Params::USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.CreateLobbyAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamLobbyType         LobbyType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxMembers                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingAsyncActionCreateLobby*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreMatchmakingAsyncActionCreateLobby* USteamCoreMatchmakingAsyncActionCreateLobby::CreateLobbyAsync(class UObject* WorldContextObject, enum class ESteamLobbyType LobbyType, int32 MaxMembers, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingAsyncActionCreateLobby", "CreateLobbyAsync");

	Params::USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.LobbyType = LobbyType;
	Parms.MaxMembers = MaxMembers;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.RequestLobbyListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingAsyncActionRequestLobbyList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreMatchmakingAsyncActionRequestLobbyList* USteamCoreMatchmakingAsyncActionRequestLobbyList::RequestLobbyListAsync(class UObject* WorldContextObject, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingAsyncActionRequestLobbyList", "RequestLobbyListAsync");

	Params::USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FLobbyMatchList             Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreMatchmakingAsyncActionRequestLobbyList::HandleCallback(struct FLobbyMatchList& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingAsyncActionRequestLobbyList", "HandleCallback");

	Params::USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.JoinLobbyAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDLobby                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingAsyncActionJoinLobby*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreMatchmakingAsyncActionJoinLobby* USteamCoreMatchmakingAsyncActionJoinLobby::JoinLobbyAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDLobby, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingAsyncActionJoinLobby", "JoinLobbyAsync");

	Params::USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamIDLobby = SteamIDLobby;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FJoinLobbyData              Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreMatchmakingAsyncActionJoinLobby::HandleCallback(struct FJoinLobbyData& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingAsyncActionJoinLobby", "HandleCallback");

	Params::USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreCreateSession.CreateSteamCoreSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSteamSessionSetting>SessionSettings                                                  (Parm, NativeAccessSpecifierPublic)
// class FString                      SessionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxPlayers                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseLAN                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowInvites                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsesPresence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowJoinViaPresence                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowJoinViaPresenceFriendsOnly                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAntiCheatProtected                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsesStats                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldAdvertise                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseLobbiesVoiceChatIfAvailable                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreCreateSession*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreCreateSession* USteamCoreCreateSession::CreateSteamCoreSession(class UObject* WorldContextObject, TMap<class FString, struct FSteamSessionSetting> SessionSettings, const class FString& SessionName, int32 MaxPlayers, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreCreateSession", "CreateSteamCoreSession");

	Params::USteamCoreCreateSession_CreateSteamCoreSession_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SessionSettings = SessionSettings;
	Parms.SessionName = SessionName;
	Parms.MaxPlayers = MaxPlayers;
	Parms.bUseLAN = bUseLAN;
	Parms.bAllowInvites = bAllowInvites;
	Parms.bUsesPresence = bUsesPresence;
	Parms.bAllowJoinViaPresence = bAllowJoinViaPresence;
	Parms.bAllowJoinViaPresenceFriendsOnly = bAllowJoinViaPresenceFriendsOnly;
	Parms.bAntiCheatProtected = bAntiCheatProtected;
	Parms.bUsesStats = bUsesStats;
	Parms.bShouldAdvertise = bShouldAdvertise;
	Parms.bUseLobbiesVoiceChatIfAvailable = bUseLobbiesVoiceChatIfAvailable;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreFindSession.OnCompleted
// (Final, Native, Public)
// Parameters:
// bool                               bSuccessful                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreFindSession::OnCompleted(bool bSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreFindSession", "OnCompleted");

	Params::USteamCoreFindSession_OnCompleted_Params Parms;

	Parms.bSuccessful = bSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreFindSession.FindSteamCoreSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSteamSessionSearchSetting>SearchSettings                                                   (Parm, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseLAN                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamSessionFindType   ServerType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEmptyServersOnly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSecureServersOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreFindSession*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreFindSession* USteamCoreFindSession::FindSteamCoreSessions(class UObject* WorldContextObject, TMap<class FString, struct FSteamSessionSearchSetting> SearchSettings, int32 MaxResults, bool bUseLAN, enum class ESteamSessionFindType ServerType, bool bEmptyServersOnly, bool bSecureServersOnly, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreFindSession", "FindSteamCoreSessions");

	Params::USteamCoreFindSession_FindSteamCoreSessions_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SearchSettings = SearchSettings;
	Parms.MaxResults = MaxResults;
	Parms.bUseLAN = bUseLAN;
	Parms.ServerType = ServerType;
	Parms.bEmptyServersOnly = bEmptyServersOnly;
	Parms.bSecureServersOnly = bSecureServersOnly;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreDestroySession.OnCompleted
// (Final, Native, Public)
// Parameters:
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreDestroySession::OnCompleted(class FName SessionName, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreDestroySession", "OnCompleted");

	Params::USteamCoreDestroySession_OnCompleted_Params Parms;

	Parms.SessionName = SessionName;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreDestroySession.DestroySteamCoreSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreDestroySession*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreDestroySession* USteamCoreDestroySession::DestroySteamCoreSession(class UObject* WorldContextObject, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreDestroySession", "DestroySteamCoreSession");

	Params::USteamCoreDestroySession_DestroySteamCoreSession_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUpdateSession.UpdateSteamCoreSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSteamSessionSearchSetting>Settings                                                         (Parm, NativeAccessSpecifierPublic)
// class FString                      SessionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxPlayers                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUpdateSession*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUpdateSession* USteamCoreUpdateSession::UpdateSteamCoreSession(class UObject* WorldContextObject, TMap<class FString, struct FSteamSessionSearchSetting> Settings, const class FString& SessionName, int32 MaxPlayers)
{
	static auto Func = Class->GetFunction("SteamCoreUpdateSession", "UpdateSteamCoreSession");

	Params::USteamCoreUpdateSession_UpdateSteamCoreSession_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Settings = Settings;
	Parms.SessionName = SessionName;
	Parms.MaxPlayers = MaxPlayers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUpdateSession.OnCompleted
// (Final, Native, Public)
// Parameters:
// class FName                        SessionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUpdateSession::OnCompleted(class FName SessionName, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUpdateSession", "OnCompleted");

	Params::USteamCoreUpdateSession_OnCompleted_Params Parms;

	Parms.SessionName = SessionName;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.MatchmakingServers.ServerRules
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IP                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              QueryPort                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmakingServers::ServerRules(FDelegateProperty_& Callback, const class FString& IP, int32 QueryPort)
{
	static auto Func = Class->GetFunction("MatchmakingServers", "ServerRules");

	Params::UMatchmakingServers_ServerRules_Params Parms;

	Parms.Callback = Callback;
	Parms.IP = IP;
	Parms.QueryPort = QueryPort;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.MatchmakingServers.RequestSpectatorServerList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 ServerCallback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreNonResponsive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*               ServerFilter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmakingServers::RequestSpectatorServerList(FDelegateProperty_& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto Func = Class->GetFunction("MatchmakingServers", "RequestSpectatorServerList");

	Params::UMatchmakingServers_RequestSpectatorServerList_Params Parms;

	Parms.ServerCallback = ServerCallback;
	Parms.AppID = AppID;
	Parms.Timeout = Timeout;
	Parms.MaxResults = MaxResults;
	Parms.bIgnoreNonResponsive = bIgnoreNonResponsive;
	Parms.ServerFilter = ServerFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.MatchmakingServers.RequestLANServerList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 ServerCallback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreNonResponsive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*               ServerFilter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmakingServers::RequestLANServerList(FDelegateProperty_& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto Func = Class->GetFunction("MatchmakingServers", "RequestLANServerList");

	Params::UMatchmakingServers_RequestLANServerList_Params Parms;

	Parms.ServerCallback = ServerCallback;
	Parms.AppID = AppID;
	Parms.Timeout = Timeout;
	Parms.MaxResults = MaxResults;
	Parms.bIgnoreNonResponsive = bIgnoreNonResponsive;
	Parms.ServerFilter = ServerFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.MatchmakingServers.RequestInternetServerList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 ServerCallback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreNonResponsive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*               ServerFilter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmakingServers::RequestInternetServerList(FDelegateProperty_& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto Func = Class->GetFunction("MatchmakingServers", "RequestInternetServerList");

	Params::UMatchmakingServers_RequestInternetServerList_Params Parms;

	Parms.ServerCallback = ServerCallback;
	Parms.AppID = AppID;
	Parms.Timeout = Timeout;
	Parms.MaxResults = MaxResults;
	Parms.bIgnoreNonResponsive = bIgnoreNonResponsive;
	Parms.ServerFilter = ServerFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.MatchmakingServers.RequestHistoryServerList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 ServerCallback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreNonResponsive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*               ServerFilter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmakingServers::RequestHistoryServerList(FDelegateProperty_& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto Func = Class->GetFunction("MatchmakingServers", "RequestHistoryServerList");

	Params::UMatchmakingServers_RequestHistoryServerList_Params Parms;

	Parms.ServerCallback = ServerCallback;
	Parms.AppID = AppID;
	Parms.Timeout = Timeout;
	Parms.MaxResults = MaxResults;
	Parms.bIgnoreNonResponsive = bIgnoreNonResponsive;
	Parms.ServerFilter = ServerFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.MatchmakingServers.RequestFriendsServerList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 ServerCallback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreNonResponsive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*               ServerFilter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmakingServers::RequestFriendsServerList(FDelegateProperty_& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto Func = Class->GetFunction("MatchmakingServers", "RequestFriendsServerList");

	Params::UMatchmakingServers_RequestFriendsServerList_Params Parms;

	Parms.ServerCallback = ServerCallback;
	Parms.AppID = AppID;
	Parms.Timeout = Timeout;
	Parms.MaxResults = MaxResults;
	Parms.bIgnoreNonResponsive = bIgnoreNonResponsive;
	Parms.ServerFilter = ServerFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.MatchmakingServers.RequestFavoritesServerList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 ServerCallback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreNonResponsive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*               ServerFilter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmakingServers::RequestFavoritesServerList(FDelegateProperty_& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto Func = Class->GetFunction("MatchmakingServers", "RequestFavoritesServerList");

	Params::UMatchmakingServers_RequestFavoritesServerList_Params Parms;

	Parms.ServerCallback = ServerCallback;
	Parms.AppID = AppID;
	Parms.Timeout = Timeout;
	Parms.MaxResults = MaxResults;
	Parms.bIgnoreNonResponsive = bIgnoreNonResponsive;
	Parms.ServerFilter = ServerFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.MatchmakingServers.PingServer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IP                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              QueryPort                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatchmakingServers::PingServer(FDelegateProperty_& Callback, const class FString& IP, int32 QueryPort)
{
	static auto Func = Class->GetFunction("MatchmakingServers", "PingServer");

	Params::UMatchmakingServers_PingServer_Params Parms;

	Parms.Callback = Callback;
	Parms.IP = IP;
	Parms.QueryPort = QueryPort;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.PingServerAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IP                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Port                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionPingServer*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreMatchmakingServersAsyncActionPingServer* USteamCoreMatchmakingServersAsyncActionPingServer::PingServerAsync(class UObject* WorldContextObject, const class FString& IP, int32 Port, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionPingServer", "PingServerAsync");

	Params::USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.IP = IP;
	Parms.Port = Port;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGameServerItem             Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreMatchmakingServersAsyncActionPingServer::HandleCallback(struct FGameServerItem& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionPingServer", "HandleCallback");

	Params::USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.CancelPingQueries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreMatchmakingServersAsyncActionPingServer::CancelPingQueries(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionPingServer", "CancelPingQueries");

	Params::USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestSpectatorServerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreNonResponsive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*               ServerFilter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionRequestServerList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestSpectatorServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionRequestServerList", "RequestSpectatorServerListAsync");

	Params::USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;
	Parms.Timeout = Timeout;
	Parms.MaxResults = MaxResults;
	Parms.bIgnoreNonResponsive = bIgnoreNonResponsive;
	Parms.ServerFilter = ServerFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestLANServerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreNonResponsive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*               ServerFilter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionRequestServerList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestLANServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionRequestServerList", "RequestLANServerListAsync");

	Params::USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;
	Parms.Timeout = Timeout;
	Parms.MaxResults = MaxResults;
	Parms.bIgnoreNonResponsive = bIgnoreNonResponsive;
	Parms.ServerFilter = ServerFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestInternetServerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreNonResponsive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*               ServerFilter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionRequestServerList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestInternetServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionRequestServerList", "RequestInternetServerListAsync");

	Params::USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;
	Parms.Timeout = Timeout;
	Parms.MaxResults = MaxResults;
	Parms.bIgnoreNonResponsive = bIgnoreNonResponsive;
	Parms.ServerFilter = ServerFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestHistoryServerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreNonResponsive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*               ServerFilter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionRequestServerList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestHistoryServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionRequestServerList", "RequestHistoryServerListAsync");

	Params::USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;
	Parms.Timeout = Timeout;
	Parms.MaxResults = MaxResults;
	Parms.bIgnoreNonResponsive = bIgnoreNonResponsive;
	Parms.ServerFilter = ServerFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFriendsServerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreNonResponsive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*               ServerFilter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionRequestServerList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFriendsServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionRequestServerList", "RequestFriendsServerListAsync");

	Params::USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;
	Parms.Timeout = Timeout;
	Parms.MaxResults = MaxResults;
	Parms.bIgnoreNonResponsive = bIgnoreNonResponsive;
	Parms.ServerFilter = ServerFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFavoritesServerListAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreNonResponsive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*               ServerFilter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionRequestServerList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFavoritesServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionRequestServerList", "RequestFavoritesServerListAsync");

	Params::USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;
	Parms.Timeout = Timeout;
	Parms.MaxResults = MaxResults;
	Parms.bIgnoreNonResponsive = bIgnoreNonResponsive;
	Parms.ServerFilter = ServerFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleServerListFinished
// (Final, Native, Private)
// Parameters:

void USteamCoreMatchmakingServersAsyncActionRequestServerList::HandleServerListFinished()
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionRequestServerList", "HandleServerListFinished");

	Params::USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleCallback
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FGameServerItem             Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USteamCoreMatchmakingServersAsyncActionRequestServerList::HandleCallback(struct FGameServerItem& Data)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionRequestServerList", "HandleCallback");

	Params::USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Params Parms;

	Parms.Data = Data;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.CancelServerListQueries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreMatchmakingServersAsyncActionRequestServerList::CancelServerListQueries(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionRequestServerList", "CancelServerListQueries");

	Params::USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.ServerRulesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IP                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              QueryPort                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreMatchmakingServersAsyncActionServerRules*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreMatchmakingServersAsyncActionServerRules* USteamCoreMatchmakingServersAsyncActionServerRules::ServerRulesAsync(class UObject* WorldContextObject, const class FString& IP, int32 QueryPort, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionServerRules", "ServerRulesAsync");

	Params::USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.IP = IP;
	Parms.QueryPort = QueryPort;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// TArray<struct FGameServerRule>     Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreMatchmakingServersAsyncActionServerRules::HandleCallback(TArray<struct FGameServerRule>& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionServerRules", "HandleCallback");

	Params::USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.CancelServerRulesQueries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreMatchmakingServersAsyncActionServerRules::CancelServerRulesQueries(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("SteamCoreMatchmakingServersAsyncActionServerRules", "CancelServerRulesQueries");

	Params::USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.GetFilters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> UServerFilter::GetFilters()
{
	static auto Func = Class->GetFunction("ServerFilter", "GetFilters");

	Params::UServerFilter_GetFilters_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.ServerFilter.AddFilterWhitelisted
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UServerFilter::AddFilterWhitelisted()
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterWhitelisted");

	Params::UServerFilter_AddFilterWhitelisted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterVersion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerFilter::AddFilterVersion(const class FString& Value)
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterVersion");

	Params::UServerFilter_AddFilterVersion_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterSecure
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UServerFilter::AddFilterSecure()
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterSecure");

	Params::UServerFilter_AddFilterSecure_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterProxy
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UServerFilter::AddFilterProxy()
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterProxy");

	Params::UServerFilter_AddFilterProxy_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterPassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UServerFilter::AddFilterPassword()
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterPassword");

	Params::UServerFilter_AddFilterPassword_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterOr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerFilter::AddFilterOr(const class FString& Value)
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterOr");

	Params::UServerFilter_AddFilterOr_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterNotFull
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UServerFilter::AddFilterNotFull()
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterNotFull");

	Params::UServerFilter_AddFilterNotFull_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterNotAppId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerFilter::AddFilterNotAppId(const class FString& Value)
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterNotAppId");

	Params::UServerFilter_AddFilterNotAppId_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterNor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerFilter::AddFilterNor(const class FString& Value)
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterNor");

	Params::UServerFilter_AddFilterNor_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterNoPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UServerFilter::AddFilterNoPlayers()
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterNoPlayers");

	Params::UServerFilter_AddFilterNoPlayers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterNand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerFilter::AddFilterNand(const class FString& Value)
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterNand");

	Params::UServerFilter_AddFilterNand_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerFilter::AddFilterName(const class FString& Value)
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterName");

	Params::UServerFilter_AddFilterName_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerFilter::AddFilterMap(const class FString& Value)
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterMap");

	Params::UServerFilter_AddFilterMap_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterLinux
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UServerFilter::AddFilterLinux()
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterLinux");

	Params::UServerFilter_AddFilterLinux_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterHasPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UServerFilter::AddFilterHasPlayers()
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterHasPlayers");

	Params::UServerFilter_AddFilterHasPlayers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterGameTagsNor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerFilter::AddFilterGameTagsNor(const class FString& Value)
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterGameTagsNor");

	Params::UServerFilter_AddFilterGameTagsNor_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterGameTagsAnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerFilter::AddFilterGameTagsAnd(const class FString& Value)
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterGameTagsAnd");

	Params::UServerFilter_AddFilterGameTagsAnd_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterGameDataOr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerFilter::AddFilterGameDataOr(const class FString& Value)
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterGameDataOr");

	Params::UServerFilter_AddFilterGameDataOr_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterGameDataNor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerFilter::AddFilterGameDataNor(const class FString& Value)
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterGameDataNor");

	Params::UServerFilter_AddFilterGameDataNor_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterGameDataAnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerFilter::AddFilterGameDataAnd(const class FString& Value)
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterGameDataAnd");

	Params::UServerFilter_AddFilterGameDataAnd_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterGameAddr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerFilter::AddFilterGameAddr(const class FString& Value)
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterGameAddr");

	Params::UServerFilter_AddFilterGameAddr_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterDedicated
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UServerFilter::AddFilterDedicated()
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterDedicated");

	Params::UServerFilter_AddFilterDedicated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.ServerFilter.AddFilterAnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UServerFilter::AddFilterAnd(const class FString& Value)
{
	static auto Func = Class->GetFunction("ServerFilter", "AddFilterAnd");

	Params::UServerFilter_AddFilterAnd_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Music.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FlVolume                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMusic::SetVolume(float FlVolume)
{
	static auto Func = Class->GetFunction("Music", "SetVolume");

	Params::UMusic_SetVolume_Params Parms;

	Parms.FlVolume = FlVolume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Music.PlayPrevious
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMusic::PlayPrevious()
{
	static auto Func = Class->GetFunction("Music", "PlayPrevious");

	Params::UMusic_PlayPrevious_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Music.PlayNext
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMusic::PlayNext()
{
	static auto Func = Class->GetFunction("Music", "PlayNext");

	Params::UMusic_PlayNext_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Music.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMusic::Play()
{
	static auto Func = Class->GetFunction("Music", "Play");

	Params::UMusic_Play_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Music.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMusic::Pause()
{
	static auto Func = Class->GetFunction("Music", "Pause");

	Params::UMusic_Pause_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Music.GetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMusic::GetVolume()
{
	static auto Func = Class->GetFunction("Music", "GetVolume");

	Params::UMusic_GetVolume_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Music.GetPlaybackStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESteamAudioPlaybackStatusReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamAudioPlaybackStatus UMusic::GetPlaybackStatus()
{
	static auto Func = Class->GetFunction("Music", "GetPlaybackStatus");

	Params::UMusic_GetPlaybackStatus_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Music.BIsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMusic::BIsPlaying()
{
	static auto Func = Class->GetFunction("Music", "BIsPlaying");

	Params::UMusic_BIsPlaying_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Music.bIsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMusic::bIsEnabled()
{
	static auto Func = Class->GetFunction("Music", "bIsEnabled");

	Params::UMusic_bIsEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Networking.SendP2PPacket
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDRemote                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<uint8>                      Data                                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class ESteamP2PSend           P2PSendType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetworking::SendP2PPacket(const struct FSteamID& SteamIDRemote, const TArray<uint8>& Data, enum class ESteamP2PSend P2PSendType, int32 Channel)
{
	static auto Func = Class->GetFunction("Networking", "SendP2PPacket");

	Params::UNetworking_SendP2PPacket_Params Parms;

	Parms.SteamIDRemote = SteamIDRemote;
	Parms.Data = Data;
	Parms.P2PSendType = P2PSendType;
	Parms.Channel = Channel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Networking.ReadP2PPacket
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Data                                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FSteamID                    OutSteamIdRemote                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              MessageSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetworking::ReadP2PPacket(TArray<uint8>* Data, struct FSteamID* OutSteamIdRemote, int32 MessageSize, int32 Channel)
{
	static auto Func = Class->GetFunction("Networking", "ReadP2PPacket");

	Params::UNetworking_ReadP2PPacket_Params Parms;

	Parms.MessageSize = MessageSize;
	Parms.Channel = Channel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Data != nullptr)
		*Data = Parms.Data;

	if (OutSteamIdRemote != nullptr)
		*OutSteamIdRemote = Parms.OutSteamIdRemote;

	return Parms.ReturnValue;

}


// Function SteamCore.Networking.IsP2PPacketAvailable
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              MessageSize                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetworking::IsP2PPacketAvailable(int32* MessageSize, int32 Channel)
{
	static auto Func = Class->GetFunction("Networking", "IsP2PPacketAvailable");

	Params::UNetworking_IsP2PPacketAvailable_Params Parms;

	Parms.Channel = Channel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (MessageSize != nullptr)
		*MessageSize = Parms.MessageSize;

	return Parms.ReturnValue;

}


// Function SteamCore.Networking.GetP2PSessionState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDRemote                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamP2PSessionState       ConnectionState                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetworking::GetP2PSessionState(const struct FSteamID& SteamIDRemote, struct FSteamP2PSessionState* ConnectionState)
{
	static auto Func = Class->GetFunction("Networking", "GetP2PSessionState");

	Params::UNetworking_GetP2PSessionState_Params Parms;

	Parms.SteamIDRemote = SteamIDRemote;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ConnectionState != nullptr)
		*ConnectionState = Parms.ConnectionState;

	return Parms.ReturnValue;

}


// Function SteamCore.Networking.CloseP2PSessionWithUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDRemote                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetworking::CloseP2PSessionWithUser(const struct FSteamID& SteamIDRemote)
{
	static auto Func = Class->GetFunction("Networking", "CloseP2PSessionWithUser");

	Params::UNetworking_CloseP2PSessionWithUser_Params Parms;

	Parms.SteamIDRemote = SteamIDRemote;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Networking.CloseP2PChannelWithUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDRemote                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetworking::CloseP2PChannelWithUser(const struct FSteamID& SteamIDRemote, int32 Channel)
{
	static auto Func = Class->GetFunction("Networking", "CloseP2PChannelWithUser");

	Params::UNetworking_CloseP2PChannelWithUser_Params Parms;

	Parms.SteamIDRemote = SteamIDRemote;
	Parms.Channel = Channel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Networking.AllowP2PPacketRelay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllow                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetworking::AllowP2PPacketRelay(bool bAllow)
{
	static auto Func = Class->GetFunction("Networking", "AllowP2PPacketRelay");

	Params::UNetworking_AllowP2PPacketRelay_Params Parms;

	Parms.bAllow = bAllow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Networking.AcceptP2PSessionWithUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDRemote                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetworking::AcceptP2PSessionWithUser(const struct FSteamID& SteamIDRemote)
{
	static auto Func = Class->GetFunction("Networking", "AcceptP2PSessionWithUser");

	Params::UNetworking_AcceptP2PSessionWithUser_Params Parms;

	Parms.SteamIDRemote = SteamIDRemote;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.NetworkingUtils.ParsePingLocationString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamNetworkPingLocation   Result                                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetworkingUtils::ParsePingLocationString(const class FString& String, struct FSteamNetworkPingLocation* Result)
{
	static auto Func = Class->GetFunction("NetworkingUtils", "ParsePingLocationString");

	Params::UNetworkingUtils_ParsePingLocationString_Params Parms;

	Parms.String = String;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function SteamCore.NetworkingUtils.InitRelayNetworkAccess
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNetworkingUtils::InitRelayNetworkAccess()
{
	static auto Func = Class->GetFunction("NetworkingUtils", "InitRelayNetworkAccess");

	Params::UNetworkingUtils_InitRelayNetworkAccess_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.NetworkingUtils.GetLocalPingLocation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamNetworkPingLocation   Result                                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNetworkingUtils::GetLocalPingLocation(struct FSteamNetworkPingLocation* Result)
{
	static auto Func = Class->GetFunction("NetworkingUtils", "GetLocalPingLocation");

	Params::UNetworkingUtils_GetLocalPingLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function SteamCore.NetworkingUtils.EstimatePingTimeFromLocalHost
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamNetworkPingLocation   RemoteLocation                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNetworkingUtils::EstimatePingTimeFromLocalHost(struct FSteamNetworkPingLocation& RemoteLocation)
{
	static auto Func = Class->GetFunction("NetworkingUtils", "EstimatePingTimeFromLocalHost");

	Params::UNetworkingUtils_EstimatePingTimeFromLocalHost_Params Parms;

	Parms.RemoteLocation = RemoteLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.NetworkingUtils.EstimatePingTimeBetweenTwoLocations
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamNetworkPingLocation   Location1                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSteamNetworkPingLocation   Location2                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNetworkingUtils::EstimatePingTimeBetweenTwoLocations(struct FSteamNetworkPingLocation& Location1, struct FSteamNetworkPingLocation& Location2)
{
	static auto Func = Class->GetFunction("NetworkingUtils", "EstimatePingTimeBetweenTwoLocations");

	Params::UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Params Parms;

	Parms.Location1 = Location1;
	Parms.Location2 = Location2;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.NetworkingUtils.ConvertPingLocationToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamNetworkPingLocation   Location                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      String                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetworkingUtils::ConvertPingLocationToString(struct FSteamNetworkPingLocation& Location, class FString* String)
{
	static auto Func = Class->GetFunction("NetworkingUtils", "ConvertPingLocationToString");

	Params::UNetworkingUtils_ConvertPingLocationToString_Params Parms;

	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (String != nullptr)
		*String = Parms.String;

}


// Function SteamCore.NetworkingUtils.CheckPingDataUpToDate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              MaxAgeSeconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetworkingUtils::CheckPingDataUpToDate(float MaxAgeSeconds)
{
	static auto Func = Class->GetFunction("NetworkingUtils", "CheckPingDataUpToDate");

	Params::UNetworkingUtils_CheckPingDataUpToDate_Params Parms;

	Parms.MaxAgeSeconds = MaxAgeSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.ParentalSettings.BIsParentalLockLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UParentalSettings::BIsParentalLockLocked()
{
	static auto Func = Class->GetFunction("ParentalSettings", "BIsParentalLockLocked");

	Params::UParentalSettings_BIsParentalLockLocked_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.ParentalSettings.BIsParentalLockEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UParentalSettings::BIsParentalLockEnabled()
{
	static auto Func = Class->GetFunction("ParentalSettings", "BIsParentalLockEnabled");

	Params::UParentalSettings_BIsParentalLockEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.ParentalSettings.BIsFeatureInBlockList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESteamParentalFeature   Feature                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UParentalSettings::BIsFeatureInBlockList(enum class ESteamParentalFeature Feature)
{
	static auto Func = Class->GetFunction("ParentalSettings", "BIsFeatureInBlockList");

	Params::UParentalSettings_BIsFeatureInBlockList_Params Parms;

	Parms.Feature = Feature;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.ParentalSettings.BIsFeatureBlocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESteamParentalFeature   Feature                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UParentalSettings::BIsFeatureBlocked(enum class ESteamParentalFeature Feature)
{
	static auto Func = Class->GetFunction("ParentalSettings", "BIsFeatureBlocked");

	Params::UParentalSettings_BIsFeatureBlocked_Params Parms;

	Parms.Feature = Feature;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.ParentalSettings.BIsAppInBlockList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UParentalSettings::BIsAppInBlockList(int32 AppID)
{
	static auto Func = Class->GetFunction("ParentalSettings", "BIsAppInBlockList");

	Params::UParentalSettings_BIsAppInBlockList_Params Parms;

	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.ParentalSettings.BIsAppBlocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UParentalSettings::BIsAppBlocked(int32 AppID)
{
	static auto Func = Class->GetFunction("ParentalSettings", "BIsAppBlocked");

	Params::UParentalSettings_BIsAppBlocked_Params Parms;

	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamParties.OnReservationCompleted
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPartyBeaconID              BeaconID                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USteamParties::OnReservationCompleted(const struct FPartyBeaconID& BeaconID, const struct FSteamID& SteamIDUser)
{
	static auto Func = Class->GetFunction("SteamParties", "OnReservationCompleted");

	Params::USteamParties_OnReservationCompleted_Params Parms;

	Parms.BeaconID = BeaconID;
	Parms.SteamIDUser = SteamIDUser;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamParties.JoinParty
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyBeaconID              BeaconID                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USteamParties::JoinParty(FDelegateProperty_& Callback, const struct FPartyBeaconID& BeaconID)
{
	static auto Func = Class->GetFunction("SteamParties", "JoinParty");

	Params::USteamParties_JoinParty_Params Parms;

	Parms.Callback = Callback;
	Parms.BeaconID = BeaconID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamParties.GetNumAvailableBeaconLocations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumLocations                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamParties::GetNumAvailableBeaconLocations(int32* NumLocations)
{
	static auto Func = Class->GetFunction("SteamParties", "GetNumAvailableBeaconLocations");

	Params::USteamParties_GetNumAvailableBeaconLocations_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (NumLocations != nullptr)
		*NumLocations = Parms.NumLocations;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamParties.GetNumActiveBeacons
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USteamParties::GetNumActiveBeacons()
{
	static auto Func = Class->GetFunction("SteamParties", "GetNumActiveBeacons");

	Params::USteamParties_GetNumActiveBeacons_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamParties.GetBeaconLocationData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamPartyBeaconLocation   BeaconLocation                                                   (Parm, NativeAccessSpecifierPublic)
// enum class ESteamPartiesBeaconLocationDataEData                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PCHDataStringOut                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamParties::GetBeaconLocationData(const struct FSteamPartyBeaconLocation& BeaconLocation, enum class ESteamPartiesBeaconLocationData EData, class FString* PCHDataStringOut)
{
	static auto Func = Class->GetFunction("SteamParties", "GetBeaconLocationData");

	Params::USteamParties_GetBeaconLocationData_Params Parms;

	Parms.BeaconLocation = BeaconLocation;
	Parms.EData = EData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PCHDataStringOut != nullptr)
		*PCHDataStringOut = Parms.PCHDataStringOut;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamParties.GetBeaconDetails
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPartyBeaconID              BeaconID                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDBeaconOwner                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamPartyBeaconLocation   Location                                                         (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                      OutMetadata                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamParties::GetBeaconDetails(const struct FPartyBeaconID& BeaconID, struct FSteamID* SteamIDBeaconOwner, struct FSteamPartyBeaconLocation* Location, class FString* OutMetadata)
{
	static auto Func = Class->GetFunction("SteamParties", "GetBeaconDetails");

	Params::USteamParties_GetBeaconDetails_Params Parms;

	Parms.BeaconID = BeaconID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SteamIDBeaconOwner != nullptr)
		*SteamIDBeaconOwner = Parms.SteamIDBeaconOwner;

	if (Location != nullptr)
		*Location = Parms.Location;

	if (OutMetadata != nullptr)
		*OutMetadata = Parms.OutMetadata;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamParties.GetBeaconByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyBeaconID              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPartyBeaconID USteamParties::GetBeaconByIndex(int32 Index)
{
	static auto Func = Class->GetFunction("SteamParties", "GetBeaconByIndex");

	Params::USteamParties_GetBeaconByIndex_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamParties.GetAvailableBeaconLocations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSteamPartyBeaconLocation>LocationList                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              MaxNumLocations                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamParties::GetAvailableBeaconLocations(TArray<struct FSteamPartyBeaconLocation>* LocationList, int32 MaxNumLocations)
{
	static auto Func = Class->GetFunction("SteamParties", "GetAvailableBeaconLocations");

	Params::USteamParties_GetAvailableBeaconLocations_Params Parms;

	Parms.MaxNumLocations = MaxNumLocations;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LocationList != nullptr)
		*LocationList = Parms.LocationList;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamParties.DestroyBeacon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPartyBeaconID              BeaconID                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamParties::DestroyBeacon(const struct FPartyBeaconID& BeaconID)
{
	static auto Func = Class->GetFunction("SteamParties", "DestroyBeacon");

	Params::USteamParties_DestroyBeacon_Params Parms;

	Parms.BeaconID = BeaconID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamParties.CreateBeacon
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OpenSlots                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamPartyBeaconLocation   BeaconLocation                                                   (Parm, NativeAccessSpecifierPublic)
// class FString                      ConnectString                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MetaData                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamParties::CreateBeacon(FDelegateProperty_& Callback, int32 OpenSlots, const struct FSteamPartyBeaconLocation& BeaconLocation, const class FString& ConnectString, const class FString& MetaData)
{
	static auto Func = Class->GetFunction("SteamParties", "CreateBeacon");

	Params::USteamParties_CreateBeacon_Params Parms;

	Parms.Callback = Callback;
	Parms.OpenSlots = OpenSlots;
	Parms.BeaconLocation = BeaconLocation;
	Parms.ConnectString = ConnectString;
	Parms.MetaData = MetaData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamParties.ChangeNumOpenSlots
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyBeaconID              BeaconID                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              OpenSlots                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamParties::ChangeNumOpenSlots(FDelegateProperty_& Callback, const struct FPartyBeaconID& BeaconID, int32 OpenSlots)
{
	static auto Func = Class->GetFunction("SteamParties", "ChangeNumOpenSlots");

	Params::USteamParties_ChangeNumOpenSlots_Params Parms;

	Parms.Callback = Callback;
	Parms.BeaconID = BeaconID;
	Parms.OpenSlots = OpenSlots;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamParties.CancelReservation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPartyBeaconID              BeaconID                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USteamParties::CancelReservation(const struct FPartyBeaconID& BeaconID, const struct FSteamID& SteamIDUser)
{
	static auto Func = Class->GetFunction("SteamParties", "CancelReservation");

	Params::USteamParties_CancelReservation_Params Parms;

	Parms.BeaconID = BeaconID;
	Parms.SteamIDUser = SteamIDUser;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.JoinPartyAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyBeaconID              BeaconID                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreSteamPartiesAsyncActionJoinParty*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreSteamPartiesAsyncActionJoinParty* USteamCoreSteamPartiesAsyncActionJoinParty::JoinPartyAsync(class UObject* WorldContextObject, const struct FPartyBeaconID& BeaconID, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreSteamPartiesAsyncActionJoinParty", "JoinPartyAsync");

	Params::USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.BeaconID = BeaconID;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FJoinPartyData              Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreSteamPartiesAsyncActionJoinParty::HandleCallback(struct FJoinPartyData& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreSteamPartiesAsyncActionJoinParty", "HandleCallback");

	Params::USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FCreateBeaconData           Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreSteamPartiesAsyncActionCreateBeacon::HandleCallback(struct FCreateBeaconData& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreSteamPartiesAsyncActionCreateBeacon", "HandleCallback");

	Params::USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.CreateBeaconAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OpenSlots                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamPartyBeaconLocation   BeaconLocation                                                   (Parm, NativeAccessSpecifierPublic)
// class FString                      ConnectString                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MetaData                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreSteamPartiesAsyncActionCreateBeacon*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreSteamPartiesAsyncActionCreateBeacon* USteamCoreSteamPartiesAsyncActionCreateBeacon::CreateBeaconAsync(class UObject* WorldContextObject, int32 OpenSlots, const struct FSteamPartyBeaconLocation& BeaconLocation, const class FString& ConnectString, const class FString& MetaData, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreSteamPartiesAsyncActionCreateBeacon", "CreateBeaconAsync");

	Params::USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.OpenSlots = OpenSlots;
	Parms.BeaconLocation = BeaconLocation;
	Parms.ConnectString = ConnectString;
	Parms.MetaData = MetaData;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FChangeNumOpenSlotsData     Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::HandleCallback(struct FChangeNumOpenSlotsData& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots", "HandleCallback");

	Params::USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.ChangeNumOpenSlotsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyBeaconID              BeaconID                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              OpenSlots                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::ChangeNumOpenSlotsAsync(class UObject* WorldContextObject, const struct FPartyBeaconID& BeaconID, int32 OpenSlots, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots", "ChangeNumOpenSlotsAsync");

	Params::USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.BeaconID = BeaconID;
	Parms.OpenSlots = OpenSlots;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemotePlay.GetSessionSteamID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SessionId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID URemotePlay::GetSessionSteamID(int32 SessionId)
{
	static auto Func = Class->GetFunction("RemotePlay", "GetSessionSteamID");

	Params::URemotePlay_GetSessionSteamID_Params Parms;

	Parms.SessionId = SessionId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemotePlay.GetSessionId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SessionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URemotePlay::GetSessionId(int32 SessionIndex)
{
	static auto Func = Class->GetFunction("RemotePlay", "GetSessionId");

	Params::URemotePlay_GetSessionId_Params Parms;

	Parms.SessionIndex = SessionIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemotePlay.GetSessionCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URemotePlay::GetSessionCount()
{
	static auto Func = Class->GetFunction("RemotePlay", "GetSessionCount");

	Params::URemotePlay_GetSessionCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemotePlay.GetSessionClientName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SessionId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URemotePlay::GetSessionClientName(int32 SessionId)
{
	static auto Func = Class->GetFunction("RemotePlay", "GetSessionClientName");

	Params::URemotePlay_GetSessionClientName_Params Parms;

	Parms.SessionId = SessionId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemotePlay.GetSessionClientFormFactor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SessionId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamCoreDeviceFormFactorReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamCoreDeviceFormFactor URemotePlay::GetSessionClientFormFactor(int32 SessionId)
{
	static auto Func = Class->GetFunction("RemotePlay", "GetSessionClientFormFactor");

	Params::URemotePlay_GetSessionClientFormFactor_Params Parms;

	Parms.SessionId = SessionId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemotePlay.BSendRemotePlayTogetherInvite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDFriend                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemotePlay::BSendRemotePlayTogetherInvite(const struct FSteamID& SteamIDFriend)
{
	static auto Func = Class->GetFunction("RemotePlay", "BSendRemotePlayTogetherInvite");

	Params::URemotePlay_BSendRemotePlayTogetherInvite_Params Parms;

	Parms.SteamIDFriend = SteamIDFriend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemotePlay.BGetSessionClientResolution
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SessionId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ResolutionX                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ResolutionY                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemotePlay::BGetSessionClientResolution(int32 SessionId, int32* ResolutionX, int32* ResolutionY)
{
	static auto Func = Class->GetFunction("RemotePlay", "BGetSessionClientResolution");

	Params::URemotePlay_BGetSessionClientResolution_Params Parms;

	Parms.SessionId = SessionId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ResolutionX != nullptr)
		*ResolutionX = Parms.ResolutionX;

	if (ResolutionY != nullptr)
		*ResolutionY = Parms.ResolutionY;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.UGCRead
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamUGCHandle             Content                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<uint8>                      OutData                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              DataToRead                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamUGCReadAction     Action                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URemoteStorage::UGCRead(const struct FSteamUGCHandle& Content, TArray<uint8>* OutData, int32 DataToRead, int32 Offset, enum class ESteamUGCReadAction Action)
{
	static auto Func = Class->GetFunction("RemoteStorage", "UGCRead");

	Params::URemoteStorage_UGCRead_Params Parms;

	Parms.Content = Content;
	Parms.DataToRead = DataToRead;
	Parms.Offset = Offset;
	Parms.Action = Action;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutData != nullptr)
		*OutData = Parms.OutData;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.UGCDownloadToLocation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamUGCHandle             Content                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Location                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URemoteStorage::UGCDownloadToLocation(FDelegateProperty_& Callback, const struct FSteamUGCHandle& Content, const class FString& Location, int32 Priority)
{
	static auto Func = Class->GetFunction("RemoteStorage", "UGCDownloadToLocation");

	Params::URemoteStorage_UGCDownloadToLocation_Params Parms;

	Parms.Callback = Callback;
	Parms.Content = Content;
	Parms.Location = Location;
	Parms.Priority = Priority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.RemoteStorage.UGCDownload
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamUGCHandle             Content                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URemoteStorage::UGCDownload(FDelegateProperty_& Callback, const struct FSteamUGCHandle& Content, int32 Priority)
{
	static auto Func = Class->GetFunction("RemoteStorage", "UGCDownload");

	Params::URemoteStorage_UGCDownload_Params Parms;

	Parms.Callback = Callback;
	Parms.Content = Content;
	Parms.Priority = Priority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.RemoteStorage.SetSyncPlatforms
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamRemoteStoragePlatformRemoteStoragePlatform                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::SetSyncPlatforms(const class FString& File, enum class ESteamRemoteStoragePlatform RemoteStoragePlatform)
{
	static auto Func = Class->GetFunction("RemoteStorage", "SetSyncPlatforms");

	Params::URemoteStorage_SetSyncPlatforms_Params Parms;

	Parms.File = File;
	Parms.RemoteStoragePlatform = RemoteStoragePlatform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.SetCloudEnabledForApp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URemoteStorage::SetCloudEnabledForApp(bool bEnabled)
{
	static auto Func = Class->GetFunction("RemoteStorage", "SetCloudEnabledForApp");

	Params::URemoteStorage_SetCloudEnabledForApp_Params Parms;

	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.RemoteStorage.IsCloudEnabledForApp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::IsCloudEnabledForApp()
{
	static auto Func = Class->GetFunction("RemoteStorage", "IsCloudEnabledForApp");

	Params::URemoteStorage_IsCloudEnabledForApp_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.IsCloudEnabledForAccount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::IsCloudEnabledForAccount()
{
	static auto Func = Class->GetFunction("RemoteStorage", "IsCloudEnabledForAccount");

	Params::URemoteStorage_IsCloudEnabledForAccount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.GetUGCDownloadProgress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamUGCHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              BytesDownloaded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BytesExpected                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::GetUGCDownloadProgress(const struct FSteamUGCHandle& Handle, int32* BytesDownloaded, int32* BytesExpected)
{
	static auto Func = Class->GetFunction("RemoteStorage", "GetUGCDownloadProgress");

	Params::URemoteStorage_GetUGCDownloadProgress_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (BytesDownloaded != nullptr)
		*BytesDownloaded = Parms.BytesDownloaded;

	if (BytesExpected != nullptr)
		*BytesExpected = Parms.BytesExpected;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.GetUGCDetails
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamUGCHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FileSizeInBytes                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamIDOwner                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::GetUGCDetails(const struct FSteamUGCHandle& Handle, int32* AppID, class FString* Name, int32* FileSizeInBytes, struct FSteamID* SteamIDOwner)
{
	static auto Func = Class->GetFunction("RemoteStorage", "GetUGCDetails");

	Params::URemoteStorage_GetUGCDetails_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AppID != nullptr)
		*AppID = Parms.AppID;

	if (Name != nullptr)
		*Name = Parms.Name;

	if (FileSizeInBytes != nullptr)
		*FileSizeInBytes = Parms.FileSizeInBytes;

	if (SteamIDOwner != nullptr)
		*SteamIDOwner = Parms.SteamIDOwner;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.GetSyncPlatforms
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamRemoteStoragePlatformReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamRemoteStoragePlatform URemoteStorage::GetSyncPlatforms(const class FString& File)
{
	static auto Func = Class->GetFunction("RemoteStorage", "GetSyncPlatforms");

	Params::URemoteStorage_GetSyncPlatforms_Params Parms;

	Parms.File = File;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.GetQuota
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              TotalBytes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AvailableBytes                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::GetQuota(int32* TotalBytes, int32* AvailableBytes)
{
	static auto Func = Class->GetFunction("RemoteStorage", "GetQuota");

	Params::URemoteStorage_GetQuota_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TotalBytes != nullptr)
		*TotalBytes = Parms.TotalBytes;

	if (AvailableBytes != nullptr)
		*AvailableBytes = Parms.AvailableBytes;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.GetFileTimestamp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URemoteStorage::GetFileTimestamp(const class FString& File)
{
	static auto Func = Class->GetFunction("RemoteStorage", "GetFileTimestamp");

	Params::URemoteStorage_GetFileTimestamp_Params Parms;

	Parms.File = File;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.GetFileSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URemoteStorage::GetFileSize(const class FString& File)
{
	static auto Func = Class->GetFunction("RemoteStorage", "GetFileSize");

	Params::URemoteStorage_GetFileSize_Params Parms;

	Parms.File = File;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.GetFileNameAndSize
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              File                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FileSizeInBytes                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URemoteStorage::GetFileNameAndSize(int32 File, int32* FileSizeInBytes)
{
	static auto Func = Class->GetFunction("RemoteStorage", "GetFileNameAndSize");

	Params::URemoteStorage_GetFileNameAndSize_Params Parms;

	Parms.File = File;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (FileSizeInBytes != nullptr)
		*FileSizeInBytes = Parms.FileSizeInBytes;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.GetFileCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URemoteStorage::GetFileCount()
{
	static auto Func = Class->GetFunction("RemoteStorage", "GetFileCount");

	Params::URemoteStorage_GetFileCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.GetCachedUGCHandle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ICachedContent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamUGCHandle             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamUGCHandle URemoteStorage::GetCachedUGCHandle(int32 ICachedContent)
{
	static auto Func = Class->GetFunction("RemoteStorage", "GetCachedUGCHandle");

	Params::URemoteStorage_GetCachedUGCHandle_Params Parms;

	Parms.ICachedContent = ICachedContent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.GetCachedUGCCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URemoteStorage::GetCachedUGCCount()
{
	static auto Func = Class->GetFunction("RemoteStorage", "GetCachedUGCCount");

	Params::URemoteStorage_GetCachedUGCCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.FileWriteStreamWriteChunk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCFileWriteStreamHandle   Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<uint8>                      Data                                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::FileWriteStreamWriteChunk(const struct FUGCFileWriteStreamHandle& Handle, const TArray<uint8>& Data)
{
	static auto Func = Class->GetFunction("RemoteStorage", "FileWriteStreamWriteChunk");

	Params::URemoteStorage_FileWriteStreamWriteChunk_Params Parms;

	Parms.Handle = Handle;
	Parms.Data = Data;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.FileWriteStreamOpen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUGCFileWriteStreamHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FUGCFileWriteStreamHandle URemoteStorage::FileWriteStreamOpen(const class FString& File)
{
	static auto Func = Class->GetFunction("RemoteStorage", "FileWriteStreamOpen");

	Params::URemoteStorage_FileWriteStreamOpen_Params Parms;

	Parms.File = File;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.FileWriteStreamClose
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCFileWriteStreamHandle   Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::FileWriteStreamClose(const struct FUGCFileWriteStreamHandle& Handle)
{
	static auto Func = Class->GetFunction("RemoteStorage", "FileWriteStreamClose");

	Params::URemoteStorage_FileWriteStreamClose_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.FileWriteStreamCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCFileWriteStreamHandle   Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::FileWriteStreamCancel(const struct FUGCFileWriteStreamHandle& Handle)
{
	static auto Func = Class->GetFunction("RemoteStorage", "FileWriteStreamCancel");

	Params::URemoteStorage_FileWriteStreamCancel_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.FileWriteAsync
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Data                                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void URemoteStorage::FileWriteAsync(FDelegateProperty_& Callback, const class FString& File, const TArray<uint8>& Data)
{
	static auto Func = Class->GetFunction("RemoteStorage", "FileWriteAsync");

	Params::URemoteStorage_FileWriteAsync_Params Parms;

	Parms.Callback = Callback;
	Parms.File = File;
	Parms.Data = Data;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.RemoteStorage.FileWrite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Data                                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::FileWrite(const class FString& File, const TArray<uint8>& Data)
{
	static auto Func = Class->GetFunction("RemoteStorage", "FileWrite");

	Params::URemoteStorage_FileWrite_Params Parms;

	Parms.File = File;
	Parms.Data = Data;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.FileShare
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URemoteStorage::FileShare(FDelegateProperty_& Callback, const class FString& File)
{
	static auto Func = Class->GetFunction("RemoteStorage", "FileShare");

	Params::URemoteStorage_FileShare_Params Parms;

	Parms.Callback = Callback;
	Parms.File = File;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.RemoteStorage.FileReadAsyncComplete
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRemoteStorageFileReadAsyncCompleteReadCall                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<uint8>                      Buffer                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              BytesToRead                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::FileReadAsyncComplete(const struct FRemoteStorageFileReadAsyncComplete& ReadCall, TArray<uint8>* Buffer, int32 BytesToRead)
{
	static auto Func = Class->GetFunction("RemoteStorage", "FileReadAsyncComplete");

	Params::URemoteStorage_FileReadAsyncComplete_Params Parms;

	Parms.ReadCall = ReadCall;
	Parms.BytesToRead = BytesToRead;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Buffer != nullptr)
		*Buffer = Parms.Buffer;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.FileReadAsync
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BytesToRead                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URemoteStorage::FileReadAsync(FDelegateProperty_& Callback, const class FString& File, int32 Offset, int32 BytesToRead)
{
	static auto Func = Class->GetFunction("RemoteStorage", "FileReadAsync");

	Params::URemoteStorage_FileReadAsync_Params Parms;

	Parms.Callback = Callback;
	Parms.File = File;
	Parms.Offset = Offset;
	Parms.BytesToRead = BytesToRead;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.RemoteStorage.FileRead
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Buffer                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              DataToRead                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URemoteStorage::FileRead(const class FString& File, TArray<uint8>* Buffer, int32 DataToRead)
{
	static auto Func = Class->GetFunction("RemoteStorage", "FileRead");

	Params::URemoteStorage_FileRead_Params Parms;

	Parms.File = File;
	Parms.DataToRead = DataToRead;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Buffer != nullptr)
		*Buffer = Parms.Buffer;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.FilePersisted
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::FilePersisted(const class FString& File)
{
	static auto Func = Class->GetFunction("RemoteStorage", "FilePersisted");

	Params::URemoteStorage_FilePersisted_Params Parms;

	Parms.File = File;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.FileForget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::FileForget(const class FString& File)
{
	static auto Func = Class->GetFunction("RemoteStorage", "FileForget");

	Params::URemoteStorage_FileForget_Params Parms;

	Parms.File = File;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.FileExists
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::FileExists(const class FString& File)
{
	static auto Func = Class->GetFunction("RemoteStorage", "FileExists");

	Params::URemoteStorage_FileExists_Params Parms;

	Parms.File = File;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.RemoteStorage.FileDelete
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URemoteStorage::FileDelete(const class FString& File)
{
	static auto Func = Class->GetFunction("RemoteStorage", "FileDelete");

	Params::URemoteStorage_FileDelete_Params Parms;

	Parms.File = File;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Screenshots.WriteScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      PubRGB                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScreenshotHandle           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FScreenshotHandle UScreenshots::WriteScreenshot(const TArray<uint8>& PubRGB, int32 Width, int32 Height)
{
	static auto Func = Class->GetFunction("Screenshots", "WriteScreenshot");

	Params::UScreenshots_WriteScreenshot_Params Parms;

	Parms.PubRGB = PubRGB;
	Parms.Width = Width;
	Parms.Height = Height;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Screenshots.TriggerScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UScreenshots::TriggerScreenshot()
{
	static auto Func = Class->GetFunction("Screenshots", "TriggerScreenshot");

	Params::UScreenshots_TriggerScreenshot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Screenshots.TagUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScreenshotHandle           Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScreenshots::TagUser(const struct FScreenshotHandle& Handle, const struct FSteamID& SteamID)
{
	static auto Func = Class->GetFunction("Screenshots", "TagUser");

	Params::UScreenshots_TagUser_Params Parms;

	Parms.Handle = Handle;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Screenshots.TagPublishedFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScreenshotHandle           Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScreenshots::TagPublishedFile(const struct FScreenshotHandle& Handle, const struct FPublishedFileID& PublishedFileID)
{
	static auto Func = Class->GetFunction("Screenshots", "TagPublishedFile");

	Params::UScreenshots_TagPublishedFile_Params Parms;

	Parms.Handle = Handle;
	Parms.PublishedFileID = PublishedFileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Screenshots.SetLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScreenshotHandle           Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Location                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScreenshots::SetLocation(const struct FScreenshotHandle& Handle, const class FString& Location)
{
	static auto Func = Class->GetFunction("Screenshots", "SetLocation");

	Params::UScreenshots_SetLocation_Params Parms;

	Parms.Handle = Handle;
	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Screenshots.IsScreenshotsHooked
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScreenshots::IsScreenshotsHooked()
{
	static auto Func = Class->GetFunction("Screenshots", "IsScreenshotsHooked");

	Params::UScreenshots_IsScreenshotsHooked_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Screenshots.HookScreenshots
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bHook                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScreenshots::HookScreenshots(bool bHook)
{
	static auto Func = Class->GetFunction("Screenshots", "HookScreenshots");

	Params::UScreenshots_HookScreenshots_Params Parms;

	Parms.bHook = bHook;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Screenshots.AddVRScreenshotToLibrary
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ESteamVRScreenshotType  EType                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VRFileName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScreenshotHandle           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FScreenshotHandle UScreenshots::AddVRScreenshotToLibrary(enum class ESteamVRScreenshotType EType, const class FString& Filename, const class FString& VRFileName)
{
	static auto Func = Class->GetFunction("Screenshots", "AddVRScreenshotToLibrary");

	Params::UScreenshots_AddVRScreenshotToLibrary_Params Parms;

	Parms.EType = EType;
	Parms.Filename = Filename;
	Parms.VRFileName = VRFileName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Screenshots.AddScreenshotToLibrary
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ThumbnailFilename                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScreenshotHandle           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FScreenshotHandle UScreenshots::AddScreenshotToLibrary(const class FString& Filename, const class FString& ThumbnailFilename, int32 Width, int32 Height)
{
	static auto Func = Class->GetFunction("Screenshots", "AddScreenshotToLibrary");

	Params::UScreenshots_AddScreenshotToLibrary_Params Parms;

	Parms.Filename = Filename;
	Parms.ThumbnailFilename = ThumbnailFilename;
	Parms.Width = Width;
	Parms.Height = Height;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.UpdateItemPreviewVideo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PreviewVideo                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::UpdateItemPreviewVideo(const struct FUGCUpdateHandle& Handle, int32 Index, const class FString& PreviewVideo)
{
	static auto Func = Class->GetFunction("UGC", "UpdateItemPreviewVideo");

	Params::UUGC_UpdateItemPreviewVideo_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;
	Parms.PreviewVideo = PreviewVideo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.UpdateItemPreviewFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PreviewFile                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::UpdateItemPreviewFile(const struct FUGCUpdateHandle& Handle, int32 Index, const class FString& PreviewFile)
{
	static auto Func = Class->GetFunction("UGC", "UpdateItemPreviewFile");

	Params::UUGC_UpdateItemPreviewFile_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;
	Parms.PreviewFile = PreviewFile;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.UnsubscribeItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUGC::UnsubscribeItem(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID)
{
	static auto Func = Class->GetFunction("UGC", "UnsubscribeItem");

	Params::UUGC_UnsubscribeItem_Params Parms;

	Parms.Callback = Callback;
	Parms.PublishedFileID = PublishedFileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.SuspendDownloads
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bSuspend                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUGC::SuspendDownloads(bool bSuspend)
{
	static auto Func = Class->GetFunction("UGC", "SuspendDownloads");

	Params::UUGC_SuspendDownloads_Params Parms;

	Parms.bSuspend = bSuspend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.SubscribeItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUGC::SubscribeItem(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID)
{
	static auto Func = Class->GetFunction("UGC", "SubscribeItem");

	Params::UUGC_SubscribeItem_Params Parms;

	Parms.Callback = Callback;
	Parms.PublishedFileID = PublishedFileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.SubmitItemUpdate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ChangeNote                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUGC::SubmitItemUpdate(FDelegateProperty_& Callback, const struct FUGCUpdateHandle& Handle, const class FString& ChangeNote)
{
	static auto Func = Class->GetFunction("UGC", "SubmitItemUpdate");

	Params::UUGC_SubmitItemUpdate_Params Parms;

	Parms.Callback = Callback;
	Parms.Handle = Handle;
	Parms.ChangeNote = ChangeNote;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.StopPlaytimeTrackingForAllItems
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUGC::StopPlaytimeTrackingForAllItems(FDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("UGC", "StopPlaytimeTrackingForAllItems");

	Params::UUGC_StopPlaytimeTrackingForAllItems_Params Parms;

	Parms.Callback = Callback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.StopPlaytimeTracking
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPublishedFileID>    PublishedFileIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UUGC::StopPlaytimeTracking(FDelegateProperty_& Callback, const TArray<struct FPublishedFileID>& PublishedFileIDs)
{
	static auto Func = Class->GetFunction("UGC", "StopPlaytimeTracking");

	Params::UUGC_StopPlaytimeTracking_Params Parms;

	Parms.Callback = Callback;
	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.StartPlaytimeTracking
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPublishedFileID>    PublishedFileID                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UUGC::StartPlaytimeTracking(FDelegateProperty_& Callback, const TArray<struct FPublishedFileID>& PublishedFileID)
{
	static auto Func = Class->GetFunction("UGC", "StartPlaytimeTracking");

	Params::UUGC_StartPlaytimeTracking_Params Parms;

	Parms.Callback = Callback;
	Parms.PublishedFileID = PublishedFileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.StartItemUpdate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ConsumerAppID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FUGCUpdateHandle            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FUGCUpdateHandle UUGC::StartItemUpdate(int32 ConsumerAppID, const struct FPublishedFileID& PublishedFileID)
{
	static auto Func = Class->GetFunction("UGC", "StartItemUpdate");

	Params::UUGC_StartItemUpdate_Params Parms;

	Parms.ConsumerAppID = ConsumerAppID;
	Parms.PublishedFileID = PublishedFileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetUserItemVote
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bVoteUp                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUGC::SetUserItemVote(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID, bool bVoteUp)
{
	static auto Func = Class->GetFunction("UGC", "SetUserItemVote");

	Params::UUGC_SetUserItemVote_Params Parms;

	Parms.Callback = Callback;
	Parms.PublishedFileID = PublishedFileID;
	Parms.bVoteUp = bVoteUp;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.SetSearchText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      SearchText                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetSearchText(const struct FUGCQueryHandle& Handle, const class FString& SearchText)
{
	static auto Func = Class->GetFunction("UGC", "SetSearchText");

	Params::UUGC_SetSearchText_Params Parms;

	Parms.Handle = Handle;
	Parms.SearchText = SearchText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetReturnTotalOnly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bReturnTotalOnly                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetReturnTotalOnly(const struct FUGCQueryHandle& Handle, bool bReturnTotalOnly)
{
	static auto Func = Class->GetFunction("UGC", "SetReturnTotalOnly");

	Params::UUGC_SetReturnTotalOnly_Params Parms;

	Parms.Handle = Handle;
	Parms.bReturnTotalOnly = bReturnTotalOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetReturnPlaytimeStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Days                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetReturnPlaytimeStats(const struct FUGCQueryHandle& Handle, int32 Days)
{
	static auto Func = Class->GetFunction("UGC", "SetReturnPlaytimeStats");

	Params::UUGC_SetReturnPlaytimeStats_Params Parms;

	Parms.Handle = Handle;
	Parms.Days = Days;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetReturnOnlyIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bReturnOnlyIDs                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetReturnOnlyIDs(const struct FUGCQueryHandle& Handle, bool bReturnOnlyIDs)
{
	static auto Func = Class->GetFunction("UGC", "SetReturnOnlyIDs");

	Params::UUGC_SetReturnOnlyIDs_Params Parms;

	Parms.Handle = Handle;
	Parms.bReturnOnlyIDs = bReturnOnlyIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetReturnMetadata
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bReturnMetadata                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetReturnMetadata(const struct FUGCQueryHandle& Handle, bool bReturnMetadata)
{
	static auto Func = Class->GetFunction("UGC", "SetReturnMetadata");

	Params::UUGC_SetReturnMetadata_Params Parms;

	Parms.Handle = Handle;
	Parms.bReturnMetadata = bReturnMetadata;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetReturnLongDescription
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bReturnLongDescription                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetReturnLongDescription(const struct FUGCQueryHandle& Handle, bool bReturnLongDescription)
{
	static auto Func = Class->GetFunction("UGC", "SetReturnLongDescription");

	Params::UUGC_SetReturnLongDescription_Params Parms;

	Parms.Handle = Handle;
	Parms.bReturnLongDescription = bReturnLongDescription;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetReturnKeyValueTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bReturnKeyValueTags                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetReturnKeyValueTags(const struct FUGCQueryHandle& Handle, bool bReturnKeyValueTags)
{
	static auto Func = Class->GetFunction("UGC", "SetReturnKeyValueTags");

	Params::UUGC_SetReturnKeyValueTags_Params Parms;

	Parms.Handle = Handle;
	Parms.bReturnKeyValueTags = bReturnKeyValueTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetReturnChildren
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bReturnChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetReturnChildren(const struct FUGCQueryHandle& Handle, bool bReturnChildren)
{
	static auto Func = Class->GetFunction("UGC", "SetReturnChildren");

	Params::UUGC_SetReturnChildren_Params Parms;

	Parms.Handle = Handle;
	Parms.bReturnChildren = bReturnChildren;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetReturnAdditionalPreviews
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bReturnAdditionalPreviews                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetReturnAdditionalPreviews(const struct FUGCQueryHandle& Handle, bool bReturnAdditionalPreviews)
{
	static auto Func = Class->GetFunction("UGC", "SetReturnAdditionalPreviews");

	Params::UUGC_SetReturnAdditionalPreviews_Params Parms;

	Parms.Handle = Handle;
	Parms.bReturnAdditionalPreviews = bReturnAdditionalPreviews;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetRankedByTrendDays
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Days                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetRankedByTrendDays(const struct FUGCQueryHandle& Handle, int32 Days)
{
	static auto Func = Class->GetFunction("UGC", "SetRankedByTrendDays");

	Params::UUGC_SetRankedByTrendDays_Params Parms;

	Parms.Handle = Handle;
	Parms.Days = Days;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetMatchAnyTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bMatchAnyTag                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetMatchAnyTag(const struct FUGCQueryHandle& Handle, bool bMatchAnyTag)
{
	static auto Func = Class->GetFunction("UGC", "SetMatchAnyTag");

	Params::UUGC_SetMatchAnyTag_Params Parms;

	Parms.Handle = Handle;
	Parms.bMatchAnyTag = bMatchAnyTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetLanguage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetLanguage(const struct FUGCQueryHandle& Handle, const class FString& Language)
{
	static auto Func = Class->GetFunction("UGC", "SetLanguage");

	Params::UUGC_SetLanguage_Params Parms;

	Parms.Handle = Handle;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetItemVisibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamRemoteStoragePublishedFileVisibilityVisibility                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetItemVisibility(const struct FUGCUpdateHandle& Handle, enum class ESteamRemoteStoragePublishedFileVisibility Visibility)
{
	static auto Func = Class->GetFunction("UGC", "SetItemVisibility");

	Params::UUGC_SetItemVisibility_Params Parms;

	Parms.Handle = Handle;
	Parms.Visibility = Visibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetItemUpdateLanguage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetItemUpdateLanguage(const struct FUGCUpdateHandle& Handle, const class FString& Language)
{
	static auto Func = Class->GetFunction("UGC", "SetItemUpdateLanguage");

	Params::UUGC_SetItemUpdateLanguage_Params Parms;

	Parms.Handle = Handle;
	Parms.Language = Language;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetItemTitle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Title                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetItemTitle(const struct FUGCUpdateHandle& Handle, const class FString& Title)
{
	static auto Func = Class->GetFunction("UGC", "SetItemTitle");

	Params::UUGC_SetItemTitle_Params Parms;

	Parms.Handle = Handle;
	Parms.Title = Title;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetItemTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class FString>              Tags                                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetItemTags(const struct FUGCUpdateHandle& Handle, const TArray<class FString>& Tags)
{
	static auto Func = Class->GetFunction("UGC", "SetItemTags");

	Params::UUGC_SetItemTags_Params Parms;

	Parms.Handle = Handle;
	Parms.Tags = Tags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetItemPreview
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      PreviewFile                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetItemPreview(const struct FUGCUpdateHandle& Handle, const class FString& PreviewFile)
{
	static auto Func = Class->GetFunction("UGC", "SetItemPreview");

	Params::UUGC_SetItemPreview_Params Parms;

	Parms.Handle = Handle;
	Parms.PreviewFile = PreviewFile;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetItemMetadata
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      MetaData                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetItemMetadata(const struct FUGCUpdateHandle& Handle, const class FString& MetaData)
{
	static auto Func = Class->GetFunction("UGC", "SetItemMetadata");

	Params::UUGC_SetItemMetadata_Params Parms;

	Parms.Handle = Handle;
	Parms.MetaData = MetaData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetItemDescription
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetItemDescription(const struct FUGCUpdateHandle& Handle, const class FString& Description)
{
	static auto Func = Class->GetFunction("UGC", "SetItemDescription");

	Params::UUGC_SetItemDescription_Params Parms;

	Parms.Handle = Handle;
	Parms.Description = Description;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetItemContent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ContentFolder                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetItemContent(const struct FUGCUpdateHandle& Handle, const class FString& ContentFolder)
{
	static auto Func = Class->GetFunction("UGC", "SetItemContent");

	Params::UUGC_SetItemContent_Params Parms;

	Parms.Handle = Handle;
	Parms.ContentFolder = ContentFolder;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetCloudFileNameFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      MatchCloudFileName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetCloudFileNameFilter(const struct FUGCQueryHandle& Handle, const class FString& MatchCloudFileName)
{
	static auto Func = Class->GetFunction("UGC", "SetCloudFileNameFilter");

	Params::UUGC_SetCloudFileNameFilter_Params Parms;

	Parms.Handle = Handle;
	Parms.MatchCloudFileName = MatchCloudFileName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetAllowLegacyUpload
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bAllowLegacyUpload                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetAllowLegacyUpload(const struct FUGCUpdateHandle& Handle, bool bAllowLegacyUpload)
{
	static auto Func = Class->GetFunction("UGC", "SetAllowLegacyUpload");

	Params::UUGC_SetAllowLegacyUpload_Params Parms;

	Parms.Handle = Handle;
	Parms.bAllowLegacyUpload = bAllowLegacyUpload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SetAllowCachedResponse
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              MaxAgeSeconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::SetAllowCachedResponse(const struct FUGCQueryHandle& Handle, int32 MaxAgeSeconds)
{
	static auto Func = Class->GetFunction("UGC", "SetAllowCachedResponse");

	Params::UUGC_SetAllowCachedResponse_Params Parms;

	Parms.Handle = Handle;
	Parms.MaxAgeSeconds = MaxAgeSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.SendQueryUGCRequest
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUGC::SendQueryUGCRequest(FDelegateProperty_& Callback, const struct FUGCQueryHandle& Handle)
{
	static auto Func = Class->GetFunction("UGC", "SendQueryUGCRequest");

	Params::UUGC_SendQueryUGCRequest_Params Parms;

	Parms.Callback = Callback;
	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.RemoveItemPreview
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::RemoveItemPreview(const struct FUGCUpdateHandle& Handle, int32 Index)
{
	static auto Func = Class->GetFunction("UGC", "RemoveItemPreview");

	Params::UUGC_RemoveItemPreview_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.RemoveItemKeyValueTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::RemoveItemKeyValueTags(const struct FUGCUpdateHandle& Handle, const class FString& Key)
{
	static auto Func = Class->GetFunction("UGC", "RemoveItemKeyValueTags");

	Params::UUGC_RemoveItemKeyValueTags_Params Parms;

	Parms.Handle = Handle;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.RemoveItemFromFavorites
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUGC::RemoveItemFromFavorites(FDelegateProperty_& Callback, int32 AppID, const struct FPublishedFileID& PublishedFileID)
{
	static auto Func = Class->GetFunction("UGC", "RemoveItemFromFavorites");

	Params::UUGC_RemoveItemFromFavorites_Params Parms;

	Parms.Callback = Callback;
	Parms.AppID = AppID;
	Parms.PublishedFileID = PublishedFileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.RemoveDependency
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            ParentPublishedFileID                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID            ChildPublishedFileId                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUGC::RemoveDependency(FDelegateProperty_& Callback, const struct FPublishedFileID& ParentPublishedFileID, const struct FPublishedFileID& ChildPublishedFileId)
{
	static auto Func = Class->GetFunction("UGC", "RemoveDependency");

	Params::UUGC_RemoveDependency_Params Parms;

	Parms.Callback = Callback;
	Parms.ParentPublishedFileID = ParentPublishedFileID;
	Parms.ChildPublishedFileId = ChildPublishedFileId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.RemoveAppDependency
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUGC::RemoveAppDependency(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID, int32 AppID)
{
	static auto Func = Class->GetFunction("UGC", "RemoveAppDependency");

	Params::UUGC_RemoveAppDependency_Params Parms;

	Parms.Callback = Callback;
	Parms.PublishedFileID = PublishedFileID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.ReleaseQueryUGCRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::ReleaseQueryUGCRequest(const struct FUGCQueryHandle& Handle)
{
	static auto Func = Class->GetFunction("UGC", "ReleaseQueryUGCRequest");

	Params::UUGC_ReleaseQueryUGCRequest_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetUserItemVote
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUGC::GetUserItemVote(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID)
{
	static auto Func = Class->GetFunction("UGC", "GetUserItemVote");

	Params::UUGC_GetUserItemVote_Params Parms;

	Parms.Callback = Callback;
	Parms.PublishedFileID = PublishedFileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.GetSubscribedItems
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPublishedFileID>    PublishedFileIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              MaxEntries                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUGC::GetSubscribedItems(TArray<struct FPublishedFileID>* PublishedFileIDs, int32 MaxEntries)
{
	static auto Func = Class->GetFunction("UGC", "GetSubscribedItems");

	Params::UUGC_GetSubscribedItems_Params Parms;

	Parms.MaxEntries = MaxEntries;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PublishedFileIDs != nullptr)
		*PublishedFileIDs = Parms.PublishedFileIDs;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetQueryUGCTagDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IndexTag                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::GetQueryUGCTagDisplayName(const struct FUGCQueryHandle& Handle, int32 Index, int32 IndexTag, class FString* Value)
{
	static auto Func = Class->GetFunction("UGC", "GetQueryUGCTagDisplayName");

	Params::UUGC_GetQueryUGCTagDisplayName_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;
	Parms.IndexTag = IndexTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetQueryUGCTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IndexTag                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::GetQueryUGCTag(const struct FUGCQueryHandle& Handle, int32 Index, int32 IndexTag, class FString* Value)
{
	static auto Func = Class->GetFunction("UGC", "GetQueryUGCTag");

	Params::UUGC_GetQueryUGCTag_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;
	Parms.IndexTag = IndexTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetQueryUGCStatistic
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamItemStatistic     StatType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StatValue                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::GetQueryUGCStatistic(const struct FUGCQueryHandle& Handle, int32 Index, enum class ESteamItemStatistic StatType, class FString* StatValue)
{
	static auto Func = Class->GetFunction("UGC", "GetQueryUGCStatistic");

	Params::UUGC_GetQueryUGCStatistic_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;
	Parms.StatType = StatType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (StatValue != nullptr)
		*StatValue = Parms.StatValue;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetQueryUGCResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamUGCDetails            Details                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::GetQueryUGCResult(const struct FUGCQueryHandle& Handle, int32 Index, struct FSteamUGCDetails* Details)
{
	static auto Func = Class->GetFunction("UGC", "GetQueryUGCResult");

	Params::UUGC_GetQueryUGCResult_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Details != nullptr)
		*Details = Parms.Details;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetQueryUGCPreviewURL
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      URL                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::GetQueryUGCPreviewURL(const struct FUGCQueryHandle& Handle, int32 Index, class FString* URL)
{
	static auto Func = Class->GetFunction("UGC", "GetQueryUGCPreviewURL");

	Params::UUGC_GetQueryUGCPreviewURL_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (URL != nullptr)
		*URL = Parms.URL;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetQueryUGCNumTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUGC::GetQueryUGCNumTags(const struct FUGCQueryHandle& Handle, int32 Index)
{
	static auto Func = Class->GetFunction("UGC", "GetQueryUGCNumTags");

	Params::UUGC_GetQueryUGCNumTags_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetQueryUGCNumKeyValueTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUGC::GetQueryUGCNumKeyValueTags(const struct FUGCQueryHandle& Handle, int32 Index)
{
	static auto Func = Class->GetFunction("UGC", "GetQueryUGCNumKeyValueTags");

	Params::UUGC_GetQueryUGCNumKeyValueTags_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetQueryUGCNumAdditionalPreviews
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUGC::GetQueryUGCNumAdditionalPreviews(const struct FUGCQueryHandle& Handle, int32 Index)
{
	static auto Func = Class->GetFunction("UGC", "GetQueryUGCNumAdditionalPreviews");

	Params::UUGC_GetQueryUGCNumAdditionalPreviews_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetQueryUGCMetadata
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MetaData                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MetadataSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::GetQueryUGCMetadata(const struct FUGCQueryHandle& Handle, int32 Index, class FString* MetaData, int32 MetadataSize)
{
	static auto Func = Class->GetFunction("UGC", "GetQueryUGCMetadata");

	Params::UUGC_GetQueryUGCMetadata_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;
	Parms.MetadataSize = MetadataSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetQueryUGCKeyValueTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              KeyValueTagIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::GetQueryUGCKeyValueTag(const struct FUGCQueryHandle& Handle, int32 Index, int32 KeyValueTagIndex, class FString* Key, class FString* Value)
{
	static auto Func = Class->GetFunction("UGC", "GetQueryUGCKeyValueTag");

	Params::UUGC_GetQueryUGCKeyValueTag_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;
	Parms.KeyValueTagIndex = KeyValueTagIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Key != nullptr)
		*Key = Parms.Key;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetQueryUGCChildren
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPublishedFileID>    PublishedFileIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              MaxEntries                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::GetQueryUGCChildren(const struct FUGCQueryHandle& Handle, int32 Index, TArray<struct FPublishedFileID>* PublishedFileIDs, int32 MaxEntries)
{
	static auto Func = Class->GetFunction("UGC", "GetQueryUGCChildren");

	Params::UUGC_GetQueryUGCChildren_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;
	Parms.MaxEntries = MaxEntries;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PublishedFileIDs != nullptr)
		*PublishedFileIDs = Parms.PublishedFileIDs;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetQueryUGCAdditionalPreview
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PreviewIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      URLOrVideoID                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OriginalFileName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamItemPreviewType   PreviewType                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::GetQueryUGCAdditionalPreview(const struct FUGCQueryHandle& Handle, int32 Index, int32 PreviewIndex, class FString* URLOrVideoID, class FString* OriginalFileName, enum class ESteamItemPreviewType* PreviewType)
{
	static auto Func = Class->GetFunction("UGC", "GetQueryUGCAdditionalPreview");

	Params::UUGC_GetQueryUGCAdditionalPreview_Params Parms;

	Parms.Handle = Handle;
	Parms.Index = Index;
	Parms.PreviewIndex = PreviewIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (URLOrVideoID != nullptr)
		*URLOrVideoID = Parms.URLOrVideoID;

	if (OriginalFileName != nullptr)
		*OriginalFileName = Parms.OriginalFileName;

	if (PreviewType != nullptr)
		*PreviewType = Parms.PreviewType;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetNumSubscribedItems
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUGC::GetNumSubscribedItems()
{
	static auto Func = Class->GetFunction("UGC", "GetNumSubscribedItems");

	Params::UUGC_GetNumSubscribedItems_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetItemUpdateProgress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              BytesProcessed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BytesTotal                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamItemUpdateStatus  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamItemUpdateStatus UUGC::GetItemUpdateProgress(const struct FUGCUpdateHandle& Handle, int32* BytesProcessed, int32* BytesTotal)
{
	static auto Func = Class->GetFunction("UGC", "GetItemUpdateProgress");

	Params::UUGC_GetItemUpdateProgress_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (BytesProcessed != nullptr)
		*BytesProcessed = Parms.BytesProcessed;

	if (BytesTotal != nullptr)
		*BytesTotal = Parms.BytesTotal;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetItemState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<enum class ESteamItemState> States                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUGC::GetItemState(const struct FPublishedFileID& PublishedFileID, TArray<enum class ESteamItemState>* States)
{
	static auto Func = Class->GetFunction("UGC", "GetItemState");

	Params::UUGC_GetItemState_Params Parms;

	Parms.PublishedFileID = PublishedFileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (States != nullptr)
		*States = Parms.States;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetItemInstallInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              SizeOnDisk                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Folder                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Timestamp                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::GetItemInstallInfo(const struct FPublishedFileID& PublishedFileID, int32* SizeOnDisk, class FString* Folder, int32* Timestamp)
{
	static auto Func = Class->GetFunction("UGC", "GetItemInstallInfo");

	Params::UUGC_GetItemInstallInfo_Params Parms;

	Parms.PublishedFileID = PublishedFileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SizeOnDisk != nullptr)
		*SizeOnDisk = Parms.SizeOnDisk;

	if (Folder != nullptr)
		*Folder = Parms.Folder;

	if (Timestamp != nullptr)
		*Timestamp = Parms.Timestamp;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetItemDownloadInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              BytesDownloaded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BytesTotal                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::GetItemDownloadInfo(const struct FPublishedFileID& PublishedFileID, int32* BytesDownloaded, int32* BytesTotal)
{
	static auto Func = Class->GetFunction("UGC", "GetItemDownloadInfo");

	Params::UUGC_GetItemDownloadInfo_Params Parms;

	Parms.PublishedFileID = PublishedFileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (BytesDownloaded != nullptr)
		*BytesDownloaded = Parms.BytesDownloaded;

	if (BytesTotal != nullptr)
		*BytesTotal = Parms.BytesTotal;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.GetAppDependencies
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUGC::GetAppDependencies(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID)
{
	static auto Func = Class->GetFunction("UGC", "GetAppDependencies");

	Params::UUGC_GetAppDependencies_Params Parms;

	Parms.Callback = Callback;
	Parms.PublishedFileID = PublishedFileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.DownloadItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bHighPriority                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::DownloadItem(const struct FPublishedFileID& PublishedFileID, bool bHighPriority)
{
	static auto Func = Class->GetFunction("UGC", "DownloadItem");

	Params::UUGC_DownloadItem_Params Parms;

	Parms.PublishedFileID = PublishedFileID;
	Parms.bHighPriority = bHighPriority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.DeleteItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUGC::DeleteItem(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID)
{
	static auto Func = Class->GetFunction("UGC", "DeleteItem");

	Params::UUGC_DeleteItem_Params Parms;

	Parms.Callback = Callback;
	Parms.PublishedFileID = PublishedFileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.CreateQueryUserUGCRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamUserUGCList       ListType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamUGCMatchingUGCTypeMatchingUGCType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamUserUGCListSortOrderSortOrder                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CreatorAppID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ConsumerAppID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Page                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUGCQueryHandle             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FUGCQueryHandle UUGC::CreateQueryUserUGCRequest(const struct FSteamID& SteamID, enum class ESteamUserUGCList ListType, enum class ESteamUGCMatchingUGCType MatchingUGCType, enum class ESteamUserUGCListSortOrder SortOrder, int32 CreatorAppID, int32 ConsumerAppID, int32 Page)
{
	static auto Func = Class->GetFunction("UGC", "CreateQueryUserUGCRequest");

	Params::UUGC_CreateQueryUserUGCRequest_Params Parms;

	Parms.SteamID = SteamID;
	Parms.ListType = ListType;
	Parms.MatchingUGCType = MatchingUGCType;
	Parms.SortOrder = SortOrder;
	Parms.CreatorAppID = CreatorAppID;
	Parms.ConsumerAppID = ConsumerAppID;
	Parms.Page = Page;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.CreateQueryUGCDetailsRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FPublishedFileID>    PublishedFileIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FUGCQueryHandle             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FUGCQueryHandle UUGC::CreateQueryUGCDetailsRequest(const TArray<struct FPublishedFileID>& PublishedFileIDs)
{
	static auto Func = Class->GetFunction("UGC", "CreateQueryUGCDetailsRequest");

	Params::UUGC_CreateQueryUGCDetailsRequest_Params Parms;

	Parms.PublishedFileIDs = PublishedFileIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.CreateQueryAllUGCRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ESteamUGCQuery          QueryType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamUGCMatchingUGCTypeFileType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CreatorAppID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ConsumerAppID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Page                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUGCQueryHandle             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FUGCQueryHandle UUGC::CreateQueryAllUGCRequest(enum class ESteamUGCQuery QueryType, enum class ESteamUGCMatchingUGCType FileType, int32 CreatorAppID, int32 ConsumerAppID, int32 Page)
{
	static auto Func = Class->GetFunction("UGC", "CreateQueryAllUGCRequest");

	Params::UUGC_CreateQueryAllUGCRequest_Params Parms;

	Parms.QueryType = QueryType;
	Parms.FileType = FileType;
	Parms.CreatorAppID = CreatorAppID;
	Parms.ConsumerAppID = ConsumerAppID;
	Parms.Page = Page;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.CreateItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ConsumerAppID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamWorkshopFileType  FileType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUGC::CreateItem(FDelegateProperty_& Callback, int32 ConsumerAppID, enum class ESteamWorkshopFileType FileType)
{
	static auto Func = Class->GetFunction("UGC", "CreateItem");

	Params::UUGC_CreateItem_Params Parms;

	Parms.Callback = Callback;
	Parms.ConsumerAppID = ConsumerAppID;
	Parms.FileType = FileType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.BInitWorkshopForGameServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              WorkshopDepotID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Folder                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::BInitWorkshopForGameServer(int32 WorkshopDepotID, const class FString& Folder)
{
	static auto Func = Class->GetFunction("UGC", "BInitWorkshopForGameServer");

	Params::UUGC_BInitWorkshopForGameServer_Params Parms;

	Parms.WorkshopDepotID = WorkshopDepotID;
	Parms.Folder = Folder;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.AddRequiredTagGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class FString>              TagGroups                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::AddRequiredTagGroup(const struct FUGCQueryHandle& Handle, const TArray<class FString>& TagGroups)
{
	static auto Func = Class->GetFunction("UGC", "AddRequiredTagGroup");

	Params::UUGC_AddRequiredTagGroup_Params Parms;

	Parms.Handle = Handle;
	Parms.TagGroups = TagGroups;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.AddRequiredTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      TagName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::AddRequiredTag(const struct FUGCQueryHandle& Handle, const class FString& TagName)
{
	static auto Func = Class->GetFunction("UGC", "AddRequiredTag");

	Params::UUGC_AddRequiredTag_Params Parms;

	Parms.Handle = Handle;
	Parms.TagName = TagName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.AddRequiredKeyValueTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::AddRequiredKeyValueTag(const struct FUGCQueryHandle& Handle, const class FString& Key, const class FString& Value)
{
	static auto Func = Class->GetFunction("UGC", "AddRequiredKeyValueTag");

	Params::UUGC_AddRequiredKeyValueTag_Params Parms;

	Parms.Handle = Handle;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.AddItemToFavorites
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUGC::AddItemToFavorites(FDelegateProperty_& Callback, int32 AppID, const struct FPublishedFileID& PublishedFileID)
{
	static auto Func = Class->GetFunction("UGC", "AddItemToFavorites");

	Params::UUGC_AddItemToFavorites_Params Parms;

	Parms.Callback = Callback;
	Parms.AppID = AppID;
	Parms.PublishedFileID = PublishedFileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.AddItemPreviewVideo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      VideoID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::AddItemPreviewVideo(const struct FUGCUpdateHandle& Handle, const class FString& VideoID)
{
	static auto Func = Class->GetFunction("UGC", "AddItemPreviewVideo");

	Params::UUGC_AddItemPreviewVideo_Params Parms;

	Parms.Handle = Handle;
	Parms.VideoID = VideoID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.AddItemPreviewFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      PreviewFile                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamItemPreviewType   Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::AddItemPreviewFile(const struct FUGCUpdateHandle& Handle, const class FString& PreviewFile, enum class ESteamItemPreviewType Type)
{
	static auto Func = Class->GetFunction("UGC", "AddItemPreviewFile");

	Params::UUGC_AddItemPreviewFile_Params Parms;

	Parms.Handle = Handle;
	Parms.PreviewFile = PreviewFile;
	Parms.Type = Type;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.AddItemKeyValueTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::AddItemKeyValueTag(const struct FUGCUpdateHandle& Handle, const class FString& Key, const class FString& Value)
{
	static auto Func = Class->GetFunction("UGC", "AddItemKeyValueTag");

	Params::UUGC_AddItemKeyValueTag_Params Parms;

	Parms.Handle = Handle;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.AddExcludedTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      TagName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUGC::AddExcludedTag(const struct FUGCQueryHandle& Handle, const class FString& TagName)
{
	static auto Func = Class->GetFunction("UGC", "AddExcludedTag");

	Params::UUGC_AddExcludedTag_Params Parms;

	Parms.Handle = Handle;
	Parms.TagName = TagName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UGC.AddDependency
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID            ChildPublishedFileId                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUGC::AddDependency(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId)
{
	static auto Func = Class->GetFunction("UGC", "AddDependency");

	Params::UUGC_AddDependency_Params Parms;

	Parms.Callback = Callback;
	Parms.PublishedFileID = PublishedFileID;
	Parms.ChildPublishedFileId = ChildPublishedFileId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UGC.AddAppDependency
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUGC::AddAppDependency(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID, int32 AppID)
{
	static auto Func = Class->GetFunction("UGC", "AddAppDependency");

	Params::UUGC_AddAppDependency_Params Parms;

	Parms.Callback = Callback;
	Parms.PublishedFileID = PublishedFileID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.StopPlaytimeTrackingForAllItemsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::StopPlaytimeTrackingForAllItemsAsync(class UObject* WorldContextObject, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems", "StopPlaytimeTrackingForAllItemsAsync");

	Params::USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_StopPlaytimeTrackingForAllItemsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FStopPlaytimeTrackingResult Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::HandleCallback(struct FStopPlaytimeTrackingResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems", "HandleCallback");

	Params::USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.StopPlaytimeTrackingAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPublishedFileID>    PublishedFileIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionStopPlaytimeTracking*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionStopPlaytimeTracking* USteamCoreUGCAsyncActionStopPlaytimeTracking::StopPlaytimeTrackingAsync(class UObject* WorldContextObject, const TArray<struct FPublishedFileID>& PublishedFileIDs, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionStopPlaytimeTracking", "StopPlaytimeTrackingAsync");

	Params::USteamCoreUGCAsyncActionStopPlaytimeTracking_StopPlaytimeTrackingAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileIDs = PublishedFileIDs;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FStopPlaytimeTrackingResult Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionStopPlaytimeTracking::HandleCallback(struct FStopPlaytimeTrackingResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionStopPlaytimeTracking", "HandleCallback");

	Params::USteamCoreUGCAsyncActionStopPlaytimeTracking_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.StartPlaytimeTrackingAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPublishedFileID>    PublishedFileIDs                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionStartPlaytimeTracking*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionStartPlaytimeTracking* USteamCoreUGCAsyncActionStartPlaytimeTracking::StartPlaytimeTrackingAsync(class UObject* WorldContextObject, const TArray<struct FPublishedFileID>& PublishedFileIDs, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionStartPlaytimeTracking", "StartPlaytimeTrackingAsync");

	Params::USteamCoreUGCAsyncActionStartPlaytimeTracking_StartPlaytimeTrackingAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileIDs = PublishedFileIDs;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FStartPlaytimeTrackingResultData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionStartPlaytimeTracking::HandleCallback(struct FStartPlaytimeTrackingResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionStartPlaytimeTracking", "HandleCallback");

	Params::USteamCoreUGCAsyncActionStartPlaytimeTracking_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.UnsubscribeItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileIDs                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionUnsubscribeItem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionUnsubscribeItem* USteamCoreUGCAsyncActionUnsubscribeItem::UnsubscribeItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileIDs, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionUnsubscribeItem", "UnsubscribeItemAsync");

	Params::USteamCoreUGCAsyncActionUnsubscribeItem_UnsubscribeItemAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileIDs = PublishedFileIDs;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FRemoteStorageSubscribePublishedFileResultData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionUnsubscribeItem::HandleCallback(struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionUnsubscribeItem", "HandleCallback");

	Params::USteamCoreUGCAsyncActionUnsubscribeItem_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.SubscribeItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileIDs                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionSubscribeItem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionSubscribeItem* USteamCoreUGCAsyncActionSubscribeItem::SubscribeItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileIDs, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionSubscribeItem", "SubscribeItemAsync");

	Params::USteamCoreUGCAsyncActionSubscribeItem_SubscribeItemAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileIDs = PublishedFileIDs;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FRemoteStorageSubscribePublishedFileResultData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionSubscribeItem::HandleCallback(struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionSubscribeItem", "HandleCallback");

	Params::USteamCoreUGCAsyncActionSubscribeItem_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.RemoveItemFromFavoritesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionRemoveItemFromFavorites*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionRemoveItemFromFavorites* USteamCoreUGCAsyncActionRemoveItemFromFavorites::RemoveItemFromFavoritesAsync(class UObject* WorldContextObject, int32 AppID, const struct FPublishedFileID& PublishedFileID, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionRemoveItemFromFavorites", "RemoveItemFromFavoritesAsync");

	Params::USteamCoreUGCAsyncActionRemoveItemFromFavorites_RemoveItemFromFavoritesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;
	Parms.PublishedFileID = PublishedFileID;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FUserFavoriteItemsListChangedData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionRemoveItemFromFavorites::HandleCallback(struct FUserFavoriteItemsListChanged& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionRemoveItemFromFavorites", "HandleCallback");

	Params::USteamCoreUGCAsyncActionRemoveItemFromFavorites_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FUserFavoriteItemsListChangedData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionAddItemToFavorites::HandleCallback(struct FUserFavoriteItemsListChanged& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionAddItemToFavorites", "HandleCallback");

	Params::USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.AddItemToFavoritesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionAddItemToFavorites*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionAddItemToFavorites* USteamCoreUGCAsyncActionAddItemToFavorites::AddItemToFavoritesAsync(class UObject* WorldContextObject, int32 AppID, const struct FPublishedFileID& PublishedFileID, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionAddItemToFavorites", "AddItemToFavoritesAsync");

	Params::USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AppID = AppID;
	Parms.PublishedFileID = PublishedFileID;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGetUserItemVoteResult      Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionGetUserItemVote::HandleCallback(struct FGetUserItemVoteResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionGetUserItemVote", "HandleCallback");

	Params::USteamCoreUGCAsyncActionGetUserItemVote_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.GetUserItemVoteAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionGetUserItemVote*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionGetUserItemVote* USteamCoreUGCAsyncActionGetUserItemVote::GetUserItemVoteAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionGetUserItemVote", "GetUserItemVoteAsync");

	Params::USteamCoreUGCAsyncActionGetUserItemVote_GetUserItemVoteAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileID = PublishedFileID;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.SetUserItemVoteAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bVoteUp                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionSetUserItemVote*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionSetUserItemVote* USteamCoreUGCAsyncActionSetUserItemVote::SetUserItemVoteAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, bool bVoteUp, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionSetUserItemVote", "SetUserItemVoteAsync");

	Params::USteamCoreUGCAsyncActionSetUserItemVote_SetUserItemVoteAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileID = PublishedFileID;
	Parms.bVoteUp = bVoteUp;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FSetUserItemVoteResult      Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionSetUserItemVote::HandleCallback(struct FSetUserItemVoteResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionSetUserItemVote", "HandleCallback");

	Params::USteamCoreUGCAsyncActionSetUserItemVote_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.SubmitItemUpdateAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUGCUpdateHandle            Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ChangeNote                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionSubmitItemUpdate*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionSubmitItemUpdate* USteamCoreUGCAsyncActionSubmitItemUpdate::SubmitItemUpdateAsync(class UObject* WorldContextObject, const struct FUGCUpdateHandle& Handle, const class FString& ChangeNote, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionSubmitItemUpdate", "SubmitItemUpdateAsync");

	Params::USteamCoreUGCAsyncActionSubmitItemUpdate_SubmitItemUpdateAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Handle = Handle;
	Parms.ChangeNote = ChangeNote;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FSubmitItemUpdateResult     Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionSubmitItemUpdate::HandleCallback(struct FSubmitItemUpdateResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionSubmitItemUpdate", "HandleCallback");

	Params::USteamCoreUGCAsyncActionSubmitItemUpdate_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionCreateItem.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FCreateItemResult           Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionCreateItem::HandleCallback(struct FCreateItemResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionCreateItem", "HandleCallback");

	Params::USteamCoreUGCAsyncActionCreateItem_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionCreateItem.CreateItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ConsumerAppID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamWorkshopFileType  FileType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionCreateItem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionCreateItem* USteamCoreUGCAsyncActionCreateItem::CreateItemAsync(class UObject* WorldContextObject, int32 ConsumerAppID, enum class ESteamWorkshopFileType FileType, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionCreateItem", "CreateItemAsync");

	Params::USteamCoreUGCAsyncActionCreateItem_CreateItemAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.ConsumerAppID = ConsumerAppID;
	Parms.FileType = FileType;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.SendQueryUGCRequestAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUGCQueryHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionSendQueryUGCRequest*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionSendQueryUGCRequest* USteamCoreUGCAsyncActionSendQueryUGCRequest::SendQueryUGCRequestAsync(class UObject* WorldContextObject, const struct FUGCQueryHandle& Handle, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionSendQueryUGCRequest", "SendQueryUGCRequestAsync");

	Params::USteamCoreUGCAsyncActionSendQueryUGCRequest_SendQueryUGCRequestAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Handle = Handle;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FSteamUGCQueryCompleted     Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionSendQueryUGCRequest::HandleCallback(struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionSendQueryUGCRequest", "HandleCallback");

	Params::USteamCoreUGCAsyncActionSendQueryUGCRequest_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FAddAppDependencyResult     Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionAddAppDependency::HandleCallback(struct FAddAppDependencyResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionAddAppDependency", "HandleCallback");

	Params::USteamCoreUGCAsyncActionAddAppDependency_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.AddAppDependencyAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionAddAppDependency*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionAddAppDependency* USteamCoreUGCAsyncActionAddAppDependency::AddAppDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, int32 AppID, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionAddAppDependency", "AddAppDependencyAsync");

	Params::USteamCoreUGCAsyncActionAddAppDependency_AddAppDependencyAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileID = PublishedFileID;
	Parms.AppID = AppID;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.RemoveAppDependencyAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionRemoveAppDependency*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionRemoveAppDependency* USteamCoreUGCAsyncActionRemoveAppDependency::RemoveAppDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, int32 AppID, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionRemoveAppDependency", "RemoveAppDependencyAsync");

	Params::USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileID = PublishedFileID;
	Parms.AppID = AppID;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FRemoveAppDependencyResult  Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionRemoveAppDependency::HandleCallback(struct FRemoveAppDependencyResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionRemoveAppDependency", "HandleCallback");

	Params::USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FAddUGCDependencyResult     Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionAddUGCDependency::HandleCallback(struct FAddUGCDependencyResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionAddUGCDependency", "HandleCallback");

	Params::USteamCoreUGCAsyncActionAddUGCDependency_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.AddDependencyAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID            ChildPublishedFileId                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionAddUGCDependency*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionAddUGCDependency* USteamCoreUGCAsyncActionAddUGCDependency::AddDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionAddUGCDependency", "AddDependencyAsync");

	Params::USteamCoreUGCAsyncActionAddUGCDependency_AddDependencyAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileID = PublishedFileID;
	Parms.ChildPublishedFileId = ChildPublishedFileId;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.RemoveDependencyAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID            ChildPublishedFileId                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionRemoveUGCDependency*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionRemoveUGCDependency* USteamCoreUGCAsyncActionRemoveUGCDependency::RemoveDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionRemoveUGCDependency", "RemoveDependencyAsync");

	Params::USteamCoreUGCAsyncActionRemoveUGCDependency_RemoveDependencyAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileID = PublishedFileID;
	Parms.ChildPublishedFileId = ChildPublishedFileId;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FRemoveUGCDependencyResult  Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionRemoveUGCDependency::HandleCallback(struct FRemoveUGCDependencyResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionRemoveUGCDependency", "HandleCallback");

	Params::USteamCoreUGCAsyncActionRemoveUGCDependency_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FUGCDeleteItemResult        Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionDeleteItem::HandleCallback(struct FUGCDeleteItemResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionDeleteItem", "HandleCallback");

	Params::USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.DeleteItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionDeleteItem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionDeleteItem* USteamCoreUGCAsyncActionDeleteItem::DeleteItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionDeleteItem", "DeleteItemAsync");

	Params::USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileID = PublishedFileID;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGetAppDependenciesResult   Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionGetAppDependencies::HandleCallback(struct FGetAppDependenciesResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionGetAppDependencies", "HandleCallback");

	Params::USteamCoreUGCAsyncActionGetAppDependencies_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.GetAppDependenciesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionGetAppDependencies*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionGetAppDependencies* USteamCoreUGCAsyncActionGetAppDependencies::GetAppDependenciesAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionGetAppDependencies", "GetAppDependenciesAsync");

	Params::USteamCoreUGCAsyncActionGetAppDependencies_GetAppDependenciesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileID = PublishedFileID;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FDownloadItemResult         Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUGCAsyncActionDownloadItem::HandleCallback(struct FDownloadItemResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionDownloadItem", "HandleCallback");

	Params::USteamCoreUGCAsyncActionDownloadItem_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.DownloadItemAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bHighPriority                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUGCAsyncActionDownloadItem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUGCAsyncActionDownloadItem* USteamCoreUGCAsyncActionDownloadItem::DownloadItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, bool bHighPriority, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUGCAsyncActionDownloadItem", "DownloadItemAsync");

	Params::USteamCoreUGCAsyncActionDownloadItem_DownloadItemAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PublishedFileID = PublishedFileID;
	Parms.bHighPriority = bHighPriority;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.User.UserHasLicenseForApp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              AppID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamUserHasLicenseForAppResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamUserHasLicenseForAppResult UUser::UserHasLicenseForApp(const struct FSteamID& SteamID, int32 AppID)
{
	static auto Func = Class->GetFunction("User", "UserHasLicenseForApp");

	Params::UUser_UserHasLicenseForApp_Params Parms;

	Parms.SteamID = SteamID;
	Parms.AppID = AppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.User.StopVoiceRecording
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UUser::StopVoiceRecording()
{
	static auto Func = Class->GetFunction("User", "StopVoiceRecording");

	Params::UUser_StopVoiceRecording_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.User.StartVoiceRecording
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UUser::StartVoiceRecording()
{
	static auto Func = Class->GetFunction("User", "StartVoiceRecording");

	Params::UUser_StartVoiceRecording_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.User.RequestStoreAuthURL
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RedirectURL                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUser::RequestStoreAuthURL(FDelegateProperty_& Callback, const class FString& RedirectURL)
{
	static auto Func = Class->GetFunction("User", "RequestStoreAuthURL");

	Params::UUser_RequestStoreAuthURL_Params Parms;

	Parms.Callback = Callback;
	Parms.RedirectURL = RedirectURL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.User.RequestEncryptedAppTicket
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      DataToInclude                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UUser::RequestEncryptedAppTicket(FDelegateProperty_& Callback, const TArray<uint8>& DataToInclude)
{
	static auto Func = Class->GetFunction("User", "RequestEncryptedAppTicket");

	Params::UUser_RequestEncryptedAppTicket_Params Parms;

	Parms.Callback = Callback;
	Parms.DataToInclude = DataToInclude;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.User.GetVoiceOptimalSampleRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUser::GetVoiceOptimalSampleRate()
{
	static auto Func = Class->GetFunction("User", "GetVoiceOptimalSampleRate");

	Params::UUser_GetVoiceOptimalSampleRate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.User.GetVoice
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      DestBuffer                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              BytesWritten                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamVoiceResult       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamVoiceResult UUser::GetVoice(TArray<uint8>* DestBuffer, int32* BytesWritten)
{
	static auto Func = Class->GetFunction("User", "GetVoice");

	Params::UUser_GetVoice_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (DestBuffer != nullptr)
		*DestBuffer = Parms.DestBuffer;

	if (BytesWritten != nullptr)
		*BytesWritten = Parms.BytesWritten;

	return Parms.ReturnValue;

}


// Function SteamCore.User.GetSteamID_Pure
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID UUser::GetSteamID_Pure()
{
	static auto Func = Class->GetFunction("User", "GetSteamID_Pure");

	Params::UUser_GetSteamID_Pure_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.User.GetSteamID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID UUser::GetSteamID()
{
	static auto Func = Class->GetFunction("User", "GetSteamID");

	Params::UUser_GetSteamID_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.User.GetPlayerSteamLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUser::GetPlayerSteamLevel()
{
	static auto Func = Class->GetFunction("User", "GetPlayerSteamLevel");

	Params::UUser_GetPlayerSteamLevel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.User.GetGameBadgeLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Series                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFoil                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUser::GetGameBadgeLevel(int32 Series, bool bFoil)
{
	static auto Func = Class->GetFunction("User", "GetGameBadgeLevel");

	Params::UUser_GetGameBadgeLevel_Params Parms;

	Parms.Series = Series;
	Parms.bFoil = bFoil;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.User.GetEncryptedAppTicket
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Ticket                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUser::GetEncryptedAppTicket(TArray<uint8>* Ticket)
{
	static auto Func = Class->GetFunction("User", "GetEncryptedAppTicket");

	Params::UUser_GetEncryptedAppTicket_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Ticket != nullptr)
		*Ticket = Parms.Ticket;

	return Parms.ReturnValue;

}


// Function SteamCore.User.GetAvailableVoice
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              CompressedBytes                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UncompressedBytes                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UncompressedVoiceDesiredSampleRate                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamVoiceResult       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamVoiceResult UUser::GetAvailableVoice(int32* CompressedBytes, int32* UncompressedBytes, int32 UncompressedVoiceDesiredSampleRate)
{
	static auto Func = Class->GetFunction("User", "GetAvailableVoice");

	Params::UUser_GetAvailableVoice_Params Parms;

	Parms.UncompressedVoiceDesiredSampleRate = UncompressedVoiceDesiredSampleRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (CompressedBytes != nullptr)
		*CompressedBytes = Parms.CompressedBytes;

	if (UncompressedBytes != nullptr)
		*UncompressedBytes = Parms.UncompressedBytes;

	return Parms.ReturnValue;

}


// Function SteamCore.User.GetAuthSessionTicket
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Ticket                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FSteamTicketHandle          ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamTicketHandle UUser::GetAuthSessionTicket(TArray<uint8>* Ticket)
{
	static auto Func = Class->GetFunction("User", "GetAuthSessionTicket");

	Params::UUser_GetAuthSessionTicket_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Ticket != nullptr)
		*Ticket = Parms.Ticket;

	return Parms.ReturnValue;

}


// Function SteamCore.User.EndAuthSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUser::EndAuthSession(const struct FSteamID& SteamID)
{
	static auto Func = Class->GetFunction("User", "EndAuthSession");

	Params::UUser_EndAuthSession_Params Parms;

	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.User.DecompressVoice
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      CompressedBuffer                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              DesiredSampleRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      DestBuffer                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class ESteamVoiceResult       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamVoiceResult UUser::DecompressVoice(TArray<uint8>& CompressedBuffer, int32 DesiredSampleRate, TArray<uint8>* DestBuffer)
{
	static auto Func = Class->GetFunction("User", "DecompressVoice");

	Params::UUser_DecompressVoice_Params Parms;

	Parms.CompressedBuffer = CompressedBuffer;
	Parms.DesiredSampleRate = DesiredSampleRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (DestBuffer != nullptr)
		*DestBuffer = Parms.DestBuffer;

	return Parms.ReturnValue;

}


// Function SteamCore.User.CancelAuthTicket
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamTicketHandle          TicketHandle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUser::CancelAuthTicket(const struct FSteamTicketHandle& TicketHandle)
{
	static auto Func = Class->GetFunction("User", "CancelAuthTicket");

	Params::UUser_CancelAuthTicket_Params Parms;

	Parms.TicketHandle = TicketHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.User.BLoggedOn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUser::BLoggedOn()
{
	static auto Func = Class->GetFunction("User", "BLoggedOn");

	Params::UUser_BLoggedOn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.User.BIsTwoFactorEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUser::BIsTwoFactorEnabled()
{
	static auto Func = Class->GetFunction("User", "BIsTwoFactorEnabled");

	Params::UUser_BIsTwoFactorEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.User.BIsPhoneVerified
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUser::BIsPhoneVerified()
{
	static auto Func = Class->GetFunction("User", "BIsPhoneVerified");

	Params::UUser_BIsPhoneVerified_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.User.BIsPhoneRequiringVerification
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUser::BIsPhoneRequiringVerification()
{
	static auto Func = Class->GetFunction("User", "BIsPhoneRequiringVerification");

	Params::UUser_BIsPhoneRequiringVerification_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.User.BIsPhoneIdentifying
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUser::BIsPhoneIdentifying()
{
	static auto Func = Class->GetFunction("User", "BIsPhoneIdentifying");

	Params::UUser_BIsPhoneIdentifying_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.User.BIsBehindNAT
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUser::BIsBehindNAT()
{
	static auto Func = Class->GetFunction("User", "BIsBehindNAT");

	Params::UUser_BIsBehindNAT_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.User.BeginAuthSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Ticket                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamBeginAuthSessionResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamBeginAuthSessionResult UUser::BeginAuthSession(const TArray<uint8>& Ticket, const struct FSteamID& SteamID)
{
	static auto Func = Class->GetFunction("User", "BeginAuthSession");

	Params::UUser_BeginAuthSession_Params Parms;

	Parms.Ticket = Ticket;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.User.AdvertiseGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDGameServer                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ServerIP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ServerPort                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUser::AdvertiseGame(const struct FSteamID& SteamIDGameServer, const class FString& ServerIP, int32 ServerPort)
{
	static auto Func = Class->GetFunction("User", "AdvertiseGame");

	Params::UUser_AdvertiseGame_Params Parms;

	Parms.SteamIDGameServer = SteamIDGameServer;
	Parms.ServerIP = ServerIP;
	Parms.ServerPort = ServerPort;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.RequestEncryptedAppTicketAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      DataToInclude                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserAsyncActionRequestEncryptedAppTicket*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUserAsyncActionRequestEncryptedAppTicket* USteamCoreUserAsyncActionRequestEncryptedAppTicket::RequestEncryptedAppTicketAsync(class UObject* WorldContextObject, const TArray<uint8>& DataToInclude, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUserAsyncActionRequestEncryptedAppTicket", "RequestEncryptedAppTicketAsync");

	Params::USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.DataToInclude = DataToInclude;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FEncryptedAppTicketResponse Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUserAsyncActionRequestEncryptedAppTicket::HandleCallback(struct FEncryptedAppTicketResponse& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUserAsyncActionRequestEncryptedAppTicket", "HandleCallback");

	Params::USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.RequestStoreAuthURLAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RedirectURL                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserAsyncActionRequestStoreAuthURL*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUserAsyncActionRequestStoreAuthURL* USteamCoreUserAsyncActionRequestStoreAuthURL::RequestStoreAuthURLAsync(class UObject* WorldContextObject, const class FString& RedirectURL, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUserAsyncActionRequestStoreAuthURL", "RequestStoreAuthURLAsync");

	Params::USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.RedirectURL = RedirectURL;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FStoreAuthURLResponse       Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUserAsyncActionRequestStoreAuthURL::HandleCallback(struct FStoreAuthURLResponse& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUserAsyncActionRequestStoreAuthURL", "HandleCallback");

	Params::USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UserStats.UploadLeaderboardScore
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard           SteamLeaderboard                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamLeaderboardUploadScoreMethodUploadScoreMethod                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Score                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ScoreDetails                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UUserStats::UploadLeaderboardScore(FDelegateProperty_& Callback, const struct FSteamLeaderboard& SteamLeaderboard, enum class ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, const TArray<int32>& ScoreDetails)
{
	static auto Func = Class->GetFunction("UserStats", "UploadLeaderboardScore");

	Params::UUserStats_UploadLeaderboardScore_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamLeaderboard = SteamLeaderboard;
	Parms.UploadScoreMethod = UploadScoreMethod;
	Parms.Score = Score;
	Parms.ScoreDetails = ScoreDetails;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UserStats.UpdateAvgRateStat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CountThisSession                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SessionLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::UpdateAvgRateStat(const class FString& Name, float CountThisSession, float SessionLength)
{
	static auto Func = Class->GetFunction("UserStats", "UpdateAvgRateStat");

	Params::UUserStats_UpdateAvgRateStat_Params Parms;

	Parms.Name = Name;
	Parms.CountThisSession = CountThisSession;
	Parms.SessionLength = SessionLength;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.StoreStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::StoreStats()
{
	static auto Func = Class->GetFunction("UserStats", "StoreStats");

	Params::UUserStats_StoreStats_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.SetStatInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Data                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::SetStatInt(const class FString& Name, int32 Data)
{
	static auto Func = Class->GetFunction("UserStats", "SetStatInt");

	Params::UUserStats_SetStatInt_Params Parms;

	Parms.Name = Name;
	Parms.Data = Data;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.SetStatFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Data                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::SetStatFloat(const class FString& Name, float Data)
{
	static auto Func = Class->GetFunction("UserStats", "SetStatFloat");

	Params::UUserStats_SetStatFloat_Params Parms;

	Parms.Name = Name;
	Parms.Data = Data;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.SetAchievement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::SetAchievement(const class FString& Name)
{
	static auto Func = Class->GetFunction("UserStats", "SetAchievement");

	Params::UUserStats_SetAchievement_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.ResetAllStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bAchievementsToo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::ResetAllStats(bool bAchievementsToo)
{
	static auto Func = Class->GetFunction("UserStats", "ResetAllStats");

	Params::UUserStats_ResetAllStats_Params Parms;

	Parms.bAchievementsToo = bAchievementsToo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.RequestUserStats
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUserStats::RequestUserStats(FDelegateProperty_& Callback, const struct FSteamID& SteamID)
{
	static auto Func = Class->GetFunction("UserStats", "RequestUserStats");

	Params::UUserStats_RequestUserStats_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UserStats.RequestGlobalStats
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HistoryDays                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserStats::RequestGlobalStats(FDelegateProperty_& Callback, int32 HistoryDays)
{
	static auto Func = Class->GetFunction("UserStats", "RequestGlobalStats");

	Params::UUserStats_RequestGlobalStats_Params Parms;

	Parms.Callback = Callback;
	Parms.HistoryDays = HistoryDays;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UserStats.RequestGlobalAchievementPercentages
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserStats::RequestGlobalAchievementPercentages(FDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("UserStats", "RequestGlobalAchievementPercentages");

	Params::UUserStats_RequestGlobalAchievementPercentages_Params Parms;

	Parms.Callback = Callback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UserStats.RequestCurrentStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::RequestCurrentStats()
{
	static auto Func = Class->GetFunction("UserStats", "RequestCurrentStats");

	Params::UUserStats_RequestCurrentStats_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.IndicateAchievementProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CurrentProgress                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxProgress                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::IndicateAchievementProgress(const class FString& Name, int32 CurrentProgress, int32 MaxProgress)
{
	static auto Func = Class->GetFunction("UserStats", "IndicateAchievementProgress");

	Params::UUserStats_IndicateAchievementProgress_Params Parms;

	Parms.Name = Name;
	Parms.CurrentProgress = CurrentProgress;
	Parms.MaxProgress = MaxProgress;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetUserStatInteger
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Data                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::GetUserStatInteger(const struct FSteamID& SteamIDUser, const class FString& Name, int32* Data)
{
	static auto Func = Class->GetFunction("UserStats", "GetUserStatInteger");

	Params::UUserStats_GetUserStatInteger_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Data != nullptr)
		*Data = Parms.Data;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetUserStatFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Data                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::GetUserStatFloat(const struct FSteamID& SteamIDUser, const class FString& Name, float* Data)
{
	static auto Func = Class->GetFunction("UserStats", "GetUserStatFloat");

	Params::UUserStats_GetUserStatFloat_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Data != nullptr)
		*Data = Parms.Data;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetUserAchievementAndUnlockTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAchieved                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UnlockTime                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::GetUserAchievementAndUnlockTime(const struct FSteamID& SteamIDUser, const class FString& Name, bool* bAchieved, int32* UnlockTime)
{
	static auto Func = Class->GetFunction("UserStats", "GetUserAchievementAndUnlockTime");

	Params::UUserStats_GetUserAchievementAndUnlockTime_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bAchieved != nullptr)
		*bAchieved = Parms.bAchieved;

	if (UnlockTime != nullptr)
		*UnlockTime = Parms.UnlockTime;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetUserAchievement
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamIDUser                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAchieved                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::GetUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name, bool* bAchieved)
{
	static auto Func = Class->GetFunction("UserStats", "GetUserAchievement");

	Params::UUserStats_GetUserAchievement_Params Parms;

	Parms.SteamIDUser = SteamIDUser;
	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bAchieved != nullptr)
		*bAchieved = Parms.bAchieved;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetStatInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Data                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::GetStatInt(const class FString& Name, int32* Data)
{
	static auto Func = Class->GetFunction("UserStats", "GetStatInt");

	Params::UUserStats_GetStatInt_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Data != nullptr)
		*Data = Parms.Data;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetStatFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Data                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::GetStatFloat(const class FString& Name, float* Data)
{
	static auto Func = Class->GetFunction("UserStats", "GetStatFloat");

	Params::UUserStats_GetStatFloat_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Data != nullptr)
		*Data = Parms.Data;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetNumberOfCurrentPlayers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserStats::GetNumberOfCurrentPlayers(FDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("UserStats", "GetNumberOfCurrentPlayers");

	Params::UUserStats_GetNumberOfCurrentPlayers_Params Parms;

	Parms.Callback = Callback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UserStats.GetNumAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUserStats::GetNumAchievements()
{
	static auto Func = Class->GetFunction("UserStats", "GetNumAchievements");

	Params::UUserStats_GetNumAchievements_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetNextMostAchievedAchievementInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              IteratorPrevious                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAchieved                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUserStats::GetNextMostAchievedAchievementInfo(int32 IteratorPrevious, class FString* Name, float* Percent, bool* bAchieved)
{
	static auto Func = Class->GetFunction("UserStats", "GetNextMostAchievedAchievementInfo");

	Params::UUserStats_GetNextMostAchievedAchievementInfo_Params Parms;

	Parms.IteratorPrevious = IteratorPrevious;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Name != nullptr)
		*Name = Parms.Name;

	if (Percent != nullptr)
		*Percent = Parms.Percent;

	if (bAchieved != nullptr)
		*bAchieved = Parms.bAchieved;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetMostAchievedAchievementInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAchieved                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUserStats::GetMostAchievedAchievementInfo(class FString* Name, float* Percent, bool* bAchieved)
{
	static auto Func = Class->GetFunction("UserStats", "GetMostAchievedAchievementInfo");

	Params::UUserStats_GetMostAchievedAchievementInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Name != nullptr)
		*Name = Parms.Name;

	if (Percent != nullptr)
		*Percent = Parms.Percent;

	if (bAchieved != nullptr)
		*bAchieved = Parms.bAchieved;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetLeaderboardSortMethod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamLeaderboard           SteamLeaderboard                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamLeaderboardSortMethodReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamLeaderboardSortMethod UUserStats::GetLeaderboardSortMethod(const struct FSteamLeaderboard& SteamLeaderboard)
{
	static auto Func = Class->GetFunction("UserStats", "GetLeaderboardSortMethod");

	Params::UUserStats_GetLeaderboardSortMethod_Params Parms;

	Parms.SteamLeaderboard = SteamLeaderboard;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetLeaderboardName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamLeaderboard           SteamLeaderboard                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUserStats::GetLeaderboardName(const struct FSteamLeaderboard& SteamLeaderboard)
{
	static auto Func = Class->GetFunction("UserStats", "GetLeaderboardName");

	Params::UUserStats_GetLeaderboardName_Params Parms;

	Parms.SteamLeaderboard = SteamLeaderboard;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetLeaderboardEntryCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamLeaderboard           SteamLeaderboard                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUserStats::GetLeaderboardEntryCount(const struct FSteamLeaderboard& SteamLeaderboard)
{
	static auto Func = Class->GetFunction("UserStats", "GetLeaderboardEntryCount");

	Params::UUserStats_GetLeaderboardEntryCount_Params Parms;

	Parms.SteamLeaderboard = SteamLeaderboard;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetLeaderboardDisplayType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamLeaderboard           SteamLeaderboard                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamLeaderboardDisplayTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamLeaderboardDisplayType UUserStats::GetLeaderboardDisplayType(const struct FSteamLeaderboard& SteamLeaderboard)
{
	static auto Func = Class->GetFunction("UserStats", "GetLeaderboardDisplayType");

	Params::UUserStats_GetLeaderboardDisplayType_Params Parms;

	Parms.SteamLeaderboard = SteamLeaderboard;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetGlobalStatInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      StatName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Data                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::GetGlobalStatInt(const class FString& StatName, int32* Data)
{
	static auto Func = Class->GetFunction("UserStats", "GetGlobalStatInt");

	Params::UUserStats_GetGlobalStatInt_Params Parms;

	Parms.StatName = StatName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Data != nullptr)
		*Data = Parms.Data;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetGlobalStatHistoryInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      StatName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HistoryDays                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Data                                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUserStats::GetGlobalStatHistoryInt(const class FString& StatName, int32 HistoryDays, TArray<int32>* Data)
{
	static auto Func = Class->GetFunction("UserStats", "GetGlobalStatHistoryInt");

	Params::UUserStats_GetGlobalStatHistoryInt_Params Parms;

	Parms.StatName = StatName;
	Parms.HistoryDays = HistoryDays;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Data != nullptr)
		*Data = Parms.Data;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetGlobalStatHistoryFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      StatName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HistoryDays                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      Data                                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUserStats::GetGlobalStatHistoryFloat(const class FString& StatName, int32 HistoryDays, TArray<float>* Data)
{
	static auto Func = Class->GetFunction("UserStats", "GetGlobalStatHistoryFloat");

	Params::UUserStats_GetGlobalStatHistoryFloat_Params Parms;

	Parms.StatName = StatName;
	Parms.HistoryDays = HistoryDays;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Data != nullptr)
		*Data = Parms.Data;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetGlobalStatFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      StatName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Data                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::GetGlobalStatFloat(const class FString& StatName, float* Data)
{
	static auto Func = Class->GetFunction("UserStats", "GetGlobalStatFloat");

	Params::UUserStats_GetGlobalStatFloat_Params Parms;

	Parms.StatName = StatName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Data != nullptr)
		*Data = Parms.Data;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetDownloadedLeaderboardEntry
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamLeaderboardEntries    LeaderboardEntries                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamLeaderboardEntry      LeaderboardEntry                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Details                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      OutDetails                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::GetDownloadedLeaderboardEntry(const struct FSteamLeaderboardEntries& LeaderboardEntries, int32 Index, struct FSteamLeaderboardEntry* LeaderboardEntry, const TArray<int32>& Details, TArray<int32>* OutDetails)
{
	static auto Func = Class->GetFunction("UserStats", "GetDownloadedLeaderboardEntry");

	Params::UUserStats_GetDownloadedLeaderboardEntry_Params Parms;

	Parms.LeaderboardEntries = LeaderboardEntries;
	Parms.Index = Index;
	Parms.Details = Details;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LeaderboardEntry != nullptr)
		*LeaderboardEntry = Parms.LeaderboardEntry;

	if (OutDetails != nullptr)
		*OutDetails = Parms.OutDetails;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetAchievementProgressLimitsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinProgress                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxProgress                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::GetAchievementProgressLimitsFloat(const class FString& Name, float* MinProgress, float* MaxProgress)
{
	static auto Func = Class->GetFunction("UserStats", "GetAchievementProgressLimitsFloat");

	Params::UUserStats_GetAchievementProgressLimitsFloat_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (MinProgress != nullptr)
		*MinProgress = Parms.MinProgress;

	if (MaxProgress != nullptr)
		*MaxProgress = Parms.MaxProgress;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetAchievementProgressLimits
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinProgress                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxProgress                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::GetAchievementProgressLimits(const class FString& Name, int32* MinProgress, int32* MaxProgress)
{
	static auto Func = Class->GetFunction("UserStats", "GetAchievementProgressLimits");

	Params::UUserStats_GetAchievementProgressLimits_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (MinProgress != nullptr)
		*MinProgress = Parms.MinProgress;

	if (MaxProgress != nullptr)
		*MaxProgress = Parms.MaxProgress;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetAchievementName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Achievement                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUserStats::GetAchievementName(int32 Achievement)
{
	static auto Func = Class->GetFunction("UserStats", "GetAchievementName");

	Params::UUserStats_GetAchievementName_Params Parms;

	Parms.Achievement = Achievement;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetAchievementIcon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UUserStats::GetAchievementIcon(const class FString& Name)
{
	static auto Func = Class->GetFunction("UserStats", "GetAchievementIcon");

	Params::UUserStats_GetAchievementIcon_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetAchievementDisplayAttribute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUserStats::GetAchievementDisplayAttribute(const class FString& Name, const class FString& Key)
{
	static auto Func = Class->GetFunction("UserStats", "GetAchievementDisplayAttribute");

	Params::UUserStats_GetAchievementDisplayAttribute_Params Parms;

	Parms.Name = Name;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetAchievementAndUnlockTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAchieved                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UnlockTime                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::GetAchievementAndUnlockTime(const class FString& Name, bool* bAchieved, int32* UnlockTime)
{
	static auto Func = Class->GetFunction("UserStats", "GetAchievementAndUnlockTime");

	Params::UUserStats_GetAchievementAndUnlockTime_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bAchieved != nullptr)
		*bAchieved = Parms.bAchieved;

	if (UnlockTime != nullptr)
		*UnlockTime = Parms.UnlockTime;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetAchievementAchievedPercent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::GetAchievementAchievedPercent(const class FString& Name, float* Percent)
{
	static auto Func = Class->GetFunction("UserStats", "GetAchievementAchievedPercent");

	Params::UUserStats_GetAchievementAchievedPercent_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Percent != nullptr)
		*Percent = Parms.Percent;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.GetAchievement
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAchieved                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::GetAchievement(const class FString& Name, bool* bAchieved)
{
	static auto Func = Class->GetFunction("UserStats", "GetAchievement");

	Params::UUserStats_GetAchievement_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bAchieved != nullptr)
		*bAchieved = Parms.bAchieved;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.FindOrCreateLeaderboard
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LeaderboardName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamLeaderboardSortMethodSortMethod                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamLeaderboardDisplayTypeDisplayType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserStats::FindOrCreateLeaderboard(FDelegateProperty_& Callback, const class FString& LeaderboardName, enum class ESteamLeaderboardSortMethod SortMethod, enum class ESteamLeaderboardDisplayType DisplayType)
{
	static auto Func = Class->GetFunction("UserStats", "FindOrCreateLeaderboard");

	Params::UUserStats_FindOrCreateLeaderboard_Params Parms;

	Parms.Callback = Callback;
	Parms.LeaderboardName = LeaderboardName;
	Parms.SortMethod = SortMethod;
	Parms.DisplayType = DisplayType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UserStats.FindLeaderboard
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LeaderboardName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserStats::FindLeaderboard(FDelegateProperty_& Callback, const class FString& LeaderboardName)
{
	static auto Func = Class->GetFunction("UserStats", "FindLeaderboard");

	Params::UUserStats_FindLeaderboard_Params Parms;

	Parms.Callback = Callback;
	Parms.LeaderboardName = LeaderboardName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UserStats.DownloadLeaderboardEntriesForUsers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard           SteamLeaderboard                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FSteamID>            Users                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UUserStats::DownloadLeaderboardEntriesForUsers(FDelegateProperty_& Callback, const struct FSteamLeaderboard& SteamLeaderboard, const TArray<struct FSteamID>& Users)
{
	static auto Func = Class->GetFunction("UserStats", "DownloadLeaderboardEntriesForUsers");

	Params::UUserStats_DownloadLeaderboardEntriesForUsers_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamLeaderboard = SteamLeaderboard;
	Parms.Users = Users;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UserStats.DownloadLeaderboardEntries
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard           SteamLeaderboard                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamLeaderboardDataRequestDataRequest                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeStart                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeEnd                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserStats::DownloadLeaderboardEntries(FDelegateProperty_& Callback, const struct FSteamLeaderboard& SteamLeaderboard, enum class ESteamLeaderboardDataRequest DataRequest, int32 RangeStart, int32 RangeEnd)
{
	static auto Func = Class->GetFunction("UserStats", "DownloadLeaderboardEntries");

	Params::UUserStats_DownloadLeaderboardEntries_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamLeaderboard = SteamLeaderboard;
	Parms.DataRequest = DataRequest;
	Parms.RangeStart = RangeStart;
	Parms.RangeEnd = RangeEnd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.UserStats.ClearAchievement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserStats::ClearAchievement(const class FString& Name)
{
	static auto Func = Class->GetFunction("UserStats", "ClearAchievement");

	Params::UUserStats_ClearAchievement_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.UserStats.AttachLeaderboardUGC
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard           SteamLeaderboard                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamUGCHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUserStats::AttachLeaderboardUGC(FDelegateProperty_& Callback, const struct FSteamLeaderboard& SteamLeaderboard, const struct FSteamUGCHandle& Handle)
{
	static auto Func = Class->GetFunction("UserStats", "AttachLeaderboardUGC");

	Params::UUserStats_AttachLeaderboardUGC_Params Parms;

	Parms.Callback = Callback;
	Parms.SteamLeaderboard = SteamLeaderboard;
	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FLeaderboardFindResult      Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUserStatsAsyncActionFindLeaderboard::HandleCallback(struct FLeaderboardFindResult& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionFindLeaderboard", "HandleCallback");

	Params::USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.FindLeaderboardAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LeaderboardName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionFindLeaderboard*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUserStatsAsyncActionFindLeaderboard* USteamCoreUserStatsAsyncActionFindLeaderboard::FindLeaderboardAsync(class UObject* WorldContextObject, const class FString& LeaderboardName, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionFindLeaderboard", "FindLeaderboardAsync");

	Params::USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.LeaderboardName = LeaderboardName;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FLeaderboardScoresDownloadedData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::HandleCallback(struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries", "HandleCallback");

	Params::USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.DownloadLeaderboardEntriesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard           SteamLeaderboard                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamLeaderboardDataRequestRequest                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeStart                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RangeEnd                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::DownloadLeaderboardEntriesAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, enum class ESteamLeaderboardDataRequest Request, int32 RangeStart, int32 RangeEnd, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries", "DownloadLeaderboardEntriesAsync");

	Params::USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamLeaderboard = SteamLeaderboard;
	Parms.Request = Request;
	Parms.RangeStart = RangeStart;
	Parms.RangeEnd = RangeEnd;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.RequestGlobalStatsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HistoryDays                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::RequestGlobalStatsAsync(class UObject* WorldContextObject, int32 HistoryDays, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats", "RequestGlobalStatsAsync");

	Params::USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.HistoryDays = HistoryDays;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGlobalStatsReceived        Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::HandleCallback(struct FGlobalStatsReceived& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats", "HandleCallback");

	Params::USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.RequestGlobalAchievementPercentagesAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::RequestGlobalAchievementPercentagesAsync(class UObject* WorldContextObject, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages", "RequestGlobalAchievementPercentagesAsync");

	Params::USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGlobalAchievementPercentagesReadyData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::HandleCallback(struct FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages", "HandleCallback");

	Params::USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FNumberOfCurrentPlayers     Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::HandleCallback(struct FNumberOfCurrentPlayers& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers", "HandleCallback");

	Params::USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers", "GetNumberOfCurrentPlayersAsync");

	Params::USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.UploadLeaderboardScoreAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard           SteamLeaderboard                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamLeaderboardUploadScoreMethodUploadScoreMethod                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Score                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ScoreDetails                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionUploadLeaderboardScore*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* USteamCoreUserStatsAsyncActionUploadLeaderboardScore::UploadLeaderboardScoreAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, enum class ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, const TArray<int32>& ScoreDetails, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionUploadLeaderboardScore", "UploadLeaderboardScoreAsync");

	Params::USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamLeaderboard = SteamLeaderboard;
	Parms.UploadScoreMethod = UploadScoreMethod;
	Parms.Score = Score;
	Parms.ScoreDetails = ScoreDetails;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FLeaderboardScoreUploaded   Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUserStatsAsyncActionUploadLeaderboardScore::HandleCallback(struct FLeaderboardScoreUploaded& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionUploadLeaderboardScore", "HandleCallback");

	Params::USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FFindOrCreateLeaderboardDataData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::HandleCallback(struct FFindOrCreateLeaderboardData& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard", "HandleCallback");

	Params::USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LeaderboardName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamLeaderboardSortMethodSortMethod                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamLeaderboardDisplayTypeDisplayType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, const class FString& LeaderboardName, enum class ESteamLeaderboardSortMethod SortMethod, enum class ESteamLeaderboardDisplayType DisplayType, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard", "FindOrCreateLeaderboardAsync");

	Params::USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.LeaderboardName = LeaderboardName;
	Parms.SortMethod = SortMethod;
	Parms.DisplayType = DisplayType;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.RequestUserStatsAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionRequestUserStats*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUserStatsAsyncActionRequestUserStats* USteamCoreUserStatsAsyncActionRequestUserStats::RequestUserStatsAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionRequestUserStats", "RequestUserStatsAsync");

	Params::USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamID = SteamID;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FRequestUserStatsData       Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUserStatsAsyncActionRequestUserStats::HandleCallback(struct FRequestUserStatsData& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionRequestUserStats", "HandleCallback");

	Params::USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FLeaderboardScoresDownloadedForUsersData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::HandleCallback(struct FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers", "HandleCallback");

	Params::USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.DownloadLeaderboardEntriesForUsersAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard           SteamLeaderboard                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FSteamID>            Users                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::DownloadLeaderboardEntriesForUsersAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, const TArray<struct FSteamID>& Users, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers", "DownloadLeaderboardEntriesForUsersAsync");

	Params::USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamLeaderboard = SteamLeaderboard;
	Parms.Users = Users;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.HandleCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FAttachLeaderboardUGCData   Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::HandleCallback(struct FAttachLeaderboardUGCData& Data, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionAttachLeaderboardUGC", "HandleCallback");

	Params::USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Params Parms;

	Parms.Data = Data;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.AttachLeaderboardUGCAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamLeaderboard           SteamLeaderboard                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamUGCHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::AttachLeaderboardUGCAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, const struct FSteamUGCHandle& Handle, float Timeout)
{
	static auto Func = Class->GetFunction("SteamCoreUserStatsAsyncActionAttachLeaderboardUGC", "AttachLeaderboardUGCAsync");

	Params::USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SteamLeaderboard = SteamLeaderboard;
	Parms.Handle = Handle;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreVoice.DestroySteamCoreVoice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USteamCoreVoice*             Obj                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreVoice::DestroySteamCoreVoice(class USteamCoreVoice* Obj)
{
	static auto Func = Class->GetFunction("SteamCoreVoice", "DestroySteamCoreVoice");

	Params::USteamCoreVoice_DestroySteamCoreVoice_Params Parms;

	Parms.Obj = Obj;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreVoice.ConstructSteamCoreVoice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AudioSampleRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreVoice*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreVoice* USteamCoreVoice::ConstructSteamCoreVoice(int32 AudioSampleRate)
{
	static auto Func = Class->GetFunction("SteamCoreVoice", "ConstructSteamCoreVoice");

	Params::USteamCoreVoice_ConstructSteamCoreVoice_Params Parms;

	Parms.AudioSampleRate = AudioSampleRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreVoice.AddAudioBuffer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Buffer                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USteamCoreVoice::AddAudioBuffer(TArray<uint8>& Buffer)
{
	static auto Func = Class->GetFunction("SteamCoreVoice", "AddAudioBuffer");

	Params::USteamCoreVoice_AddAudioBuffer_Params Parms;

	Parms.Buffer = Buffer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamCoreAsyncActionListenForControllerChange.ListenForControllerChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamCoreAsyncActionListenForControllerChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USteamCoreAsyncActionListenForControllerChange* USteamCoreAsyncActionListenForControllerChange::ListenForControllerChange(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("SteamCoreAsyncActionListenForControllerChange", "ListenForControllerChange");

	Params::USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamCoreAsyncActionListenForControllerChange.HandleCallback
// (Final, Native, Public)
// Parameters:
// bool                               bIsConnected                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlatformUserId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamCoreAsyncActionListenForControllerChange::HandleCallback(bool bIsConnected, int32 PlatformUserId, int32 UserId)
{
	static auto Func = Class->GetFunction("SteamCoreAsyncActionListenForControllerChange", "HandleCallback");

	Params::USteamCoreAsyncActionListenForControllerChange_HandleCallback_Params Parms;

	Parms.bIsConnected = bIsConnected;
	Parms.PlatformUserId = PlatformUserId;
	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamUtilities.WriteBytesToFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bOverwriteIfExists                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AbsoluteFilePath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      DataBuffer                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::WriteBytesToFile(bool bOverwriteIfExists, const class FString& AbsoluteFilePath, TArray<uint8>& DataBuffer)
{
	static auto Func = Class->GetFunction("SteamUtilities", "WriteBytesToFile");

	Params::USteamUtilities_WriteBytesToFile_Params Parms;

	Parms.bOverwriteIfExists = bOverwriteIfExists;
	Parms.AbsoluteFilePath = AbsoluteFilePath;
	Parms.DataBuffer = DataBuffer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals_Exec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamItemInstanceID        A                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID        B                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamCoreIdentical     Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamUtilities::SteamItemInstanceID_Equals_Exec(const struct FSteamItemInstanceID& A, const struct FSteamItemInstanceID& B, enum class ESteamCoreIdentical* Result)
{
	static auto Func = Class->GetFunction("SteamUtilities", "SteamItemInstanceID_Equals_Exec");

	Params::USteamUtilities_SteamItemInstanceID_Equals_Exec_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamItemInstanceID        A                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamItemInstanceID        B                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::SteamItemInstanceID_Equals(const struct FSteamItemInstanceID& A, const struct FSteamItemInstanceID& B)
{
	static auto Func = Class->GetFunction("SteamUtilities", "SteamItemInstanceID_Equals");

	Params::USteamUtilities_SteamItemInstanceID_Equals_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.ReadFileToBytes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AbsoluteFilePath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> USteamUtilities::ReadFileToBytes(const class FString& AbsoluteFilePath)
{
	static auto Func = Class->GetFunction("SteamUtilities", "ReadFileToBytes");

	Params::USteamUtilities_ReadFileToBytes_Params Parms;

	Parms.AbsoluteFilePath = AbsoluteFilePath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.PublishedFileID_NotEquals
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPublishedFileID            A                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID            B                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::PublishedFileID_NotEquals(const struct FPublishedFileID& A, const struct FPublishedFileID& B)
{
	static auto Func = Class->GetFunction("SteamUtilities", "PublishedFileID_NotEquals");

	Params::USteamUtilities_PublishedFileID_NotEquals_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.PublishedFileID_Equals_Exec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPublishedFileID            A                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID            B                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamCoreIdentical     Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamUtilities::PublishedFileID_Equals_Exec(const struct FPublishedFileID& A, const struct FPublishedFileID& B, enum class ESteamCoreIdentical* Result)
{
	static auto Func = Class->GetFunction("SteamUtilities", "PublishedFileID_Equals_Exec");

	Params::USteamUtilities_PublishedFileID_Equals_Exec_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCore.SteamUtilities.PublishedFileID_Equals
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPublishedFileID            A                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPublishedFileID            B                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::PublishedFileID_Equals(const struct FPublishedFileID& A, const struct FPublishedFileID& B)
{
	static auto Func = Class->GetFunction("SteamUtilities", "PublishedFileID_Equals");

	Params::USteamUtilities_PublishedFileID_Equals_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.NotEqual
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                    A                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    B                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::NotEqual(const struct FSteamID& A, const struct FSteamID& B)
{
	static auto Func = Class->GetFunction("SteamUtilities", "NotEqual");

	Params::USteamUtilities_NotEqual_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.MakeUGCHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamUGCHandle             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamUGCHandle USteamUtilities::MakeUGCHandle(const class FString& Value)
{
	static auto Func = Class->GetFunction("SteamUtilities", "MakeUGCHandle");

	Params::USteamUtilities_MakeUGCHandle_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.MakeTicketHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamTicketHandle          ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamTicketHandle USteamUtilities::MakeTicketHandle(const class FString& Value)
{
	static auto Func = Class->GetFunction("SteamUtilities", "MakeTicketHandle");

	Params::USteamUtilities_MakeTicketHandle_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.MakeString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamSessionSetting        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSteamSessionSetting USteamUtilities::MakeString(const class FString& Value)
{
	static auto Func = Class->GetFunction("SteamUtilities", "MakeString");

	Params::USteamUtilities_MakeString_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.MakeSteamID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID USteamUtilities::MakeSteamID(const class FString& Value)
{
	static auto Func = Class->GetFunction("SteamUtilities", "MakeSteamID");

	Params::USteamUtilities_MakeSteamID_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.MakeSteamGameID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamGameID                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamGameID USteamUtilities::MakeSteamGameID(const class FString& Value)
{
	static auto Func = Class->GetFunction("SteamUtilities", "MakeSteamGameID");

	Params::USteamUtilities_MakeSteamGameID_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.MakeSearchString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamSessionSearchSetting  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSteamSessionSearchSetting USteamUtilities::MakeSearchString(const class FString& Value)
{
	static auto Func = Class->GetFunction("SteamUtilities", "MakeSearchString");

	Params::USteamUtilities_MakeSearchString_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.MakeSearchInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ESteamComparisonOp      ComparisonOperator                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamSessionSearchSetting  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSteamSessionSearchSetting USteamUtilities::MakeSearchInteger(enum class ESteamComparisonOp ComparisonOperator, int32 Value)
{
	static auto Func = Class->GetFunction("SteamUtilities", "MakeSearchInteger");

	Params::USteamUtilities_MakeSearchInteger_Params Parms;

	Parms.ComparisonOperator = ComparisonOperator;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.MakeSearchBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamSessionSearchSetting  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSteamSessionSearchSetting USteamUtilities::MakeSearchBool(bool bValue)
{
	static auto Func = Class->GetFunction("SteamUtilities", "MakeSearchBool");

	Params::USteamUtilities_MakeSearchBool_Params Parms;

	Parms.bValue = bValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.MakePublishedFileID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPublishedFileID            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPublishedFileID USteamUtilities::MakePublishedFileID(const class FString& Value)
{
	static auto Func = Class->GetFunction("SteamUtilities", "MakePublishedFileID");

	Params::USteamUtilities_MakePublishedFileID_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.MakeInventoryUpdateHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamInventoryUpdateHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamInventoryUpdateHandle USteamUtilities::MakeInventoryUpdateHandle(const class FString& Value)
{
	static auto Func = Class->GetFunction("SteamUtilities", "MakeInventoryUpdateHandle");

	Params::USteamUtilities_MakeInventoryUpdateHandle_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.MakeInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamSessionSetting        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSteamSessionSetting USteamUtilities::MakeInteger(int32 Value)
{
	static auto Func = Class->GetFunction("SteamUtilities", "MakeInteger");

	Params::USteamUtilities_MakeInteger_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.MakeBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamSessionSetting        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSteamSessionSetting USteamUtilities::MakeBool(bool bValue)
{
	static auto Func = Class->GetFunction("SteamUtilities", "MakeBool");

	Params::USteamUtilities_MakeBool_Params Parms;

	Parms.bValue = bValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.ListenForSteamMessages
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamUtilities::ListenForSteamMessages(FDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("SteamUtilities", "ListenForSteamMessages");

	Params::USteamUtilities_ListenForSteamMessages_Params Parms;

	Parms.Callback = Callback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamUtilities.K2_IsPlayerInSession
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::K2_IsPlayerInSession(int32 LocalUserNum)
{
	static auto Func = Class->GetFunction("SteamUtilities", "K2_IsPlayerInSession");

	Params::USteamUtilities_K2_IsPlayerInSession_Params Parms;

	Parms.LocalUserNum = LocalUserNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.K2_HexToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      Array                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamUtilities::K2_HexToString(const TArray<uint8>& Array)
{
	static auto Func = Class->GetFunction("SteamUtilities", "K2_HexToString");

	Params::USteamUtilities_K2_HexToString_Params Parms;

	Parms.Array = Array;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.K2_HexToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> USteamUtilities::K2_HexToBytes(const class FString& String)
{
	static auto Func = Class->GetFunction("SteamUtilities", "K2_HexToBytes");

	Params::USteamUtilities_K2_HexToBytes_Params Parms;

	Parms.String = String;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.IsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::IsValid(const struct FSteamID& SteamID)
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsValid");

	Params::USteamUtilities_IsValid_Params Parms;

	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.IsUsingP2PRelays
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::IsUsingP2PRelays()
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsUsingP2PRelays");

	Params::USteamUtilities_IsUsingP2PRelays_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.IsUGCHandleValid_Exec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamUGCHandle             Handle                                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamCoreValid         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamUtilities::IsUGCHandleValid_Exec(const struct FSteamUGCHandle& Handle, enum class ESteamCoreValid* Result)
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsUGCHandleValid_Exec");

	Params::USteamUtilities_IsUGCHandleValid_Exec_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCore.SteamUtilities.IsUGCHandleValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamUGCHandle             Handle                                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::IsUGCHandleValid(const struct FSteamUGCHandle& Handle)
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsUGCHandleValid");

	Params::USteamUtilities_IsUGCHandleValid_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.IsSteamTicketHandleValid_Exec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamTicketHandle          Handle                                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamCoreValid         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamUtilities::IsSteamTicketHandleValid_Exec(const struct FSteamTicketHandle& Handle, enum class ESteamCoreValid* Result)
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsSteamTicketHandleValid_Exec");

	Params::USteamUtilities_IsSteamTicketHandleValid_Exec_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCore.SteamUtilities.IsSteamTicketHandleValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamTicketHandle          Handle                                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::IsSteamTicketHandleValid(const struct FSteamTicketHandle& Handle)
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsSteamTicketHandleValid");

	Params::USteamUtilities_IsSteamTicketHandleValid_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.IsSteamServerInitialized
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::IsSteamServerInitialized()
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsSteamServerInitialized");

	Params::USteamUtilities_IsSteamServerInitialized_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid_Exec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamCoreValid         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamUtilities::IsSteamInventoryUpdateHandleValid_Exec(const struct FSteamInventoryUpdateHandle& Handle, enum class ESteamCoreValid* Result)
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsSteamInventoryUpdateHandleValid_Exec");

	Params::USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::IsSteamInventoryUpdateHandleValid(const struct FSteamInventoryUpdateHandle& Handle)
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsSteamInventoryUpdateHandleValid");

	Params::USteamUtilities_IsSteamInventoryUpdateHandleValid_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.IsSteamIDValid_Exec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    SteamID                                                          (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamCoreValid         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamUtilities::IsSteamIDValid_Exec(const struct FSteamID& SteamID, enum class ESteamCoreValid* Result)
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsSteamIDValid_Exec");

	Params::USteamUtilities_IsSteamIDValid_Exec_Params Parms;

	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCore.SteamUtilities.IsSteamAvailable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::IsSteamAvailable()
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsSteamAvailable");

	Params::USteamUtilities_IsSteamAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.IsRecalculatingPing
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::IsRecalculatingPing()
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsRecalculatingPing");

	Params::USteamUtilities_IsRecalculatingPing_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.IsPublishedFileIDValid_Exec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPublishedFileID            Handle                                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamCoreValid         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamUtilities::IsPublishedFileIDValid_Exec(const struct FPublishedFileID& Handle, enum class ESteamCoreValid* Result)
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsPublishedFileIDValid_Exec");

	Params::USteamUtilities_IsPublishedFileIDValid_Exec_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCore.SteamUtilities.IsPublishedFileIDValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPublishedFileID            PublishedFileID                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::IsPublishedFileIDValid(const struct FPublishedFileID& PublishedFileID)
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsPublishedFileIDValid");

	Params::USteamUtilities_IsPublishedFileIDValid_Params Parms;

	Parms.PublishedFileID = PublishedFileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.IsLobby
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::IsLobby(const struct FSteamID& SteamID)
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsLobby");

	Params::USteamUtilities_IsLobby_Params Parms;

	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.IsGameIDValid_Exec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamGameID                GameID                                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamCoreValid         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamUtilities::IsGameIDValid_Exec(const struct FSteamGameID& GameID, enum class ESteamCoreValid* Result)
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsGameIDValid_Exec");

	Params::USteamUtilities_IsGameIDValid_Exec_Params Parms;

	Parms.GameID = GameID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCore.SteamUtilities.IsGameIDValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamGameID                GameID                                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::IsGameIDValid(const struct FSteamGameID& GameID)
{
	static auto Func = Class->GetFunction("SteamUtilities", "IsGameIDValid");

	Params::USteamUtilities_IsGameIDValid_Params Parms;

	Parms.GameID = GameID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.GetType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamSessionSetting        Settings                                                         (Parm, NativeAccessSpecifierPublic)
// enum class ESteamAttributeType     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamAttributeType USteamUtilities::GetType(const struct FSteamSessionSetting& Settings)
{
	static auto Func = Class->GetFunction("SteamUtilities", "GetType");

	Params::USteamUtilities_GetType_Params Parms;

	Parms.Settings = Settings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.GetString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamSessionSetting        Settings                                                         (Parm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutValue                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::GetString(const struct FSteamSessionSetting& Settings, class FString* Key, class FString* OutValue)
{
	static auto Func = Class->GetFunction("SteamUtilities", "GetString");

	Params::USteamUtilities_GetString_Params Parms;

	Parms.Settings = Settings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Key != nullptr)
		*Key = Parms.Key;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.GetSteamIdFromPlayerState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayerState*                PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamID                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSteamID USteamUtilities::GetSteamIdFromPlayerState(class UPlayerState* PlayerState)
{
	static auto Func = Class->GetFunction("SteamUtilities", "GetSteamIdFromPlayerState");

	Params::USteamUtilities_GetSteamIdFromPlayerState_Params Parms;

	Parms.PlayerState = PlayerState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.GetPublicIp
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamUtilities::GetPublicIp(FDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("SteamUtilities", "GetPublicIp");

	Params::USteamUtilities_GetPublicIp_Params Parms;

	Parms.Callback = Callback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.SteamUtilities.GetPingFromHostData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHostPingData               Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USteamUtilities::GetPingFromHostData(struct FHostPingData& Data)
{
	static auto Func = Class->GetFunction("SteamUtilities", "GetPingFromHostData");

	Params::USteamUtilities_GetPingFromHostData_Params Parms;

	Parms.Data = Data;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.GetInteger
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamSessionSetting        Settings                                                         (Parm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::GetInteger(const struct FSteamSessionSetting& Settings, class FString* Key, int32* OutValue)
{
	static auto Func = Class->GetFunction("SteamUtilities", "GetInteger");

	Params::USteamUtilities_GetInteger_Params Parms;

	Parms.Settings = Settings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Key != nullptr)
		*Key = Parms.Key;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.GetHostPingData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FHostPingData               ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FHostPingData USteamUtilities::GetHostPingData()
{
	static auto Func = Class->GetFunction("SteamUtilities", "GetHostPingData");

	Params::USteamUtilities_GetHostPingData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.GetGameEngineInitialized
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::GetGameEngineInitialized()
{
	static auto Func = Class->GetFunction("SteamUtilities", "GetGameEngineInitialized");

	Params::USteamUtilities_GetGameEngineInitialized_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.GetBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamSessionSetting        Settings                                                         (Parm, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::GetBool(const struct FSteamSessionSetting& Settings, class FString* Key, bool* OutValue)
{
	static auto Func = Class->GetFunction("SteamUtilities", "GetBool");

	Params::USteamUtilities_GetBool_Params Parms;

	Parms.Settings = Settings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Key != nullptr)
		*Key = Parms.Key;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.GetAccountType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamAccountType       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamAccountType USteamUtilities::GetAccountType(const struct FSteamID& SteamID)
{
	static auto Func = Class->GetFunction("SteamUtilities", "GetAccountType");

	Params::USteamUtilities_GetAccountType_Params Parms;

	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.FromUnixTimestamp
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Timestamp                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime USteamUtilities::FromUnixTimestamp(const class FString& Timestamp)
{
	static auto Func = Class->GetFunction("SteamUtilities", "FromUnixTimestamp");

	Params::USteamUtilities_FromUnixTimestamp_Params Parms;

	Parms.Timestamp = Timestamp;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.Equal_Exec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamID                    A                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    B                                                                (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamCoreIdentical     Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamUtilities::Equal_Exec(const struct FSteamID& A, const struct FSteamID& B, enum class ESteamCoreIdentical* Result)
{
	static auto Func = Class->GetFunction("SteamUtilities", "Equal_Exec");

	Params::USteamUtilities_Equal_Exec_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function SteamCore.SteamUtilities.Equal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                    A                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamID                    B                                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamUtilities::Equal(const struct FSteamID& A, const struct FSteamID& B)
{
	static auto Func = Class->GetFunction("SteamUtilities", "Equal");

	Params::USteamUtilities_Equal_Params Parms;

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.EncryptString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamUtilities::EncryptString(const class FString& String)
{
	static auto Func = Class->GetFunction("SteamUtilities", "EncryptString");

	Params::USteamUtilities_EncryptString_Params Parms;

	Parms.String = String;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.ConstructServerFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UServerFilter*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UServerFilter* USteamUtilities::ConstructServerFilter(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("SteamUtilities", "ConstructServerFilter");

	Params::USteamUtilities_ConstructServerFilter_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.BreakUGCHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamUGCHandle             Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamUtilities::BreakUGCHandle(const struct FSteamUGCHandle& Handle)
{
	static auto Func = Class->GetFunction("SteamUtilities", "BreakUGCHandle");

	Params::USteamUtilities_BreakUGCHandle_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.BreakTicketHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamTicketHandle          Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamUtilities::BreakTicketHandle(const struct FSteamTicketHandle& Handle)
{
	static auto Func = Class->GetFunction("SteamUtilities", "BreakTicketHandle");

	Params::USteamUtilities_BreakTicketHandle_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.BreakSteamID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamID                    SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamUtilities::BreakSteamID(const struct FSteamID& SteamID)
{
	static auto Func = Class->GetFunction("SteamUtilities", "BreakSteamID");

	Params::USteamUtilities_BreakSteamID_Params Parms;

	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.BreakSteamGameID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamGameID                SteamID                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamUtilities::BreakSteamGameID(const struct FSteamGameID& SteamID)
{
	static auto Func = Class->GetFunction("SteamUtilities", "BreakSteamGameID");

	Params::USteamUtilities_BreakSteamGameID_Params Parms;

	Parms.SteamID = SteamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.BreakPublishedFileID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPublishedFileID            FileID                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamUtilities::BreakPublishedFileID(const struct FPublishedFileID& FileID)
{
	static auto Func = Class->GetFunction("SteamUtilities", "BreakPublishedFileID");

	Params::USteamUtilities_BreakPublishedFileID_Params Parms;

	Parms.FileID = FileID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.BreakInventoryUpdateHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSteamInventoryUpdateHandle Handle                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamUtilities::BreakInventoryUpdateHandle(const struct FSteamInventoryUpdateHandle& Handle)
{
	static auto Func = Class->GetFunction("SteamUtilities", "BreakInventoryUpdateHandle");

	Params::USteamUtilities_BreakInventoryUpdateHandle_Params Parms;

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.BP_StringToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> USteamUtilities::BP_StringToBytes(const class FString& String)
{
	static auto Func = Class->GetFunction("SteamUtilities", "BP_StringToBytes");

	Params::USteamUtilities_BP_StringToBytes_Params Parms;

	Parms.String = String;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.SteamUtilities.BP_BytesToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      Array                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USteamUtilities::BP_BytesToString(const TArray<uint8>& Array)
{
	static auto Func = Class->GetFunction("SteamUtilities", "BP_BytesToString");

	Params::USteamUtilities_BP_BytesToString_Params Parms;

	Parms.Array = Array;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.StartVRDashboard
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UUtils::StartVRDashboard()
{
	static auto Func = Class->GetFunction("Utils", "StartVRDashboard");

	Params::UUtils_StartVRDashboard_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Utils.ShowGamepadTextInput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ESteamGamepadTextInputModeInputMode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESteamGamepadTextInputLineModeLineInputMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CharMax                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExistingText                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUtils::ShowGamepadTextInput(enum class ESteamGamepadTextInputMode InputMode, enum class ESteamGamepadTextInputLineMode LineInputMode, const class FString& Description, int32 CharMax, const class FString& ExistingText)
{
	static auto Func = Class->GetFunction("Utils", "ShowGamepadTextInput");

	Params::UUtils_ShowGamepadTextInput_Params Parms;

	Parms.InputMode = InputMode;
	Parms.LineInputMode = LineInputMode;
	Parms.Description = Description;
	Parms.CharMax = CharMax;
	Parms.ExistingText = ExistingText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.SetVRHeadsetStreamingEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUtils::SetVRHeadsetStreamingEnabled(bool bEnabled)
{
	static auto Func = Class->GetFunction("Utils", "SetVRHeadsetStreamingEnabled");

	Params::UUtils_SetVRHeadsetStreamingEnabled_Params Parms;

	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Utils.SetOverlayNotificationPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ESteamNotificationPositionNotificationPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUtils::SetOverlayNotificationPosition(enum class ESteamNotificationPosition NotificationPosition)
{
	static auto Func = Class->GetFunction("Utils", "SetOverlayNotificationPosition");

	Params::UUtils_SetOverlayNotificationPosition_Params Parms;

	Parms.NotificationPosition = NotificationPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Utils.SetOverlayNotificationInset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              HorizontalInset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VerticalInset                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUtils::SetOverlayNotificationInset(int32 HorizontalInset, int32 VerticalInset)
{
	static auto Func = Class->GetFunction("Utils", "SetOverlayNotificationInset");

	Params::UUtils_SetOverlayNotificationInset_Params Parms;

	Parms.HorizontalInset = HorizontalInset;
	Parms.VerticalInset = VerticalInset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Utils.IsVRHeadsetStreamingEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUtils::IsVRHeadsetStreamingEnabled()
{
	static auto Func = Class->GetFunction("Utils", "IsVRHeadsetStreamingEnabled");

	Params::UUtils_IsVRHeadsetStreamingEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.IsSteamRunningOnSteamDeck
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUtils::IsSteamRunningOnSteamDeck()
{
	static auto Func = Class->GetFunction("Utils", "IsSteamRunningOnSteamDeck");

	Params::UUtils_IsSteamRunningOnSteamDeck_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.IsSteamRunningInVR
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUtils::IsSteamRunningInVR()
{
	static auto Func = Class->GetFunction("Utils", "IsSteamRunningInVR");

	Params::UUtils_IsSteamRunningInVR_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.IsSteamInBigPictureMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUtils::IsSteamInBigPictureMode()
{
	static auto Func = Class->GetFunction("Utils", "IsSteamInBigPictureMode");

	Params::UUtils_IsSteamInBigPictureMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.IsSteamChinaLauncher
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUtils::IsSteamChinaLauncher()
{
	static auto Func = Class->GetFunction("Utils", "IsSteamChinaLauncher");

	Params::UUtils_IsSteamChinaLauncher_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.IsOverlayEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUtils::IsOverlayEnabled()
{
	static auto Func = Class->GetFunction("Utils", "IsOverlayEnabled");

	Params::UUtils_IsOverlayEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.InitFilterText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUtils::InitFilterText()
{
	static auto Func = Class->GetFunction("Utils", "InitFilterText");

	Params::UUtils_InitFilterText_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.GetSteamUILanguage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUtils::GetSteamUILanguage()
{
	static auto Func = Class->GetFunction("Utils", "GetSteamUILanguage");

	Params::UUtils_GetSteamUILanguage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.GetServerRealTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUtils::GetServerRealTime()
{
	static auto Func = Class->GetFunction("Utils", "GetServerRealTime");

	Params::UUtils_GetServerRealTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.GetSecondsSinceComputerActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUtils::GetSecondsSinceComputerActive()
{
	static auto Func = Class->GetFunction("Utils", "GetSecondsSinceComputerActive");

	Params::UUtils_GetSecondsSinceComputerActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.GetSecondsSinceAppActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUtils::GetSecondsSinceAppActive()
{
	static auto Func = Class->GetFunction("Utils", "GetSecondsSinceAppActive");

	Params::UUtils_GetSecondsSinceAppActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.GetIPCountry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUtils::GetIPCountry()
{
	static auto Func = Class->GetFunction("Utils", "GetIPCountry");

	Params::UUtils_GetIPCountry_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.GetIPCCallCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUtils::GetIPCCallCount()
{
	static auto Func = Class->GetFunction("Utils", "GetIPCCallCount");

	Params::UUtils_GetIPCCallCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.GetImageSize
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              IImage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUtils::GetImageSize(int32 IImage, int32* Width, int32* Height)
{
	static auto Func = Class->GetFunction("Utils", "GetImageSize");

	Params::UUtils_GetImageSize_Params Parms;

	Parms.IImage = IImage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.GetImageRGBA
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              IImage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      OutBuffer                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUtils::GetImageRGBA(int32 IImage, TArray<uint8>* OutBuffer)
{
	static auto Func = Class->GetFunction("Utils", "GetImageRGBA");

	Params::UUtils_GetImageRGBA_Params Parms;

	Parms.IImage = IImage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutBuffer != nullptr)
		*OutBuffer = Parms.OutBuffer;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.GetEnteredGamepadTextLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUtils::GetEnteredGamepadTextLength()
{
	static auto Func = Class->GetFunction("Utils", "GetEnteredGamepadTextLength");

	Params::UUtils_GetEnteredGamepadTextLength_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.GetEnteredGamepadTextInput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Text                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUtils::GetEnteredGamepadTextInput(class FString* Text)
{
	static auto Func = Class->GetFunction("Utils", "GetEnteredGamepadTextInput");

	Params::UUtils_GetEnteredGamepadTextInput_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Text != nullptr)
		*Text = Parms.Text;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.GetCurrentBatteryPower
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUtils::GetCurrentBatteryPower()
{
	static auto Func = Class->GetFunction("Utils", "GetCurrentBatteryPower");

	Params::UUtils_GetCurrentBatteryPower_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.GetConnectedUniverse
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ESteamUniverse          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESteamUniverse UUtils::GetConnectedUniverse()
{
	static auto Func = Class->GetFunction("Utils", "GetConnectedUniverse");

	Params::UUtils_GetConnectedUniverse_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.GetAppID_Pure
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUtils::GetAppID_Pure()
{
	static auto Func = Class->GetFunction("Utils", "GetAppID_Pure");

	Params::UUtils_GetAppID_Pure_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.GetAppID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUtils::GetAppID()
{
	static auto Func = Class->GetFunction("Utils", "GetAppID");

	Params::UUtils_GetAppID_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Utils.BOverlayNeedsPresent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUtils::BOverlayNeedsPresent()
{
	static auto Func = Class->GetFunction("Utils", "BOverlayNeedsPresent");

	Params::UUtils_BOverlayNeedsPresent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SteamCore.Video.IsBroadcasting
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumViewers                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVideo::IsBroadcasting(int32* NumViewers)
{
	static auto Func = Class->GetFunction("Video", "IsBroadcasting");

	Params::UVideo_IsBroadcasting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (NumViewers != nullptr)
		*NumViewers = Parms.NumViewers;

	return Parms.ReturnValue;

}


// Function SteamCore.Video.GetVideoURL
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              VideoAppID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVideo::GetVideoURL(int32 VideoAppID)
{
	static auto Func = Class->GetFunction("Video", "GetVideoURL");

	Params::UVideo_GetVideoURL_Params Parms;

	Parms.VideoAppID = VideoAppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SteamCore.Video.GetOPFStringForApp
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              VideoAppID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutBuffer                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVideo::GetOPFStringForApp(int32 VideoAppID, class FString* OutBuffer)
{
	static auto Func = Class->GetFunction("Video", "GetOPFStringForApp");

	Params::UVideo_GetOPFStringForApp_Params Parms;

	Parms.VideoAppID = VideoAppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutBuffer != nullptr)
		*OutBuffer = Parms.OutBuffer;

	return Parms.ReturnValue;

}


// Function SteamCore.Video.GetOPFSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              VideoAppID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVideo::GetOPFSettings(int32 VideoAppID)
{
	static auto Func = Class->GetFunction("Video", "GetOPFSettings");

	Params::UVideo_GetOPFSettings_Params Parms;

	Parms.VideoAppID = VideoAppID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SteamCoreWeb.SteamCoreWeb
class USteamCoreWeb : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWeb");
		return Clss;
	}

};

// 0x18 (0x48 - 0x30)
// Class SteamCoreWeb.SteamCoreWebSubsystem
class USteamCoreWebSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_B57[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebSubsystem");
		return Clss;
	}

};

// 0x28 (0x58 - 0x30)
// Class SteamCoreWeb.SteamCoreWebAsyncAction
class USteamCoreWebAsyncAction : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B64[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncAction");
		return Clss;
	}

	void HandleCallback(const class FString& Data, bool bWasSuccessful);
};

// 0x40 (0x78 - 0x38)
// Class SteamCoreWeb.SteamCoreWebSettings
class USteamCoreWebSettings : public UDeveloperSettings
{
public:
	float                                        AsyncTaskTimeout;                                  // 0x38(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DisabledSubsystems;                                // 0x3C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugging;                                        // 0x40(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDevMode;                                          // 0x41(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B66[0x6];                                      // Fixing Size After Last Property
	class FString                                Key;                                               // 0x48(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x58(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B67[0x4];                                      // Fixing Size After Last Property
	class FString                                DevSteamID;                                        // 0x60(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSandboxMode;                                      // 0x70(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B68[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebSettings");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SteamCoreWeb.SteamWebUtilities
class USteamWebUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamWebUtilities");
		return Clss;
	}

	bool ParseJson(const class FString& JsonString, TArray<struct FSteamCoreJson>* Data);
	class FString GetProjectKey();
	int32 GetProjectAppID();
	class FString GetDevSteamID();
	void FindJsonStrings(const class FString& JsonString, const class FString& Key, TArray<class FString>* Values, enum class ESteamJsonResult* Result);
	void FindJsonString(const class FString& JsonString, const class FString& Key, class FString* Value, enum class ESteamJsonResult* Result);
	void FindJsonNumbers(const class FString& JsonString, const class FString& Key, TArray<int32>* Values, enum class ESteamJsonResult* Result);
	void FindJsonNumber(const class FString& JsonString, const class FString& Key, int32* Value, enum class ESteamJsonResult* Result);
	void FindJsonBools(const class FString& JsonString, const class FString& Key, TArray<bool>* bValues, enum class ESteamJsonResult* Result);
	void FindJsonBool(const class FString& JsonString, const class FString& Key, bool* bValue, enum class ESteamJsonResult* Result);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebApps
class UWebApps : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebApps");
		return Clss;
	}

	void UpToDateCheck(FDelegateProperty_& Callback, int32 AppID, int32 Version);
	void SetAppBuildLive(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 BuildId, const class FString& BetaKey, const class FString& Description);
	void GetServersAtAddress(FDelegateProperty_& Callback, const class FString& Addr);
	void GetServerList(FDelegateProperty_& Callback, const class FString& Key, const class FString& Filter, int32 Limit);
	void GetPlayersBanned(FDelegateProperty_& Callback, const class FString& Key, int32 AppID);
	void GetCheatingReports(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin);
	void GetAppList(FDelegateProperty_& Callback, const class FString& Key);
	void GetAppDepotVersions(FDelegateProperty_& Callback, const class FString& Key, int32 AppID);
	void GetAppBuilds(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 Count);
	void GetAppBetas(FDelegateProperty_& Callback, const class FString& Key, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas
class USteamCoreAppsAsyncActionGetAppBetas : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetAppBetas");
		return Clss;
	}

	class USteamCoreAppsAsyncActionGetAppBetas* GetAppBetasAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds
class USteamCoreAppsAsyncActionGetAppBuilds : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetAppBuilds");
		return Clss;
	}

	class USteamCoreAppsAsyncActionGetAppBuilds* GetAppBuildsAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 Count);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions
class USteamCoreAppsAsyncActionGetAppDepotVersions : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetAppDepotVersions");
		return Clss;
	}

	class USteamCoreAppsAsyncActionGetAppDepotVersions* GetAppDepotVersionsAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID);
};

// 0x20 (0x50 - 0x30)
// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList
class USteamCoreAppsAsyncActionGetAppList : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA3[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetAppList");
		return Clss;
	}

	void HandleCallback(TArray<struct FWebAppsGetAppList>& Data, bool bWasSuccessful);
	class USteamCoreAppsAsyncActionGetAppList* GetAppListAsync(class UObject* WorldContextObject);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports
class USteamCoreAppsAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetCheatingReports");
		return Clss;
	}

	class USteamCoreAppsAsyncActionGetCheatingReports* GetCheatingReportsAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned
class USteamCoreAppsAsyncActionGetPlayersBanned : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetPlayersBanned");
		return Clss;
	}

	class USteamCoreAppsAsyncActionGetPlayersBanned* GetPlayersBannedAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList
class USteamCoreAppsAsyncActionGetServerList : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetServerList");
		return Clss;
	}

	class USteamCoreAppsAsyncActionGetServerList* GetServerListAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& Filter, int32 Limit);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress
class USteamCoreAppsAsyncActionGetServersAtAddress : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionGetServersAtAddress");
		return Clss;
	}

	class USteamCoreAppsAsyncActionGetServersAtAddress* GetServersAtAddressAsync(class UObject* WorldContextObject, const class FString& Addr);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive
class USteamCoreAppsAsyncActionSetAppBuildLive : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionSetAppBuildLive");
		return Clss;
	}

	class USteamCoreAppsAsyncActionSetAppBuildLive* SetAppBuildLiveAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 BuildId, const class FString& BetaKey, const class FString& Description);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck
class USteamCoreAppsAsyncActionUpToDateCheck : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreAppsAsyncActionUpToDateCheck");
		return Clss;
	}

	class USteamCoreAppsAsyncActionUpToDateCheck* UpToDateCheckAsync(class UObject* WorldContextObject, int32 AppID, int32 Version);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebBroadcastService
class UWebBroadcastService : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebBroadcastService");
		return Clss;
	}

	void PostGameDataFrame(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& BroadcastId, const class FString& FrameData);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame
class USteamCoreWebAsyncActionPostGameDataFrame : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionPostGameDataFrame");
		return Clss;
	}

	class USteamCoreWebAsyncActionPostGameDataFrame* PostGameDataFrameAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& BroadcastId, const class FString& FrameData);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebCheatReporting
class UWebCheatReporting : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebCheatReporting");
		return Clss;
	}

	void StartSecureMultiplayerSession(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID);
	void RequestVacStatusForUser(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& SessionId);
	void RequestPlayerGameBan(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& ReportID, const class FString& CheatDescription, int32 Duration, bool bDelayBan);
	void ReportPlayerCheating(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& SteamIdReporter, const class FString& AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity);
	void ReportCheatData(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& PathAndFileName, const class FString& WebCheatURL, const class FString& TimeNow, const class FString& TimeStarted, const class FString& TimeStopped, const class FString& CheatName, int32 GameProcessId, int32 CheatProcessId, const class FString& CheatParam1, const class FString& CheatParam2);
	void RemovePlayerGameBan(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID);
	void GetCheatingReports(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, const class FString& ReportidMin, bool bIncludeReports, bool bIncludeBans, const class FString& SteamID);
	void EndSecureMultiplayerSession(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& SessionId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating
class USteamCoreWebAsyncActionReportPlayerCheating : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionReportPlayerCheating");
		return Clss;
	}

	class USteamCoreWebAsyncActionReportPlayerCheating* ReportPlayerCheatingAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& SteamIdReporter, const class FString& AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan
class USteamCoreWebAsyncActionRequestPlayerGameBan : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRequestPlayerGameBan");
		return Clss;
	}

	class USteamCoreWebAsyncActionRequestPlayerGameBan* RequestPlayerGameBanAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& ReportID, const class FString& CheatDescription, int32 Duration, bool bDelayBan);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan
class USteamCoreWebAsyncActionRemovePlayerGameBan : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRemovePlayerGameBan");
		return Clss;
	}

	class USteamCoreWebAsyncActionRemovePlayerGameBan* RemovePlayerGameBanAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports
class USteamCoreWebAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetCheatingReports");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetCheatingReports* GetCheatingReportsAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, const class FString& ReportidMin, bool bIncludeReports, bool bIncludeBans, const class FString& SteamID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData
class USteamCoreWebAsyncActionReportCheatData : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionReportCheatData");
		return Clss;
	}

	class USteamCoreWebAsyncActionReportCheatData* ReportCheatDataAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& PathAndFileName, const class FString& WebCheatURL, const class FString& TimeNow, const class FString& TimeStarted, const class FString& TimeStopped, const class FString& CheatName, int32 GameProcessId, int32 CheatProcessId, const class FString& CheatParam1, const class FString& CheatParam2);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser
class USteamCoreWebAsyncActionRequestVacStatusForUser : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRequestVacStatusForUser");
		return Clss;
	}

	class USteamCoreWebAsyncActionRequestVacStatusForUser* RequestVacStatusForUserAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& SessionId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession
class USteamCoreWebAsyncActionStartSecureMultiplayerSession : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionStartSecureMultiplayerSession");
		return Clss;
	}

	class USteamCoreWebAsyncActionStartSecureMultiplayerSession* StartSecureMultiplayerSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession
class USteamCoreWebAsyncActionEndSecureMultiplayerSession : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionEndSecureMultiplayerSession");
		return Clss;
	}

	class USteamCoreWebAsyncActionEndSecureMultiplayerSession* EndSecureMultiplayerSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& SessionId);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebEconMarketService
class UWebEconMarketService : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebEconMarketService");
		return Clss;
	}

	void GetPopular(FDelegateProperty_& Callback, const class FString& Key, const class FString& Language, int32 Rows, int32 Start, int32 FilterAppId, int32 ECurrency);
	void GetMarketEligibility(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID);
	void GetAssetID(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& ListingId);
	void CancelAppListingsForUser(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, bool bSynchronous);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility
class USteamCoreWebAsyncActionGetMarketEligibility : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetMarketEligibility");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetMarketEligibility* GetMarketEligibilityAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser
class USteamCoreWebAsyncActionCancelAppListingsForUser : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionCancelAppListingsForUser");
		return Clss;
	}

	class USteamCoreWebAsyncActionCancelAppListingsForUser* CancelAppListingsForUserAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, bool bSynchronous);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID
class USteamCoreWebAsyncActionGetAssetID : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetAssetID");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetAssetID* GetAssetIDAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& ListingId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPopular
class USteamCoreWebAsyncActionGetPopular : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPopular");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetPopular* GetPopularAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& Language, int32 Rows, int32 Start, int32 FilterAppId, int32 ECurrency);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebEconService
class UWebEconService : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebEconService");
		return Clss;
	}

	void GetTradeOffersSummary(FDelegateProperty_& Callback, const class FString& Key, int32 TimeLastVisit);
	void GetTradeOffers(FDelegateProperty_& Callback, const class FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const class FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);
	void GetTradeOffer(FDelegateProperty_& Callback, const class FString& Key, const class FString& TradeOfferId, const class FString& Language);
	void GetTradeHistory(FDelegateProperty_& Callback, const class FString& Key, int32 MaxTrades, int32 StartAfterTime, const class FString& StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, const class FString& Language, bool bIncludeFailed, bool bIncludeTotal);
	void FlushInventoryCache(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& ContextID);
	void FlushContextCache(FDelegateProperty_& Callback, const class FString& Key, int32 AppID);
	void FlushAssetAppearanceCache(FDelegateProperty_& Callback, const class FString& Key, int32 AppID);
	void DeclineTradeOffer(FDelegateProperty_& Callback, const class FString& Key, const class FString& TradeOfferId);
	void CancelTradeOffer(FDelegateProperty_& Callback, const class FString& Key, const class FString& TradeOfferId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory
class USteamCoreWebAsyncActionGetTradeHistory : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetTradeHistory");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetTradeHistory* GetTradeHistoryAsync(class UObject* WorldContextObject, const class FString& Key, int32 MaxTrades, int32 StartAfterTime, const class FString& StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, const class FString& Language, bool bIncludeFailed, bool bIncludeTotal);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache
class USteamCoreWebAsyncActionFlushInventoryCache : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionFlushInventoryCache");
		return Clss;
	}

	class USteamCoreWebAsyncActionFlushInventoryCache* FlushInventoryCacheAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& ContextID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache
class USteamCoreWebAsyncActionFlushAssetAppearanceCache : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionFlushAssetAppearanceCache");
		return Clss;
	}

	class USteamCoreWebAsyncActionFlushAssetAppearanceCache* FlushAssetAppearanceCacheAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache
class USteamCoreWebAsyncActionFlushContextCache : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionFlushContextCache");
		return Clss;
	}

	class USteamCoreWebAsyncActionFlushContextCache* FlushContextCacheAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers
class USteamCoreWebAsyncActionGetTradeOffers : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetTradeOffers");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetTradeOffers* GetTradeOffersAsync(class UObject* WorldContextObject, const class FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, const class FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer
class USteamCoreWebAsyncActionGetTradeOffer : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetTradeOffer");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetTradeOffer* GetTradeOfferAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& TradeOfferId, const class FString& Language);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary
class USteamCoreWebAsyncActionGetTradeOffersSummary : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetTradeOffersSummary");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetTradeOffersSummary* GetTradeOffersSummaryAsync(class UObject* WorldContextObject, const class FString& Key, int32 TimeLastVisit);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer
class USteamCoreWebAsyncActionDeclineTradeOffer : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionDeclineTradeOffer");
		return Clss;
	}

	class USteamCoreWebAsyncActionDeclineTradeOffer* DeclineTradeOfferAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& TradeOfferId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer
class USteamCoreWebAsyncActionCancelTradeOffer : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionCancelTradeOffer");
		return Clss;
	}

	class USteamCoreWebAsyncActionCancelTradeOffer* CancelTradeOfferAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& TradeOfferId);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebGameInventory
class UWebGameInventory : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebGameInventory");
		return Clss;
	}

	void UpdateItemDefs();
	void SupportGetAssetHistory(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& AssetId, const class FString& ContextID);
	void HistoryExecuteCommands(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& ContextID, int32 ActorId);
	void GetUserHistory(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& ContextID, int32 StartTime, int32 EndTime);
	void GetHistoryCommandDetails(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& Command, const class FString& ContextID, const class FString& Arguments);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails
class USteamCoreWebAsyncActionGetHistoryCommandDetails : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetHistoryCommandDetails");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetHistoryCommandDetails* GetHistoryCommandDetailsAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& Command, const class FString& ContextID, const class FString& Arguments);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory
class USteamCoreWebAsyncActionGetUserHistory : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetUserHistory");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetUserHistory* GetUserHistoryAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& ContextID, int32 StartTime, int32 EndTime);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand
class USteamCoreWebAsyncActionHistoryExecuteCommand : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionHistoryExecuteCommand");
		return Clss;
	}

	class USteamCoreWebAsyncActionHistoryExecuteCommand* HistoryExecuteCommandAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& ContextID, int32 ActorId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory
class USteamCoreWebAsyncActionSupportGetAssetHistory : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionSupportGetAssetHistory");
		return Clss;
	}

	class USteamCoreWebAsyncActionSupportGetAssetHistory* SupportGetAssetHistoryAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& AssetId, const class FString& ContextID);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebGameNotificationsService
class UWebGameNotificationsService : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebGameNotificationsService");
		return Clss;
	}

	void UpdateSession(FDelegateProperty_& Callback, const class FString& Key, const class FString& SessionId, int32 AppID, const class FString& Title, const class FString& Users, const class FString& SteamID);
	void RequestNotifications(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID);
	void GetSessionDetailsForApp(FDelegateProperty_& Callback, const class FString& Key, const class FString& Sessions, int32 AppID, const class FString& Language);
	void EnumerateSessionsForApp(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const class FString& Language);
	void DeleteSessionBatch(FDelegateProperty_& Callback, const class FString& Key, const class FString& SessionId, int32 AppID);
	void DeleteSession(FDelegateProperty_& Callback, const class FString& Key, const class FString& SessionId, int32 AppID, const class FString& SteamID);
	void CreateSession(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Context, const class FString& Title, const class FString& Users, const class FString& SteamID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionCreateSession
class USteamCoreWebAsyncActionCreateSession : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionCreateSession");
		return Clss;
	}

	class USteamCoreWebAsyncActionCreateSession* CreateSessionAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& Context, const class FString& Title, const class FString& Users, const class FString& SteamID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession
class USteamCoreWebAsyncActionUpdateSession : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionUpdateSession");
		return Clss;
	}

	class USteamCoreWebAsyncActionUpdateSession* UpdateSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SessionId, int32 AppID, const class FString& Title, const class FString& Users, const class FString& SteamID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp
class USteamCoreWebAsyncActionEnumerateSessionsForApp : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionEnumerateSessionsForApp");
		return Clss;
	}

	class USteamCoreWebAsyncActionEnumerateSessionsForApp* EnumerateSessionsForAppAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const class FString& Language);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp
class USteamCoreWebAsyncActionGetSessionDetailsForApp : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetSessionDetailsForApp");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetSessionDetailsForApp* GetSessionDetailsForAppAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& Sessions, int32 AppID, const class FString& Language);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications
class USteamCoreWebAsyncActionRequestNotifications : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRequestNotifications");
		return Clss;
	}

	class USteamCoreWebAsyncActionRequestNotifications* RequestNotificationsAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession
class USteamCoreWebAsyncActionDeleteSession : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionDeleteSession");
		return Clss;
	}

	class USteamCoreWebAsyncActionDeleteSession* DeleteSessionAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SessionId, int32 AppID, const class FString& SteamID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch
class USteamCoreWebAsyncActionDeleteSessionBatch : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionDeleteSessionBatch");
		return Clss;
	}

	class USteamCoreWebAsyncActionDeleteSessionBatch* DeleteSessionBatchAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SessionId, int32 AppID);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebGameServersService
class UWebGameServersService : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebGameServersService");
		return Clss;
	}

	void SetMemo(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const class FString& Memo);
	void SetBanStatus(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, bool bBanned, int32 banSeconds);
	void ResetLoginToken(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID);
	void QueryLoginToken(FDelegateProperty_& Callback, const class FString& Key, const class FString& LoginToken);
	void GetServerSteamIDsByIP(FDelegateProperty_& Callback, const class FString& Key, const class FString& ServerIP);
	void GetServerIPsBySteamID(FDelegateProperty_& Callback, const class FString& Key, const class FString& ServerSteamId);
	void GetAccountPublicInfo(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID);
	void GetAccountList(FDelegateProperty_& Callback, const class FString& Key);
	void DeleteAccount(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID);
	void CreateAccount(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Memo);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebInventoryService
class UWebInventoryService : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebInventoryService");
		return Clss;
	}

	void ModifyItems(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& InputJson, const class FString& SteamID, int32 Timestamp, const class FString& Updates);
	void GetQuantity(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const TArray<int32>& ItemdefIDs, bool bForce);
	void GetPriceSheet(FDelegateProperty_& Callback, const class FString& Key, int32 Currency);
	void GetItemDefs(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& ModifiedSince, const TArray<int32>& ItemdefIDs, const TArray<int32>& WorkshopIDs, int32 CacheMaxAgeSeconds);
	void GetInventory(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID);
	void ExchangeItem(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const TArray<int32>& MaterialsItemID, const TArray<int32>& MaterialsQuantity, const class FString& OutputItemdefId);
	void ConsumeItem(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& ItemId, const class FString& Quantity, const class FString& SteamID, const class FString& RequestId);
	void Consolidate(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const TArray<int32>& ItemdefIDs, bool bForce);
	void AddPromoItem(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestId);
	void AddItem(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const TArray<int32>& ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestId, bool bTradeRestriction);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionAddItem
class USteamCoreWebAsyncActionAddItem : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionAddItem");
		return Clss;
	}

	class USteamCoreWebAsyncActionAddItem* AddItemAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const TArray<int32>& ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestId, bool bTradeRestriction);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem
class USteamCoreWebAsyncActionAddPromoItem : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionAddPromoItem");
		return Clss;
	}

	class USteamCoreWebAsyncActionAddPromoItem* AddPromoItemAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 ItemdefId, const class FString& ItemPropsJson, const class FString& SteamID, bool bNotify, const class FString& RequestId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem
class USteamCoreWebAsyncActionConsumeItem : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionConsumeItem");
		return Clss;
	}

	class USteamCoreWebAsyncActionConsumeItem* ConsumeItemAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& ItemId, const class FString& Quantity, const class FString& SteamID, const class FString& RequestId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem
class USteamCoreWebAsyncActionExchangeItem : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionExchangeItem");
		return Clss;
	}

	class USteamCoreWebAsyncActionExchangeItem* ExchangeItemAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const TArray<int32>& MaterialsItemID, const TArray<int32>& MaterialsQuantity, const class FString& OutputItemdefId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetInventory
class USteamCoreWebAsyncActionGetInventory : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetInventory");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetInventory* GetInventoryAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs
class USteamCoreWebAsyncActionGetItemDefs : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetItemDefs");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetItemDefs* GetItemDefsAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& ModifiedSince, const TArray<int32>& ItemdefIDs, const TArray<int32>& WorkshopIDs, int32 CacheMaxAgeSeconds);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet
class USteamCoreWebAsyncActionGetPriceSheet : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPriceSheet");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetPriceSheet* GetPriceSheetAsync(class UObject* WorldContextObject, const class FString& Key, int32 Currency);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionConsolidate
class USteamCoreWebAsyncActionConsolidate : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionConsolidate");
		return Clss;
	}

	class USteamCoreWebAsyncActionConsolidate* ConsolidateAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const TArray<int32>& ItemdefIDs, bool bForce);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity
class USteamCoreWebAsyncActionGetQuantity : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetQuantity");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetQuantity* GetQuantityAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const TArray<int32>& ItemdefIDs, bool bForce);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionModifyItems
class USteamCoreWebAsyncActionModifyItems : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionModifyItems");
		return Clss;
	}

	class USteamCoreWebAsyncActionModifyItems* ModifyItemsAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& InputJson, const class FString& SteamID, int32 Timestamp, const class FString& Updates);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebLeaderboards
class UWebLeaderboards : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebLeaderboards");
		return Clss;
	}

	void SetLeaderboardScore(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 LeaderbordId, const class FString& SteamID, int32 Score, const TArray<uint8>& Details, const class FString& ScoreMethod);
	void ResetLeaderboard(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 LeaderboardId);
	void GetLeaderboardsForGame(FDelegateProperty_& Callback, const class FString& Key, int32 AppID);
	void GetLeaderboardEntries(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, const class FString& SteamID);
	void FindOrCreateLeaderboard(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Name, const class FString& SortMethod, const class FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
	void DeleteLeaderboard(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Name);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard
class USteamCoreWebAsyncActionDeleteLeaderboard : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionDeleteLeaderboard");
		return Clss;
	}

	class USteamCoreWebAsyncActionDeleteLeaderboard* DeleteLeaderboardAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& Name);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard
class USteamCoreWebAsyncActionFindOrCreateLeaderboard : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionFindOrCreateLeaderboard");
		return Clss;
	}

	class USteamCoreWebAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& Name, const class FString& SortMethod, const class FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries
class USteamCoreWebAsyncActionGetLeaderboardEntries : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetLeaderboardEntries");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetLeaderboardEntries* GetLeaderboardEntriesAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, const class FString& SteamID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame
class USteamCoreWebAsyncActionGetLeaderboardsForGame : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetLeaderboardsForGame");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetLeaderboardsForGame* GetLeaderboardsForGameAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard
class USteamCoreWebAsyncActionResetLeaderboard : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionResetLeaderboard");
		return Clss;
	}

	class USteamCoreWebAsyncActionResetLeaderboard* ResetLeaderboardAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 LeaderboardId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore
class USteamCoreWebAsyncActionSetLeaderboardScore : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionSetLeaderboardScore");
		return Clss;
	}

	class USteamCoreWebAsyncActionSetLeaderboardScore* SetLeaderboardScoreAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 LeaderboardId, const class FString& SteamID, int32 Score, const TArray<uint8>& Details, const class FString& ScoreMethod);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebLobbyMatchmakingService
class UWebLobbyMatchmakingService : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebLobbyMatchmakingService");
		return Clss;
	}

	void RemoveUserFromLobby(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamIdToRemove, const class FString& SteamIDLobby, const class FString& InputJson);
	void CreateLobby(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 MaxMembers, enum class ESteamCoreWebLobbyType LobbyType, const class FString& LobbyName, const class FString& InputJson, const TArray<class FString>& SteamIdInvitedMembers, const class FString& LobbyMetaData);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebMicroTxn
class UWebMicroTxn : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebMicroTxn");
		return Clss;
	}

	void RefundTxn(FDelegateProperty_& Callback, const class FString& Key, const class FString& OrderID, int32 AppID);
	void QueryTxn(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& OrderID, const class FString& TransId);
	void ProcessAgreement(FDelegateProperty_& Callback, const class FString& Key, const class FString& OrderID, const class FString& SteamID, const class FString& AgreementId, int32 AppID, int32 Amount, const class FString& Currency);
	class FString MakeTransactionID();
	void InitTxn(FDelegateProperty_& Callback, const class FString& Key, const class FString& OrderID, const class FString& SteamID, int32 AppID, const class FString& Language, const class FString& Currency, const class FString& UserSession, const class FString& Ipaddress, const TArray<int32>& ItemId, const TArray<int32>& Quantity, const TArray<class FString>& Amount, const TArray<class FString>& Description, const TArray<class FString>& Category, const TArray<int32>& AssociatedBundle, const TArray<class FString>& BillingType, const TArray<class FString>& StartDate, const TArray<class FString>& EndDate, const TArray<class FString>& Period, const TArray<int32>& Frequency, const TArray<class FString>& RecurringAmt, const TArray<int32>& BundleCount, const TArray<int32>& BundleId, const TArray<int32>& BundleQty, const TArray<class FString>& BundleDesc, const TArray<class FString>& BundleCategory);
	void GetUserInfo(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const class FString& Ipaddress);
	void GetUserAgreementInfo(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID);
	void GetReport(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Time, const class FString& Type, int32 MaxResults);
	void FinalizeTxn(FDelegateProperty_& Callback, const class FString& Key, const class FString& OrderID, int32 AppID);
	void CancelAgreement(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32 AppID);
	void AdjustAgreement(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32 AppID, const class FString& NextProcessDate);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement
class USteamCoreWebAsyncActionAdjustAgreement : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionAdjustAgreement");
		return Clss;
	}

	class USteamCoreWebAsyncActionAdjustAgreement* AdjustAgreementAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32 AppID, const class FString& NextProcessDate);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement
class USteamCoreWebAsyncActionCancelAgreement : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionCancelAgreement");
		return Clss;
	}

	class USteamCoreWebAsyncActionCancelAgreement* CancelAgreementAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& AgreementId, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn
class USteamCoreWebAsyncActionFinalizeTxn : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionFinalizeTxn");
		return Clss;
	}

	class USteamCoreWebAsyncActionFinalizeTxn* FinalizeTxnAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderID, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetReport
class USteamCoreWebAsyncActionGetReport : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetReport");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetReport* GetReportAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& Time, const class FString& Type, int32 MaxResults);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo
class USteamCoreWebAsyncActionGetUserAgreementInfo : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetUserAgreementInfo");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetUserAgreementInfo* GetUserAgreementInfoAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo
class USteamCoreWebAsyncActionGetUserInfo : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetUserInfo");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetUserInfo* GetUserInfoAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& Ipaddress);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionInitTxn
class USteamCoreWebAsyncActionInitTxn : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionInitTxn");
		return Clss;
	}

	class USteamCoreWebAsyncActionInitTxn* InitTxnAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderID, const class FString& SteamID, int32 AppID, const class FString& Language, const class FString& Currency, const class FString& UserSession, const class FString& Ipaddress, const TArray<int32>& ItemId, const TArray<int32>& Quantity, const TArray<class FString>& Amount, const TArray<class FString>& Description, const TArray<class FString>& Category, const TArray<int32>& AssociatedBundle, const TArray<class FString>& BillingType, const TArray<class FString>& StartDate, const TArray<class FString>& EndDate, const TArray<class FString>& Period, const TArray<int32>& Frequency, const TArray<class FString>& RecurringAmt, const TArray<int32>& BundleCount, const TArray<int32>& BundleId, const TArray<int32>& BundleQty, const TArray<class FString>& BundleDesc, const TArray<class FString>& BundleCategory);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement
class USteamCoreWebAsyncActionProcessAgreement : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionProcessAgreement");
		return Clss;
	}

	class USteamCoreWebAsyncActionProcessAgreement* ProcessAgreementAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderID, const class FString& SteamID, const class FString& AgreementId, int32 AppID, int32 Amount, const class FString& Currency);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn
class USteamCoreWebAsyncActionQueryTxn : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionQueryTxn");
		return Clss;
	}

	class USteamCoreWebAsyncActionQueryTxn* QueryTxnAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& OrderID, const class FString& TransId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn
class USteamCoreWebAsyncActionRefundTxn : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRefundTxn");
		return Clss;
	}

	class USteamCoreWebAsyncActionRefundTxn* RefundTxnAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& OrderID, int32 AppID);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebPlayerService
class UWebPlayerService : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebPlayerService");
		return Clss;
	}

	void IsPlayingSharedGame(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppIdPlaying);
	void GetSteamLevel(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID);
	void GetRecentlyPlayedGames(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 Count);
	void GetOwnedGames(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, const TArray<int32>& Filter);
	void GetCommunityBadgeProgress(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 BadgeId);
	void GetBadges(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames
class USteamCoreWebAsyncActionGetRecentlyPlayedGames : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetRecentlyPlayedGames");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetRecentlyPlayedGames* GetRecentlyPlayedGamesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 Count);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames
class USteamCoreWebAsyncActionGetOwnedGames : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetOwnedGames");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetOwnedGames* GetOwnedGamesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, const TArray<int32>& Filter);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel
class USteamCoreWebAsyncActionGetSteamLevel : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetSteamLevel");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetSteamLevel* GetSteamLevelAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetBadges
class USteamCoreWebAsyncActionGetBadges : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetBadges");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetBadges* GetBadgesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress
class USteamCoreWebAsyncActionGetCommunityBadgeProgress : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetCommunityBadgeProgress");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetCommunityBadgeProgress* GetCommunityBadgeProgressAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 BadgeId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame
class USteamCoreWebAsyncActionIsPlayingSharedGame : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionIsPlayingSharedGame");
		return Clss;
	}

	class USteamCoreWebAsyncActionIsPlayingSharedGame* IsPlayingSharedGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppIdPlaying);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebPublishedFileService
class UWebPublishedFileService : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebPublishedFileService");
		return Clss;
	}

	void UpdateTags(FDelegateProperty_& Callback, const class FString& Key, const class FString& PublishedFileID, int32 AppID, const class FString& AddTags, const class FString& RemoveTags);
	void UpdateIncompatibleStatus(FDelegateProperty_& Callback, const class FString& Key, const class FString& PublishedFileID, int32 AppID, bool bIncompatible);
	void UpdateBanStatus(FDelegateProperty_& Callback, const class FString& Key, const class FString& PublishedFileID, int32 AppID, bool bBanned, const class FString& Reason);
	void SetDeveloperMetadata(FDelegateProperty_& Callback, const class FString& Key, const class FString& PublishedFileID, int32 AppID, const class FString& MetaData);
	void QueryFiles(FDelegateProperty_& Callback, const class FString& Key, int32 QueryType, int32 Page, const class FString& Cursor, int32 NumPerPage, int32 CreatorAppID, int32 AppID, const class FString& RequiredTags, const class FString& ExcludedTags, bool bMatchAllTags, const class FString& RequiredFlags, const class FString& OmittedFlags, const class FString& SearchText, int32 FileType, const class FString& ChildPublishedFileId, int32 Days, bool bIncludeRecentVotesOnly, int32 CacheMaxAgeSeconds, int32 Language, const class FString& RequiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int32 ReturnPlaytimeStats);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebSteamPublishedItemSearch
class UWebSteamPublishedItemSearch : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebSteamPublishedItemSearch");
		return Clss;
	}

	void ResultSetSummary(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, bool bHasAppAdminAccess, int32 FileType, const TArray<class FString>& Tag, const TArray<class FString>& UserTag);
	void RankedByVote(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, const TArray<class FString>& Tag, const TArray<class FString>& UserTag);
	void RankedByTrend(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 Days, const TArray<class FString>& Tag, const TArray<class FString>& UserTag);
	void RankedByPublicationOrder(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, const TArray<class FString>& Tag, const TArray<class FString>& UserTag);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder
class USteamCoreWebAsyncActionRankedByPublicationOrder : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRankedByPublicationOrder");
		return Clss;
	}

	class USteamCoreWebAsyncActionRankedByPublicationOrder* RankedByPublicationOrderAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, const TArray<class FString>& Tag, const TArray<class FString>& UserTag);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend
class USteamCoreWebAsyncActionRankedByTrend : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRankedByTrend");
		return Clss;
	}

	class USteamCoreWebAsyncActionRankedByTrend* RankedByTrendAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 Days, const TArray<class FString>& Tag, const TArray<class FString>& UserTag);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote
class USteamCoreWebAsyncActionRankedByVote : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionRankedByVote");
		return Clss;
	}

	class USteamCoreWebAsyncActionRankedByVote* RankedByVoteAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, const TArray<class FString>& Tag, const TArray<class FString>& UserTag);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary
class USteamCoreWebAsyncActionResultSetSummary : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionResultSetSummary");
		return Clss;
	}

	class USteamCoreWebAsyncActionResultSetSummary* ResultSetSummaryAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, int32 StartId, bool bHasAppAdminAccess, int32 FileType, const TArray<class FString>& Tag, const TArray<class FString>& UserTag);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebPublishedItemVoting
class UWebPublishedItemVoting : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebPublishedItemVoting");
		return Clss;
	}

	void UserVoteSummary(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const TArray<class FString>& PublishedFileIDs);
	void ItemVoteSummary(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const TArray<class FString>& PublishedFileIDs);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary
class USteamCoreWebAsyncActionItemVoteSummary : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionItemVoteSummary");
		return Clss;
	}

	class USteamCoreWebAsyncActionItemVoteSummary* ItemVoteSummaryAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const TArray<class FString>& PublishedFileIDs);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary
class USteamCoreWebAsyncActionUserVoteSummary : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionUserVoteSummary");
		return Clss;
	}

	class USteamCoreWebAsyncActionUserVoteSummary* UserVoteSummaryAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const TArray<class FString>& PublishedFileIDs);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebRemoteStorage
class UWebRemoteStorage : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebRemoteStorage");
		return Clss;
	}

	void UnsubscribePublishedFile(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& PublishedFileIDs);
	void SubscribePublishedFile(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& PublishedFileIDs);
	void SetUGCUsedByGC(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32 AppID, bool bUsed);
	void GetUGCFileDetails(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32 AppID);
	void GetPublishedFileDetails(FDelegateProperty_& Callback, const class FString& PublishedFileIDs);
	void GetCollectionDetails(FDelegateProperty_& Callback, const TArray<class FString>& PublishedFileIDs);
	void EnumerateUserSubscribedFiles(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, int32 ListType);
	void EnumerateUserPublishedFiles(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles
class USteamCoreWebAsyncActionEnumerateUserPublishedFiles : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionEnumerateUserPublishedFiles");
		return Clss;
	}

	class USteamCoreWebAsyncActionEnumerateUserPublishedFiles* EnumerateUserPublishedFilesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles
class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionEnumerateUserSubscribedFiles");
		return Clss;
	}

	class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* EnumerateUserSubscribedFilesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, int32 ListType);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails
class USteamCoreWebAsyncActionGetCollectionDetails : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetCollectionDetails");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetCollectionDetails* GetCollectionDetailsAsync(class UObject* WorldContextObject, const TArray<class FString>& PublishedFileIDs);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails
class USteamCoreWebAsyncActionGetPublishedFileDetails : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPublishedFileDetails");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetPublishedFileDetails* GetPublishedFileDetailsAsync(class UObject* WorldContextObject, const class FString& PublishedFileIDs);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails
class USteamCoreWebAsyncActionGetUGCFileDetails : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetUGCFileDetails");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetUGCFileDetails* GetUGCFileDetailsAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC
class USteamCoreWebAsyncActionSetUGCUsedByGC : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionSetUGCUsedByGC");
		return Clss;
	}

	class USteamCoreWebAsyncActionSetUGCUsedByGC* SetUGCUsedByGCAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& UGCID, int32 AppID, bool bUsed);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile
class USteamCoreWebAsyncActionSubscribePublishedFile : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionSubscribePublishedFile");
		return Clss;
	}

	class USteamCoreWebAsyncActionSubscribePublishedFile* SubscribePublishedFileAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& PublishedFileIDs);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile
class USteamCoreWebAsyncActionUnsubscribePublishedFile : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionUnsubscribePublishedFile");
		return Clss;
	}

	class USteamCoreWebAsyncActionUnsubscribePublishedFile* UnsubscribePublishedFileAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& PublishedFileIDs);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebSteamCommunity
class UWebSteamCommunity : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebSteamCommunity");
		return Clss;
	}

	void ReportAbuse(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamIdActor, const class FString& SteamIdTarget, int32 AppID, int32 AbuseType, int32 ContentType, const class FString& Description, const class FString& Gid);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse
class USteamCoreWebAsyncActionReportAbuse : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionReportAbuse");
		return Clss;
	}

	class USteamCoreWebAsyncActionReportAbuse* ReportAbuseAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamIdActor, const class FString& SteamIdTarget, int32 AppID, int32 AbuseType, int32 ContentType, const class FString& Description, const class FString& Gid);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebSteamEconomy
class UWebSteamEconomy : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebSteamEconomy");
		return Clss;
	}

	void StartTrade(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamIDd, const class FString& SteamId2);
	void StartAssetTransaction(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& AssetId, int32 AssetQuantity, const class FString& Currency, const class FString& Language, const class FString& Ipaddress, const class FString& Referer, bool bClientAuth);
	void GetMarketPrices(FDelegateProperty_& Callback, const class FString& Key, int32 AppID);
	void GetExportedAssetsForUser(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& ContextID);
	void GetAssetPrices(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Currency, const class FString& Language);
	void GetAssetClassInfo(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Language, int32 ClassCount, const class FString& ClassID, const class FString& InstanceId);
	void FinalizeAssetTransaction(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& TxnId, const class FString& Language);
	void CanTrade(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& TargetId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionCanTrade
class USteamCoreWebAsyncActionCanTrade : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionCanTrade");
		return Clss;
	}

	class USteamCoreWebAsyncActionCanTrade* CanTradeAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& TargetId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction
class USteamCoreWebAsyncActionFinalizeAssetTransaction : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionFinalizeAssetTransaction");
		return Clss;
	}

	class USteamCoreWebAsyncActionFinalizeAssetTransaction* FinalizeAssetTransactionAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& TxnId, const class FString& Language);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo
class USteamCoreWebAsyncActionGetAssetClassInfo : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetAssetClassInfo");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetAssetClassInfo* GetAssetClassInfoAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& Language, int32 ClassCount, const class FString& ClassID, const class FString& InstanceId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices
class USteamCoreWebAsyncActionGetAssetPrices : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetAssetPrices");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetAssetPrices* GetAssetPricesAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& Currency, const class FString& Language);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser
class USteamCoreWebAsyncActionGetExportedAssetsForUser : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetExportedAssetsForUser");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetExportedAssetsForUser* GetExportedAssetsForUserAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& ContextID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices
class USteamCoreWebAsyncActionGetMarketPrices : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetMarketPrices");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetMarketPrices* GetMarketPricesAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction
class USteamCoreWebAsyncActionStartAssetTransaction : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionStartAssetTransaction");
		return Clss;
	}

	class USteamCoreWebAsyncActionStartAssetTransaction* StartAssetTransactionAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamID, const class FString& AssetId, int32 AssetQuantity, const class FString& Currency, const class FString& Language, const class FString& Ipaddress, const class FString& Referer, bool bClientAuth);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionStartTrade
class USteamCoreWebAsyncActionStartTrade : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionStartTrade");
		return Clss;
	}

	class USteamCoreWebAsyncActionStartTrade* StartTradeAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& SteamId1, const class FString& SteamId2);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebSteamGameServerStats
class UWebSteamGameServerStats : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebSteamGameServerStats");
		return Clss;
	}

	void GetGameServerPlayerStatsForGame(FDelegateProperty_& Callback, const class FString& Key, const class FString& GameID, int32 AppID, const class FString& RangeStart, const class FString& RangeEnd, int32 MaxResults);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebSteamNews
class UWebSteamNews : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebSteamNews");
		return Clss;
	}

	void GetNewsForAppAuthed(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, int32 MaxLength, const TArray<class FString>& Feeds, int32 EndDate, int32 Count);
	void GetNewsForApp(FDelegateProperty_& Callback, int32 AppID, int32 MaxLength, const TArray<class FString>& Feeds, int32 EndDate, int32 Count);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp
class USteamCoreWebAsyncActionGetNewsForApp : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetNewsForApp");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetNewsForApp* GetNewsForAppAsync(class UObject* WorldContextObject, int32 AppID, int32 MaxLength, const TArray<class FString>& Feeds, int32 EndDate, int32 Count);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed
class USteamCoreWebAsyncActionGetNewsForAppAuthed : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetNewsForAppAuthed");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetNewsForAppAuthed* GetNewsForAppAuthedAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, int32 MaxLength, const TArray<class FString>& Feeds, int32 EndDate, int32 Count);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebSteamUser
class UWebSteamUser : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebSteamUser");
		return Clss;
	}

	void ResolveVanityURL(FDelegateProperty_& Callback, const class FString& Key, const class FString& VanityURL, enum class EVanityUrlType URLType);
	void GrantPackage(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 PackageId, const class FString& Ipaddress, const class FString& ThirdPartyKey, int32 ThirdPartyAppId);
	void GetUserGroupList(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID);
	void GetPublisherAppOwnershipChanges(FDelegateProperty_& Callback, const class FString& Key, const class FString& PackageRowVersion, const class FString& CDKeyRowVersion);
	void GetPublisherAppOwnership(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID);
	void GetPlayerSummaries(FDelegateProperty_& Callback, const class FString& Key, const TArray<class FString>& SteamIDs);
	void GetPlayerBans(FDelegateProperty_& Callback, const class FString& Key, const TArray<class FString>& SteamIDs);
	void GetFriendList(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const class FString& Relationship);
	void GetAppPriceInfo(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, const TArray<int32>& AppIDs);
	void CheckAppOwnership(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership
class USteamCoreWebAsyncActionCheckAppOwnership : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionCheckAppOwnership");
		return Clss;
	}

	class USteamCoreWebAsyncActionCheckAppOwnership* CheckAppOwnershipAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo
class USteamCoreWebAsyncActionGetAppPriceInfo : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetAppPriceInfo");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetAppPriceInfo* GetAppPriceInfoAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const TArray<int32>& AppIDs);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList
class USteamCoreWebAsyncActionGetFriendList : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetFriendList");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetFriendList* GetFriendListAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, const class FString& Relationship);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans
class USteamCoreWebAsyncActionGetPlayerBans : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPlayerBans");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetPlayerBans* GetPlayerBansAsync(class UObject* WorldContextObject, const class FString& Key, const TArray<class FString>& SteamIDs);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries
class USteamCoreWebAsyncActionGetPlayerSummaries : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPlayerSummaries");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetPlayerSummaries* GetPlayerSummariesAsync(class UObject* WorldContextObject, const class FString& Key, const TArray<class FString>& SteamIDs);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership
class USteamCoreWebAsyncActionGetPublisherAppOwnership : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPublisherAppOwnership");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetPublisherAppOwnership* GetPublisherAppOwnershipAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges
class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChangesAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& PackageRowVersion, const class FString& CDKeyRowVersion);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList
class USteamCoreWebAsyncActionGetUserGroupList : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetUserGroupList");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetUserGroupList* GetUserGroupListAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage
class USteamCoreWebAsyncActionGrantPackage : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGrantPackage");
		return Clss;
	}

	class USteamCoreWebAsyncActionGrantPackage* GrantPackageAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 PackageId, const class FString& Ipaddress, const class FString& ThirdPartyKey, int32 ThirdPartyAppId);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL
class USteamCoreWebAsyncActionResolveVanityURL : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionResolveVanityURL");
		return Clss;
	}

	class USteamCoreWebAsyncActionResolveVanityURL* ResolveVanityURLAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& VanityURL, enum class EVanityUrlType URLType);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebUserAuth
class UWebUserAuth : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebUserAuth");
		return Clss;
	}

	void AuthenticateUserTicket(FDelegateProperty_& Callback, const class FString& Key, int32 AppID, const class FString& Ticket);
	void AuthenticateUser(FDelegateProperty_& Callback, const class FString& SteamID, const TArray<uint8>& SessionKey, const TArray<uint8>& EncryptedLoginKey);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser
class USteamCoreWebAsyncActionAuthenticateUser : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionAuthenticateUser");
		return Clss;
	}

	class USteamCoreWebAsyncActionAuthenticateUser* AuthenticateUserAsync(class UObject* WorldContextObject, const class FString& SteamID, const TArray<uint8>& SessionKey, const TArray<uint8>& EncryptedLoginKey);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket
class USteamCoreWebAsyncActionAuthenticateUserTicket : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionAuthenticateUserTicket");
		return Clss;
	}

	class USteamCoreWebAsyncActionAuthenticateUserTicket* AuthenticateUserTicketAsync(class UObject* WorldContextObject, const class FString& Key, int32 AppID, const class FString& Ticket);
};

// 0x0 (0x48 - 0x48)
// Class SteamCoreWeb.WebUserStats
class UWebUserStats : public USteamCoreWebSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebUserStats");
		return Clss;
	}

	void SetUserStatsForGame(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const TArray<class FString>& Names, const TArray<int32>& Values);
	void GetUserStatsForGame(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID);
	void GetSchemaForGame(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& Language);
	void GetPlayerAchievements(FDelegateProperty_& Callback, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& Language);
	void GetNumberOfCurrentPlayers(FDelegateProperty_& Callback, int32 AppID);
	void GetGlobalStatsForGame(FDelegateProperty_& Callback, int32 AppID, const TArray<class FString>& Names, int32 StartDate, int32 EndDate);
	void GetGlobalAchievementPercentagesForApp(FDelegateProperty_& Callback, const class FString& GameID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp
class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForAppAsync(class UObject* WorldContextObject, const class FString& GameID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame
class USteamCoreWebAsyncActionGetGlobalStatsForGame : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetGlobalStatsForGame");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetGlobalStatsForGame* GetGlobalStatsForGameAsync(class UObject* WorldContextObject, int32 AppID, const TArray<class FString>& Names, int32 StartDate, int32 EndDate);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers
class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetNumberOfCurrentPlayers");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements
class USteamCoreWebAsyncActionGetPlayerAchievements : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetPlayerAchievements");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetPlayerAchievements* GetPlayerAchievementsAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& Language);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame
class USteamCoreWebAsyncActionGetSchemaForGame : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetSchemaForGame");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetSchemaForGame* GetSchemaForGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const class FString& Language);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame
class USteamCoreWebAsyncActionGetUserStatsForGame : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionGetUserStatsForGame");
		return Clss;
	}

	class USteamCoreWebAsyncActionGetUserStatsForGame* GetUserStatsForGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID);
};

// 0x0 (0x58 - 0x58)
// Class SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame
class USteamCoreWebAsyncActionSetUserStatsForGame : public USteamCoreWebAsyncAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SteamCoreWebAsyncActionSetUserStatsForGame");
		return Clss;
	}

	class USteamCoreWebAsyncActionSetUserStatsForGame* SetUserStatsForGameAsync(class UObject* WorldContextObject, const class FString& Key, const class FString& SteamID, int32 AppID, const TArray<class FString>& Names, const TArray<int32>& Values);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

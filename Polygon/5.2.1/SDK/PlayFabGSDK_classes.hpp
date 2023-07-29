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
// Class PlayFabGSDK.GSDKUtils
class UGSDKUtils : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GSDKUtils");
		return Clss;
	}

	void UpdateConnectedPlayers(TArray<struct FConnectedPlayer>& CurrentlyConnectedPlayers);
	bool SetDefaultServerHostPort();
	void RegisterGSDKShutdownDelegate(FDelegateProperty_& OnGSDKShutdownDelegate);
	void RegisterGSDKServerActiveDelegate(FDelegateProperty_& OnGSDKServerActiveDelegate);
	void RegisterGSDKReadyForPlayers(FDelegateProperty_& OnGSDKReadyForPlayersDelegate);
	void RegisterGSDKMaintenanceDelegate(FDelegateProperty_& OnGSDKMaintenanceDelegate);
	void RegisterGSDKHealthCheckDelegate(FDelegateProperty_& OnGSDKHealthCheckDelegate);
	void ReadyForPlayers();
	class FString GetVMId();
	class FString GetTitleId();
	class FString GetSharedContentDirectory();
	class FString GetServerId();
	class FString GetRegionName();
	class FString GetMetaDataValue(const class FString& MetaDataName);
	class FString GetMatchSessionCookie();
	class FString GetMatchId();
	class FString GetLogsDirectory();
	TArray<class FString> GetInitialPlayers();
	struct FGameServerConnectionInfo GetGameServerConnectionInfo();
	class FString GetBuildId();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

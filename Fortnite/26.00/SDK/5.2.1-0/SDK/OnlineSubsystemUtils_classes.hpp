#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAchievementBlueprintLibrary* GetDefaultObj();

	void GetCachedAchievementProgress(class UObject* WorldContextObject, class UPlayerController* PlayerController, class FName AchievementId, bool* bFoundID, float* Progress);
	void GetCachedAchievementDescription(class UObject* WorldContextObject, class UPlayerController* PlayerController, class FName AchievementId, bool* bFoundID, class FText* Title, class FText* LockedDescription, class FText* UnlockedDescription, bool* bHidden);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F7[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAchievementQueryCallbackProxy* GetDefaultObj();

	class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class UPlayerController* PlayerController);
	class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class UPlayerController* PlayerController);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_807[0x30];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAchievementWriteCallbackProxy* GetDefaultObj();

	class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class UPlayerController* PlayerController, class FName AchievementName, float Progress, int32 UserTag);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.ConnectionCallbackProxy
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_817[0x28];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UConnectionCallbackProxy* GetDefaultObj();

	class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class UPlayerController* PlayerController);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_824[0x48];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCreateSessionCallbackProxy* GetDefaultObj();

	class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class UPlayerController* PlayerController, int32 PublicConnections, bool bUseLAN);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_82A[0x28];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDestroySessionCallbackProxy* GetDefaultObj();

	class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class UPlayerController* PlayerController);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemUtils.EndMatchCallbackProxy
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_842[0x30];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEndMatchCallbackProxy* GetDefaultObj();

	class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class UPlayerController* PlayerController, TScriptInterface<class UTurnBasedMatchInterface> MatchActor, const class FString& MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.EndTurnCallbackProxy
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_84E[0x28];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEndTurnCallbackProxy* GetDefaultObj();

	class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class UPlayerController* PlayerController, const class FString& MatchID, TScriptInterface<class UTurnBasedMatchInterface> TurnBasedMatchInterface);
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_877[0x40];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFindSessionsCallbackProxy* GetDefaultObj();

	class FString GetServerName(struct FBlueprintSessionResult& Result);
	int32 GetPingInMs(struct FBlueprintSessionResult& Result);
	int32 GetMaxPlayers(struct FBlueprintSessionResult& Result);
	int32 GetCurrentPlayers(struct FBlueprintSessionResult& Result);
	class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class UPlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_87E[0x38];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFindTurnBasedMatchCallbackProxy* GetDefaultObj();

	class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class UPlayerController* PlayerController, TScriptInterface<class UTurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches);
};

// 0x80 (0xA8 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
class UInAppPurchaseCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_88D[0x60];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInAppPurchaseCallbackProxy2* GetDefaultObj();

	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class UPlayerController* PlayerController);
	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class UPlayerController* PlayerController);
	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class UPlayerController* PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest);
};

// 0x40 (0x68 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_897[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInAppPurchaseQueryCallbackProxy2* GetDefaultObj();

	class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class UPlayerController* PlayerController, TArray<class FString>& ProductIdentifiers);
};

// 0x88 (0xB0 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A4[0x68];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInAppPurchaseRestoreCallbackProxy2* GetDefaultObj();

	class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, class UPlayerController* PlayerController);
};

// 0x90 (0x1E48 - 0x1DB8)
// Class OnlineSubsystemUtils.IpConnection
class UIpConnection : public UNetConnection
{
public:
	uint8                                        Pad_8A8[0x74];                                     // Fixing Size After Last Property 
	float                                        SocketErrorDisconnectDelay;                        // 0x1E2C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8A9[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UIpConnection* GetDefaultObj();

};

// 0xB0 (0x858 - 0x7A8)
// Class OnlineSubsystemUtils.IpNetDriver
class UIpNetDriver : public UNetDriver
{
public:
	uint8                                        LogPortUnreach : 1;                                // Mask: 0x1, PropSize: 0x10x7A8(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AllowPlayerPortUnreach : 1;                        // Mask: 0x2, PropSize: 0x10x7A8(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_43 : 6;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_8AD[0x3];                                      // Fixing Size After Last Property 
	uint32                                       MaxPortCountToTry;                                 // 0x7AC(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AF[0x4];                                      // Fixing Size After Last Property 
	uint32                                       ServerDesiredSocketReceiveBufferBytes;             // 0x7B4(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       ServerDesiredSocketSendBufferBytes;                // 0x7B8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       ClientDesiredSocketReceiveBufferBytes;             // 0x7BC(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       ClientDesiredSocketSendBufferBytes;                // 0x7C0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8B0[0x4];                                      // Fixing Size After Last Property 
	double                                       MaxSecondsInReceive;                               // 0x7C8(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NbPacketsBetweenReceiveTimeTest;                   // 0x7D0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ResolutionConnectionTimeout;                       // 0x7D4(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8B1[0x80];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UIpNetDriver* GetDefaultObj();

};

// 0x168 (0x198 - 0x30)
// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B8[0x148];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UJoinSessionCallbackProxy* GetDefaultObj();

	class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class UPlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULeaderboardBlueprintLibrary* GetDefaultObj();

	bool WriteLeaderboardInteger(class UPlayerController* PlayerController, class FName StatName, int32 StatValue);
};

// 0x40 (0x68 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BF[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULeaderboardFlushCallbackProxy* GetDefaultObj();

	class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class UPlayerController* PlayerController, class FName SessionName);
};

// 0x70 (0x98 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C5[0x50];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULeaderboardQueryCallbackProxy* GetDefaultObj();

	class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class UPlayerController* PlayerController, class FName StatName);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemUtils.LogoutCallbackProxy
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CE[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULogoutCallbackProxy* GetDefaultObj();

	class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class UPlayerController* PlayerController);
};

// 0x30 (0x2C0 - 0x290)
// Class OnlineSubsystemUtils.OnlineBeacon
class UOnlineBeacon : public UActor
{
public:
	uint8                                        Pad_8D5[0x8];                                      // Fixing Size After Last Property 
	float                                        BeaconConnectionInitialTimeout;                    // 0x298(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BeaconConnectionTimeout;                           // 0x29C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetDriver*                            NetDriver;                                         // 0x2A0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8D8[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineBeacon* GetDefaultObj();

};

// 0x60 (0x320 - 0x2C0)
// Class OnlineSubsystemUtils.OnlineBeaconClient
class UOnlineBeaconClient : public UOnlineBeacon
{
public:
	class UOnlineBeaconHostObject*               BeaconOwner;                                       // 0x2C0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetConnection*                        BeaconConnection;                                  // 0x2C8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBeaconConnectionState            ConnectionState;                                   // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8E1[0x4F];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineBeaconClient* GetDefaultObj();

	void ClientOnConnected();
};

// 0x110 (0x3D0 - 0x2C0)
// Class OnlineSubsystemUtils.OnlineBeaconHost
class UOnlineBeaconHost : public UOnlineBeacon
{
public:
	int32                                        ListenPort;                                        // 0x2C0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAuthRequired;                                     // 0x2C4(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8E3[0x3];                                      // Fixing Size After Last Property 
	uint32                                       MaxAuthTokenSize;                                  // 0x2C8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8E4[0x54];                                     // Fixing Size After Last Property 
	TArray<class UOnlineBeaconClient*>           ClientActors;                                      // 0x320(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8E5[0xA0];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineBeaconHost* GetDefaultObj();

};

// 0x28 (0x2B8 - 0x290)
// Class OnlineSubsystemUtils.OnlineBeaconHostObject
class UOnlineBeaconHostObject : public UActor
{
public:
	class FString                                BeaconTypeName;                                    // 0x290(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UOnlineBeaconClient>       ClientBeaconActorClass;                            // 0x2A0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UOnlineBeaconClient*>           ClientActors;                                      // 0x2A8(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UOnlineBeaconHostObject* GetDefaultObj();

};

// 0x160 (0x188 - 0x28)
// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	TMap<class FName, class FName>               MappedUniqueNetIdTypes;                            // 0x28(0x50)(Config, NativeAccessSpecifierPrivate)
	TArray<class FName>                          CompatibleUniqueNetIdTypes;                        // 0x78(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	class FName                                  VoiceSubsystemNameOverride;                        // 0x88(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8EE[0xF8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineEngineInterfaceImpl* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class OnlineSubsystemUtils.OnlinePIESettings
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                         bOnlinePIEEnabled;                                 // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F3[0x7];                                      // Fixing Size After Last Property 
	TArray<struct FPIELoginSettingsInternal>     Logins;                                            // 0x40(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlinePIESettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
class UOnlineServicesEngineInterfaceImpl : public UOnlineEngineInterface
{
public:

	static class UClass* StaticClass();
	static class UOnlineServicesEngineInterfaceImpl* GetDefaultObj();

};

// 0x1B8 (0x1E0 - 0x28)
// Class OnlineSubsystemUtils.OnlineSessionClient
class UOnlineSessionClient : public UOnlineSession
{
public:
	uint8                                        Pad_8F9[0x1B0];                                    // Fixing Size After Last Property 
	bool                                         bIsFromInvite;                                     // 0x1D8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHandlingDisconnect;                               // 0x1D9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8FA[0x6];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineSessionClient* GetDefaultObj();

};

// 0xC8 (0x3E8 - 0x320)
// Class OnlineSubsystemUtils.PartyBeaconClient
class UPartyBeaconClient : public UOnlineBeaconClient
{
public:
	uint8                                        Pad_91E[0x30];                                     // Fixing Size After Last Property 
	class FString                                DestSessionId;                                     // 0x350(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPartyReservation                     PendingReservation;                                // 0x360(0x58)(Protected, NativeAccessSpecifierProtected)
	enum class EClientRequestType                RequestType;                                       // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingReservationSent;                           // 0x3B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCancelReservation;                                // 0x3BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_91F[0x2D];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPartyBeaconClient* GetDefaultObj();

	void ServerUpdateReservationRequest(const class FString& SessionId, struct FPartyReservation& ReservationUpdate);
	void ServerReservationRequest(const class FString& SessionId, struct FPartyReservation& Reservation);
	void ServerRemoveMemberFromReservationRequest(const class FString& SessionId, struct FPartyReservation& ReservationUpdate);
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl& PartyLeader);
	void ServerAddOrUpdateReservationRequest(const class FString& SessionId, struct FPartyReservation& Reservation);
	void ClientSendReservationUpdates(int32 NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse);
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse);
};

// 0x78 (0x330 - 0x2B8)
// Class OnlineSubsystemUtils.PartyBeaconHost
class UPartyBeaconHost : public UOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                     State;                                             // 0x2B8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_928[0x60];                                     // Fixing Size After Last Property 
	bool                                         bLogoutOnSessionTimeout;                           // 0x320(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_929[0x3];                                      // Fixing Size After Last Property 
	float                                        SessionTimeoutSecs;                                // 0x324(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TravelSessionTimeoutSecs;                          // 0x328(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_92B[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPartyBeaconHost* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class OnlineSubsystemUtils.PartyBeaconState
class UPartyBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxReservations;                                   // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumTeams;                                          // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumPlayersPerTeam;                                 // 0x3C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TeamAssignmentMethod;                              // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReservedHostTeamNum;                               // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ForceTeamNum;                                      // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictCrossConsole;                             // 0x50(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_931[0x7];                                      // Fixing Size After Last Property 
	TArray<class FString>                        PlatformCrossplayRestrictions;                     // 0x58(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;                               // 0x68(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bEnableRemovalRequests;                            // 0x78(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_937[0x7];                                      // Fixing Size After Last Property 
	TArray<struct FPartyReservation>             Reservations;                                      // 0x80(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_938[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPartyBeaconState* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_94A[0x28];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UQuitMatchCallbackProxy* GetDefaultObj();

	class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class UPlayerController* PlayerController, const class FString& MatchID, enum class EMPMatchOutcome Outcome, int32 TurnTimeoutInSeconds);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_95A[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UShowLoginUICallbackProxy* GetDefaultObj();

	class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class UPlayerController* InPlayerController);
};

// 0xF8 (0x418 - 0x320)
// Class OnlineSubsystemUtils.SpectatorBeaconClient
class USpectatorBeaconClient : public UOnlineBeaconClient
{
public:
	uint8                                        Pad_969[0x30];                                     // Fixing Size After Last Property 
	class FString                                DestSessionId;                                     // 0x350(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSpectatorReservation                 PendingReservation;                                // 0x360(0x88)(Protected, NativeAccessSpecifierProtected)
	enum class ESpectatorClientRequestType       RequestType;                                       // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingReservationSent;                           // 0x3E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCancelReservation;                                // 0x3EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_96A[0x2D];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpectatorBeaconClient* GetDefaultObj();

	void ServerReservationRequest(const class FString& SessionId, struct FSpectatorReservation& Reservation);
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl& Spectator);
	void ClientSendReservationUpdates(int32 NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse);
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse);
};

// 0x78 (0x330 - 0x2B8)
// Class OnlineSubsystemUtils.SpectatorBeaconHost
class USpectatorBeaconHost : public UOnlineBeaconHostObject
{
public:
	class USpectatorBeaconState*                 State;                                             // 0x2B8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_96E[0x60];                                     // Fixing Size After Last Property 
	bool                                         bLogoutOnSessionTimeout;                           // 0x320(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_971[0x3];                                      // Fixing Size After Last Property 
	float                                        SessionTimeoutSecs;                                // 0x324(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TravelSessionTimeoutSecs;                          // 0x328(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_972[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpectatorBeaconHost* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class OnlineSubsystemUtils.SpectatorBeaconState
class USpectatorBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxReservations;                                   // 0x34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictCrossConsole;                             // 0x38(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_975[0x7];                                      // Fixing Size After Last Property 
	TArray<struct FSpectatorReservation>         Reservations;                                      // 0x40(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_976[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpectatorBeaconState* GetDefaultObj();

};

// 0x0 (0x320 - 0x320)
// Class OnlineSubsystemUtils.TestBeaconClient
class UTestBeaconClient : public UOnlineBeaconClient
{
public:

	static class UClass* StaticClass();
	static class UTestBeaconClient* GetDefaultObj();

	void ServerPong();
	void ClientPing();
};

// 0x0 (0x2B8 - 0x2B8)
// Class OnlineSubsystemUtils.TestBeaconHost
class UTestBeaconHost : public UOnlineBeaconHostObject
{
public:

	static class UClass* StaticClass();
	static class UTestBeaconHost* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTurnBasedBlueprintLibrary* GetDefaultObj();

	void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class UPlayerController* PlayerController, class UObject* Object);
	void GetPlayerDisplayName(class UObject* WorldContextObject, class UPlayerController* PlayerController, const class FString& MatchID, int32 PlayerIndex, class FString* PlayerDisplayName);
	void GetMyPlayerIndex(class UObject* WorldContextObject, class UPlayerController* PlayerController, const class FString& MatchID, int32* PlayerIndex);
	void GetIsMyTurn(class UObject* WorldContextObject, class UPlayerController* PlayerController, const class FString& MatchID, bool* bIsMyTurn);
};

// 0x60 (0x7F0 - 0x790)
// Class OnlineSubsystemUtils.VoipListenerSynthComponent
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	uint8                                        Pad_9A3[0x60];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVoipListenerSynthComponent* GetDefaultObj();

	bool IsIdling();
};

// 0x158 (0x180 - 0x28)
// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	uint8                                        Pad_9A5[0x158];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineEngineInterfaceImpl* GetDefaultObj();

};

}



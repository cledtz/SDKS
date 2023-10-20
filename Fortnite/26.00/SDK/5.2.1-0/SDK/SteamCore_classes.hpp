#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x68 - 0x30)
// Class SteamCore.SteamCoreSubsystem
class USteamCoreSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_C3D[0x38];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USteamCoreSubsystem* GetDefaultObj();

};

// 0x60 (0xC8 - 0x68)
// Class SteamCore.AppList
class UAppList : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            SteamAppInstalled;                                 // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SteamAppUninstalled;                               // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5F[0x40];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAppList* GetDefaultObj();

	int32 GetNumInstalledApps();
	int32 GetInstalledApps(TArray<int32>* AppIDs, int32 MaxAppIDs);
	int32 GetAppName(int32 AppID, class FString* Name);
	int32 GetAppInstallDir(int32 AppID, class FString* Directory);
	int32 GetAppBuildId(int32 AppID);
};

// 0x60 (0xC8 - 0x68)
// Class SteamCore.Apps
class UApps : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            DLCInstalled;                                      // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            FileDetailsResultDelegate;                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB3[0x40];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UApps* GetDefaultObj();

	void UninstallDLC(int32 AppID);
	bool MarkContentCorrupt(bool bMissingFilesOnly);
	void InstallDLC(int32 AppID);
	class FString GetLaunchQueryParam(const class FString& Key);
	int32 GetLaunchCommandLine(class FString* CommandLine);
	int32 GetInstalledDepots(int32 AppID, int32 MaxDepots, TArray<int32>* Depots);
	void GetFileDetails(FDelegateProperty_& Callback, const class FString& Filename);
	int32 GetEarliestPurchaseUnixTime(int32 AppID);
	bool GetDlcDownloadProgress(int32 AppID, int32* BytesDownloaded, int32* BytesTotal);
	int32 GetDLCCount();
	class FString GetCurrentGameLanguage();
	bool GetCurrentBetaName(class FString* Name);
	class FString GetAvailableGameLanguages();
	struct FSteamID GetAppOwner();
	int32 GetAppInstallDir(int32 AppID, class FString* Folder);
	int32 GetAppBuildId();
	bool BIsVACBanned();
	bool BIsTimedTrial(int32* SecondsAllowed, int32* SecondsPlayed);
	bool BIsSubscribedFromFreeWeekend();
	bool BIsSubscribedFromFamilySharing();
	bool BIsSubscribedApp(int32 AppID);
	bool BIsSubscribed();
	bool BIsLowViolence();
	bool BIsDlcInstalled(int32 AppID);
	bool BIsCybercafe();
	bool BIsAppInstalled(int32 AppID);
	bool BGetDLCDataByIndex(int32 DLC, int32* AppID, bool* bAvailable, class FString* Name);
};

// 0x8 (0x38 - 0x30)
// Class SteamCore.SteamCoreAsyncAction
class USteamCoreAsyncAction : public UBlueprintAsyncActionBase
{
public:
	TWeakObjectPtr<class UObject>                M_WorldContextObject;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USteamCoreAsyncAction* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreAppsAsyncActionGetFileDetails
class USteamCoreAppsAsyncActionGetFileDetails : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreAppsAsyncActionGetFileDetails* GetDefaultObj();

	void HandleCallback(struct FFileDetailsResult& Data, bool bWasSuccessful);
	class USteamCoreAppsAsyncActionGetFileDetails* GetFileDetailsAsync(class UObject* WorldContextObject, const class FString& Filename, float Timeout);
};

// 0x0 (0x378 - 0x378)
// Class SteamCore.SteamCoreGameMode
class USteamCoreGameMode : public UGameMode
{
public:

	static class UClass* StaticClass();
	static class USteamCoreGameMode* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SteamCore.SteamCore
class USteamCore : public UObject
{
public:

	static class UClass* StaticClass();
	static class USteamCore* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class SteamCore.SteamCoreSettings
class USteamCoreSettings : public UDeveloperSettings
{
public:
	bool                                         bEnabled;                                          // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRelaunchInSteam;                                  // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVACEnabled;                                       // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowP2PPacketRelay;                              // 0x3B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        P2PConnectionTimeout;                              // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SteamAppId;                                        // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SteamDevAppId;                                     // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Port;                                              // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameServerQueryPort;                               // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameVersion;                                       // 0x50(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreSettings* GetDefaultObj();

};

// 0x2D0 (0x338 - 0x68)
// Class SteamCore.Friends
class UFriends : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            AvatarImageLoaded;                                 // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            FriendRichPresenceUpdate;                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GameConnectedChatJoin;                             // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GameConnectedChatLeave;                            // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GameConnectedClanChatMsg;                          // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GameConnectedFriendChatMsg;                        // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GameLobbyJoinRequested;                            // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GameOverlayActivated;                              // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GameRichPresenceJoinRequested;                     // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GameServerChangeRequested;                         // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PersonaStateChange;                                // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SetPersonaNameResponse;                            // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            JoinClanChatRoomCompletionResult;                  // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ClanOfficerListResponse;                           // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            DownloadClanActivityCountsResult;                  // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDC[0x1E0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFriends* GetDefaultObj();

	bool SetRichPresence(const class FString& Key, const class FString& Value);
	void SetPlayedWith(const struct FSteamID& SteamIDUserPlayedWith);
	void SetPersonaName(FDelegateProperty_& Callback, const class FString& Name);
	bool SetListenForFriendsMessages(bool bInterceptEnabled);
	void SetInGameVoiceSpeaking(const struct FSteamID& SteamIDUser, bool bSpeaking);
	bool SendClanChatMessage(const struct FSteamID& SteamIDClanChat, const class FString& Text);
	bool RequestUserInformation(const struct FSteamID& SteamIDUser, bool bRequireNameOnly);
	void RequestFriendRichPresence(const struct FSteamID& SteamIDFriend);
	void RequestClanOfficerList(FDelegateProperty_& Callback, const struct FSteamID& SteamIDClan);
	bool ReplyToFriendMessage(const struct FSteamID& SteamIDFriend, const class FString& MsgToSend);
	bool RegisterProtocolInOverlayBrowser(const class FString& Protocol);
	bool OpenClanChatWindowInSteam(const struct FSteamID& SteamIDClanChat);
	bool LeaveClanChatRoom(const struct FSteamID& SteamIDClan);
	void JoinClanChatRoom(FDelegateProperty_& Callback, const struct FSteamID& SteamIDClan);
	bool IsUserInSource(const struct FSteamID& SteamIDUser, const struct FSteamID& SteamIDSource);
	void IsFollowing(FDelegateProperty_& Callback, const struct FSteamID& SteamID);
	bool IsClanPublic(const struct FSteamID& SteamIDClan);
	bool IsClanOfficialGameGroup(const struct FSteamID& SteamIDClan);
	bool IsClanChatWindowOpenInSteam(const struct FSteamID& SteamIDClanChat);
	bool IsClanChatAdmin(const struct FSteamID& SteamIDClanChat, const struct FSteamID& SteamIDUser);
	bool InviteUserToGame(const struct FSteamID& SteamIDFriend, const class FString& ConnectString);
	bool HasFriend(const struct FSteamID& SteamIDFriend, const TArray<enum class ESteamFriendFlags>& Flags);
	TArray<enum class ESteamUserRestriction> GetUserRestrictions();
	class UTexture2D* GetSmallFriendAvatar(const struct FSteamID& SteamIDFriend);
	class FString GetPlayerNickname_Pure(const struct FSteamID& SteamIDPlayer);
	class FString GetPlayerNickname(const struct FSteamID& SteamIDPlayer);
	enum class ESteamPersonaState GetPersonaState_Pure();
	enum class ESteamPersonaState GetPersonaState();
	class FString GetPersonaName_Pure();
	class FString GetPersonaName();
	class UTexture2D* GetMediumFriendAvatar(const struct FSteamID& SteamIDFriend);
	class UTexture2D* GetLargeFriendAvatar(const struct FSteamID& SteamIDFriend);
	int32 GetFriendSteamLevel(const struct FSteamID& SteamIDFriend);
	class FString GetFriendsGroupName(const struct FSteamFriendsGroupID& FriendsGroupID);
	void GetFriendsGroupMembersList(const struct FSteamFriendsGroupID& FriendsGroupID, TArray<struct FSteamID>* SteamIDMembers, int32 MembersCount);
	int32 GetFriendsGroupMembersCount(const struct FSteamFriendsGroupID& FriendsGroupID);
	struct FSteamFriendsGroupID GetFriendsGroupIDByIndex(int32 FriendGroup);
	int32 GetFriendsGroupCount();
	int32 GetFriendRichPresenceKeyCount(const struct FSteamID& SteamIDFriend);
	class FString GetFriendRichPresenceKeyByIndex(const struct FSteamID& SteamIDFriend, int32 Key);
	class FString GetFriendRichPresence(const struct FSteamID& SteamIDFriend, const class FString& Key);
	enum class ESteamFriendRelationship GetFriendRelationship(const struct FSteamID& SteamIDFriend);
	enum class ESteamPersonaState GetFriendPersonaState(const struct FSteamID& SteamIDFriend);
	class FString GetFriendPersonaNameHistory(const struct FSteamID& SteamIDFriend, int32 PersonaName);
	class FString GetFriendPersonaName(const struct FSteamID& SteamIDFriend);
	int32 GetFriendMessage(const struct FSteamID& SteamIDFriend, int32 MessageID, class FString* Text, enum class ESteamChatEntryType* ChatEntryType);
	bool GetFriendGamePlayed(const struct FSteamID& SteamIDFriend, struct FSteamGameID* GameID, class FString* GameIP, int32* ConnectionPort, int32* QueryPort, struct FSteamID* SteamIDLobby);
	struct FSteamID GetFriendFromSourceByIndex(const struct FSteamID& SteamIDSource, int32 Ifriend);
	int32 GetFriendCountFromSource(const struct FSteamID& SteamIDSource);
	int32 GetFriendCount(const TArray<enum class ESteamFriendFlags>& Flags);
	int32 GetFriendCoplayTime(const struct FSteamID& SteamIDFriend);
	int32 GetFriendCoplayGame(const struct FSteamID& SteamIDFriend);
	struct FSteamID GetFriendByIndex(int32 Ifriend, const TArray<enum class ESteamFriendFlags>& Flags);
	void GetFollowerCount(FDelegateProperty_& Callback, const struct FSteamID& SteamID);
	int32 GetCoplayFriendCount();
	struct FSteamID GetCoplayFriend(int32 CoplayFriend);
	class FString GetClanTag(const struct FSteamID& SteamIDClan);
	struct FSteamID GetClanOwner(const struct FSteamID& SteamIDClan);
	int32 GetClanOfficerCount(const struct FSteamID& SteamIDClan);
	struct FSteamID GetClanOfficerByIndex(const struct FSteamID& SteamIDClan, int32 Officer);
	class FString GetClanName(const struct FSteamID& SteamIDClan);
	int32 GetClanCount();
	int32 GetClanChatMessage(const struct FSteamID& SteamIDClanChat, int32 MessageID, class FString* Text, enum class ESteamChatEntryType* ChatEntryType, struct FSteamID* SteamIDChatter);
	int32 GetClanChatMemberCount(const struct FSteamID& SteamIDClan);
	struct FSteamID GetClanByIndex(int32 Clan);
	bool GetClanActivityCounts(const struct FSteamID& SteamIDClan, int32* Online, int32* InGame, int32* Chatting);
	struct FSteamID GetChatMemberByIndex(const struct FSteamID& SteamIDClan, int32 User);
	void EnumerateFollowingList(FDelegateProperty_& Callback, int32 StartIndex);
	void DownloadClanActivityCounts(FDelegateProperty_& Callback, const TArray<struct FSteamID>& SteamIDClans);
	bool CloseClanChatWindowInSteam(const struct FSteamID& SteamIDClanChat);
	void ClearRichPresence();
	void ActivateGameOverlayToWebPage(const class FString& URL, enum class ESteamActivateGameOverlayToWebPageMode Mode);
	void ActivateGameOverlayToUser(const class FString& Dialog, const struct FSteamID& SteamID);
	void ActivateGameOverlayToStore(int32 AppID, enum class ESteamOverlayToStoreFlag Flag);
	void ActivateGameOverlayInviteDialogConnectString(const class FString& ConnectString);
	void ActivateGameOverlayInvitedialog(const struct FSteamID& SteamIDLobby);
	void ActivateGameOverlay(const class FString& Dialog);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreFriendsAsyncActionSetPersonaName
class USteamCoreFriendsAsyncActionSetPersonaName : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreFriendsAsyncActionSetPersonaName* GetDefaultObj();

	class USteamCoreFriendsAsyncActionSetPersonaName* SetPersonaNameAsync(class UObject* WorldContextObject, const class FString& Name, float Timeout);
	void HandleCallback(struct FSetPersonaNameResponse& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts
class USteamCoreFriendsAsyncActionDownloadClanActivityCounts : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreFriendsAsyncActionDownloadClanActivityCounts* GetDefaultObj();

	void HandleCallback(struct FDownloadClanActivityCountsResult& Data, bool bWasSuccessful);
	class USteamCoreFriendsAsyncActionDownloadClanActivityCounts* DownloadClanActivityCountsAsync(class UObject* WorldContextObject, const TArray<struct FSteamID>& SteamIDClans, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList
class USteamCoreFriendsAsyncActionRequestClanOfficerList : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreFriendsAsyncActionRequestClanOfficerList* GetDefaultObj();

	class USteamCoreFriendsAsyncActionRequestClanOfficerList* RequestClanOfficerListAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDClan, float Timeout);
	void HandleCallback(struct FClanOfficerListResponse& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom
class USteamCoreFriendsAsyncActionJoinClanChatRoom : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreFriendsAsyncActionJoinClanChatRoom* GetDefaultObj();

	class USteamCoreFriendsAsyncActionJoinClanChatRoom* JoinClanChatRoomAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDClan, float Timeout);
	void HandleCallback(struct FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList
class USteamCoreFriendsAsyncActionEnumerateFollowingList : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreFriendsAsyncActionEnumerateFollowingList* GetDefaultObj();

	void HandleCallback(struct FFriendsEnumerateFollowingList& Data, bool bWasSuccessful);
	class USteamCoreFriendsAsyncActionEnumerateFollowingList* EnumerateFollowingListAsync(class UObject* WorldContextObject, int32 StartIndex, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreFriendsAsyncActionIsFollowing
class USteamCoreFriendsAsyncActionIsFollowing : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreFriendsAsyncActionIsFollowing* GetDefaultObj();

	class USteamCoreFriendsAsyncActionIsFollowing* IsFollowingAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout);
	void HandleCallback(struct FFriendsIsFollowing& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount
class USteamCoreFriendsAsyncActionGetFollowerCount : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreFriendsAsyncActionGetFollowerCount* GetDefaultObj();

	void HandleCallback(struct FFriendsGetFollowerCount& Data, bool bWasSuccessful);
	class USteamCoreFriendsAsyncActionGetFollowerCount* GetFollowerCountAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout);
};

// 0x40 (0x78 - 0x38)
// Class SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation
class USteamCoreFriendsAsyncActionRequestUserInformation : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6C[0x30];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USteamCoreFriendsAsyncActionRequestUserInformation* GetDefaultObj();

	class USteamCoreFriendsAsyncActionRequestUserInformation* RequestUserInformationAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDUser, bool bRequireNameOnly, float Timeout);
	void HandleCallback();
};

// 0x150 (0x1B8 - 0x68)
// Class SteamCore.SteamGameSearch
class USteamGameSearch : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            SearchForGameProgressDelegate;                     // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SearchForGameResultDelegate;                       // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            RequestPlayersForGameProgressDelegate;             // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            RequestPlayersForGameResultDelegate;               // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            RequestPlayersForGameFinalResultDelegate;          // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SubmitPlayerResultResultDelegate;                  // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EndGameResultDelegate;                             // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_ECF[0xE0];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USteamGameSearch* GetDefaultObj();

	enum class ESteamGameSearchErrorCode SubmitPlayerResult(const class FString& UniqueGameID, const struct FSteamID& SteamIDPlayer, enum class ESteamPlayerResult PlayerResult);
	enum class ESteamGameSearchErrorCode SetGameHostParams(const class FString& Key, const TArray<class FString>& Values);
	enum class ESteamGameSearchErrorCode SetConnectionDetails(const class FString& ConnectionDetails);
	enum class ESteamGameSearchErrorCode SearchForGameWithLobby(const struct FSteamID& SteamIDLobby, int32 PlayerMin, int32 PlayerMax);
	enum class ESteamGameSearchErrorCode SearchForGameSolo(int32 PlayerMin, int32 PlayerMax);
	enum class ESteamGameSearchErrorCode RetrieveConnectionDetails(const struct FSteamID& SteamIDHost, class FString* ConnectionDetails, int32 NumConnectionDetails);
	enum class ESteamGameSearchErrorCode RequestPlayersForGame(int32 PlayerMin, int32 PlayerMax, int32 MaxTeamSize);
	enum class ESteamGameSearchErrorCode HostConfirmGameStart(const class FString& UniqueGameID);
	enum class ESteamGameSearchErrorCode EndGameSearch();
	enum class ESteamGameSearchErrorCode EndGame(const class FString& UniqueGameID);
	enum class ESteamGameSearchErrorCode DeclineGame();
	enum class ESteamGameSearchErrorCode CancelRequestPlayersForGame();
	enum class ESteamGameSearchErrorCode AddGameSearchParams(const class FString& KeyToFind, const TArray<class FString>& ValuesToFind);
	enum class ESteamGameSearchErrorCode AcceptGame();
};

// 0xF0 (0x158 - 0x68)
// Class SteamCore.SteamGameServer
class USteamGameServer : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            GSPolicyResponse;                                  // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GSClientGroupStatus;                               // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GSValidateAuthTicketResponse;                      // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GSClientApprove;                                   // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GSClientDeny;                                      // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6B[0xA0];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USteamGameServer* GetDefaultObj();

	bool WasRestartRequested();
	enum class ESteamUserHasLicenseForAppResult UserHasLicenseForApp(const struct FSteamID& SteamID, int32 AppID);
	void SetSpectatorServerName(const class FString& SpectatorServerName);
	void SetSpectatorPort(int32 SpectatorPort);
	void SetServerName(const class FString& ServerName);
	void SetRegion(const class FString& Region);
	void SetProduct(const class FString& Product);
	void SetPasswordProtected(bool bPasswordProtected);
	void SetModDir(const class FString& ModDir);
	void SetMaxPlayerCount(int32 PlayersMax);
	void SetMapName(const class FString& MapName);
	void SetKeyValue(const class FString& Key, const class FString& Value);
	void SetHeartbeatInterval(int32 HeartbeatInterval);
	void SetGameTags(const class FString& GameTags);
	void SetGameDescription(const class FString& GameDescription);
	void SetGameData(const class FString& GameData);
	void SetDedicatedServer(bool bDedicated);
	void SetBotPlayerCount(int32 BotPlayers);
	void SetAdvertiseServerActive(bool bActive);
	bool RequestUserGroupStatus(const struct FSteamID& SteamIDUser, const struct FSteamID& SteamIDGroup);
	void LogOnAnonymous();
	void LogOn(const class FString& Token);
	void LogOff();
	struct FSteamID GetServerSteamID_PureCompact();
	struct FSteamID GetServerSteamID_Pure();
	struct FSteamID GetServerSteamID();
	class FString GetServerPublicIP_PureCompact();
	class FString GetServerPublicIP_Pure();
	class FString GetServerPublicIP();
	struct FSteamTicketHandle GetAuthSessionTicket(TArray<uint8>* Ticket);
	void ForceHeartbeat();
	void EndAuthSession(const struct FSteamID& SteamID);
	void EnableHeartbeats(bool bActive);
	struct FSteamID CreateUnauthenticatedUserConnection();
	void ComputeNewPlayerCompatibility(FDelegateProperty_& Callback, const struct FSteamID& SteamIDNewPlayer);
	void ClearAllKeyValues();
	void CancelAuthTicket(const struct FSteamTicketHandle& TicketHandle);
	bool BUpdateUserData(const struct FSteamID& SteamIDUser, const class FString& PlayerName, int32 Score);
	bool BSecure();
	bool BLoggedOn();
	enum class ESteamBeginAuthSessionResult BeginAuthSession(const TArray<uint8>& Ticket, const struct FSteamID& SteamID);
	void AssociateWithClan(FDelegateProperty_& Callback, const struct FSteamID& SteamIDClan);
};

// 0x30 (0x98 - 0x68)
// Class SteamCore.GameServerStats
class UGameServerStats : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            GSStatsUnloaded;                                   // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA1[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameServerStats* GetDefaultObj();

	bool UpdateUserAvgRateStat(const struct FSteamID& SteamIDUser, const class FString& Name, float CountThisSession, float SessionLength);
	bool SetUserStatInt(const struct FSteamID& SteamIDUser, const class FString& Name, int32 Data);
	bool SetUserStatFloat(const struct FSteamID& SteamIDUser, const class FString& Name, float Data);
	bool SetUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name);
	void ServerStoreUserStats(FDelegateProperty_& Callback, const struct FSteamID& SteamIDUser);
	void ServerRequestUserStats(FDelegateProperty_& Callback, const struct FSteamID& SteamIDUser);
	bool GetUserStatInt(const struct FSteamID& SteamIDUser, const class FString& Name, int32* Data);
	bool GetUserStatFloat(const struct FSteamID& SteamIDUser, const class FString& Name, float* Data);
	bool GetUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name, bool* bAchieved);
	bool ClearUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name);
};

// 0x0 (0x68 - 0x68)
// Class SteamCore.Input
class UInput : public USteamCoreSubsystem
{
public:

	static class UClass* StaticClass();
	static class UInput* GetDefaultObj();

	void TriggerVibration(const struct FInputHandle& Handle, uint8 LeftSpeed, uint8 RightSpeed);
	void TriggerRepeatedHapticPulse(const struct FInputHandle& Handle, enum class ESteamCoreControllerPad TargetPad, uint8 DurationMicroSec, uint8 OffMicroSec, uint8 Repeat, uint8 Flags);
	void TriggerHapticPulse(const struct FInputHandle& Handle, enum class ESteamCoreControllerPad TargetPad, uint8 DurationMicroSec);
	enum class ESteamCoreInputActionOrigin TranslateActionOrigin(enum class ESteamCoreInputType DestinationInputType, enum class ESteamCoreInputActionOrigin SourceOrigin);
	void StopAnalogActionMomentum(const struct FInputHandle& Handle, const struct FInputAnalogActionHandle& EAction);
	bool Shutdown();
	bool ShowBindingPanel(const struct FInputHandle& Handle);
	void SetLEDColor(const struct FInputHandle& Handle, uint8 ColorR, uint8 ColorG, uint8 ColorB, enum class ESteamCoreInputLEDFlag Flags);
	bool Init();
	class FString GetStringForXboxOrigin(enum class ESteamCoreXboxOrigin Origin);
	class FString GetStringForActionOrigin(enum class ESteamCoreInputActionOrigin Origin);
	int32 GetRemotePlaySessionID(const struct FInputHandle& Handle);
	struct FInputMotionData GetMotionData(const struct FInputHandle& Handle);
	enum class ESteamCoreInputType GetInputTypeForHandle(const struct FInputHandle& Handle);
	class FString GetGlyphForXboxOrigin(enum class ESteamCoreXboxOrigin Origin);
	class FString GetGlyphForActionOrigin(enum class ESteamCoreInputActionOrigin Origin);
	int32 GetGamepadIndexForController(const struct FInputHandle& Handle);
	int32 GetDigitalActionOrigins(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetHandle, const struct FInputDigitalActionHandle& DigitalActionHandle, TArray<enum class ESteamCoreInputActionOrigin>* OriginsOut);
	struct FInputDigitalActionHandle GetDigitalActionHandle(const class FString& PszActionName);
	struct FInputDigitalActionData GetDigitalActionData(const struct FInputHandle& Handle, const struct FInputDigitalActionHandle& DigitalActionHandle);
	bool GetDeviceBindingRevision(const struct FInputHandle& Handle, int32* Major, int32* Minor);
	struct FInputActionSetHandle GetCurrentActionSet(const struct FInputHandle& Handle);
	struct FInputHandle GetControllerForGamepadIndex(int32 Index);
	int32 GetConnectedControllers(TArray<struct FInputHandle>* OutHandles);
	int32 GetAnalogActionOrigins(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetHandle, const struct FInputAnalogActionHandle& AnalogActionHandle, TArray<enum class ESteamCoreInputActionOrigin>* OriginsOut);
	struct FInputAnalogActionHandle GetAnalogActionHandle(const class FString& PszActionName);
	struct FInputAnalogActionData GetAnalogActionData(const struct FInputHandle& Handle, const struct FInputAnalogActionHandle& AnalogActionHandle);
	int32 GetActiveActionSetLayers(const struct FInputHandle& Handle, TArray<struct FInputActionSetHandle>* Data);
	struct FInputActionSetHandle GetActionSetHandle(const class FString& ActionSetName);
	enum class ESteamCoreInputActionOrigin GetActionOriginFromXboxOrigin(const struct FInputHandle& Handle, enum class ESteamCoreXboxOrigin Origin);
	void DeactivateAllActionSetLayers(const struct FInputHandle& Handle);
	void DeactivateActionSetLayer(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetLayerHandle);
	void ActivateActionSetLayer(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetLayerHandle);
	void ActivateActionSet(const struct FInputHandle& Handle, const struct FInputActionSetHandle& ActionSetHandle);
};

// 0x120 (0x188 - 0x68)
// Class SteamCore.Inventory
class UInventory : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            SteamInventoryResultReady;                         // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SteamInventoryDefinitionUpdate;                    // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SteamInventoryFullUpdate;                          // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SteamInventoryStartPurchaseResult;                 // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SteamInventoryRequestPricesResultDelegate;         // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SteamInventoryEligiblePromoItemDefIDs;             // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1126[0xC0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInventory* GetDefaultObj();

	bool TriggerItemDrop(struct FSteamInventoryResult* Result, const struct FSteamItemDef& ListDefinition);
	bool TransferItemQuantity(struct FSteamInventoryResult* Result, const struct FSteamItemInstanceID& ItemIDSource, int32 Quantity, const struct FSteamItemInstanceID& ItemIDDest);
	bool SubmitUpdateProperties(const struct FSteamInventoryUpdateHandle& Handle, struct FSteamInventoryResult* ResultHandle);
	struct FSteamInventoryUpdateHandle StartUpdateProperties();
	void StartPurchase(FDelegateProperty_& Callback, const TArray<struct FSteamItemDef>& ItemDefs, const TArray<int32>& Quantity);
	bool SetPropertyString(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, const class FString& Value);
	bool SetPropertyInt(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, int32 Value);
	bool SetPropertyFloat(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, float Value);
	bool SetPropertyBool(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName, bool bValue);
	bool SerializeResult(const struct FSteamInventoryResult& Handle, TArray<uint8>* Buffer);
	void RequestPrices(FDelegateProperty_& Callback);
	void RequestEligiblePromoItemDefinitionsIDs(FDelegateProperty_& Callback, const struct FSteamID& SteamID);
	bool RemoveProperty(const struct FSteamInventoryUpdateHandle& Handle, const struct FSteamItemInstanceID& ItemId, const class FString& PropertyName);
	bool LoadItemDefinitions();
	bool GrantPromoItems(struct FSteamInventoryResult* Result);
	int32 GetResultTimestamp(const struct FSteamInventoryResult& Handle);
	enum class ESteamResult GetResultStatus(const struct FSteamInventoryResult& Handle);
	bool GetResultItems(const struct FSteamInventoryResult& Handle, TArray<struct FSteamItemDetails>* Items);
	bool GetResultItemProperty(const struct FSteamInventoryResult& Handle, int32 ItemIndex, const class FString& PropertyName, class FString* Value);
	int32 GetNumItemsWithPrices();
	bool GetItemsWithPrices(TArray<struct FSteamItemDef>* ItemDefs, TArray<int32>* Prices, TArray<int32>* BasePrices);
	bool GetItemsByID(struct FSteamInventoryResult* InventoryResult, const TArray<struct FSteamItemInstanceID>& InstanceIDs);
	bool GetItemPrice(const struct FSteamItemDef& ItemDef, int32* Price, int32* BasePrice);
	bool GetItemDefinitionProperty(const struct FSteamItemDef& ItemDef, const class FString& PropertyName, class FString* Value);
	bool GetItemDefinitionIDs(TArray<struct FSteamItemDef>* ItemDefs);
	bool GetEligiblePromoItemDefinitionIDs(const struct FSteamID& SteamID, TArray<struct FSteamItemDef>* ItemDefs);
	bool GetAllItems(struct FSteamInventoryResult* Handle);
	bool GenerateItems(struct FSteamInventoryResult* Result, const TArray<struct FSteamItemDef>& ItemDefs, const TArray<int32>& Quantity);
	bool ExchangeItems(struct FSteamInventoryResult* Result, const TArray<struct FSteamItemDef>& ArrayGenerate, const TArray<int32>& ArrayGenerateQuantity, const TArray<struct FSteamItemInstanceID>& ArrayDestroy, const TArray<int32>& ArrayDestroyQuantity);
	void DestroyResult(const struct FSteamInventoryResult& Handle);
	bool DeserializeResult(struct FSteamInventoryResult* Result, const TArray<uint8>& Buffer, bool bReservedMustBeFalse);
	bool ConsumeItem(struct FSteamInventoryResult* Result, const struct FSteamItemInstanceID& ItemConsume, int32 Quantity);
	bool CheckResultSteamID(const struct FSteamInventoryResult& Handle, const struct FSteamID& SteamIDExpected);
	bool AddPromoItems(struct FSteamInventoryResult* OutResult, const TArray<struct FSteamItemDef>& ItemDefs);
	bool AddPromoItem(struct FSteamInventoryResult* Result, const struct FSteamItemDef& ItemDef);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs
class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* GetDefaultObj();

	class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDsAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout);
	void HandleCallback(struct FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult
class USteamCoreInventoryAsyncActionRequestPricesResult : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreInventoryAsyncActionRequestPricesResult* GetDefaultObj();

	class USteamCoreInventoryAsyncActionRequestPricesResult* RequestPricesAsync(class UObject* WorldContextObject, float Timeout);
	void HandleCallback(struct FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult
class USteamCoreInventoryAsyncActionStartPurchaseResult : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreInventoryAsyncActionStartPurchaseResult* GetDefaultObj();

	class USteamCoreInventoryAsyncActionStartPurchaseResult* StartPurchaseAsync(class UObject* WorldContextObject, const TArray<struct FSteamItemDef>& ItemDefs, const TArray<int32>& Quantity, float Timeout);
	void HandleCallback(struct FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful);
};

// 0x1B0 (0x218 - 0x68)
// Class SteamCore.Matchmaking
class UMatchmaking : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            FavoritesListAccountsUpdated;                      // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            FavoritesListChanged;                              // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LobbyChatMsg;                                      // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LobbyChatUpdate;                                   // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LobbyDataUpdate;                                   // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LobbyEnter;                                        // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LobbyGameCreated;                                  // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LobbyInvite;                                       // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LobbyKicked;                                       // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1200[0x120];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMatchmaking* GetDefaultObj();

	bool SetLobbyType(const struct FSteamID& SteamIDLobby, enum class ESteamLobbyType LobbyType);
	bool SetLobbyOwner(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDNewOwner);
	bool SetLobbyMemberLimit(const struct FSteamID& SteamIDLobby, int32 MaxMembers);
	void SetLobbyMemberData(const struct FSteamID& SteamIDLobby, const class FString& Key, const class FString& Value);
	bool SetLobbyJoinable(const struct FSteamID& SteamIDLobby, bool bLobbyJoinable);
	void SetLobbyGameServer(const struct FSteamID& SteamIDLobby, const class FString& GameServerIP, int32 GameServerPort, const struct FSteamID& SteamIDGameServer);
	bool SetLobbyData(const struct FSteamID& SteamIDLobby, const class FString& Key, const class FString& Value);
	bool SetLinkedLobby(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDLobbyDependent);
	bool SendLobbyChatMsg(const struct FSteamID& SteamIDLobby, const class FString& Message);
	void RequestLobbyList(FDelegateProperty_& Callback);
	bool RequestLobbyData(const struct FSteamID& SteamIDLobby);
	bool RemoveFavoriteGame(int32 AppID, const class FString& IP, int32 ConnectionPort, int32 QueryPort, const TArray<enum class ESteamFavoriteFlags>& Flags);
	void LeaveLobby(const struct FSteamID& SteamIDLobby);
	void JoinLobby(FDelegateProperty_& Callback, const struct FSteamID& SteamIDLobby);
	bool InviteUserToLobby(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDInvitee);
	int32 GetNumLobbyMembers(const struct FSteamID& SteamIDLobby);
	struct FSteamID GetLobbyOwner(const struct FSteamID& SteamIDLobby);
	int32 GetLobbyMemberLimit(const struct FSteamID& SteamIDLobby);
	class FString GetLobbyMemberData(const struct FSteamID& SteamIDLobby, const struct FSteamID& SteamIDUser, const class FString& Key);
	struct FSteamID GetLobbyMemberByIndex(const struct FSteamID& SteamIDLobby, int32 Member);
	bool GetLobbyGameServer(const struct FSteamID& SteamIDLobby, class FString* GameServerIP, int32* GameServerPort, struct FSteamID* SteamIDGameServer);
	int32 GetLobbyDataCount(const struct FSteamID& SteamIDLobby);
	bool GetLobbyDataByIndex(const struct FSteamID& SteamIDLobby, int32 LobbyData, class FString* Key, class FString* Value);
	class FString GetLobbyData(const struct FSteamID& SteamIDLobby, const class FString& Key);
	int32 GetLobbyChatEntry(const struct FSteamID& SteamIDLobby, int32 MessageID, struct FSteamID* SteamIDUser, class FString* Message, enum class ESteamChatEntryType* ChatEntryType);
	struct FSteamID GetLobbyByIndex(int32 Lobby);
	int32 GetFavoriteGameCount();
	bool GetFavoriteGame(int32 Game, int32* AppID, class FString* IP, int32* ConnectionPort, int32* QueryPort, TArray<enum class ESteamFavoriteFlags>* Flags, int32* TimeLastPlayedOnServer);
	bool DeleteLobbyData(const struct FSteamID& SteamIDLobby, const class FString& Key);
	void CreateLobby(FDelegateProperty_& Callback, enum class ESteamLobbyType LobbyType, int32 MaxMembers);
	void AddRequestLobbyListStringFilter(const class FString& KeyToMatch, const class FString& ValueToMatch, enum class ESteamLobbyComparison ComparisonType);
	void AddRequestLobbyListResultCountFilter(int32 MaxResults);
	void AddRequestLobbyListNumericalFilter(const class FString& KeyToMatch, int32 ValueToMatch, enum class ESteamLobbyComparison ComparisonType);
	void AddRequestLobbyListNearValueFilter(const class FString& KeyToMatch, int32 ValueToBeCloseTo);
	void AddRequestLobbyListFilterSlotsAvailable(int32 SlotsAvailable);
	void AddRequestLobbyListDistanceFilter(enum class ESteamLobbyDistanceFilter LobbyDistanceFilter);
	void AddRequestLobbyListCompatibleMembersFilter(const struct FSteamID& SteamIDLobby);
	int32 AddFavoriteGame(int32 AppID, const class FString& IP, int32 ConnectionPort, int32 QueryPort, const TArray<enum class ESteamFavoriteFlags>& Flags, int32 TimeLastPlayedOnServer);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby
class USteamCoreMatchmakingAsyncActionCreateLobby : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreMatchmakingAsyncActionCreateLobby* GetDefaultObj();

	void HandleCallback(struct FCreateLobbyData& Data, bool bWasSuccessful);
	class USteamCoreMatchmakingAsyncActionCreateLobby* CreateLobbyAsync(class UObject* WorldContextObject, enum class ESteamLobbyType LobbyType, int32 MaxMembers, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList
class USteamCoreMatchmakingAsyncActionRequestLobbyList : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreMatchmakingAsyncActionRequestLobbyList* GetDefaultObj();

	class USteamCoreMatchmakingAsyncActionRequestLobbyList* RequestLobbyListAsync(class UObject* WorldContextObject, float Timeout);
	void HandleCallback(struct FLobbyMatchList& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby
class USteamCoreMatchmakingAsyncActionJoinLobby : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreMatchmakingAsyncActionJoinLobby* GetDefaultObj();

	class USteamCoreMatchmakingAsyncActionJoinLobby* JoinLobbyAsync(class UObject* WorldContextObject, const struct FSteamID& SteamIDLobby, float Timeout);
	void HandleCallback(struct FJoinLobbyData& Data, bool bWasSuccessful);
};

// 0x120 (0x158 - 0x38)
// Class SteamCore.SteamCoreCreateSession
class USteamCoreCreateSession : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1261[0x100];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USteamCoreCreateSession* GetDefaultObj();

	class USteamCoreCreateSession* CreateSteamCoreSession(class UObject* WorldContextObject, TMap<class FString, struct FSteamSessionSetting> SessionSettings, const class FString& SessionName, int32 MaxPlayers, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, float Timeout);
};

// 0xA0 (0xD8 - 0x38)
// Class SteamCore.SteamCoreFindSession
class USteamCoreFindSession : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_126D[0x90];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USteamCoreFindSession* GetDefaultObj();

	void OnCompleted(bool bSuccessful);
	class USteamCoreFindSession* FindSteamCoreSessions(class UObject* WorldContextObject, TMap<class FString, struct FSteamSessionSearchSetting> SearchSettings, int32 MaxResults, bool bUseLAN, enum class ESteamSessionFindType ServerType, bool bEmptyServersOnly, bool bSecureServersOnly, float Timeout);
};

// 0x40 (0x78 - 0x38)
// Class SteamCore.SteamCoreDestroySession
class USteamCoreDestroySession : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1274[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USteamCoreDestroySession* GetDefaultObj();

	void OnCompleted(class FName SessionName, bool bWasSuccessful);
	class USteamCoreDestroySession* DestroySteamCoreSession(class UObject* WorldContextObject, float Timeout);
};

// 0x30 (0x68 - 0x38)
// Class SteamCore.SteamCoreUpdateSession
class USteamCoreUpdateSession : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1281[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USteamCoreUpdateSession* GetDefaultObj();

	class USteamCoreUpdateSession* UpdateSteamCoreSession(class UObject* WorldContextObject, TMap<class FString, struct FSteamSessionSearchSetting> Settings, const class FString& SessionName, int32 MaxPlayers);
	void OnCompleted(class FName SessionName, bool bWasSuccessful);
};

// 0x0 (0x68 - 0x68)
// Class SteamCore.MatchmakingServers
class UMatchmakingServers : public USteamCoreSubsystem
{
public:

	static class UClass* StaticClass();
	static class UMatchmakingServers* GetDefaultObj();

	void ServerRules(FDelegateProperty_& Callback, const class FString& IP, int32 QueryPort);
	void RequestSpectatorServerList(FDelegateProperty_& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	void RequestLANServerList(FDelegateProperty_& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	void RequestInternetServerList(FDelegateProperty_& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	void RequestHistoryServerList(FDelegateProperty_& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	void RequestFriendsServerList(FDelegateProperty_& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	void RequestFavoritesServerList(FDelegateProperty_& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	void PingServer(FDelegateProperty_& Callback, const class FString& IP, int32 QueryPort);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer
class USteamCoreMatchmakingServersAsyncActionPingServer : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreMatchmakingServersAsyncActionPingServer* GetDefaultObj();

	class USteamCoreMatchmakingServersAsyncActionPingServer* PingServerAsync(class UObject* WorldContextObject, const class FString& IP, int32 Port, float Timeout);
	void HandleCallback(struct FGameServerItem& Data, bool bWasSuccessful);
	void CancelPingQueries(class UObject* WorldContextObject);
};

// 0x20 (0x58 - 0x38)
// Class SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList
class USteamCoreMatchmakingServersAsyncActionRequestServerList : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRefreshCompleted;                                // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreMatchmakingServersAsyncActionRequestServerList* GetDefaultObj();

	class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestSpectatorServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestLANServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestInternetServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestHistoryServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFriendsServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFavoritesServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
	void HandleServerListFinished();
	void HandleCallback(struct FGameServerItem& Data);
	void CancelServerListQueries(class UObject* WorldContextObject);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules
class USteamCoreMatchmakingServersAsyncActionServerRules : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreMatchmakingServersAsyncActionServerRules* GetDefaultObj();

	class USteamCoreMatchmakingServersAsyncActionServerRules* ServerRulesAsync(class UObject* WorldContextObject, const class FString& IP, int32 QueryPort, float Timeout);
	void HandleCallback(TArray<struct FGameServerRule>& Data, bool bWasSuccessful);
	void CancelServerRulesQueries(class UObject* WorldContextObject);
};

// 0x10 (0x38 - 0x28)
// Class SteamCore.ServerFilter
class UServerFilter : public UObject
{
public:
	uint8                                        Pad_1349[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UServerFilter* GetDefaultObj();

	TMap<class FString, class FString> GetFilters();
	void AddFilterWhitelisted();
	void AddFilterVersion(const class FString& Value);
	void AddFilterSecure();
	void AddFilterProxy();
	void AddFilterPassword();
	void AddFilterOr(const class FString& Value);
	void AddFilterNotFull();
	void AddFilterNotAppId(const class FString& Value);
	void AddFilterNor(const class FString& Value);
	void AddFilterNoPlayers();
	void AddFilterNand(const class FString& Value);
	void AddFilterName(const class FString& Value);
	void AddFilterMap(const class FString& Value);
	void AddFilterLinux();
	void AddFilterHasPlayers();
	void AddFilterGameTagsNor(const class FString& Value);
	void AddFilterGameTagsAnd(const class FString& Value);
	void AddFilterGameDataOr(const class FString& Value);
	void AddFilterGameDataNor(const class FString& Value);
	void AddFilterGameDataAnd(const class FString& Value);
	void AddFilterGameAddr(const class FString& Value);
	void AddFilterDedicated();
	void AddFilterAnd(const class FString& Value);
};

// 0x60 (0xC8 - 0x68)
// Class SteamCore.Music
class UMusic : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            PlaybackStatusHasChanged;                          // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            VolumeHasChanged;                                  // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1353[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMusic* GetDefaultObj();

	void SetVolume(float FlVolume);
	void PlayPrevious();
	void PlayNext();
	void Play();
	void Pause();
	float GetVolume();
	enum class ESteamAudioPlaybackStatus GetPlaybackStatus();
	bool BIsPlaying();
	bool bIsEnabled();
};

// 0x60 (0xC8 - 0x68)
// Class SteamCore.Networking
class UNetworking : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnP2PSessionRequestDelegate;                       // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnP2PSessionConnectFailDelegate;                   // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_136F[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNetworking* GetDefaultObj();

	bool SendP2PPacket(const struct FSteamID& SteamIDRemote, const TArray<uint8>& Data, enum class ESteamP2PSend P2PSendType, int32 Channel);
	bool ReadP2PPacket(TArray<uint8>* Data, struct FSteamID* OutSteamIdRemote, int32 MessageSize, int32 Channel);
	bool IsP2PPacketAvailable(int32* MessageSize, int32 Channel);
	bool GetP2PSessionState(const struct FSteamID& SteamIDRemote, struct FSteamP2PSessionState* ConnectionState);
	bool CloseP2PSessionWithUser(const struct FSteamID& SteamIDRemote);
	bool CloseP2PChannelWithUser(const struct FSteamID& SteamIDRemote, int32 Channel);
	bool AllowP2PPacketRelay(bool bAllow);
	bool AcceptP2PSessionWithUser(const struct FSteamID& SteamIDRemote);
};

// 0x0 (0x68 - 0x68)
// Class SteamCore.NetworkingUtils
class UNetworkingUtils : public USteamCoreSubsystem
{
public:

	static class UClass* StaticClass();
	static class UNetworkingUtils* GetDefaultObj();

	bool ParsePingLocationString(const class FString& String, struct FSteamNetworkPingLocation* Result);
	void InitRelayNetworkAccess();
	float GetLocalPingLocation(struct FSteamNetworkPingLocation* Result);
	int32 EstimatePingTimeFromLocalHost(struct FSteamNetworkPingLocation& RemoteLocation);
	int32 EstimatePingTimeBetweenTwoLocations(struct FSteamNetworkPingLocation& Location1, struct FSteamNetworkPingLocation& Location2);
	void ConvertPingLocationToString(struct FSteamNetworkPingLocation& Location, class FString* String);
	bool CheckPingDataUpToDate(float MaxAgeSeconds);
};

// 0x0 (0x68 - 0x68)
// Class SteamCore.ParentalSettings
class UParentalSettings : public USteamCoreSubsystem
{
public:

	static class UClass* StaticClass();
	static class UParentalSettings* GetDefaultObj();

	bool BIsParentalLockLocked();
	bool BIsParentalLockEnabled();
	bool BIsFeatureInBlockList(enum class ESteamParentalFeature Feature);
	bool BIsFeatureBlocked(enum class ESteamParentalFeature Feature);
	bool BIsAppInBlockList(int32 AppID);
	bool BIsAppBlocked(int32 AppID);
};

// 0x120 (0x188 - 0x68)
// Class SteamCore.SteamParties
class USteamParties : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            JoinPartyDelegate;                                 // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            CreateBeaconDelegate;                              // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ReservationNotificationDelegate;                   // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ChangeNumOpenSlotsDelegate;                        // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            AvailableBeaconLocationsDelegate;                  // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ActiveBeaconsDelegate;                             // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F7[0xC0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USteamParties* GetDefaultObj();

	void OnReservationCompleted(const struct FPartyBeaconID& BeaconID, const struct FSteamID& SteamIDUser);
	void JoinParty(FDelegateProperty_& Callback, const struct FPartyBeaconID& BeaconID);
	bool GetNumAvailableBeaconLocations(int32* NumLocations);
	int32 GetNumActiveBeacons();
	bool GetBeaconLocationData(const struct FSteamPartyBeaconLocation& BeaconLocation, enum class ESteamPartiesBeaconLocationData EData, class FString* PCHDataStringOut);
	bool GetBeaconDetails(const struct FPartyBeaconID& BeaconID, struct FSteamID* SteamIDBeaconOwner, struct FSteamPartyBeaconLocation* Location, class FString* OutMetadata);
	struct FPartyBeaconID GetBeaconByIndex(int32 Index);
	bool GetAvailableBeaconLocations(TArray<struct FSteamPartyBeaconLocation>* LocationList, int32 MaxNumLocations);
	bool DestroyBeacon(const struct FPartyBeaconID& BeaconID);
	void CreateBeacon(FDelegateProperty_& Callback, int32 OpenSlots, const struct FSteamPartyBeaconLocation& BeaconLocation, const class FString& ConnectString, const class FString& MetaData);
	void ChangeNumOpenSlots(FDelegateProperty_& Callback, const struct FPartyBeaconID& BeaconID, int32 OpenSlots);
	void CancelReservation(const struct FPartyBeaconID& BeaconID, const struct FSteamID& SteamIDUser);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty
class USteamCoreSteamPartiesAsyncActionJoinParty : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreSteamPartiesAsyncActionJoinParty* GetDefaultObj();

	class USteamCoreSteamPartiesAsyncActionJoinParty* JoinPartyAsync(class UObject* WorldContextObject, const struct FPartyBeaconID& BeaconID, float Timeout);
	void HandleCallback(struct FJoinPartyData& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon
class USteamCoreSteamPartiesAsyncActionCreateBeacon : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreSteamPartiesAsyncActionCreateBeacon* GetDefaultObj();

	void HandleCallback(struct FCreateBeaconData& Data, bool bWasSuccessful);
	class USteamCoreSteamPartiesAsyncActionCreateBeacon* CreateBeaconAsync(class UObject* WorldContextObject, int32 OpenSlots, const struct FSteamPartyBeaconLocation& BeaconLocation, const class FString& ConnectString, const class FString& MetaData, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots
class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* GetDefaultObj();

	void HandleCallback(struct FChangeNumOpenSlotsData& Data, bool bWasSuccessful);
	class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* ChangeNumOpenSlotsAsync(class UObject* WorldContextObject, const struct FPartyBeaconID& BeaconID, int32 OpenSlots, float Timeout);
};

// 0x60 (0xC8 - 0x68)
// Class SteamCore.RemotePlay
class URemotePlay : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            SteamRemotePlaySessionConnected;                   // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SteamRemotePlaySessionDisconnected;                // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EA[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URemotePlay* GetDefaultObj();

	struct FSteamID GetSessionSteamID(int32 SessionId);
	int32 GetSessionId(int32 SessionIndex);
	int32 GetSessionCount();
	class FString GetSessionClientName(int32 SessionId);
	enum class ESteamCoreDeviceFormFactor GetSessionClientFormFactor(int32 SessionId);
	bool BSendRemotePlayTogetherInvite(const struct FSteamID& SteamIDFriend);
	bool BGetSessionClientResolution(int32 SessionId, int32* ResolutionX, int32* ResolutionY);
};

// 0xC0 (0x128 - 0x68)
// Class SteamCore.RemoteStorage
class URemoteStorage : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            RemoteStorageUnsubscribePublishedFileResult;       // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            RemoteStorageSubscribePublishedFileResult;         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            RemoteStoragePublishedFileUnsubscribed;            // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            RemoteStoragePublishedFileSubscribed;              // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B7[0x80];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URemoteStorage* GetDefaultObj();

	int32 UGCRead(const struct FSteamUGCHandle& Content, TArray<uint8>* OutData, int32 DataToRead, int32 Offset, enum class ESteamUGCReadAction Action);
	void UGCDownloadToLocation(FDelegateProperty_& Callback, const struct FSteamUGCHandle& Content, const class FString& Location, int32 Priority);
	void UGCDownload(FDelegateProperty_& Callback, const struct FSteamUGCHandle& Content, int32 Priority);
	bool SetSyncPlatforms(const class FString& File, enum class ESteamRemoteStoragePlatform RemoteStoragePlatform);
	void SetCloudEnabledForApp(bool bEnabled);
	bool IsCloudEnabledForApp();
	bool IsCloudEnabledForAccount();
	bool GetUGCDownloadProgress(const struct FSteamUGCHandle& Handle, int32* BytesDownloaded, int32* BytesExpected);
	bool GetUGCDetails(const struct FSteamUGCHandle& Handle, int32* AppID, class FString* Name, int32* FileSizeInBytes, struct FSteamID* SteamIDOwner);
	enum class ESteamRemoteStoragePlatform GetSyncPlatforms(const class FString& File);
	bool GetQuota(int32* TotalBytes, int32* AvailableBytes);
	int32 GetFileTimestamp(const class FString& File);
	int32 GetFileSize(const class FString& File);
	class FString GetFileNameAndSize(int32 File, int32* FileSizeInBytes);
	int32 GetFileCount();
	struct FSteamUGCHandle GetCachedUGCHandle(int32 ICachedContent);
	int32 GetCachedUGCCount();
	bool FileWriteStreamWriteChunk(const struct FUGCFileWriteStreamHandle& Handle, const TArray<uint8>& Data);
	struct FUGCFileWriteStreamHandle FileWriteStreamOpen(const class FString& File);
	bool FileWriteStreamClose(const struct FUGCFileWriteStreamHandle& Handle);
	bool FileWriteStreamCancel(const struct FUGCFileWriteStreamHandle& Handle);
	void FileWriteAsync(FDelegateProperty_& Callback, const class FString& File, const TArray<uint8>& Data);
	bool FileWrite(const class FString& File, const TArray<uint8>& Data);
	void FileShare(FDelegateProperty_& Callback, const class FString& File);
	bool FileReadAsyncComplete(const struct FRemoteStorageFileReadAsyncComplete& ReadCall, TArray<uint8>* Buffer, int32 BytesToRead);
	void FileReadAsync(FDelegateProperty_& Callback, const class FString& File, int32 Offset, int32 BytesToRead);
	int32 FileRead(const class FString& File, TArray<uint8>* Buffer, int32 DataToRead);
	bool FilePersisted(const class FString& File);
	bool FileForget(const class FString& File);
	bool FileExists(const class FString& File);
	bool FileDelete(const class FString& File);
};

// 0x60 (0xC8 - 0x68)
// Class SteamCore.Screenshots
class UScreenshots : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            ScreenshotReady;                                   // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ScreenshotRequested;                               // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FE[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UScreenshots* GetDefaultObj();

	struct FScreenshotHandle WriteScreenshot(const TArray<uint8>& PubRGB, int32 Width, int32 Height);
	void TriggerScreenshot();
	bool TagUser(const struct FScreenshotHandle& Handle, const struct FSteamID& SteamID);
	bool TagPublishedFile(const struct FScreenshotHandle& Handle, const struct FPublishedFileID& PublishedFileID);
	bool SetLocation(const struct FScreenshotHandle& Handle, const class FString& Location);
	bool IsScreenshotsHooked();
	void HookScreenshots(bool bHook);
	struct FScreenshotHandle AddVRScreenshotToLibrary(enum class ESteamVRScreenshotType EType, const class FString& Filename, const class FString& VRFileName);
	struct FScreenshotHandle AddScreenshotToLibrary(const class FString& Filename, const class FString& ThumbnailFilename, int32 Width, int32 Height);
};

// 0x60 (0xC8 - 0x68)
// Class SteamCore.UGC
class UUGC : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            ItemInstalled;                                     // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            DownloadItemResult;                                // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAC[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUGC* GetDefaultObj();

	bool UpdateItemPreviewVideo(const struct FUGCUpdateHandle& Handle, int32 Index, const class FString& PreviewVideo);
	bool UpdateItemPreviewFile(const struct FUGCUpdateHandle& Handle, int32 Index, const class FString& PreviewFile);
	void UnsubscribeItem(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID);
	void SuspendDownloads(bool bSuspend);
	void SubscribeItem(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID);
	void SubmitItemUpdate(FDelegateProperty_& Callback, const struct FUGCUpdateHandle& Handle, const class FString& ChangeNote);
	void StopPlaytimeTrackingForAllItems(FDelegateProperty_& Callback);
	void StopPlaytimeTracking(FDelegateProperty_& Callback, const TArray<struct FPublishedFileID>& PublishedFileIDs);
	void StartPlaytimeTracking(FDelegateProperty_& Callback, const TArray<struct FPublishedFileID>& PublishedFileID);
	struct FUGCUpdateHandle StartItemUpdate(int32 ConsumerAppID, const struct FPublishedFileID& PublishedFileID);
	void SetUserItemVote(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID, bool bVoteUp);
	bool SetSearchText(const struct FUGCQueryHandle& Handle, const class FString& SearchText);
	bool SetReturnTotalOnly(const struct FUGCQueryHandle& Handle, bool bReturnTotalOnly);
	bool SetReturnPlaytimeStats(const struct FUGCQueryHandle& Handle, int32 Days);
	bool SetReturnOnlyIDs(const struct FUGCQueryHandle& Handle, bool bReturnOnlyIDs);
	bool SetReturnMetadata(const struct FUGCQueryHandle& Handle, bool bReturnMetadata);
	bool SetReturnLongDescription(const struct FUGCQueryHandle& Handle, bool bReturnLongDescription);
	bool SetReturnKeyValueTags(const struct FUGCQueryHandle& Handle, bool bReturnKeyValueTags);
	bool SetReturnChildren(const struct FUGCQueryHandle& Handle, bool bReturnChildren);
	bool SetReturnAdditionalPreviews(const struct FUGCQueryHandle& Handle, bool bReturnAdditionalPreviews);
	bool SetRankedByTrendDays(const struct FUGCQueryHandle& Handle, int32 Days);
	bool SetMatchAnyTag(const struct FUGCQueryHandle& Handle, bool bMatchAnyTag);
	bool SetLanguage(const struct FUGCQueryHandle& Handle, const class FString& Language);
	bool SetItemVisibility(const struct FUGCUpdateHandle& Handle, enum class ESteamRemoteStoragePublishedFileVisibility Visibility);
	bool SetItemUpdateLanguage(const struct FUGCUpdateHandle& Handle, const class FString& Language);
	bool SetItemTitle(const struct FUGCUpdateHandle& Handle, const class FString& Title);
	bool SetItemTags(const struct FUGCUpdateHandle& Handle, const TArray<class FString>& Tags);
	bool SetItemPreview(const struct FUGCUpdateHandle& Handle, const class FString& PreviewFile);
	bool SetItemMetadata(const struct FUGCUpdateHandle& Handle, const class FString& MetaData);
	bool SetItemDescription(const struct FUGCUpdateHandle& Handle, const class FString& Description);
	bool SetItemContent(const struct FUGCUpdateHandle& Handle, const class FString& ContentFolder);
	bool SetCloudFileNameFilter(const struct FUGCQueryHandle& Handle, const class FString& MatchCloudFileName);
	bool SetAllowLegacyUpload(const struct FUGCUpdateHandle& Handle, bool bAllowLegacyUpload);
	bool SetAllowCachedResponse(const struct FUGCQueryHandle& Handle, int32 MaxAgeSeconds);
	void SendQueryUGCRequest(FDelegateProperty_& Callback, const struct FUGCQueryHandle& Handle);
	bool RemoveItemPreview(const struct FUGCUpdateHandle& Handle, int32 Index);
	bool RemoveItemKeyValueTags(const struct FUGCUpdateHandle& Handle, const class FString& Key);
	void RemoveItemFromFavorites(FDelegateProperty_& Callback, int32 AppID, const struct FPublishedFileID& PublishedFileID);
	void RemoveDependency(FDelegateProperty_& Callback, const struct FPublishedFileID& ParentPublishedFileID, const struct FPublishedFileID& ChildPublishedFileId);
	void RemoveAppDependency(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID, int32 AppID);
	bool ReleaseQueryUGCRequest(const struct FUGCQueryHandle& Handle);
	void GetUserItemVote(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID);
	int32 GetSubscribedItems(TArray<struct FPublishedFileID>* PublishedFileIDs, int32 MaxEntries);
	bool GetQueryUGCTagDisplayName(const struct FUGCQueryHandle& Handle, int32 Index, int32 IndexTag, class FString* Value);
	bool GetQueryUGCTag(const struct FUGCQueryHandle& Handle, int32 Index, int32 IndexTag, class FString* Value);
	bool GetQueryUGCStatistic(const struct FUGCQueryHandle& Handle, int32 Index, enum class ESteamItemStatistic StatType, class FString* StatValue);
	bool GetQueryUGCResult(const struct FUGCQueryHandle& Handle, int32 Index, struct FSteamUGCDetails* Details);
	bool GetQueryUGCPreviewURL(const struct FUGCQueryHandle& Handle, int32 Index, class FString* URL);
	int32 GetQueryUGCNumTags(const struct FUGCQueryHandle& Handle, int32 Index);
	int32 GetQueryUGCNumKeyValueTags(const struct FUGCQueryHandle& Handle, int32 Index);
	int32 GetQueryUGCNumAdditionalPreviews(const struct FUGCQueryHandle& Handle, int32 Index);
	bool GetQueryUGCMetadata(const struct FUGCQueryHandle& Handle, int32 Index, class FString* MetaData, int32 MetadataSize);
	bool GetQueryUGCKeyValueTag(const struct FUGCQueryHandle& Handle, int32 Index, int32 KeyValueTagIndex, class FString* Key, class FString* Value);
	bool GetQueryUGCChildren(const struct FUGCQueryHandle& Handle, int32 Index, TArray<struct FPublishedFileID>* PublishedFileIDs, int32 MaxEntries);
	bool GetQueryUGCAdditionalPreview(const struct FUGCQueryHandle& Handle, int32 Index, int32 PreviewIndex, class FString* URLOrVideoID, class FString* OriginalFileName, enum class ESteamItemPreviewType* PreviewType);
	int32 GetNumSubscribedItems();
	enum class ESteamItemUpdateStatus GetItemUpdateProgress(const struct FUGCUpdateHandle& Handle, int32* BytesProcessed, int32* BytesTotal);
	int32 GetItemState(const struct FPublishedFileID& PublishedFileID, TArray<enum class ESteamItemState>* States);
	bool GetItemInstallInfo(const struct FPublishedFileID& PublishedFileID, int32* SizeOnDisk, class FString* Folder, int32* Timestamp);
	bool GetItemDownloadInfo(const struct FPublishedFileID& PublishedFileID, int32* BytesDownloaded, int32* BytesTotal);
	void GetAppDependencies(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID);
	bool DownloadItem(const struct FPublishedFileID& PublishedFileID, bool bHighPriority);
	void DeleteItem(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID);
	struct FUGCQueryHandle CreateQueryUserUGCRequest(const struct FSteamID& SteamID, enum class ESteamUserUGCList ListType, enum class ESteamUGCMatchingUGCType MatchingUGCType, enum class ESteamUserUGCListSortOrder SortOrder, int32 CreatorAppID, int32 ConsumerAppID, int32 Page);
	struct FUGCQueryHandle CreateQueryUGCDetailsRequest(const TArray<struct FPublishedFileID>& PublishedFileIDs);
	struct FUGCQueryHandle CreateQueryAllUGCRequest(enum class ESteamUGCQuery QueryType, enum class ESteamUGCMatchingUGCType FileType, int32 CreatorAppID, int32 ConsumerAppID, int32 Page);
	void CreateItem(FDelegateProperty_& Callback, int32 ConsumerAppID, enum class ESteamWorkshopFileType FileType);
	bool BInitWorkshopForGameServer(int32 WorkshopDepotID, const class FString& Folder);
	bool AddRequiredTagGroup(const struct FUGCQueryHandle& Handle, const TArray<class FString>& TagGroups);
	bool AddRequiredTag(const struct FUGCQueryHandle& Handle, const class FString& TagName);
	bool AddRequiredKeyValueTag(const struct FUGCQueryHandle& Handle, const class FString& Key, const class FString& Value);
	void AddItemToFavorites(FDelegateProperty_& Callback, int32 AppID, const struct FPublishedFileID& PublishedFileID);
	bool AddItemPreviewVideo(const struct FUGCUpdateHandle& Handle, const class FString& VideoID);
	bool AddItemPreviewFile(const struct FUGCUpdateHandle& Handle, const class FString& PreviewFile, enum class ESteamItemPreviewType Type);
	bool AddItemKeyValueTag(const struct FUGCUpdateHandle& Handle, const class FString& Key, const class FString& Value);
	bool AddExcludedTag(const struct FUGCQueryHandle& Handle, const class FString& TagName);
	void AddDependency(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId);
	void AddAppDependency(FDelegateProperty_& Callback, const struct FPublishedFileID& PublishedFileID, int32 AppID);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems
class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* GetDefaultObj();

	class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItemsAsync(class UObject* WorldContextObject, float Timeout);
	void HandleCallback(struct FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking
class USteamCoreUGCAsyncActionStopPlaytimeTracking : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionStopPlaytimeTracking* GetDefaultObj();

	class USteamCoreUGCAsyncActionStopPlaytimeTracking* StopPlaytimeTrackingAsync(class UObject* WorldContextObject, const TArray<struct FPublishedFileID>& PublishedFileIDs, float Timeout);
	void HandleCallback(struct FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking
class USteamCoreUGCAsyncActionStartPlaytimeTracking : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionStartPlaytimeTracking* GetDefaultObj();

	class USteamCoreUGCAsyncActionStartPlaytimeTracking* StartPlaytimeTrackingAsync(class UObject* WorldContextObject, const TArray<struct FPublishedFileID>& PublishedFileIDs, float Timeout);
	void HandleCallback(struct FStartPlaytimeTrackingResult& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem
class USteamCoreUGCAsyncActionUnsubscribeItem : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionUnsubscribeItem* GetDefaultObj();

	class USteamCoreUGCAsyncActionUnsubscribeItem* UnsubscribeItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileIDs, float Timeout);
	void HandleCallback(struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionSubscribeItem
class USteamCoreUGCAsyncActionSubscribeItem : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionSubscribeItem* GetDefaultObj();

	class USteamCoreUGCAsyncActionSubscribeItem* SubscribeItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileIDs, float Timeout);
	void HandleCallback(struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites
class USteamCoreUGCAsyncActionRemoveItemFromFavorites : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionRemoveItemFromFavorites* GetDefaultObj();

	class USteamCoreUGCAsyncActionRemoveItemFromFavorites* RemoveItemFromFavoritesAsync(class UObject* WorldContextObject, int32 AppID, const struct FPublishedFileID& PublishedFileID, float Timeout);
	void HandleCallback(struct FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites
class USteamCoreUGCAsyncActionAddItemToFavorites : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionAddItemToFavorites* GetDefaultObj();

	void HandleCallback(struct FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionAddItemToFavorites* AddItemToFavoritesAsync(class UObject* WorldContextObject, int32 AppID, const struct FPublishedFileID& PublishedFileID, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionGetUserItemVote
class USteamCoreUGCAsyncActionGetUserItemVote : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionGetUserItemVote* GetDefaultObj();

	void HandleCallback(struct FGetUserItemVoteResult& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionGetUserItemVote* GetUserItemVoteAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionSetUserItemVote
class USteamCoreUGCAsyncActionSetUserItemVote : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionSetUserItemVote* GetDefaultObj();

	class USteamCoreUGCAsyncActionSetUserItemVote* SetUserItemVoteAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, bool bVoteUp, float Timeout);
	void HandleCallback(struct FSetUserItemVoteResult& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate
class USteamCoreUGCAsyncActionSubmitItemUpdate : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionSubmitItemUpdate* GetDefaultObj();

	class USteamCoreUGCAsyncActionSubmitItemUpdate* SubmitItemUpdateAsync(class UObject* WorldContextObject, const struct FUGCUpdateHandle& Handle, const class FString& ChangeNote, float Timeout);
	void HandleCallback(struct FSubmitItemUpdateResult& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionCreateItem
class USteamCoreUGCAsyncActionCreateItem : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionCreateItem* GetDefaultObj();

	void HandleCallback(struct FCreateItemResult& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionCreateItem* CreateItemAsync(class UObject* WorldContextObject, int32 ConsumerAppID, enum class ESteamWorkshopFileType FileType, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest
class USteamCoreUGCAsyncActionSendQueryUGCRequest : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionSendQueryUGCRequest* GetDefaultObj();

	class USteamCoreUGCAsyncActionSendQueryUGCRequest* SendQueryUGCRequestAsync(class UObject* WorldContextObject, const struct FUGCQueryHandle& Handle, float Timeout);
	void HandleCallback(struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionAddAppDependency
class USteamCoreUGCAsyncActionAddAppDependency : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionAddAppDependency* GetDefaultObj();

	void HandleCallback(struct FAddAppDependencyResult& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionAddAppDependency* AddAppDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, int32 AppID, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency
class USteamCoreUGCAsyncActionRemoveAppDependency : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionRemoveAppDependency* GetDefaultObj();

	class USteamCoreUGCAsyncActionRemoveAppDependency* RemoveAppDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, int32 AppID, float Timeout);
	void HandleCallback(struct FRemoveAppDependencyResult& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionAddUGCDependency
class USteamCoreUGCAsyncActionAddUGCDependency : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionAddUGCDependency* GetDefaultObj();

	void HandleCallback(struct FAddUGCDependencyResult& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionAddUGCDependency* AddDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency
class USteamCoreUGCAsyncActionRemoveUGCDependency : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionRemoveUGCDependency* GetDefaultObj();

	class USteamCoreUGCAsyncActionRemoveUGCDependency* RemoveDependencyAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, const struct FPublishedFileID& ChildPublishedFileId, float Timeout);
	void HandleCallback(struct FRemoveUGCDependencyResult& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionDeleteItem
class USteamCoreUGCAsyncActionDeleteItem : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionDeleteItem* GetDefaultObj();

	void HandleCallback(struct FUGCDeleteItemResult& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionDeleteItem* DeleteItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionGetAppDependencies
class USteamCoreUGCAsyncActionGetAppDependencies : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionGetAppDependencies* GetDefaultObj();

	void HandleCallback(struct FGetAppDependenciesResult& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionGetAppDependencies* GetAppDependenciesAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUGCAsyncActionDownloadItem
class USteamCoreUGCAsyncActionDownloadItem : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUGCAsyncActionDownloadItem* GetDefaultObj();

	void HandleCallback(struct FDownloadItemResult& Data, bool bWasSuccessful);
	class USteamCoreUGCAsyncActionDownloadItem* DownloadItemAsync(class UObject* WorldContextObject, const struct FPublishedFileID& PublishedFileID, bool bHighPriority, float Timeout);
};

// 0x210 (0x278 - 0x68)
// Class SteamCore.User
class UUser : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            ClientGameServerDeny;                              // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GameWebCallback;                                   // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GetAuthSessionTicketResponse;                      // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            IPCFailure;                                        // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LicensesUpdated;                                   // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MicroTxnAuthorizationResponse;                     // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SteamServerConnectFailure;                         // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SteamServersConnected;                             // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SteamServersDisconnected;                          // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ValidateAuthTicketResponse;                        // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EncryptedAppTicketResponse;                        // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F19[0x160];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUser* GetDefaultObj();

	enum class ESteamUserHasLicenseForAppResult UserHasLicenseForApp(const struct FSteamID& SteamID, int32 AppID);
	void StopVoiceRecording();
	void StartVoiceRecording();
	void RequestStoreAuthURL(FDelegateProperty_& Callback, const class FString& RedirectURL);
	void RequestEncryptedAppTicket(FDelegateProperty_& Callback, const TArray<uint8>& DataToInclude);
	int32 GetVoiceOptimalSampleRate();
	enum class ESteamVoiceResult GetVoice(TArray<uint8>* DestBuffer, int32* BytesWritten);
	struct FSteamID GetSteamID_Pure();
	struct FSteamID GetSteamID();
	int32 GetPlayerSteamLevel();
	int32 GetGameBadgeLevel(int32 Series, bool bFoil);
	bool GetEncryptedAppTicket(TArray<uint8>* Ticket);
	enum class ESteamVoiceResult GetAvailableVoice(int32* CompressedBytes, int32* UncompressedBytes, int32 UncompressedVoiceDesiredSampleRate);
	struct FSteamTicketHandle GetAuthSessionTicket(TArray<uint8>* Ticket);
	void EndAuthSession(const struct FSteamID& SteamID);
	enum class ESteamVoiceResult DecompressVoice(TArray<uint8>& CompressedBuffer, int32 DesiredSampleRate, TArray<uint8>* DestBuffer);
	void CancelAuthTicket(const struct FSteamTicketHandle& TicketHandle);
	bool BLoggedOn();
	bool BIsTwoFactorEnabled();
	bool BIsPhoneVerified();
	bool BIsPhoneRequiringVerification();
	bool BIsPhoneIdentifying();
	bool BIsBehindNAT();
	enum class ESteamBeginAuthSessionResult BeginAuthSession(const TArray<uint8>& Ticket, const struct FSteamID& SteamID);
	void AdvertiseGame(const struct FSteamID& SteamIDGameServer, const class FString& ServerIP, int32 ServerPort);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket
class USteamCoreUserAsyncActionRequestEncryptedAppTicket : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUserAsyncActionRequestEncryptedAppTicket* GetDefaultObj();

	class USteamCoreUserAsyncActionRequestEncryptedAppTicket* RequestEncryptedAppTicketAsync(class UObject* WorldContextObject, const TArray<uint8>& DataToInclude, float Timeout);
	void HandleCallback(struct FEncryptedAppTicketResponse& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL
class USteamCoreUserAsyncActionRequestStoreAuthURL : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUserAsyncActionRequestStoreAuthURL* GetDefaultObj();

	class USteamCoreUserAsyncActionRequestStoreAuthURL* RequestStoreAuthURLAsync(class UObject* WorldContextObject, const class FString& RedirectURL, float Timeout);
	void HandleCallback(struct FStoreAuthURLResponse& Data, bool bWasSuccessful);
};

// 0xF0 (0x158 - 0x68)
// Class SteamCore.UserStats
class UUserStats : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            UserAchievementIconFetched;                        // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            UserAchievementStored;                             // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            UserStatsReceived;                                 // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            UserStatsStored;                                   // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            UserStatsUnloaded;                                 // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_201F[0xA0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUserStats* GetDefaultObj();

	void UploadLeaderboardScore(FDelegateProperty_& Callback, const struct FSteamLeaderboard& SteamLeaderboard, enum class ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, const TArray<int32>& ScoreDetails);
	bool UpdateAvgRateStat(const class FString& Name, float CountThisSession, float SessionLength);
	bool StoreStats();
	bool SetStatInt(const class FString& Name, int32 Data);
	bool SetStatFloat(const class FString& Name, float Data);
	bool SetAchievement(const class FString& Name);
	bool ResetAllStats(bool bAchievementsToo);
	void RequestUserStats(FDelegateProperty_& Callback, const struct FSteamID& SteamID);
	void RequestGlobalStats(FDelegateProperty_& Callback, int32 HistoryDays);
	void RequestGlobalAchievementPercentages(FDelegateProperty_& Callback);
	bool RequestCurrentStats();
	bool IndicateAchievementProgress(const class FString& Name, int32 CurrentProgress, int32 MaxProgress);
	bool GetUserStatInteger(const struct FSteamID& SteamIDUser, const class FString& Name, int32* Data);
	bool GetUserStatFloat(const struct FSteamID& SteamIDUser, const class FString& Name, float* Data);
	bool GetUserAchievementAndUnlockTime(const struct FSteamID& SteamIDUser, const class FString& Name, bool* bAchieved, int32* UnlockTime);
	bool GetUserAchievement(const struct FSteamID& SteamIDUser, const class FString& Name, bool* bAchieved);
	bool GetStatInt(const class FString& Name, int32* Data);
	bool GetStatFloat(const class FString& Name, float* Data);
	void GetNumberOfCurrentPlayers(FDelegateProperty_& Callback);
	int32 GetNumAchievements();
	int32 GetNextMostAchievedAchievementInfo(int32 IteratorPrevious, class FString* Name, float* Percent, bool* bAchieved);
	int32 GetMostAchievedAchievementInfo(class FString* Name, float* Percent, bool* bAchieved);
	enum class ESteamLeaderboardSortMethod GetLeaderboardSortMethod(const struct FSteamLeaderboard& SteamLeaderboard);
	class FString GetLeaderboardName(const struct FSteamLeaderboard& SteamLeaderboard);
	int32 GetLeaderboardEntryCount(const struct FSteamLeaderboard& SteamLeaderboard);
	enum class ESteamLeaderboardDisplayType GetLeaderboardDisplayType(const struct FSteamLeaderboard& SteamLeaderboard);
	bool GetGlobalStatInt(const class FString& StatName, int32* Data);
	int32 GetGlobalStatHistoryInt(const class FString& StatName, int32 HistoryDays, TArray<int32>* Data);
	int32 GetGlobalStatHistoryFloat(const class FString& StatName, int32 HistoryDays, TArray<float>* Data);
	bool GetGlobalStatFloat(const class FString& StatName, float* Data);
	bool GetDownloadedLeaderboardEntry(const struct FSteamLeaderboardEntries& LeaderboardEntries, int32 Index, struct FSteamLeaderboardEntry* LeaderboardEntry, const TArray<int32>& Details, TArray<int32>* OutDetails);
	bool GetAchievementProgressLimitsFloat(const class FString& Name, float* MinProgress, float* MaxProgress);
	bool GetAchievementProgressLimits(const class FString& Name, int32* MinProgress, int32* MaxProgress);
	class FString GetAchievementName(int32 Achievement);
	class UTexture2D* GetAchievementIcon(const class FString& Name);
	class FString GetAchievementDisplayAttribute(const class FString& Name, const class FString& Key);
	bool GetAchievementAndUnlockTime(const class FString& Name, bool* bAchieved, int32* UnlockTime);
	bool GetAchievementAchievedPercent(const class FString& Name, float* Percent);
	bool GetAchievement(const class FString& Name, bool* bAchieved);
	void FindOrCreateLeaderboard(FDelegateProperty_& Callback, const class FString& LeaderboardName, enum class ESteamLeaderboardSortMethod SortMethod, enum class ESteamLeaderboardDisplayType DisplayType);
	void FindLeaderboard(FDelegateProperty_& Callback, const class FString& LeaderboardName);
	void DownloadLeaderboardEntriesForUsers(FDelegateProperty_& Callback, const struct FSteamLeaderboard& SteamLeaderboard, const TArray<struct FSteamID>& Users);
	void DownloadLeaderboardEntries(FDelegateProperty_& Callback, const struct FSteamLeaderboard& SteamLeaderboard, enum class ESteamLeaderboardDataRequest DataRequest, int32 RangeStart, int32 RangeEnd);
	bool ClearAchievement(const class FString& Name);
	void AttachLeaderboardUGC(FDelegateProperty_& Callback, const struct FSteamLeaderboard& SteamLeaderboard, const struct FSteamUGCHandle& Handle);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard
class USteamCoreUserStatsAsyncActionFindLeaderboard : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUserStatsAsyncActionFindLeaderboard* GetDefaultObj();

	void HandleCallback(struct FLeaderboardFindResult& Data, bool bWasSuccessful);
	class USteamCoreUserStatsAsyncActionFindLeaderboard* FindLeaderboardAsync(class UObject* WorldContextObject, const class FString& LeaderboardName, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* GetDefaultObj();

	void HandleCallback(struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* DownloadLeaderboardEntriesAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, enum class ESteamLeaderboardDataRequest Request, int32 RangeStart, int32 RangeEnd, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats
class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* GetDefaultObj();

	class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* RequestGlobalStatsAsync(class UObject* WorldContextObject, int32 HistoryDays, float Timeout);
	void HandleCallback(struct FGlobalStatsReceived& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages
class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* GetDefaultObj();

	class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentagesAsync(class UObject* WorldContextObject, float Timeout);
	void HandleCallback(struct FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers
class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* GetDefaultObj();

	void HandleCallback(struct FNumberOfCurrentPlayers& Data, bool bWasSuccessful);
	class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore
class USteamCoreUserStatsAsyncActionUploadLeaderboardScore : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* GetDefaultObj();

	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* UploadLeaderboardScoreAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, enum class ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, const TArray<int32>& ScoreDetails, float Timeout);
	void HandleCallback(struct FLeaderboardScoreUploaded& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard
class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* GetDefaultObj();

	void HandleCallback(struct FFindOrCreateLeaderboardData& Data, bool bWasSuccessful);
	class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, const class FString& LeaderboardName, enum class ESteamLeaderboardSortMethod SortMethod, enum class ESteamLeaderboardDisplayType DisplayType, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats
class USteamCoreUserStatsAsyncActionRequestUserStats : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUserStatsAsyncActionRequestUserStats* GetDefaultObj();

	class USteamCoreUserStatsAsyncActionRequestUserStats* RequestUserStatsAsync(class UObject* WorldContextObject, const struct FSteamID& SteamID, float Timeout);
	void HandleCallback(struct FRequestUserStatsData& Data, bool bWasSuccessful);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers
class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* GetDefaultObj();

	void HandleCallback(struct FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful);
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsersAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, const TArray<struct FSteamID>& Users, float Timeout);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC
class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnCallback;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* GetDefaultObj();

	void HandleCallback(struct FAttachLeaderboardUGCData& Data, bool bWasSuccessful);
	class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* AttachLeaderboardUGCAsync(class UObject* WorldContextObject, const struct FSteamLeaderboard& SteamLeaderboard, const struct FSteamUGCHandle& Handle, float Timeout);
};

// 0x0 (0x4A0 - 0x4A0)
// Class SteamCore.SteamCoreVoice
class USteamCoreVoice : public USoundWaveProcedural
{
public:

	static class UClass* StaticClass();
	static class USteamCoreVoice* GetDefaultObj();

	void DestroySteamCoreVoice(class USteamCoreVoice* Obj);
	class USteamCoreVoice* ConstructSteamCoreVoice(int32 AudioSampleRate);
	void AddAudioBuffer(TArray<uint8>& Buffer);
};

// 0x10 (0x48 - 0x38)
// Class SteamCore.SteamCoreAsyncActionListenForControllerChange
class USteamCoreAsyncActionListenForControllerChange : public USteamCoreAsyncAction
{
public:
	FMulticastInlineDelegateProperty_            OnControllerChanged;                               // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamCoreAsyncActionListenForControllerChange* GetDefaultObj();

	class USteamCoreAsyncActionListenForControllerChange* ListenForControllerChange(class UObject* WorldContextObject);
	void HandleCallback(bool bIsConnected, int32 PlatformUserId, int32 UserId);
};

// 0x0 (0x28 - 0x28)
// Class SteamCore.SteamUtilities
class USteamUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USteamUtilities* GetDefaultObj();

	bool WriteBytesToFile(bool bOverwriteIfExists, const class FString& AbsoluteFilePath, TArray<uint8>& DataBuffer);
	void SteamItemInstanceID_Equals_Exec(const struct FSteamItemInstanceID& A, const struct FSteamItemInstanceID& B, enum class ESteamCoreIdentical* Result);
	bool SteamItemInstanceID_Equals(const struct FSteamItemInstanceID& A, const struct FSteamItemInstanceID& B);
	TArray<uint8> ReadFileToBytes(const class FString& AbsoluteFilePath);
	bool PublishedFileID_NotEquals(const struct FPublishedFileID& A, const struct FPublishedFileID& B);
	void PublishedFileID_Equals_Exec(const struct FPublishedFileID& A, const struct FPublishedFileID& B, enum class ESteamCoreIdentical* Result);
	bool PublishedFileID_Equals(const struct FPublishedFileID& A, const struct FPublishedFileID& B);
	bool NotEqual(const struct FSteamID& A, const struct FSteamID& B);
	struct FSteamUGCHandle MakeUGCHandle(const class FString& Value);
	struct FSteamTicketHandle MakeTicketHandle(const class FString& Value);
	struct FSteamSessionSetting MakeString(const class FString& Value);
	struct FSteamID MakeSteamID(const class FString& Value);
	struct FSteamGameID MakeSteamGameID(const class FString& Value);
	struct FSteamSessionSearchSetting MakeSearchString(const class FString& Value);
	struct FSteamSessionSearchSetting MakeSearchInteger(enum class ESteamComparisonOp ComparisonOperator, int32 Value);
	struct FSteamSessionSearchSetting MakeSearchBool(bool bValue);
	struct FPublishedFileID MakePublishedFileID(const class FString& Value);
	struct FSteamInventoryUpdateHandle MakeInventoryUpdateHandle(const class FString& Value);
	struct FSteamSessionSetting MakeInteger(int32 Value);
	struct FSteamSessionSetting MakeBool(bool bValue);
	void ListenForSteamMessages(FDelegateProperty_& Callback);
	bool K2_IsPlayerInSession(int32 LocalUserNum);
	class FString K2_HexToString(const TArray<uint8>& Array);
	TArray<uint8> K2_HexToBytes(const class FString& String);
	bool IsValid(const struct FSteamID& SteamID);
	bool IsUsingP2PRelays();
	void IsUGCHandleValid_Exec(const struct FSteamUGCHandle& Handle, enum class ESteamCoreValid* Result);
	bool IsUGCHandleValid(const struct FSteamUGCHandle& Handle);
	void IsSteamTicketHandleValid_Exec(const struct FSteamTicketHandle& Handle, enum class ESteamCoreValid* Result);
	bool IsSteamTicketHandleValid(const struct FSteamTicketHandle& Handle);
	bool IsSteamServerInitialized();
	void IsSteamInventoryUpdateHandleValid_Exec(const struct FSteamInventoryUpdateHandle& Handle, enum class ESteamCoreValid* Result);
	bool IsSteamInventoryUpdateHandleValid(const struct FSteamInventoryUpdateHandle& Handle);
	void IsSteamIDValid_Exec(const struct FSteamID& SteamID, enum class ESteamCoreValid* Result);
	bool IsSteamAvailable();
	bool IsRecalculatingPing();
	void IsPublishedFileIDValid_Exec(const struct FPublishedFileID& Handle, enum class ESteamCoreValid* Result);
	bool IsPublishedFileIDValid(const struct FPublishedFileID& PublishedFileID);
	bool IsLobby(const struct FSteamID& SteamID);
	void IsGameIDValid_Exec(const struct FSteamGameID& GameID, enum class ESteamCoreValid* Result);
	bool IsGameIDValid(const struct FSteamGameID& GameID);
	enum class ESteamAttributeType GetType(const struct FSteamSessionSetting& Settings);
	bool GetString(const struct FSteamSessionSetting& Settings, class FString* Key, class FString* OutValue);
	struct FSteamID GetSteamIdFromPlayerState(class UPlayerState* PlayerState);
	void GetPublicIp(FDelegateProperty_& Callback);
	int32 GetPingFromHostData(struct FHostPingData& Data);
	bool GetInteger(const struct FSteamSessionSetting& Settings, class FString* Key, int32* OutValue);
	struct FHostPingData GetHostPingData();
	bool GetGameEngineInitialized();
	bool GetBool(const struct FSteamSessionSetting& Settings, class FString* Key, bool* OutValue);
	enum class ESteamAccountType GetAccountType(const struct FSteamID& SteamID);
	struct FDateTime FromUnixTimestamp(const class FString& Timestamp);
	void Equal_Exec(const struct FSteamID& A, const struct FSteamID& B, enum class ESteamCoreIdentical* Result);
	bool Equal(const struct FSteamID& A, const struct FSteamID& B);
	class FString EncryptString(const class FString& String);
	class UServerFilter* ConstructServerFilter(class UObject* WorldContextObject);
	class FString BreakUGCHandle(const struct FSteamUGCHandle& Handle);
	class FString BreakTicketHandle(const struct FSteamTicketHandle& Handle);
	class FString BreakSteamID(const struct FSteamID& SteamID);
	class FString BreakSteamGameID(const struct FSteamGameID& SteamID);
	class FString BreakPublishedFileID(const struct FPublishedFileID& FileID);
	class FString BreakInventoryUpdateHandle(const struct FSteamInventoryUpdateHandle& Handle);
	TArray<uint8> BP_StringToBytes(const class FString& String);
	class FString BP_BytesToString(const TArray<uint8>& Array);
};

// 0xF0 (0x158 - 0x68)
// Class SteamCore.Utils
class UUtils : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            CheckFileSignature;                                // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GamepadTextInputDismissed;                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            IPCountry;                                         // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LowBatteryPower;                                   // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SteamShutdown;                                     // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2239[0xA0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUtils* GetDefaultObj();

	void StartVRDashboard();
	bool ShowGamepadTextInput(enum class ESteamGamepadTextInputMode InputMode, enum class ESteamGamepadTextInputLineMode LineInputMode, const class FString& Description, int32 CharMax, const class FString& ExistingText);
	void SetVRHeadsetStreamingEnabled(bool bEnabled);
	void SetOverlayNotificationPosition(enum class ESteamNotificationPosition NotificationPosition);
	void SetOverlayNotificationInset(int32 HorizontalInset, int32 VerticalInset);
	bool IsVRHeadsetStreamingEnabled();
	bool IsSteamRunningOnSteamDeck();
	bool IsSteamRunningInVR();
	bool IsSteamInBigPictureMode();
	bool IsSteamChinaLauncher();
	bool IsOverlayEnabled();
	bool InitFilterText();
	class FString GetSteamUILanguage();
	int32 GetServerRealTime();
	int32 GetSecondsSinceComputerActive();
	int32 GetSecondsSinceAppActive();
	class FString GetIPCountry();
	int32 GetIPCCallCount();
	bool GetImageSize(int32 IImage, int32* Width, int32* Height);
	bool GetImageRGBA(int32 IImage, TArray<uint8>* OutBuffer);
	int32 GetEnteredGamepadTextLength();
	bool GetEnteredGamepadTextInput(class FString* Text);
	int32 GetCurrentBatteryPower();
	enum class ESteamUniverse GetConnectedUniverse();
	int32 GetAppID_Pure();
	int32 GetAppID();
	bool BOverlayNeedsPresent();
};

// 0x60 (0xC8 - 0x68)
// Class SteamCore.Video
class UVideo : public USteamCoreSubsystem
{
public:
	FMulticastInlineDelegateProperty_            GetOPFSettingsResult;                              // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GetVideoURLResult;                                 // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2241[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVideo* GetDefaultObj();

	bool IsBroadcasting(int32* NumViewers);
	void GetVideoURL(int32 VideoAppID);
	bool GetOPFStringForApp(int32 VideoAppID, class FString* OutBuffer);
	void GetOPFSettings(int32 VideoAppID);
};

}



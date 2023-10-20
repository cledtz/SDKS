#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineAchievementsSubsystem
class UOnlineAchievementsSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_780[0x78];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnAchievementUnlocked;                             // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineAchievementsSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
	enum class EOnlineCachedResult_ GetCachedAchievements(const struct FUniqueNetIdRepl& PlayerId, TArray<struct FOnlineAchievementBP>* OutAchievements);
	enum class EOnlineCachedResult_ GetCachedAchievementDescription(const class FString& AchievementId, struct FOnlineAchievementDescBP* OutAchievementDesc);
	enum class EOnlineCachedResult_ GetCachedAchievement(const struct FUniqueNetIdRepl& PlayerId, const class FString& AchievementId, struct FOnlineAchievementBP* OutAchievement);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineAchievementsSubsystemWriteAchievements
class UOnlineAchievementsSubsystemWriteAchievements : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAchievementsWritten;                             // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineAchievementsSubsystem*          __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__PlayerId;                                 // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOnlineAchievementsWrite*              __Store__WriteObject;                              // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineAchievementsSubsystemWriteAchievements* GetDefaultObj();

	class UOnlineAchievementsSubsystemWriteAchievements* WriteAchievements(class UOnlineAchievementsSubsystem* Subsystem, const struct FUniqueNetIdRepl& PlayerId, class UOnlineAchievementsWrite* WriteObject);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineAchievementsSubsystemQueryAchievements
class UOnlineAchievementsSubsystemQueryAchievements : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryAchievementsComplete;                       // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineAchievementsSubsystem*          __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__PlayerId;                                 // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineAchievementsSubsystemQueryAchievements* GetDefaultObj();

	class UOnlineAchievementsSubsystemQueryAchievements* QueryAchievements(class UOnlineAchievementsSubsystem* Subsystem, const struct FUniqueNetIdRepl& PlayerId);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineAchievementsSubsystemQueryAchievementDescriptions
class UOnlineAchievementsSubsystemQueryAchievementDescriptions : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryAchievementsComplete;                       // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineAchievementsSubsystem*          __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__PlayerId;                                 // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineAchievementsSubsystemQueryAchievementDescriptions* GetDefaultObj();

	class UOnlineAchievementsSubsystemQueryAchievementDescriptions* QueryAchievementDescriptions(class UOnlineAchievementsSubsystem* Subsystem, const struct FUniqueNetIdRepl& PlayerId);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineAvatarSubsystem
class UOnlineAvatarSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_7C3[0x70];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineAvatarSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
};

// 0xA0 (0xD0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineAvatarSubsystemGetAvatar
class UOnlineAvatarSubsystemGetAvatar : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetAvatarComplete;                               // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineAvatarSubsystem*                __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__TargetUserId;                             // 0x98(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture*                              __Store__DefaultTexture;                           // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineAvatarSubsystemGetAvatar* GetDefaultObj();

	class UOnlineAvatarSubsystemGetAvatar* GetAvatar(class UOnlineAvatarSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const struct FUniqueNetIdRepl& TargetUserId, class UTexture* DefaultTexture);
};

// 0xA8 (0xD8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineAvatarSubsystemGetAvatarUrl
class UOnlineAvatarSubsystemGetAvatarUrl : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetAvatarUrlComplete;                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineAvatarSubsystem*                __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__TargetUserId;                             // 0x98(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__DefaultAvatarUrl;                         // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineAvatarSubsystemGetAvatarUrl* GetDefaultObj();

	class UOnlineAvatarSubsystemGetAvatarUrl* GetAvatarUrl(class UOnlineAvatarSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const struct FUniqueNetIdRepl& TargetUserId, const class FString& DefaultAvatarUrl);
};

// 0x130 (0x160 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineChatSubsystem
class UOnlineChatSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_80D[0xB0];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnChatRoomCreated;                                 // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChatRoomConfigured;                              // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChatRoomJoinPublic;                              // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChatRoomJoinPrivate;                             // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChatRoomExit;                                    // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChatRoomMemberJoin;                              // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChatRoomMemberExit;                              // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChatRoomMemberUpdate;                            // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineChatSubsystem* GetDefaultObj();

	bool SendRoomChat(const struct FUniqueNetIdRepl& UserId, const class FString& RoomId, const class FString& MsgBody);
	bool SendPrivateChat(const struct FUniqueNetIdRepl& UserId, const struct FUniqueNetIdRepl& RecipientId, const class FString& MsgBody);
	bool IsSubsystemAvailable();
	bool IsChatAllowed(const struct FUniqueNetIdRepl& UserId, const struct FUniqueNetIdRepl& RecipientId);
	void GetJoinedRooms(const struct FUniqueNetIdRepl& UserId, TArray<class FString>* OutRooms);
	bool ExitRoom(const struct FUniqueNetIdRepl& UserId, const class FString& RoomId);
	void DumpChatState();
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineEntitlementsSubsystem
class UOnlineEntitlementsSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_83E[0x78];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnQueryEntitlementsComplete;                       // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineEntitlementsSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
	class UOnlineEntitlement* GetItemEntitlement(const struct FUniqueNetIdRepl& UserId, const class FString& ItemId);
	class UOnlineEntitlement* GetEntitlement(const struct FUniqueNetIdRepl& UserId, const class FString& EntitlementId);
	void GetAllEntitlements(const struct FUniqueNetIdRepl& UserId, const class FString& Namespace, TArray<class UOnlineEntitlement*>* OutUserEntitlements);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineEntitlementsSubsystemQueryEntitlements
class UOnlineEntitlementsSubsystemQueryEntitlements : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryEntitlementsComplete;                       // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineEntitlementsSubsystem*          __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_84A[0x8];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__Namespace;                                // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPagedQueryBP                         __Store__Page;                                     // 0xB0(0x8)(NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineEntitlementsSubsystemQueryEntitlements* GetDefaultObj();

	class UOnlineEntitlementsSubsystemQueryEntitlements* QueryEntitlements(class UOnlineEntitlementsSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& Namespace, const struct FPagedQueryBP& Page);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineEventsSubsystem
class UOnlineEventsSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_855[0x70];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineEventsSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
};

// 0x140 (0x170 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineExternalUISubsystem
class UOnlineExternalUISubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_88A[0x78];                                     // Fixing Size After Last Property 
	TArray<struct FExternalUIFlowHandlerRegistration> FlowHandlers;                                      // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_88B[0xA8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnExternalUIChange;                                // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineExternalUISubsystem* GetDefaultObj();

	bool ShowPlatformMessageBox(const struct FUniqueNetIdRepl& UserId, enum class EPlatformMessageType_ MessageType);
	bool ShowLeaderboardUI(const class FString& LeaderboardName);
	bool ShowInviteUI(int32 LocalUserNum, class FName SessionName);
	bool ShowFriendsUI(int32 LocalUserNum);
	bool ShowAchievementsUI(int32 LocalUserNum);
	bool ShowAccountUpgradeUI(const struct FUniqueNetIdRepl& UniqueId);
	void ReportExitInGameStoreUI();
	void ReportEnterInGameStoreUI();
	void RemoveLoginFlowHandler(TScriptInterface<class UExternalUIFlowHandler>& Handler);
	struct FLoginFlowResultBP NotifyLoginRedirectURL(int32 RequestId, const class FString& URL);
	void LoginFlowComplete(int32 RequestId, const struct FLoginFlowResultBP& Result);
	bool IsSubsystemAvailable();
	bool CloseWebURL();
	void AddLoginFlowHandler(TScriptInterface<class UExternalUIFlowHandler>& Handler);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowLoginUI
class UOnlineExternalUISubsystemShowLoginUI : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoginUIClosed;                                   // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystem*            __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        __Store__ControllerIndex;                          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         __Store__bShowOnlineOnly;                          // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         __Store__bShowSkipButton;                          // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_89E[0x2];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineExternalUISubsystemShowLoginUI* GetDefaultObj();

	class UOnlineExternalUISubsystemShowLoginUI* ShowLoginUI(class UOnlineExternalUISubsystem* Subsystem, int32 ControllerIndex, bool bShowOnlineOnly, bool bShowSkipButton);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowAccountCreationUI
class UOnlineExternalUISubsystemShowAccountCreationUI : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAccountCreationUIClosed;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystem*            __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        __Store__ControllerIndex;                          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8AC[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineExternalUISubsystemShowAccountCreationUI* GetDefaultObj();

	class UOnlineExternalUISubsystemShowAccountCreationUI* ShowAccountCreationUI(class UOnlineExternalUISubsystem* Subsystem, int32 ControllerIndex);
};

// 0x80 (0xB0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowWebURL
class UOnlineExternalUISubsystemShowWebURL : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnShowWebUrlClosed;                                // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystem*            __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__Url;                                      // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FShowWebUrlParameters                 __Store__ShowParams;                               // 0x78(0x38)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineExternalUISubsystemShowWebURL* GetDefaultObj();

	class UOnlineExternalUISubsystemShowWebURL* ShowWebURL(class UOnlineExternalUISubsystem* Subsystem, const class FString& URL, const struct FShowWebUrlParameters& ShowParams);
};

// 0x98 (0xC8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowProfileUI
class UOnlineExternalUISubsystemShowProfileUI : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnProfileUIClosed;                                 // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystem*            __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__Requestor;                                // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__Requestee;                                // 0x98(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineExternalUISubsystemShowProfileUI* GetDefaultObj();

	class UOnlineExternalUISubsystemShowProfileUI* ShowProfileUI(class UOnlineExternalUISubsystem* Subsystem, const struct FUniqueNetIdRepl& Requestor, const struct FUniqueNetIdRepl& Requestee);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowStoreUI
class UOnlineExternalUISubsystemShowStoreUI : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnShowStoreUIClosed;                               // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystem*            __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        __Store__LocalUserNum;                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8C8[0x4];                                      // Fixing Size After Last Property 
	struct FShowStoreParameters                  __Store__ShowParams;                               // 0x70(0x28)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineExternalUISubsystemShowStoreUI* GetDefaultObj();

	class UOnlineExternalUISubsystemShowStoreUI* ShowStoreUI(class UOnlineExternalUISubsystem* Subsystem, int32 LocalUserNum, const struct FShowStoreParameters& ShowParams);
};

// 0x130 (0x160 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowSendMessageUI
class UOnlineExternalUISubsystemShowSendMessageUI : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnShowSendMessageUIClosed;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystem*            __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        __Store__LocalUserNum;                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8DD[0x4];                                      // Fixing Size After Last Property 
	struct FShowSendMessageParameters            __Store__ShowParams;                               // 0x70(0xF0)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineExternalUISubsystemShowSendMessageUI* GetDefaultObj();

	class UOnlineExternalUISubsystemShowSendMessageUI* ShowSendMessageUI(class UOnlineExternalUISubsystem* Subsystem, int32 LocalUserNum, const struct FShowSendMessageParameters& ShowParams);
};

// 0x160 (0x190 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineExternalUISubsystemShowSendMessageToUserUI
class UOnlineExternalUISubsystemShowSendMessageToUserUI : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnShowSendMessageUIClosed;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineExternalUISubsystem*            __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        __Store__LocalUserNum;                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8EC[0x4];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__Recipient;                                // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FShowSendMessageParameters            __Store__ShowParams;                               // 0xA0(0xF0)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineExternalUISubsystemShowSendMessageToUserUI* GetDefaultObj();

	class UOnlineExternalUISubsystemShowSendMessageToUserUI* ShowSendMessageToUserUI(class UOnlineExternalUISubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& Recipient, const struct FShowSendMessageParameters& ShowParams);
};

// 0x228 (0x258 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystem
class UOnlineFriendsSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_917[0x128];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnFriendsChange;                                   // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOutgoingInviteSent;                              // 0x168(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInviteReceived;                                  // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInviteAccepted;                                  // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInviteRejected;                                  // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInviteAborted;                                   // 0x1A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFriendRemoved;                                   // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRejectInviteComplete;                            // 0x1C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDeleteFriendComplete;                            // 0x1D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBlockedPlayerComplete;                           // 0x1E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUnblockedPlayerComplete;                         // 0x1F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBlockListChange;                                 // 0x208(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryRecentPlayersComplete;                      // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryBlockedPlayersComplete;                     // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRecentPlayersAdded;                              // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFriendSettingsUpdated;                           // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
	bool IsFriend(int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName);
	bool GetRecentPlayers(const struct FUniqueNetIdRepl& UserId, const class FString& Namespace, TArray<class UOnlineRecentPlayerRef*>* OutRecentPlayers);
	bool GetFriendsList(int32 LocalUserNum, const class FString& ListName, TArray<class UOnlineFriendRef*>* OutFriends);
	bool GetFriendSettings(const struct FUniqueNetIdRepl& UserId, TMap<class FString, struct FOnlineFriendSettingsSourceDataConfig>* OutSettings);
	class UOnlineFriendRef* GetFriend(int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName);
	bool GetBlockedPlayers(const struct FUniqueNetIdRepl& UserId, TArray<class UOnlineUserRef*>* OutBlockedPlayers);
	void DumpRecentPlayers();
	void DumpBlockedPlayers();
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemReadFriendsList
class UOnlineFriendsSubsystemReadFriendsList : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReadFriendsListComplete;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        __Store__LocalUserNum;                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_932[0x4];                                      // Fixing Size After Last Property 
	class FString                                __Store__ListName;                                 // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemReadFriendsList* GetDefaultObj();

	class UOnlineFriendsSubsystemReadFriendsList* ReadFriendsList(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const class FString& ListName);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriendsList
class UOnlineFriendsSubsystemDeleteFriendsList : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDeleteFriendsListComplete;                       // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        __Store__LocalUserNum;                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_944[0x4];                                      // Fixing Size After Last Property 
	class FString                                __Store__ListName;                                 // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemDeleteFriendsList* GetDefaultObj();

	class UOnlineFriendsSubsystemDeleteFriendsList* DeleteFriendsList(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const class FString& ListName);
};

// 0x80 (0xB0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemSendInvite
class UOnlineFriendsSubsystemSendInvite : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSendInviteComplete;                              // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        __Store__LocalUserNum;                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_95D[0x4];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__FriendId;                                 // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ListName;                                 // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemSendInvite* GetDefaultObj();

	class UOnlineFriendsSubsystemSendInvite* SendInvite(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName);
};

// 0x80 (0xB0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemAcceptInvite
class UOnlineFriendsSubsystemAcceptInvite : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAcceptInviteComplete;                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        __Store__LocalUserNum;                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_967[0x4];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__FriendId;                                 // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ListName;                                 // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemAcceptInvite* GetDefaultObj();

	class UOnlineFriendsSubsystemAcceptInvite* AcceptInvite(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemRejectInvite
class UOnlineFriendsSubsystemRejectInvite : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRejectInviteComplete;                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_96F[0x8];                                      // Fixing Size After Last Property 
	int32                                        __Store__LocalUserNum;                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_970[0x4];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__FriendId;                                 // 0x78(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ListName;                                 // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemRejectInvite* GetDefaultObj();

	class UOnlineFriendsSubsystemRejectInvite* RejectInvite(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName);
};

// 0x90 (0xC0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemSetFriendAlias
class UOnlineFriendsSubsystemSetFriendAlias : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetFriendAliasComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        __Store__LocalUserNum;                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_984[0x4];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__FriendId;                                 // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ListName;                                 // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__Alias;                                    // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemSetFriendAlias* GetDefaultObj();

	class UOnlineFriendsSubsystemSetFriendAlias* SetFriendAlias(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName, const class FString& Alias);
};

// 0x80 (0xB0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriendAlias
class UOnlineFriendsSubsystemDeleteFriendAlias : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDeleteFriendAliasComplete;                       // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        __Store__LocalUserNum;                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_992[0x4];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__FriendId;                                 // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ListName;                                 // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemDeleteFriendAlias* GetDefaultObj();

	class UOnlineFriendsSubsystemDeleteFriendAlias* DeleteFriendAlias(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemDeleteFriend
class UOnlineFriendsSubsystemDeleteFriend : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDeleteFriendComplete;                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_99D[0x8];                                      // Fixing Size After Last Property 
	int32                                        __Store__LocalUserNum;                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_99E[0x4];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__FriendId;                                 // 0x78(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ListName;                                 // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemDeleteFriend* GetDefaultObj();

	class UOnlineFriendsSubsystemDeleteFriend* DeleteFriend(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& FriendId, const class FString& ListName);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemAddRecentPlayers
class UOnlineFriendsSubsystemAddRecentPlayers : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAddRecentPlayersComplete;                        // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FReportPlayedWithUserInfo>     __Store__InRecentPlayers;                          // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                __Store__ListName;                                 // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemAddRecentPlayers* GetDefaultObj();

	class UOnlineFriendsSubsystemAddRecentPlayers* AddRecentPlayers(class UOnlineFriendsSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const TArray<struct FReportPlayedWithUserInfo>& InRecentPlayers, const class FString& ListName);
};

// 0x80 (0xB0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryRecentPlayers
class UOnlineFriendsSubsystemQueryRecentPlayers : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryRecentPlayersComplete;                      // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9BD[0x8];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__Namespace;                                // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemQueryRecentPlayers* GetDefaultObj();

	class UOnlineFriendsSubsystemQueryRecentPlayers* QueryRecentPlayers(class UOnlineFriendsSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& Namespace);
};

// 0x78 (0xA8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemBlockPlayer
class UOnlineFriendsSubsystemBlockPlayer : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBlockedPlayerComplete;                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9C4[0x8];                                      // Fixing Size After Last Property 
	int32                                        __Store__LocalUserNum;                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9C6[0x4];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__PlayerId;                                 // 0x78(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemBlockPlayer* GetDefaultObj();

	class UOnlineFriendsSubsystemBlockPlayer* BlockPlayer(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& PlayerId);
};

// 0x78 (0xA8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemUnblockPlayer
class UOnlineFriendsSubsystemUnblockPlayer : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUnblockedPlayerComplete;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9CB[0x8];                                      // Fixing Size After Last Property 
	int32                                        __Store__LocalUserNum;                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9CC[0x4];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__PlayerId;                                 // 0x78(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemUnblockPlayer* GetDefaultObj();

	class UOnlineFriendsSubsystemUnblockPlayer* UnblockPlayer(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& PlayerId);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryBlockedPlayers
class UOnlineFriendsSubsystemQueryBlockedPlayers : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryBlockedPlayersComplete;                     // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9D0[0x8];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemQueryBlockedPlayers* GetDefaultObj();

	class UOnlineFriendsSubsystemQueryBlockedPlayers* QueryBlockedPlayers(class UOnlineFriendsSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemQueryFriendSettings
class UOnlineFriendsSubsystemQueryFriendSettings : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSettingsOperationComplete;                       // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemQueryFriendSettings* GetDefaultObj();

	class UOnlineFriendsSubsystemQueryFriendSettings* QueryFriendSettings(class UOnlineFriendsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId);
};

// 0x80 (0xB0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineFriendsSubsystemSetFriendSettings
class UOnlineFriendsSubsystemSetFriendSettings : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetFriendSettingsComplete;                       // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineFriendsSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__Source;                                   // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         __Store__bNeverShowAgain;                          // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9D6[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineFriendsSubsystemSetFriendSettings* GetDefaultObj();

	class UOnlineFriendsSubsystemSetFriendSettings* SetFriendSettings(class UOnlineFriendsSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& Source, bool bNeverShowAgain);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGameActivitySubsystem
class UOnlineGameActivitySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_9DA[0x78];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnGameActivityActivationRequested;                 // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineGameActivitySubsystem* GetDefaultObj();

	void UpdatePlayerLocation(const struct FUniqueNetIdRepl& LocalUserId, struct FOnlineActivityPlayerLocationBP* ActivityPlayerLocation);
	bool IsSubsystemAvailable();
};

// 0xC8 (0xF8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGameActivitySubsystemStartActivity
class UOnlineGameActivitySubsystemStartActivity : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStartActivityComplete;                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineGameActivitySubsystem*          __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ActivityId;                               // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FString, struct FVariantDataBP>   __Store__Parms;                                    // 0xA8(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineGameActivitySubsystemStartActivity* GetDefaultObj();

	class UOnlineGameActivitySubsystemStartActivity* StartActivity(class UOnlineGameActivitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ActivityId, TMap<class FString, struct FVariantDataBP> Params);
};

// 0xD0 (0x100 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGameActivitySubsystemEndActivity
class UOnlineGameActivitySubsystemEndActivity : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEndActivityComplete;                             // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineGameActivitySubsystem*          __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ActivityId;                               // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EOnlineActivityOutcome_           __Store__ActivityOutcome;                          // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9E2[0x7];                                      // Fixing Size After Last Property 
	TMap<class FString, struct FVariantDataBP>   __Store__Parms;                                    // 0xB0(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineGameActivitySubsystemEndActivity* GetDefaultObj();

	class UOnlineGameActivitySubsystemEndActivity* EndActivity(class UOnlineGameActivitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ActivityId, enum class EOnlineActivityOutcome_ ActivityOutcome, TMap<class FString, struct FVariantDataBP> Params);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGameActivitySubsystemResetAllActiveActivities
class UOnlineGameActivitySubsystemResetAllActiveActivities : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnResetAllActiveActivitiesComplete;                // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineGameActivitySubsystem*          __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineGameActivitySubsystemResetAllActiveActivities* GetDefaultObj();

	class UOnlineGameActivitySubsystemResetAllActiveActivities* ResetAllActiveActivities(class UOnlineGameActivitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId);
};

// 0xA0 (0xD0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGameActivitySubsystemResumeActivity
class UOnlineGameActivitySubsystemResumeActivity : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnResumeActivityComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineGameActivitySubsystem*          __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ActivityId;                               // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FOnlineActivityTasksToResetBP         __Store__TasksToReset;                             // 0xA8(0x28)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineGameActivitySubsystemResumeActivity* GetDefaultObj();

	class UOnlineGameActivitySubsystemResumeActivity* ResumeActivity(class UOnlineGameActivitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ActivityId, const struct FOnlineActivityTasksToResetBP& TasksToReset);
};

// 0x80 (0xB0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGameActivitySubsystemSetActivityAvailability
class UOnlineGameActivitySubsystemSetActivityAvailability : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetActivityAvailabilityComplete;                 // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineGameActivitySubsystem*          __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ActivityId;                               // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         __Store__bEnabled;                                 // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9F4[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineGameActivitySubsystemSetActivityAvailability* GetDefaultObj();

	class UOnlineGameActivitySubsystemSetActivityAvailability* SetActivityAvailability(class UOnlineGameActivitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ActivityId, bool bEnabled);
};

// 0xB8 (0xE8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGameActivitySubsystemSetActivityPriority
class UOnlineGameActivitySubsystemSetActivityPriority : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetActivityPriorityComplete;                     // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineGameActivitySubsystem*          __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FString, int32>                   __Store__PrioritizedActivities;                    // 0x98(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineGameActivitySubsystemSetActivityPriority* GetDefaultObj();

	class UOnlineGameActivitySubsystemSetActivityPriority* SetActivityPriority(class UOnlineGameActivitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, TMap<class FString, int32> PrioritizedActivities);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystem
class UOnlineGameItemStatsSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_9F8[0x70];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineGameItemStatsSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemUsage
class UOnlineGameItemStatsSubsystemItemUsage : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemUsageComplete;                               // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineGameItemStatsSubsystem*         __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ItemUsedBy;                               // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__ItemsUsed;                                // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineGameItemStatsSubsystemItemUsage* GetDefaultObj();

	class UOnlineGameItemStatsSubsystemItemUsage* ItemUsage(class UOnlineGameItemStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ItemUsedBy, const TArray<class FString>& ItemsUsed);
};

// 0x98 (0xC8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemImpact
class UOnlineGameItemStatsSubsystemItemImpact : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemImpactComplete;                              // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineGameItemStatsSubsystem*         __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__TargetActors;                             // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                __Store__ImpactInitiatedBy;                        // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__ItemsUsed;                                // 0xB8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineGameItemStatsSubsystemItemImpact* GetDefaultObj();

	class UOnlineGameItemStatsSubsystemItemImpact* ItemImpact(class UOnlineGameItemStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<class FString>& TargetActors, const class FString& ImpactInitiatedBy, const TArray<class FString>& ItemsUsed);
};

// 0x98 (0xC8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemMitigation
class UOnlineGameItemStatsSubsystemItemMitigation : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemMitigationComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineGameItemStatsSubsystem*         __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__ItemsUsed;                                // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__ImpactItemsMitigated;                     // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                __Store__ItemUsedBy;                               // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineGameItemStatsSubsystemItemMitigation* GetDefaultObj();

	class UOnlineGameItemStatsSubsystemItemMitigation* ItemMitigation(class UOnlineGameItemStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<class FString>& ItemsUsed, const TArray<class FString>& ImpactItemsMitigated, const class FString& ItemUsedBy);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemAvailabilityChange
class UOnlineGameItemStatsSubsystemItemAvailabilityChange : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemAvailabilityChangeComplete;                  // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineGameItemStatsSubsystem*         __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__AvailableItems;                           // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__UnavailableItems;                         // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineGameItemStatsSubsystemItemAvailabilityChange* GetDefaultObj();

	class UOnlineGameItemStatsSubsystemItemAvailabilityChange* ItemAvailabilityChange(class UOnlineGameItemStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<class FString>& AvailableItems, const TArray<class FString>& UnavailableItems);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemInventoryChange
class UOnlineGameItemStatsSubsystemItemInventoryChange : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemInventoryChangeComplete;                     // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineGameItemStatsSubsystem*         __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__ItemsToAdd;                               // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__ItemsToRemove;                            // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineGameItemStatsSubsystemItemInventoryChange* GetDefaultObj();

	class UOnlineGameItemStatsSubsystemItemInventoryChange* ItemInventoryChange(class UOnlineGameItemStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<class FString>& ItemsToAdd, const TArray<class FString>& ItemsToRemove);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGameItemStatsSubsystemItemLoadoutChange
class UOnlineGameItemStatsSubsystemItemLoadoutChange : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemLoadoutChangeComplete;                       // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineGameItemStatsSubsystem*         __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__EquippedItems;                            // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__UnequippedItems;                          // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineGameItemStatsSubsystemItemLoadoutChange* GetDefaultObj();

	class UOnlineGameItemStatsSubsystemItemLoadoutChange* ItemLoadoutChange(class UOnlineGameItemStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<class FString>& EquippedItems, const TArray<class FString>& UnequippedItems);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineGroupsSubsystem
class UOnlineGroupsSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_A36[0x70];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineGroupsSubsystem* GetDefaultObj();

	void SetNamespace(const class FString& Ns);
	bool IsSubsystemAvailable();
	class FString GetNamespace();
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemBlueprints.OnlineHelpers
class UOnlineHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOnlineHelpers* GetDefaultObj();

	class FString ReadFileDataAsString(class UFileData* FileData);
	class USaveGame* ReadFileDataAsSaveGame(class UFileData* FileData);
	bool IsValid_PartyId(class UPartyId* A);
	bool IsValid_LobbyId(class ULobbyId* A);
	void GetResolvedConnectStringBySearchResult(class UOnlineSessionSubsystem* Subsystem, const struct FOnlineSessionSearchResultBP& SearchResult, class FName PortType, bool* bWasSuccessful, class FString* OutConnectInfo);
	void GetResolvedConnectStringByName(class UOnlineSessionSubsystem* Subsystem, class FName SessionName, class FName PortType, bool* bWasSuccessful, class FString* OutConnectInfo);
	int64 GetPrimaryPartyType();
	struct FUniqueNetIdRepl GetPlayerStateUniqueNetId(class UPlayerState* PlayerState);
	class FName GetCurrentSubsystemName(class UObject* WorldContextObject);
	struct FUniqueNetIdRepl GetControllerUniqueNetId(class UPlayerController* PlayerController);
	bool FUniqueNetIdIsValid(const struct FUniqueNetIdRepl& InNetId);
	class FName FUniqueNetIdGetType(const struct FUniqueNetIdRepl& InNetId);
	bool EqualEqual_PartyIdPartyId(class UPartyId* A, class UPartyId* B);
	bool EqualEqual_LobbyIdLobbyId(class ULobbyId* A, class ULobbyId* B);
	bool EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl(struct FUniqueNetIdRepl& InA, struct FUniqueNetIdRepl& InB);
	class UMutablePartyData* CreateMutablePartyData(class UReadablePartyData* ReadOnlyPartyData);
	class UFileData* CreateFileDataFromString(const class FString& String);
	class UFileData* CreateFileDataFromSaveGame(class USaveGame* SaveGame);
	class UOnlinePartyJoinInfo* Conv_ULobbyIdToUOnlinePartyJoinInfo(const struct FUniqueNetIdRepl& InLocalUserId, class UOnlinePartySubsystem* InPartySubsystem, class ULobbyId* InLobbyId);
	class FString Conv_FUniqueNetIdReplToString(const struct FUniqueNetIdRepl& InNetId);
};

// 0x100 (0x130 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineIdentitySubsystem
class UOnlineIdentitySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_A83[0xB0];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnLoginChanged;                                    // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoginStatusChanged;                              // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoginComplete;                                   // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLogoutComplete;                                  // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoginFlowLogout;                                 // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineIdentitySubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
	class UUserOnlineAccountRef* GetUserAccount(const struct FUniqueNetIdRepl& UserId);
	struct FUniqueNetIdRepl GetUniquePlayerId(int32 LocalUserNum);
	struct FUniqueNetIdRepl GetSponsorUniquePlayerId(int32 LocalUserNum);
	class FString GetPlayerNickname(const struct FUniqueNetIdRepl& UserId);
	int32 GetPlatformUserIdFromUniqueNetId(const struct FUniqueNetIdRepl& UniqueNetId);
	enum class EOnlineLoginStatus GetLoginStatus(int32 LocalUserNum);
	class FString GetAuthType();
	class FString GetAuthToken(int32 LocalUserNum);
	TArray<class UUserOnlineAccountRef*> GetAllUserAccounts();
	struct FUniqueNetIdRepl CreateUniquePlayerId(const class FString& Str);
	void ClearCachedAuthToken(const struct FUniqueNetIdRepl& UserId);
};

// 0x78 (0xA8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineIdentitySubsystemLogin
class UOnlineIdentitySubsystemLogin : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoginComplete;                                   // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineIdentitySubsystem*              __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A8A[0x8];                                      // Fixing Size After Last Property 
	int32                                        __Store__LocalUserNum;                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A8C[0x4];                                      // Fixing Size After Last Property 
	struct FOnlineAccountCredential              __Store__AccountCredentials;                       // 0x78(0x30)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineIdentitySubsystemLogin* GetDefaultObj();

	class UOnlineIdentitySubsystemLogin* Login(class UOnlineIdentitySubsystem* Subsystem, int32 LocalUserNum, const struct FOnlineAccountCredential& AccountCredentials);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineIdentitySubsystemLogout
class UOnlineIdentitySubsystemLogout : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLogoutComplete;                                  // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineIdentitySubsystem*              __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A91[0x8];                                      // Fixing Size After Last Property 
	int32                                        __Store__LocalUserNum;                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A92[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineIdentitySubsystemLogout* GetDefaultObj();

	class UOnlineIdentitySubsystemLogout* Logout(class UOnlineIdentitySubsystem* Subsystem, int32 LocalUserNum);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineIdentitySubsystemAutoLogin
class UOnlineIdentitySubsystemAutoLogin : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoginComplete;                                   // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineIdentitySubsystem*              __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A9F[0x8];                                      // Fixing Size After Last Property 
	int32                                        __Store__LocalUserNum;                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AA0[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineIdentitySubsystemAutoLogin* GetDefaultObj();

	class UOnlineIdentitySubsystemAutoLogin* AutoLogin(class UOnlineIdentitySubsystem* Subsystem, int32 LocalUserNum);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineIdentitySubsystemRevokeAuthToken
class UOnlineIdentitySubsystemRevokeAuthToken : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRevokeAuthTokenComplete;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineIdentitySubsystem*              __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineIdentitySubsystemRevokeAuthToken* GetDefaultObj();

	class UOnlineIdentitySubsystemRevokeAuthToken* RevokeAuthToken(class UOnlineIdentitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineIdentitySubsystemGetUserPrivilege
class UOnlineIdentitySubsystemGetUserPrivilege : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetUserPrivilegeComplete;                        // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineIdentitySubsystem*              __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EOnlineUserPrivilege              __Store__Privilege;                                // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AB4[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineIdentitySubsystemGetUserPrivilege* GetDefaultObj();

	class UOnlineIdentitySubsystemGetUserPrivilege* GetUserPrivilege(class UOnlineIdentitySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, enum class EOnlineUserPrivilege Privilege);
};

// 0xA0 (0xD0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystem
class UOnlineLeaderboardsSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_AC0[0x80];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnLeaderboardReadComplete;                         // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLeaderboardFlushComplete;                        // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineLeaderboardsSubsystem* GetDefaultObj();

	bool WriteLeaderboards(class FName SessionName, const struct FUniqueNetIdRepl& Player, class UOnlineLeaderboardWrite* WriteObject);
	bool IsSubsystemAvailable();
	void FreeStats(class UOnlineLeaderboardRead* ReadObject);
	bool FlushLeaderboards(class FName SessionName);
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboards
class UOnlineLeaderboardsSubsystemReadLeaderboards : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLeaderboardReadComplete;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineLeaderboardsSubsystem*          __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AC8[0x8];                                      // Fixing Size After Last Property 
	TArray<struct FUniqueNetIdRepl>              __Store__Players;                                  // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UOnlineLeaderboardRead*                __Store__ReadObject;                               // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineLeaderboardsSubsystemReadLeaderboards* GetDefaultObj();

	class UOnlineLeaderboardsSubsystemReadLeaderboards* ReadLeaderboards(class UOnlineLeaderboardsSubsystem* Subsystem, const TArray<struct FUniqueNetIdRepl>& Players, class UOnlineLeaderboardRead* ReadObject);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsForFriends
class UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLeaderboardReadComplete;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineLeaderboardsSubsystem*          __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AD3[0x8];                                      // Fixing Size After Last Property 
	int32                                        __Store__LocalUserNum;                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AD4[0x4];                                      // Fixing Size After Last Property 
	class UOnlineLeaderboardRead*                __Store__ReadObject;                               // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends* GetDefaultObj();

	class UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends* ReadLeaderboardsForFriends(class UOnlineLeaderboardsSubsystem* Subsystem, int32 LocalUserNum, class UOnlineLeaderboardRead* ReadObject);
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsAroundRank
class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLeaderboardReadComplete;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineLeaderboardsSubsystem*          __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ADB[0x8];                                      // Fixing Size After Last Property 
	int32                                        __Store__Rank;                                     // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ADC[0x4];                                      // Fixing Size After Last Property 
	int64                                        __Store__Range;                                    // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOnlineLeaderboardRead*                __Store__ReadObject;                               // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank* GetDefaultObj();

	class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank* ReadLeaderboardsAroundRank(class UOnlineLeaderboardsSubsystem* Subsystem, int32 Rank, int64 Range, class UOnlineLeaderboardRead* ReadObject);
};

// 0x80 (0xB0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineLeaderboardsSubsystemReadLeaderboardsAroundUser
class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLeaderboardReadComplete;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineLeaderboardsSubsystem*          __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AE8[0x8];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__Player;                                   // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int64                                        __Store__Range;                                    // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOnlineLeaderboardRead*                __Store__ReadObject;                               // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser* GetDefaultObj();

	class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser* ReadLeaderboardsAroundUser(class UOnlineLeaderboardsSubsystem* Subsystem, const struct FUniqueNetIdRepl& Player, int64 Range, class UOnlineLeaderboardRead* ReadObject);
};

// 0xE8 (0x118 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineLobbySubsystem
class UOnlineLobbySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_B38[0x98];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnLobbyUpdate;                                     // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLobbyDelete;                                     // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMemberConnect;                                   // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMemberUpdate;                                    // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMemberDisconnect;                                // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineLobbySubsystem* GetDefaultObj();

	class ULobbyId* ParseSerializedLobbyId(const class FString& InLobbyId);
	class UOnlineLobbyTransaction* MakeUpdateLobbyTransaction(const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId);
	class UOnlineLobbyMemberTransaction* MakeUpdateLobbyMemberTransaction(const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, const struct FUniqueNetIdRepl& MemberId);
	class UOnlineLobbyTransaction* MakeCreateLobbyTransaction(const struct FUniqueNetIdRepl& UserId);
	bool IsSubsystemAvailable();
	bool GetMemberUserId(const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, int32 MemberIndex, struct FUniqueNetIdRepl* OutMemberId);
	bool GetMemberMetadataValue(const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, const struct FUniqueNetIdRepl& MemberId, const class FString& MetadataKey, struct FVariantDataBP* OutMetadataValue);
	bool GetMemberCount(const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, int32* OutMemberCount);
	bool GetLobbyMetadataValue(const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, const class FString& MetadataKey, struct FVariantDataBP* OutMetadataValue);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineLobbySubsystemCreateLobby
class UOnlineLobbySubsystemCreateLobby : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLobbyCreateOrConnectComplete;                    // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOnlineLobbyTransaction*               __Store__Transaction;                              // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineLobbySubsystemCreateLobby* GetDefaultObj();

	class UOnlineLobbySubsystemCreateLobby* CreateLobby(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, class UOnlineLobbyTransaction* Transaction);
};

// 0x78 (0xA8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineLobbySubsystemUpdateLobby
class UOnlineLobbySubsystemUpdateLobby : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLobbyOperationComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULobbyId*                              __Store__LobbyId;                                  // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOnlineLobbyTransaction*               __Store__Transaction;                              // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineLobbySubsystemUpdateLobby* GetDefaultObj();

	class UOnlineLobbySubsystemUpdateLobby* UpdateLobby(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, class UOnlineLobbyTransaction* Transaction);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineLobbySubsystemDeleteLobby
class UOnlineLobbySubsystemDeleteLobby : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLobbyOperationComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULobbyId*                              __Store__LobbyId;                                  // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineLobbySubsystemDeleteLobby* GetDefaultObj();

	class UOnlineLobbySubsystemDeleteLobby* DeleteLobby(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineLobbySubsystemConnectLobby
class UOnlineLobbySubsystemConnectLobby : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLobbyCreateOrConnectComplete;                    // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULobbyId*                              __Store__LobbyId;                                  // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineLobbySubsystemConnectLobby* GetDefaultObj();

	class UOnlineLobbySubsystemConnectLobby* ConnectLobby(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineLobbySubsystemDisconnectLobby
class UOnlineLobbySubsystemDisconnectLobby : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLobbyOperationComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULobbyId*                              __Store__LobbyId;                                  // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineLobbySubsystemDisconnectLobby* GetDefaultObj();

	class UOnlineLobbySubsystemDisconnectLobby* DisconnectLobby(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId);
};

// 0x78 (0xA8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineLobbySubsystemUpdateMemberSelf
class UOnlineLobbySubsystemUpdateMemberSelf : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLobbyOperationComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULobbyId*                              __Store__LobbyId;                                  // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOnlineLobbyMemberTransaction*         __Store__Transaction;                              // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineLobbySubsystemUpdateMemberSelf* GetDefaultObj();

	class UOnlineLobbySubsystemUpdateMemberSelf* UpdateMemberSelf(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, class UOnlineLobbyMemberTransaction* Transaction);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineLobbySubsystemSearch
class UOnlineLobbySubsystemSearch : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLobbySearchComplete;                             // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FOnlineLobbySearchQueryBP             __Store__Query;                                    // 0x98(0x20)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineLobbySubsystemSearch* GetDefaultObj();

	class UOnlineLobbySubsystemSearch* Search(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const struct FOnlineLobbySearchQueryBP& Query);
};

// 0xA0 (0xD0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineLobbySubsystemKickMember
class UOnlineLobbySubsystemKickMember : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLobbyOperationComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineLobbySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULobbyId*                              __Store__LobbyId;                                  // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__MemberId;                                 // 0xA0(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineLobbySubsystemKickMember* GetDefaultObj();

	class UOnlineLobbySubsystemKickMember* KickMember(class UOnlineLobbySubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, const struct FUniqueNetIdRepl& MemberId);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystem
class UOnlineMessageSanitizerSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_B7A[0x70];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineMessageSanitizerSubsystem* GetDefaultObj();

	void ResetBlockedUserCache();
	bool IsSubsystemAvailable();
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemSanitizeDisplayName
class UOnlineMessageSanitizerSubsystemSanitizeDisplayName : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMessageProcessed;                                // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineMessageSanitizerSubsystem*      __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__DisplayName;                              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineMessageSanitizerSubsystemSanitizeDisplayName* GetDefaultObj();

	class UOnlineMessageSanitizerSubsystemSanitizeDisplayName* SanitizeDisplayName(class UOnlineMessageSanitizerSubsystem* Subsystem, const class FString& DisplayName);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemSanitizeDisplayNames
class UOnlineMessageSanitizerSubsystemSanitizeDisplayNames : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMessageArrayProcessed;                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineMessageSanitizerSubsystem*      __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__DisplayNames;                             // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineMessageSanitizerSubsystemSanitizeDisplayNames* GetDefaultObj();

	class UOnlineMessageSanitizerSubsystemSanitizeDisplayNames* SanitizeDisplayNames(class UOnlineMessageSanitizerSubsystem* Subsystem, const TArray<class FString>& DisplayNames);
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineMessageSanitizerSubsystemQueryBlockedUser
class UOnlineMessageSanitizerSubsystemQueryBlockedUser : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryUserBlockedResponse;                        // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineMessageSanitizerSubsystem*      __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        __Store__LocalUserNum;                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B8B[0x4];                                      // Fixing Size After Last Property 
	class FString                                __Store__FromUserId;                               // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__FromPlatform;                             // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineMessageSanitizerSubsystemQueryBlockedUser* GetDefaultObj();

	class UOnlineMessageSanitizerSubsystemQueryBlockedUser* QueryBlockedUser(class UOnlineMessageSanitizerSubsystem* Subsystem, int32 LocalUserNum, const class FString& FromUserId, const class FString& FromPlatform);
};

// 0xB0 (0xE0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineMessageSubsystem
class UOnlineMessageSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_B96[0x90];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnEnumerateMessagesComplete;                       // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSendMessageComplete;                             // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineMessageSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
	bool EnumerateMessages(int32 LocalUserNum);
	bool ClearMessages(int32 LocalUserNum);
	bool ClearMessageHeaders(int32 LocalUserNum);
};

// 0x1F0 (0x220 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePartySubsystem
class UOnlinePartySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_BEF[0xF0];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnPartyJoined;                                     // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyExited;                                     // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyStateChanged;                               // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyJIPResponse;                                // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyPromotionLockoutChanged;                    // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyConfigChanged;                              // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyDataReceived;                               // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyMemberPromoted;                             // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyMemberExited;                               // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyMemberJoined;                               // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyMemberDataReceived;                         // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyInvitesChanged;                             // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyInviteRequestReceived;                      // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyInviteReceivedEx;                           // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyJIPRequestReceived;                         // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFillPartyJoinRequestData;                        // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlinePartySubsystem* GetDefaultObj();

	bool UpdatePartyMemberData(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, class FName Namespace, class UReadablePartyData* PartyMemberData);
	bool UpdatePartyData(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, class FName Namespace, class UReadablePartyData* PartyData);
	void RespondToQueryJoinability(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& RecipientId, bool bCanJoin, int32 DeniedResultCode, class UReadablePartyData* PartyData);
	bool RejectInvitation(const struct FUniqueNetIdRepl& LocalUserId, const struct FUniqueNetIdRepl& SenderId);
	class FString MakeTokenFromJoinInfo(class UOnlinePartyJoinInfo* JoinInfo);
	class FString MakeJoinInfoJson(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId);
	bool IsSubsystemAvailable();
	bool IsMemberLeader(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId);
	bool GetPendingInvites(const struct FUniqueNetIdRepl& LocalUserId, TArray<class UOnlinePartyJoinInfo*>* OutPendingInvitesArray);
	bool GetPendingInvitedUsers(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, TArray<struct FUniqueNetIdRepl>* OutPendingInvitedUserArray);
	bool GetPartyMembers(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, TArray<class UBlueprintPartyMember*>* OutPartyMembersArray);
	class UReadablePartyData* GetPartyMemberData(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId, class FName Namespace);
	int64 GetPartyMemberCount(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId);
	class UBlueprintPartyMember* GetPartyMember(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& MemberId);
	class UReadablePartyData* GetPartyData(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, class FName Namespace);
	class UParty* GetParty(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId);
	bool GetJoinedParties(const struct FUniqueNetIdRepl& LocalUserId, TArray<class UPartyId*>* OutPartyIdArray);
	void DumpPartyState();
	bool ApproveJoinRequest(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& RecipientId, bool bIsApproved, int32 DeniedResultCode);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePartySubsystemRestoreParties
class UOnlinePartySubsystemRestoreParties : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRestorePartiesComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePartySubsystemRestoreParties* GetDefaultObj();

	class UOnlinePartySubsystemRestoreParties* RestoreParties(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePartySubsystemRestoreInvites
class UOnlinePartySubsystemRestoreInvites : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRestoreInvitesComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePartySubsystemRestoreInvites* GetDefaultObj();

	class UOnlinePartySubsystemRestoreInvites* RestoreInvites(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePartySubsystemCleanupParties
class UOnlinePartySubsystemCleanupParties : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCleanupPartiesComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePartySubsystemCleanupParties* GetDefaultObj();

	class UOnlinePartySubsystemCleanupParties* CleanupParties(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId);
};

// 0xB0 (0xE0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePartySubsystemCreateParty
class UOnlinePartySubsystemCreateParty : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCreatePartyComplete;                             // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int64                                        __Store__PartyTypeId;                              // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FOnlinePartyConfiguration             __Store__PartyConfig;                              // 0xA0(0x40)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePartySubsystemCreateParty* GetDefaultObj();

	class UOnlinePartySubsystemCreateParty* CreateParty(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, int64 PartyTypeId, const struct FOnlinePartyConfiguration& PartyConfig);
};

// 0xB8 (0xE8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePartySubsystemUpdateParty
class UOnlinePartySubsystemUpdateParty : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUpdatePartyComplete;                             // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPartyId*                              __Store__PartyId;                                  // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FOnlinePartyConfiguration             __Store__PartyConfig;                              // 0xA0(0x40)(NativeAccessSpecifierPrivate)
	bool                                         __Store__bShouldRegenerateReservationKey;          // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C25[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlinePartySubsystemUpdateParty* GetDefaultObj();

	class UOnlinePartySubsystemUpdateParty* UpdateParty(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FOnlinePartyConfiguration& PartyConfig, bool bShouldRegenerateReservationKey);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePartySubsystemJoinParty
class UOnlinePartySubsystemJoinParty : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnJoinPartyComplete;                               // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOnlinePartyJoinInfo*                  __Store__OnlinePartyJoinInfo;                      // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePartySubsystemJoinParty* GetDefaultObj();

	class UOnlinePartySubsystemJoinParty* JoinParty(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class UOnlinePartyJoinInfo* OnlinePartyJoinInfo);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePartySubsystemRejoinParty
class UOnlinePartySubsystemRejoinParty : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnJoinPartyComplete;                               // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPartyId*                              __Store__PartyId;                                  // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int64                                        __Store__PartyTypeId;                              // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FUniqueNetIdRepl>              __Store__FormerMembers;                            // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePartySubsystemRejoinParty* GetDefaultObj();

	class UOnlinePartySubsystemRejoinParty* RejoinParty(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, int64 PartyTypeId, const TArray<struct FUniqueNetIdRepl>& FormerMembers);
};

// 0x78 (0xA8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePartySubsystemLeaveParty
class UOnlinePartySubsystemLeaveParty : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLeavePartyComplete;                              // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPartyId*                              __Store__PartyId;                                  // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         __Store__bSynchronizeLeave;                        // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C57[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlinePartySubsystemLeaveParty* GetDefaultObj();

	class UOnlinePartySubsystemLeaveParty* LeaveParty(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, bool bSynchronizeLeave);
};

// 0xA0 (0xD0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePartySubsystemSendInvitation
class UOnlinePartySubsystemSendInvitation : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSendPartyInvitationComplete;                     // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPartyId*                              __Store__PartyId;                                  // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__Recipient;                                // 0xA0(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePartySubsystemSendInvitation* GetDefaultObj();

	class UOnlinePartySubsystemSendInvitation* SendInvitation(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& Recipient);
};

// 0xA0 (0xD0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePartySubsystemCancelInvitation
class UOnlinePartySubsystemCancelInvitation : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancelPartyInvitationComplete;                   // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__TargetUserId;                             // 0x98(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPartyId*                              __Store__PartyId;                                  // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePartySubsystemCancelInvitation* GetDefaultObj();

	class UOnlinePartySubsystemCancelInvitation* CancelInvitation(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const struct FUniqueNetIdRepl& TargetUserId, class UPartyId* PartyId);
};

// 0xA0 (0xD0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePartySubsystemKickMember
class UOnlinePartySubsystemKickMember : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnKickPartyMemberComplete;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPartyId*                              __Store__PartyId;                                  // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__TargetMemberId;                           // 0xA0(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePartySubsystemKickMember* GetDefaultObj();

	class UOnlinePartySubsystemKickMember* KickMember(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& TargetMemberId);
};

// 0xA0 (0xD0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePartySubsystemPromoteMember
class UOnlinePartySubsystemPromoteMember : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPromotePartyMemberComplete;                      // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePartySubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPartyId*                              __Store__PartyId;                                  // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__TargetMemberId;                           // 0xA0(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePartySubsystemPromoteMember* GetDefaultObj();

	class UOnlinePartySubsystemPromoteMember* PromoteMember(class UOnlinePartySubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const struct FUniqueNetIdRepl& TargetMemberId);
};

// 0xA0 (0xD0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePresenceSubsystem
class UOnlinePresenceSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_C9B[0x80];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnPresenceReceived;                                // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPresenceArrayUpdated;                            // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlinePresenceSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
	enum class EOnlineCachedResult_ GetCachedPresenceForApp(const struct FUniqueNetIdRepl& LocalUserId, const struct FUniqueNetIdRepl& User, const class FString& AppID, struct FOnlineUserPresenceData* OutPresence);
	enum class EOnlineCachedResult_ GetCachedPresence(const struct FUniqueNetIdRepl& User, struct FOnlineUserPresenceData* OutPresence);
};

// 0xD0 (0x100 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePresenceSubsystemSetPresence
class UOnlinePresenceSubsystemSetPresence : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPresenceTaskComplete;                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePresenceSubsystem*              __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__User;                                     // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FOnlineUserPresenceStatusData         __Store__Status;                                   // 0x98(0x68)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePresenceSubsystemSetPresence* GetDefaultObj();

	class UOnlinePresenceSubsystemSetPresence* SetPresence(class UOnlinePresenceSubsystem* Subsystem, const struct FUniqueNetIdRepl& User, const struct FOnlineUserPresenceStatusData& Status);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePresenceSubsystemQueryPresence
class UOnlinePresenceSubsystemQueryPresence : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPresenceTaskComplete;                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePresenceSubsystem*              __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__User;                                     // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePresenceSubsystemQueryPresence* GetDefaultObj();

	class UOnlinePresenceSubsystemQueryPresence* QueryPresence(class UOnlinePresenceSubsystem* Subsystem, const struct FUniqueNetIdRepl& User);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePurchaseSubsystem
class UOnlinePurchaseSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_CBA[0x78];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnUnexpectedPurchaseReceipt;                       // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlinePurchaseSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
	bool IsAllowedToPurchase(const struct FUniqueNetIdRepl& UserId);
	void GetReceipts(const struct FUniqueNetIdRepl& UserId, TArray<class UPurchaseReceipt*>* OutReceipts);
	void FinalizePurchase(const struct FUniqueNetIdRepl& UserId, const class FString& ReceiptId, const class FString& ReceiptInfo);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePurchaseSubsystemCheckout
class UOnlinePurchaseSubsystemCheckout : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPurchaseCheckoutComplete;                        // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePurchaseSubsystem*              __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPurchaseCheckoutRequestBP            __Store__CheckoutRequest;                          // 0x98(0x20)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePurchaseSubsystemCheckout* GetDefaultObj();

	class UOnlinePurchaseSubsystemCheckout* Checkout(class UOnlinePurchaseSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const struct FPurchaseCheckoutRequestBP& CheckoutRequest);
};

// 0x98 (0xC8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePurchaseSubsystemRedeemCode
class UOnlinePurchaseSubsystemRedeemCode : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPurchaseRedeemCodeComplete;                      // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePurchaseSubsystem*              __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRedeemCodeRequestBP                  __Store__RedeemCodeRequest;                        // 0x98(0x30)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePurchaseSubsystemRedeemCode* GetDefaultObj();

	class UOnlinePurchaseSubsystemRedeemCode* RedeemCode(class UOnlinePurchaseSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const struct FRedeemCodeRequestBP& RedeemCodeRequest);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePurchaseSubsystemQueryReceipts
class UOnlinePurchaseSubsystemQueryReceipts : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryReceiptsComplete;                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePurchaseSubsystem*              __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         __Store__bRestoreReceipts;                         // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CE8[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlinePurchaseSubsystemQueryReceipts* GetDefaultObj();

	class UOnlinePurchaseSubsystemQueryReceipts* QueryReceipts(class UOnlinePurchaseSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, bool bRestoreReceipts);
};

// 0x78 (0xA8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlinePurchaseSubsystemFinalizeReceiptValidationInfo
class UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFinalizeReceiptValidationInfoComplete;           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlinePurchaseSubsystem*              __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__InReceiptValidationInfo;                  // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo* GetDefaultObj();

	class UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo* FinalizeReceiptValidationInfo(class UOnlinePurchaseSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& InReceiptValidationInfo);
};

// 0x288 (0x2B8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystem
class UOnlineSessionSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_D68[0x128];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnCreateSessionComplete;                           // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStartSessionComplete;                            // 0x168(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUpdateSessionComplete;                           // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEndSessionComplete;                              // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDestroySessionComplete;                          // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMatchmakingComplete;                             // 0x1A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancelMatchmakingComplete;                       // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFindSessionsComplete;                            // 0x1C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancelFindSessionsComplete;                      // 0x1D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPingSearchResultsComplete;                       // 0x1E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnJoinSessionComplete;                             // 0x1F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSessionParticipantJoined;                        // 0x208(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSessionParticipantLeft;                          // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQosDataRequested;                                // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSessionSettingsUpdated;                          // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSessionParticipantSettingsUpdated;               // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFindFriendSessionComplete;                       // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSessionUserInviteAccepted;                       // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSessionInviteReceived;                           // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRegisterPlayersComplete;                         // 0x288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUnregisterPlayersComplete;                       // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSessionFailure;                                  // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystem* GetDefaultObj();

	bool SendSessionInviteToFriends(const struct FUniqueNetIdRepl& LocalUserId, class FName SessionName, const TArray<struct FUniqueNetIdRepl>& Friends);
	bool SendSessionInviteToFriend(const struct FUniqueNetIdRepl& LocalUserId, class FName SessionName, const struct FUniqueNetIdRepl& Friend);
	void RemovePlayerFromSession(int32 LocalUserNum, class FName SessionName, const struct FUniqueNetIdRepl& TargetPlayerId);
	void RemoveNamedSession(class FName SessionName);
	bool IsSubsystemAvailable();
	bool IsPlayerInSession(class FName SessionName, const struct FUniqueNetIdRepl& UniqueId);
	bool HasPresenceSession();
	class FString GetVoiceChatRoomName(int32 LocalUserNum, class FName SessionName);
	enum class EOnlineSessionState_ GetSessionState(class FName SessionName);
	class UOnlineSessionSettings* GetSessionSettings(class FName SessionName);
	int32 GetNumSessions();
	class UNamedOnlineSession* GetNamedSession(class FName SessionName);
	void DumpSessionState();
	struct FUniqueNetIdRepl CreateSessionIdFromString(const class FString& SessionIdStr);
};

// 0x1B8 (0x1E8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemCreateSession
class UOnlineSessionSubsystemCreateSession : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCreateSessionComplete;                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D77[0x8];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__HostingPlayerId;                          // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  __Store__SessionName;                              // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FOnlineSessionSettingsBP              __Store__NewSessionSettings;                       // 0xA8(0x140)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemCreateSession* GetDefaultObj();

	class UOnlineSessionSubsystemCreateSession* CreateSession(class UOnlineSessionSubsystem* Subsystem, const struct FUniqueNetIdRepl& HostingPlayerId, class FName SessionName, const struct FOnlineSessionSettingsBP& NewSessionSettings);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemStartSession
class UOnlineSessionSubsystemStartSession : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStartSessionComplete;                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D82[0x8];                                      // Fixing Size After Last Property 
	class FName                                  __Store__SessionName;                              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemStartSession* GetDefaultObj();

	class UOnlineSessionSubsystemStartSession* StartSession(class UOnlineSessionSubsystem* Subsystem, class FName SessionName);
};

// 0x190 (0x1C0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemUpdateSession
class UOnlineSessionSubsystemUpdateSession : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUpdateSessionComplete;                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D94[0x8];                                      // Fixing Size After Last Property 
	class FName                                  __Store__SessionName;                              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FOnlineSessionSettingsBP              __Store__UpdatedSessionSettings;                   // 0x78(0x140)(NativeAccessSpecifierPrivate)
	bool                                         __Store__bShouldRefreshOnlineData;                 // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D95[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemUpdateSession* GetDefaultObj();

	class UOnlineSessionSubsystemUpdateSession* UpdateSession(class UOnlineSessionSubsystem* Subsystem, class FName SessionName, const struct FOnlineSessionSettingsBP& UpdatedSessionSettings, bool bShouldRefreshOnlineData);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemEndSession
class UOnlineSessionSubsystemEndSession : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEndSessionComplete;                              // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DA4[0x8];                                      // Fixing Size After Last Property 
	class FName                                  __Store__SessionName;                              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemEndSession* GetDefaultObj();

	class UOnlineSessionSubsystemEndSession* EndSession(class UOnlineSessionSubsystem* Subsystem, class FName SessionName);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemDestroySession
class UOnlineSessionSubsystemDestroySession : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDestroySessionComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  __Store__SessionName;                              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemDestroySession* GetDefaultObj();

	class UOnlineSessionSubsystemDestroySession* DestroySession(class UOnlineSessionSubsystem* Subsystem, class FName SessionName);
};

// 0x1A0 (0x1D0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemStartMatchmaking
class UOnlineSessionSubsystemStartMatchmaking : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMatchmakingComplete;                             // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DBB[0x8];                                      // Fixing Size After Last Property 
	TArray<struct FUniqueNetIdRepl>              __Store__LocalPlayers;                             // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FName                                  __Store__SessionName;                              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FOnlineSessionSettingsBP              __Store__NewSessionSettings;                       // 0x88(0x140)(NativeAccessSpecifierPrivate)
	class UOnlineSessionSearch*                  __Store__SearchSettings;                           // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemStartMatchmaking* GetDefaultObj();

	class UOnlineSessionSubsystemStartMatchmaking* StartMatchmaking(class UOnlineSessionSubsystem* Subsystem, const TArray<struct FUniqueNetIdRepl>& LocalPlayers, class FName SessionName, const struct FOnlineSessionSettingsBP& NewSessionSettings, class UOnlineSessionSearch* SearchSettings);
};

// 0x78 (0xA8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemCancelMatchmaking
class UOnlineSessionSubsystemCancelMatchmaking : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancelMatchmakingComplete;                       // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DC4[0x8];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__SearchingPlayerId;                        // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  __Store__SessionName;                              // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemCancelMatchmaking* GetDefaultObj();

	class UOnlineSessionSubsystemCancelMatchmaking* CancelMatchmaking(class UOnlineSessionSubsystem* Subsystem, const struct FUniqueNetIdRepl& SearchingPlayerId, class FName SessionName);
};

// 0x78 (0xA8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemFindSessions
class UOnlineSessionSubsystemFindSessions : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFindSessionsComplete;                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DD2[0x8];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__SearchingPlayerId;                        // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOnlineSessionSearch*                  __Store__SearchSettings;                           // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemFindSessions* GetDefaultObj();

	class UOnlineSessionSubsystemFindSessions* FindSessions(class UOnlineSessionSubsystem* Subsystem, const struct FUniqueNetIdRepl& SearchingPlayerId, class UOnlineSessionSearch* SearchSettings);
};

// 0xD8 (0x108 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemFindSessionById
class UOnlineSessionSubsystemFindSessionById : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSingleSessionResultComplete;                     // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__SearchingUserId;                          // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__SessionId;                                // 0x98(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__FriendId;                                 // 0xC8(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__UserData;                                 // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemFindSessionById* GetDefaultObj();

	class UOnlineSessionSubsystemFindSessionById* FindSessionById(class UOnlineSessionSubsystem* Subsystem, const struct FUniqueNetIdRepl& SearchingUserId, const struct FUniqueNetIdRepl& SessionId, const struct FUniqueNetIdRepl& FriendId, const class FString& UserData);
};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemCancelFindSessions
class UOnlineSessionSubsystemCancelFindSessions : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancelFindSessionsComplete;                      // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DF6[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemCancelFindSessions* GetDefaultObj();

	class UOnlineSessionSubsystemCancelFindSessions* CancelFindSessions(class UOnlineSessionSubsystem* Subsystem);
};

// 0x1E8 (0x218 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemPingSearchResults
class UOnlineSessionSubsystemPingSearchResults : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPingSearchResultsComplete;                       // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E09[0x8];                                      // Fixing Size After Last Property 
	struct FOnlineSessionSearchResultBP          __Store__SearchResult;                             // 0x70(0x1A8)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemPingSearchResults* GetDefaultObj();

	class UOnlineSessionSubsystemPingSearchResults* PingSearchResults(class UOnlineSessionSubsystem* Subsystem, const struct FOnlineSessionSearchResultBP& SearchResult);
};

// 0x220 (0x250 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemJoinSession
class UOnlineSessionSubsystemJoinSession : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnJoinSessionComplete;                             // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E12[0x8];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  __Store__SessionName;                              // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FOnlineSessionSearchResultBP          __Store__DesiredSession;                           // 0xA8(0x1A8)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemJoinSession* GetDefaultObj();

	class UOnlineSessionSubsystemJoinSession* JoinSession(class UOnlineSessionSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, class FName SessionName, const struct FOnlineSessionSearchResultBP& DesiredSession);
};

// 0x78 (0xA8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemFindFriendSession
class UOnlineSessionSubsystemFindFriendSession : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFindFriendSessionComplete;                       // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E23[0x8];                                      // Fixing Size After Last Property 
	int32                                        __Store__LocalUserNum;                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E24[0x4];                                      // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__Friend;                                   // 0x78(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemFindFriendSession* GetDefaultObj();

	class UOnlineSessionSubsystemFindFriendSession* FindFriendSession(class UOnlineSessionSubsystem* Subsystem, int32 LocalUserNum, const struct FUniqueNetIdRepl& Friend);
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemRegisterPlayers
class UOnlineSessionSubsystemRegisterPlayers : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRegisterPlayersComplete;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E4A[0x8];                                      // Fixing Size After Last Property 
	class FName                                  __Store__SessionName;                              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FUniqueNetIdRepl>              __Store__Players;                                  // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         __Store__bWasInvited;                              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E4D[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemRegisterPlayers* GetDefaultObj();

	class UOnlineSessionSubsystemRegisterPlayers* RegisterPlayers(class UOnlineSessionSubsystem* Subsystem, class FName SessionName, const TArray<struct FUniqueNetIdRepl>& Players, bool bWasInvited);
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemUnregisterPlayers
class UOnlineSessionSubsystemUnregisterPlayers : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUnregisterPlayersComplete;                       // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E58[0x8];                                      // Fixing Size After Last Property 
	class FName                                  __Store__SessionName;                              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FUniqueNetIdRepl>              __Store__Players;                                  // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemUnregisterPlayers* GetDefaultObj();

	class UOnlineSessionSubsystemUnregisterPlayers* UnregisterPlayers(class UOnlineSessionSubsystem* Subsystem, class FName SessionName, const TArray<struct FUniqueNetIdRepl>& Players);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemRegisterLocalPlayer
class UOnlineSessionSubsystemRegisterLocalPlayer : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRegisterLocalPlayerComplete;                     // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__PlayerId;                                 // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  __Store__SessionName;                              // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemRegisterLocalPlayer* GetDefaultObj();

	class UOnlineSessionSubsystemRegisterLocalPlayer* RegisterLocalPlayer(class UOnlineSessionSubsystem* Subsystem, const struct FUniqueNetIdRepl& PlayerId, class FName SessionName);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSessionSubsystemUnregisterLocalPlayer
class UOnlineSessionSubsystemUnregisterLocalPlayer : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUnregisterLocalPlayerComplete;                   // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineSessionSubsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__PlayerId;                                 // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  __Store__SessionName;                              // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSessionSubsystemUnregisterLocalPlayer* GetDefaultObj();

	class UOnlineSessionSubsystemUnregisterLocalPlayer* UnregisterLocalPlayer(class UOnlineSessionSubsystem* Subsystem, const struct FUniqueNetIdRepl& PlayerId, class FName SessionName);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSharedCloudSubsystem
class UOnlineSharedCloudSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_E98[0x70];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineSharedCloudSubsystem* GetDefaultObj();

	bool WriteSharedFile(const struct FUniqueNetIdRepl& UserId, const class FString& Filename, class UFileData** Contents);
	bool IsSubsystemAvailable();
	bool ClearSharedFiles();
};

// 0xF0 (0x120 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSharingSubsystem
class UOnlineSharingSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_EB1[0xB0];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnRequestNewReadPermissionsComplete;               // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRequestNewPublishPermissionsComplete;            // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReadNewsFeedComplete;                            // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSharePostComplete;                               // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineSharingSubsystem* GetDefaultObj();

	bool ReadNewsFeed(int32 LocalUserNum, int32 NumPostsToRead);
	bool IsSubsystemAvailable();
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineStatsSubsystem
class UOnlineStatsSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_EC7[0x70];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineStatsSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
	struct FOnlineStatsUserStatsBP GetStats(const struct FUniqueNetIdRepl& StatsUserId);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineStatsSubsystemQueryStats
class UOnlineStatsSubsystemQueryStats : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnlineStatsQueryUsersStatsComplete;                // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineStatsSubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FUniqueNetIdRepl>              __Store__StatUsers;                                // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__StatNames;                                // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineStatsSubsystemQueryStats* GetDefaultObj();

	class UOnlineStatsSubsystemQueryStats* QueryStats(class UOnlineStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<struct FUniqueNetIdRepl>& StatUsers, const TArray<class FString>& StatNames);
};

// 0x78 (0xA8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineStatsSubsystemUpdateStats
class UOnlineStatsSubsystemUpdateStats : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnlineStatsUpdateStatsComplete;                    // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineStatsSubsystem*                 __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FOnlineStatsUserUpdatedStatsBP> __Store__UpdatedUserStats;                         // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineStatsSubsystemUpdateStats* GetDefaultObj();

	class UOnlineStatsSubsystemUpdateStats* UpdateStats(class UOnlineStatsSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const TArray<struct FOnlineStatsUserUpdatedStatsBP>& UpdatedUserStats);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineStoreV2Subsystem
class UOnlineStoreV2Subsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_F07[0x78];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnQueryForAvailablePurchasesComplete;              // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineStoreV2Subsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
	void GetOffers(TArray<class UOnlineStoreOffer*>* OutOffers);
	class UOnlineStoreOffer* GetOffer(const class FString& OfferId);
	void GetCategories(TArray<struct FOnlineStoreCategoryBP>* OutCategories);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryCategories
class UOnlineStoreV2SubsystemQueryCategories : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryOnlineStoreCategoriesComplete;              // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineStoreV2Subsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineStoreV2SubsystemQueryCategories* GetDefaultObj();

	class UOnlineStoreV2SubsystemQueryCategories* QueryCategories(class UOnlineStoreV2Subsystem* Subsystem, const struct FUniqueNetIdRepl& UserId);
};

// 0x98 (0xC8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryOffersByFilter
class UOnlineStoreV2SubsystemQueryOffersByFilter : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryOnlineStoreOffersComplete;                  // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineStoreV2Subsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FOnlineStoreFilterBP                  __Store__Filter;                                   // 0x98(0x30)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineStoreV2SubsystemQueryOffersByFilter* GetDefaultObj();

	class UOnlineStoreV2SubsystemQueryOffersByFilter* QueryOffersByFilter(class UOnlineStoreV2Subsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const struct FOnlineStoreFilterBP& Filter);
};

// 0x78 (0xA8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineStoreV2SubsystemQueryOffersById
class UOnlineStoreV2SubsystemQueryOffersById : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryOnlineStoreOffersComplete;                  // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineStoreV2Subsystem*               __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__OfferIds;                                 // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineStoreV2SubsystemQueryOffersById* GetDefaultObj();

	class UOnlineStoreV2SubsystemQueryOffersById* QueryOffersById(class UOnlineStoreV2Subsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const TArray<class FString>& OfferIds);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineSubsystem
class UOnlineSubsystem : public UGameInstanceSubsystem
{
public:
	TMap<class FString, class UGameInstanceSubsystem*> SubsystemCache;                                    // 0x30(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineSubsystem* GetDefaultObj();

	class UOnlineVoiceSubsystem* GetNamedVoiceSubsystem(class FName SubsystemName);
	class UOnlineVoiceAdminSubsystem* GetNamedVoiceAdminSubsystem(class FName SubsystemName);
	class UOnlineUserSubsystem* GetNamedUserSubsystem(class FName SubsystemName);
	class UOnlineUserCloudSubsystem* GetNamedUserCloudSubsystem(class FName SubsystemName);
	class UOnlineTurnBasedSubsystem* GetNamedTurnBasedSubsystem(class FName SubsystemName);
	class UOnlineTournamentSubsystem* GetNamedTournamentSubsystem(class FName SubsystemName);
	class UOnlineTitleFileSubsystem* GetNamedTitleFileSubsystem(class FName SubsystemName);
	class UOnlineTimeSubsystem* GetNamedTimeSubsystem(class FName SubsystemName);
	class UOnlineStoreV2Subsystem* GetNamedStoreV2Subsystem(class FName SubsystemName);
	class UOnlineStatsSubsystem* GetNamedStatsSubsystem(class FName SubsystemName);
	class UOnlineSharingSubsystem* GetNamedSharingSubsystem(class FName SubsystemName);
	class UOnlineSharedCloudSubsystem* GetNamedSharedCloudSubsystem(class FName SubsystemName);
	class UOnlineSessionSubsystem* GetNamedSessionSubsystem(class FName SubsystemName);
	class UOnlinePurchaseSubsystem* GetNamedPurchaseSubsystem(class FName SubsystemName);
	class UOnlinePresenceSubsystem* GetNamedPresenceSubsystem(class FName SubsystemName);
	class UOnlinePartySubsystem* GetNamedPartySubsystem(class FName SubsystemName);
	class UOnlineMessageSubsystem* GetNamedMessageSubsystem(class FName SubsystemName);
	class UOnlineMessageSanitizerSubsystem* GetNamedMessageSanitizerSubsystem(class FName SubsystemName);
	class UOnlineLobbySubsystem* GetNamedLobbySubsystem(class FName SubsystemName);
	class UOnlineLeaderboardsSubsystem* GetNamedLeaderboardsSubsystem(class FName SubsystemName);
	class UOnlineIdentitySubsystem* GetNamedIdentitySubsystem(class FName SubsystemName);
	class UOnlineGroupsSubsystem* GetNamedGroupsSubsystem(class FName SubsystemName);
	class UOnlineGameItemStatsSubsystem* GetNamedGameItemStatsSubsystem(class FName SubsystemName);
	class UOnlineGameActivitySubsystem* GetNamedGameActivitySubsystem(class FName SubsystemName);
	class UOnlineFriendsSubsystem* GetNamedFriendsSubsystem(class FName SubsystemName);
	class UOnlineExternalUISubsystem* GetNamedExternalUISubsystem(class FName SubsystemName);
	class UOnlineEventsSubsystem* GetNamedEventsSubsystem(class FName SubsystemName);
	class UOnlineEntitlementsSubsystem* GetNamedEntitlementsSubsystem(class FName SubsystemName);
	class UOnlineChatSubsystem* GetNamedChatSubsystem(class FName SubsystemName);
	class UOnlineAvatarSubsystem* GetNamedAvatarSubsystem(class FName SubsystemName);
	class UOnlineAchievementsSubsystem* GetNamedAchievementsSubsystem(class FName SubsystemName);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineTimeSubsystem
class UOnlineTimeSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_FAA[0x78];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnQueryServerUtcTimeComplete;                      // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineTimeSubsystem* GetDefaultObj();

	bool QueryServerUtcTime();
	bool IsSubsystemAvailable();
	class FString GetLastServerUtcTime();
};

// 0xB8 (0xE8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineTitleFileSubsystem
class UOnlineTitleFileSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_FC4[0x88];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnEnumerateFilesComplete;                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReadFileComplete;                                // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReadFileProgress;                                // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineTitleFileSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
	void GetFileList(TArray<struct FCloudFileHeaderBP>* Files);
	bool GetFileContents(const class FString& Filename, class UFileData** FileContents);
	void DeleteCachedFiles(bool bSkipEnumerated);
	bool ClearFiles();
	bool ClearFile(const class FString& Filename);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineTitleFileSubsystemEnumerateFiles
class UOnlineTitleFileSubsystemEnumerateFiles : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEnumerateFilesComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineTitleFileSubsystem*             __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FCE[0x8];                                      // Fixing Size After Last Property 
	struct FPagedQueryBP                         __Store__Page;                                     // 0x70(0x8)(NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineTitleFileSubsystemEnumerateFiles* GetDefaultObj();

	class UOnlineTitleFileSubsystemEnumerateFiles* EnumerateFiles(class UOnlineTitleFileSubsystem* Subsystem, const struct FPagedQueryBP& Page);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineTitleFileSubsystemReadFile
class UOnlineTitleFileSubsystemReadFile : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReadFileComplete;                                // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReadFileProgress;                                // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineTitleFileSubsystem*             __Store__Subsystem;                                // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FDF[0x10];                                     // Fixing Size After Last Property 
	class FString                                __Store__FileName;                                 // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineTitleFileSubsystemReadFile* GetDefaultObj();

	class UOnlineTitleFileSubsystemReadFile* ReadFile(class UOnlineTitleFileSubsystem* Subsystem, const class FString& Filename);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineTournamentSubsystem
class UOnlineTournamentSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_FE8[0x70];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineTournamentSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineTurnBasedSubsystem
class UOnlineTurnBasedSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_FFB[0x70];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineTurnBasedSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
	int32 GetMatchDataSize();
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineTurnBasedSubsystemLoadAllMatches
class UOnlineTurnBasedSubsystemLoadAllMatches : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LoadTurnBasedMatchesSignature;                     // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineTurnBasedSubsystem*             __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineTurnBasedSubsystemLoadAllMatches* GetDefaultObj();

	class UOnlineTurnBasedSubsystemLoadAllMatches* LoadAllMatches(class UOnlineTurnBasedSubsystem* Subsystem);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineTurnBasedSubsystemLoadMatchWithID
class UOnlineTurnBasedSubsystemLoadMatchWithID : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LoadTurnBasedMatchWithIDSignature;                 // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineTurnBasedSubsystem*             __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__MatchID;                                  // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineTurnBasedSubsystemLoadMatchWithID* GetDefaultObj();

	class UOnlineTurnBasedSubsystemLoadMatchWithID* LoadMatchWithID(class UOnlineTurnBasedSubsystem* Subsystem, const class FString& MatchID);
};

// 0x100 (0x130 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineUserCloudSubsystem
class UOnlineUserCloudSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1049[0xA0];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnEnumerateUserFilesComplete;                      // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReadUserFileComplete;                            // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWriteUserFileProgress;                           // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWriteUserFileComplete;                           // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWriteUserFileCanceled;                           // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDeleteUserFileComplete;                          // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineUserCloudSubsystem* GetDefaultObj();

	bool RequestUsageInfo(const struct FUniqueNetIdRepl& UserId);
	bool IsSubsystemAvailable();
	void GetUserFileList(const struct FUniqueNetIdRepl& UserId, TArray<struct FCloudFileHeaderBP>* UserFiles);
	bool GetFileContents(const struct FUniqueNetIdRepl& UserId, const class FString& Filename, class UFileData** FileContents);
	void DumpCloudState(const struct FUniqueNetIdRepl& UserId);
	void DumpCloudFileState(const struct FUniqueNetIdRepl& UserId, const class FString& Filename);
	bool ClearFiles(const struct FUniqueNetIdRepl& UserId);
	bool ClearFile(const struct FUniqueNetIdRepl& UserId, const class FString& Filename);
	void CancelWriteUserFile(const struct FUniqueNetIdRepl& UserId, const class FString& Filename);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineUserCloudSubsystemEnumerateUserFiles
class UOnlineUserCloudSubsystemEnumerateUserFiles : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEnumerateUserFilesComplete;                      // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineUserCloudSubsystem*             __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1059[0x8];                                     // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineUserCloudSubsystemEnumerateUserFiles* GetDefaultObj();

	class UOnlineUserCloudSubsystemEnumerateUserFiles* EnumerateUserFiles(class UOnlineUserCloudSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId);
};

// 0x80 (0xB0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineUserCloudSubsystemReadUserFile
class UOnlineUserCloudSubsystemReadUserFile : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReadUserFileComplete;                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineUserCloudSubsystem*             __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1062[0x8];                                     // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__FileName;                                 // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineUserCloudSubsystemReadUserFile* GetDefaultObj();

	class UOnlineUserCloudSubsystemReadUserFile* ReadUserFile(class UOnlineUserCloudSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& Filename);
};

// 0xC0 (0xF0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineUserCloudSubsystemWriteUserFile
class UOnlineUserCloudSubsystemWriteUserFile : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWriteUserFileComplete;                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWriteUserFileProgress;                           // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWriteUserFileCanceled;                           // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineUserCloudSubsystem*             __Store__Subsystem;                                // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1068[0x18];                                    // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0xA0(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__FileName;                                 // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFileData*                             __Store__FileContents;                             // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         __Store__bCompressBeforeUpload;                    // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_106A[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineUserCloudSubsystemWriteUserFile* GetDefaultObj();

	class UOnlineUserCloudSubsystemWriteUserFile* WriteUserFile(class UOnlineUserCloudSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& Filename, class UFileData* FileContents, bool bCompressBeforeUpload);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineUserCloudSubsystemDeleteUserFile
class UOnlineUserCloudSubsystemDeleteUserFile : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDeleteUserFileComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineUserCloudSubsystem*             __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_106F[0x8];                                     // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x70(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__FileName;                                 // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         __Store__bShouldCloudDelete;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         __Store__bShouldLocallyDelete;                     // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1071[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineUserCloudSubsystemDeleteUserFile* GetDefaultObj();

	class UOnlineUserCloudSubsystemDeleteUserFile* DeleteUserFile(class UOnlineUserCloudSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
};

// 0x90 (0xC0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineUserSubsystem
class UOnlineUserSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1083[0x80];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnQueryUserInfoComplete;                           // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineUserSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
	class UOnlineUserRef* GetUserInfo(int32 LocalUserNum, const struct FUniqueNetIdRepl& UserId);
	void GetExternalIdMappings(const struct FExternalIdQueryOptionsBP& QueryOptions, const TArray<class FString>& ExternalIds, TArray<struct FUniqueNetIdRepl>* OutIds);
	struct FUniqueNetIdRepl GetExternalIdMapping(const struct FExternalIdQueryOptionsBP& QueryOptions, const class FString& ExternalId);
	bool GetAllUserInfo(int32 LocalUserNum, TArray<class UOnlineUserRef*>* OutUsers);
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineUserSubsystemQueryUserInfo
class UOnlineUserSubsystemQueryUserInfo : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryUserInfoComplete;                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineUserSubsystem*                  __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_108F[0x8];                                     // Fixing Size After Last Property 
	int32                                        __Store__LocalUserNum;                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1090[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FUniqueNetIdRepl>              __Store__UserIds;                                  // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineUserSubsystemQueryUserInfo* GetDefaultObj();

	class UOnlineUserSubsystemQueryUserInfo* QueryUserInfo(class UOnlineUserSubsystem* Subsystem, int32 LocalUserNum, const TArray<struct FUniqueNetIdRepl>& UserIds);
};

// 0x78 (0xA8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineUserSubsystemQueryUserIdMapping
class UOnlineUserSubsystemQueryUserIdMapping : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryUserMappingComplete;                        // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineUserSubsystem*                  __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__DisplayNameOrEmail;                       // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineUserSubsystemQueryUserIdMapping* GetDefaultObj();

	class UOnlineUserSubsystemQueryUserIdMapping* QueryUserIdMapping(class UOnlineUserSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const class FString& DisplayNameOrEmail);
};

// 0x90 (0xC0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineUserSubsystemQueryExternalIdMappings
class UOnlineUserSubsystemQueryExternalIdMappings : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueryExternalIdMappingsComplete;                 // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineUserSubsystem*                  __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__UserId;                                   // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FExternalIdQueryOptionsBP             __Store__QueryOptions;                             // 0x98(0x18)(NativeAccessSpecifierPrivate)
	TArray<class FString>                        __Store__ExternalIds;                              // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineUserSubsystemQueryExternalIdMappings* GetDefaultObj();

	class UOnlineUserSubsystemQueryExternalIdMappings* QueryExternalIdMappings(class UOnlineUserSubsystem* Subsystem, const struct FUniqueNetIdRepl& UserId, const struct FExternalIdQueryOptionsBP& QueryOptions, const TArray<class FString>& ExternalIds);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystem
class UOnlineVoiceAdminSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_10A1[0x70];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineVoiceAdminSubsystem* GetDefaultObj();

	bool IsSubsystemAvailable();
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemCreateChannelCredentials
class UOnlineVoiceAdminSubsystemCreateChannelCredentials : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoiceAdminCreateChannelCredentialsComplete;      // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineVoiceAdminSubsystem*            __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ChannelName;                              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FUniqueNetIdRepl>              __Store__TargetUserIds;                            // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineVoiceAdminSubsystemCreateChannelCredentials* GetDefaultObj();

	class UOnlineVoiceAdminSubsystemCreateChannelCredentials* CreateChannelCredentials(class UOnlineVoiceAdminSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ChannelName, const TArray<struct FUniqueNetIdRepl>& TargetUserIds);
};

// 0xA8 (0xD8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemKickParticipant
class UOnlineVoiceAdminSubsystemKickParticipant : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoiceAdminKickParticipantComplete;               // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineVoiceAdminSubsystem*            __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ChannelName;                              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__TargetUserId;                             // 0xA8(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineVoiceAdminSubsystemKickParticipant* GetDefaultObj();

	class UOnlineVoiceAdminSubsystemKickParticipant* KickParticipant(class UOnlineVoiceAdminSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ChannelName, const struct FUniqueNetIdRepl& TargetUserId);
};

// 0xB0 (0xE0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineVoiceAdminSubsystemSetParticipantHardMute
class UOnlineVoiceAdminSubsystemSetParticipantHardMute : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoiceAdminSetParticipantHardMuteComplete;        // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineVoiceAdminSubsystem*            __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__CallUniquenessId;                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__LocalUserId;                              // 0x68(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ChannelName;                              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      __Store__TargetUserId;                             // 0xA8(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         __Store__bMuted;                                   // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10B8[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineVoiceAdminSubsystemSetParticipantHardMute* GetDefaultObj();

	class UOnlineVoiceAdminSubsystemSetParticipantHardMute* SetParticipantHardMute(class UOnlineVoiceAdminSubsystem* Subsystem, const struct FUniqueNetIdRepl& LocalUserId, const class FString& ChannelName, const struct FUniqueNetIdRepl& TargetUserId, bool bMuted);
};

// 0x70 (0xA0 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineVoiceChatSubsystem
class UOnlineVoiceChatSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_10CC[0x20];                                    // Fixing Size After Last Property 
	class UVoiceChatUser*                        PrimaryVoiceUser;                                  // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoiceChatReconnected;                            // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CE[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnVoiceChatConnected;                              // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CF[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnVoiceChatDisconnected;                           // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D0[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineVoiceChatSubsystem* GetDefaultObj();

	bool Uninitialize_();
	bool IsSubsystemAvailable();
	bool IsInitialized();
	bool IsConnecting();
	bool IsConnected();
	bool Initialize_();
	class UVoiceChatUser* CreateUser();
};

// 0x28 (0x58 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineVoiceChatSubsystemConnect
class UOnlineVoiceChatSubsystemConnect : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoiceChatConnectComplete;                        // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineVoiceChatSubsystem*             __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineVoiceChatSubsystemConnect* GetDefaultObj();

	class UOnlineVoiceChatSubsystemConnect* Connect(class UOnlineVoiceChatSubsystem* Subsystem);
};

// 0x28 (0x58 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineVoiceChatSubsystemDisconnect
class UOnlineVoiceChatSubsystemDisconnect : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoiceChatDisconnectComplete;                     // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOnlineVoiceChatSubsystem*             __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOnlineVoiceChatSubsystemDisconnect* GetDefaultObj();

	class UOnlineVoiceChatSubsystemDisconnect* Disconnect(class UOnlineVoiceChatSubsystem* Subsystem);
};

// 0x88 (0xB8 - 0x30)
// Class OnlineSubsystemBlueprints.OnlineVoiceSubsystem
class UOnlineVoiceSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1131[0x78];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnPlayerTalkingStateChanged;                       // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineVoiceSubsystem* GetDefaultObj();

	bool UnregisterRemoteTalker(const struct FUniqueNetIdRepl& UniqueId);
	void UnregisterLocalTalkers();
	bool UnregisterLocalTalker(int64 LocalUserNum);
	bool UnmuteRemoteTalker(int32 LocalUserNum, const struct FUniqueNetIdRepl& PlayerId, bool bIsSystemWide);
	void StopNetworkedVoice(int32 LocalUserNum);
	void StartNetworkedVoice(int32 LocalUserNum);
	void RemoveAllRemoteTalkers();
	bool RegisterRemoteTalker(const struct FUniqueNetIdRepl& UniqueId);
	void RegisterLocalTalkers();
	bool RegisterLocalTalker(int64 LocalUserNum);
	void ProcessMuteChangeNotification();
	bool PatchRemoteTalkerOutputToEndpoint(const class FString& InDeviceName, bool bMuteInGameOutput);
	bool PatchLocalTalkerOutputToEndpoint(const class FString& InDeviceName);
	bool MuteRemoteTalker(int32 LocalUserNum, const struct FUniqueNetIdRepl& PlayerId, bool bIsSystemWide);
	bool IsSubsystemAvailable();
	bool IsRemotePlayerTalking(const struct FUniqueNetIdRepl& UniqueId);
	bool IsMuted(int64 LocalUserNum, const struct FUniqueNetIdRepl& UniqueId);
	bool IsLocalPlayerTalking(int64 LocalUserNum);
	bool IsHeadsetPresent(int64 LocalUserNum);
	class FString GetVoiceDebugState();
	int32 GetNumLocalTalkers();
	float GetAmplitudeOfRemoteTalker(const struct FUniqueNetIdRepl& PlayerId);
	void DisconnectAllEndpoints();
	void ClearVoicePackets();
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.OnlineAchievementsWrite
class UOnlineAchievementsWrite : public UObject
{
public:
	uint8                                        Pad_113E[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineAchievementsWrite* GetDefaultObj();

	void SetAchievementProgress(class FName AchievementId, float AchievementProgress);
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.OnlineEntitlement
class UOnlineEntitlement : public UObject
{
public:
	uint8                                        Pad_1154[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineEntitlement* GetDefaultObj();

	bool IsConsumable();
	class FString GetStatus();
	class FString GetStartDate();
	int32 GetRemainingCount();
	class FString GetNamespace();
	class FString GetName();
	class FString GetItemId();
	class FString GetId();
	class FString GetEndDate();
	int32 GetConsumedCount();
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemBlueprints.ExternalUIFlowHandler
class UExternalUIFlowHandler : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UExternalUIFlowHandler* GetDefaultObj();

	bool OnLoginFlowUIRequired(const class FString& RequestedURL, class UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestId);
	bool OnCreateAccountFlowUIRequired(const class FString& RequestedURL, class UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestId);
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.FileData
class UFileData : public UObject
{
public:
	uint8                                        Pad_1168[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFileData* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class OnlineSubsystemBlueprints.OnlineUserRef
class UOnlineUserRef : public UObject
{
public:
	uint8                                        Pad_117B[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineUserRef* GetDefaultObj();

	void SetUserLocalAttribute(const class FString& Key, const class FString& Value, bool* Success);
	struct FUniqueNetIdRepl GetUserId();
	class FString GetUserAttribute(const class FString& Key, bool* Found);
	class FString GetRealName();
	class FString GetDisplayName();
};

// 0x10 (0x58 - 0x48)
// Class OnlineSubsystemBlueprints.OnlineFriendRef
class UOnlineFriendRef : public UOnlineUserRef
{
public:
	uint8                                        Pad_1184[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineFriendRef* GetDefaultObj();

	struct FOnlineUserPresenceData GetPresence();
	enum class EInviteStatus_ GetInviteStatus();
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.OnlineLeaderboardRead
class UOnlineLeaderboardRead : public UObject
{
public:
	uint8                                        Pad_11A3[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineLeaderboardRead* GetDefaultObj();

	void SetSortedColumn(class FName SortedColumn);
	void SetLeaderboardName(class FName LeaderboardName);
	void SetColumns(const TArray<struct FColumnMetaDataBP>& InColumns);
	class FName GetSortedColumn();
	TArray<struct FOnlineStatsRowBP> GetRows();
	enum class EOnlineAsyncTaskState_ GetReadState();
	class FName GetLeaderboardName();
	TArray<struct FColumnMetaDataBP> GetColumns();
	struct FOnlineStatsRowBP FindPlayerRecord(const struct FUniqueNetIdRepl& UserId, bool* OutFound);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemBlueprints.OnlineLeaderboardWrite
class UOnlineLeaderboardWrite : public UObject
{
public:

	static class UClass* StaticClass();
	static class UOnlineLeaderboardWrite* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.LobbyId
class ULobbyId : public UObject
{
public:
	uint8                                        Pad_11A8[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULobbyId* GetDefaultObj();

	class FString ToDebugString();
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.Lobby
class ULobby : public UObject
{
public:
	uint8                                        Pad_11B2[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULobby* GetDefaultObj();

	struct FUniqueNetIdRepl GetOwnerId();
	class ULobbyId* GetId();
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.OnlineLobbyTransaction
class UOnlineLobbyTransaction : public UObject
{
public:
	uint8                                        Pad_11EC[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineLobbyTransaction* GetDefaultObj();

	void SetPublic(bool Public);
	void SetMetadataByMap(TMap<class FString, struct FVariantDataBP>& MetaData);
	void SetMetadata(const class FString& Key, struct FVariantDataBP& Value);
	void SetLocked(bool Locked);
	void SetCapacity(int64 Capacity);
	void DeleteMetadataByArray(TArray<class FString>& MetaDataKeys);
	void DeleteMetadata(const class FString& Key);
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.OnlineLobbyMemberTransaction
class UOnlineLobbyMemberTransaction : public UObject
{
public:
	uint8                                        Pad_122D[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineLobbyMemberTransaction* GetDefaultObj();

	void SetMetadataByMap(TMap<class FString, struct FVariantDataBP>& MetaData);
	void SetMetadata(const class FString& Key, struct FVariantDataBP& Value);
	void DeleteMetadataByArray(TArray<class FString>& MetaDataKeys);
	void DeleteMetadata(const class FString& Key);
};

// 0x10 (0x58 - 0x48)
// Class OnlineSubsystemBlueprints.OnlineRecentPlayerRef
class UOnlineRecentPlayerRef : public UOnlineUserRef
{
public:
	uint8                                        Pad_122F[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineRecentPlayerRef* GetDefaultObj();

	struct FDateTime GetLastSeen();
};

// 0x10 (0x58 - 0x48)
// Class OnlineSubsystemBlueprints.UserOnlineAccountRef
class UUserOnlineAccountRef : public UOnlineUserRef
{
public:
	uint8                                        Pad_1256[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UUserOnlineAccountRef* GetDefaultObj();

	bool SetUserAttribute(const class FString& Key, const class FString& Value);
	class FString GetAuthAttribute(const class FString& Key, bool* Found);
	class FString GetAccessToken();
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.Party
class UParty : public UObject
{
public:
	uint8                                        Pad_1259[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UParty* GetDefaultObj();

	int64 GetPartyTypeId();
	class UPartyId* GetPartyId();
	struct FUniqueNetIdRepl GetLeaderId();
};

// 0x40 (0x68 - 0x28)
// Class OnlineSubsystemBlueprints.BlueprintPartyMember
class UBlueprintPartyMember : public UObject
{
public:
	uint8                                        Pad_1265[0x20];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnAttributeChanged;                                // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConnectionStatusChanged;                         // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBlueprintPartyMember* GetDefaultObj();

	struct FUniqueNetIdRepl GetUserId();
	bool GetUserAttribute(const class FString& AttrName, class FString* OutAttrValue);
	class FString GetRealName();
	class FString GetDisplayName(const class FString& Platform);
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.ReadablePartyData
class UReadablePartyData : public UObject
{
public:
	uint8                                        Pad_1269[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UReadablePartyData* GetDefaultObj();

	void GetAttribute(const class FString& AttrName, bool* OutFound, struct FVariantDataBP* OutAttrValue);
};

// 0x10 (0x48 - 0x38)
// Class OnlineSubsystemBlueprints.MutablePartyData
class UMutablePartyData : public UReadablePartyData
{
public:
	uint8                                        Pad_1271[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMutablePartyData* GetDefaultObj();

	void SetAttribute(const class FString& AttrName, const struct FVariantDataBP& AttrValue);
	void RemoveAttribute(const class FString& AttrName);
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.PartyId
class UPartyId : public UObject
{
public:
	uint8                                        Pad_1272[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPartyId* GetDefaultObj();

	class FString ToDebugString();
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.OnlinePartyJoinInfo
class UOnlinePartyJoinInfo : public UObject
{
public:
	uint8                                        Pad_127C[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlinePartyJoinInfo* GetDefaultObj();

	class FString ToDebugString();
	struct FUniqueNetIdRepl GetSourceUserId();
	class FString GetSourceDisplayName();
	class UPartyId* GetPartyId();
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.PurchaseReceipt
class UPurchaseReceipt : public UObject
{
public:
	uint8                                        Pad_1284[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UPurchaseReceipt* GetDefaultObj();

	class FString GetTransactionId();
	TArray<struct FReceiptOfferEntryBP> GetReceiptOffers();
	enum class EPurchaseTransactionState_ GetPurchaseTransactionState();
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.OnlineSessionInfo
class UOnlineSessionInfo : public UObject
{
public:
	uint8                                        Pad_1287[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineSessionInfo* GetDefaultObj();

};

// 0x140 (0x168 - 0x28)
// Class OnlineSubsystemBlueprints.OnlineSessionSettings
class UOnlineSessionSettings : public UObject
{
public:
	uint8                                        Pad_1288[0x140];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineSessionSettings* GetDefaultObj();

	struct FOnlineSessionSettingsBP GetValue();
};

// 0x1F8 (0x220 - 0x28)
// Class OnlineSubsystemBlueprints.NamedOnlineSession
class UNamedOnlineSession : public UObject
{
public:
	uint8                                        Pad_128B[0x1F8];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNamedOnlineSession* GetDefaultObj();

	struct FNamedOnlineSessionBP GetValue();
};

// 0x88 (0xB0 - 0x28)
// Class OnlineSubsystemBlueprints.OnlineSessionSearch
class UOnlineSessionSearch : public UObject
{
public:
	uint8                                        Pad_1293[0x20];                                    // Fixing Size After Last Property 
	int32                                        MaxSearchResults;                                  // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLanQuery;                                       // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1294[0x3];                                     // Fixing Size After Last Property 
	int32                                        PingBucketSize;                                    // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlatformHash;                                      // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeoutInSeconds;                                  // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1297[0x4];                                     // Fixing Size After Last Property 
	TMap<class FName, struct FSessionSearchParamBP> SearchParams;                                      // 0x60(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlineSessionSearch* GetDefaultObj();

	enum class EOnlineAsyncTaskState_ GetSearchState();
	TArray<struct FOnlineSessionSearchResultBP> GetSearchResults();
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemBlueprints.OnlineStoreOffer
class UOnlineStoreOffer : public UObject
{
public:
	uint8                                        Pad_12B6[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UOnlineStoreOffer* GetDefaultObj();

	bool IsPurchasable();
	class FText GetTitle();
	struct FDateTime GetReleaseDate();
	int64 GetRegularPrice();
	class FString GetOfferId();
	int64 GetNumericPrice();
	class FText GetLongDescription();
	struct FDateTime GetExpirationDate();
	TMap<class FString, class FString> GetDynamicFields();
	class FText GetDisplayRegularPrice();
	class FText GetDisplayPrice();
	class FText GetDescription();
	class FString GetCurrencyCode();
};

// 0x150 (0x178 - 0x28)
// Class OnlineSubsystemBlueprints.VoiceChatUser
class UVoiceChatUser : public UObject
{
public:
	uint8                                        Pad_1313[0x60];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnVoiceChatAvailableAudioDevicesChanged;           // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1314[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnVoiceChatLoggedIn;                               // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1315[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnVoiceChatLoggedOut;                              // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1316[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnVoiceChatChannelJoined;                          // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1317[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnVoiceChatChannelExited;                          // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1318[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnVoiceChatPlayerAdded;                            // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1319[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnVoiceChatPlayerRemoved;                          // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_131B[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnVoiceChatPlayerTalkingUpdated;                   // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_131C[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnVoiceChatPlayerMuteUpdated;                      // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_131E[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnVoiceChatPlayerVolumeUpdated;                    // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_131F[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVoiceChatUser* GetDefaultObj();

	void UnblockPlayers(const TArray<class FString>& PlayerNames);
	void TransmitToSpecificChannel(const class FString& ChannelName);
	void TransmitToNoChannels();
	void TransmitToAllChannels();
	void SetSetting(const class FString& Name, const class FString& Value);
	void SetPlayerVolume(const class FString& PlayerName, float Volume);
	void SetPlayerMuted(const class FString& PlayerName, bool bMuted);
	void SetOutputDeviceId(const class FString& OutputDeviceId);
	void SetInputDeviceId(const class FString& InputDeviceId);
	void SetChannelPlayerMuted(const class FString& ChannelName, const class FString& PlayerName, bool bAudioMuted);
	void SetAudioOutputVolume(float Volume);
	void SetAudioOutputDeviceMuted(bool bIsMuted);
	void SetAudioInputVolume(float Volume);
	void SetAudioInputDeviceMuted(bool bIsMuted);
	void Set3DPosition(const class FString& ChannelName, const struct FVector& SpeakerPosition, const struct FVector& ListenerPosition, const struct FVector& ListenerForwardDirection, const struct FVector& ListenerUpDirection);
	bool IsPlayerTalking(const class FString& PlayerName);
	bool IsPlayerMuted(const class FString& PlayerName);
	bool IsLoggingIn();
	bool IsLoggedIn();
	bool IsChannelPlayerMuted(const class FString& ChannelName, const class FString& PlayerName);
	class FString InsecureGetLoginToken(const class FString& PlayerName);
	class FString InsecureGetJoinToken(const class FString& ChannelName, enum class EVoiceChatChannelType_ ChannelType, const struct FVoiceChatChannel3dPropertiesBP& Channel3dProperties);
	enum class EVoiceChatTransmitMode_ GetTransmitMode();
	class FString GetTransmitChannel();
	class FString GetSetting(const class FString& Name);
	float GetPlayerVolume(const class FString& PlayerName);
	TArray<class FString> GetPlayersInChannel(const class FString& ChannelName);
	struct FVoiceChatDeviceInfoBP GetOutputDeviceInfo();
	class FString GetLoggedInPlayerName();
	struct FVoiceChatDeviceInfoBP GetInputDeviceInfo();
	struct FVoiceChatDeviceInfoBP GetDefaultOutputDeviceInfo();
	struct FVoiceChatDeviceInfoBP GetDefaultInputDeviceInfo();
	enum class EVoiceChatChannelType_ GetChannelType(const class FString& ChannelName);
	TArray<class FString> GetChannels();
	TArray<struct FVoiceChatDeviceInfoBP> GetAvailableOutputDeviceInfos();
	TArray<struct FVoiceChatDeviceInfoBP> GetAvailableInputDeviceInfos();
	float GetAudioOutputVolume();
	bool GetAudioOutputDeviceMuted();
	float GetAudioInputVolume();
	bool GetAudioInputDeviceMuted();
	void BlockPlayers(const TArray<class FString>& PlayerNames);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemBlueprints.VoiceChatUserLogin
class UVoiceChatUserLogin : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoiceChatLoginComplete;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UVoiceChatUser*                        __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        __Store__PlatformId;                               // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1334[0x4];                                     // Fixing Size After Last Property 
	class FString                                __Store__PlayerName;                               // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__Credentials;                              // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVoiceChatUserLogin* GetDefaultObj();

	class UVoiceChatUserLogin* Login(class UVoiceChatUser* Subsystem, int32 PlatformId, const class FString& PlayerName, const class FString& Credentials);
};

// 0x28 (0x58 - 0x30)
// Class OnlineSubsystemBlueprints.VoiceChatUserLogout
class UVoiceChatUserLogout : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoiceChatLogoutComplete;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UVoiceChatUser*                        __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVoiceChatUserLogout* GetDefaultObj();

	class UVoiceChatUserLogout* Logout(class UVoiceChatUser* Subsystem);
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemBlueprints.VoiceChatUserJoinChannel
class UVoiceChatUserJoinChannel : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoiceChatChannelJoinComplete;                    // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UVoiceChatUser*                        __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ChannelName;                              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ChannelCredentials;                       // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EVoiceChatChannelType_            __Store__ChannelType;                              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1344[0x3];                                     // Fixing Size After Last Property 
	struct FVoiceChatChannel3dPropertiesBP       __Store__Channel3dProperties;                      // 0x7C(0x10)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1345[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVoiceChatUserJoinChannel* GetDefaultObj();

	class UVoiceChatUserJoinChannel* JoinChannel(class UVoiceChatUser* Subsystem, const class FString& ChannelName, const class FString& ChannelCredentials, enum class EVoiceChatChannelType_ ChannelType, const struct FVoiceChatChannel3dPropertiesBP& Channel3dProperties);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemBlueprints.VoiceChatUserLeaveChannel
class UVoiceChatUserLeaveChannel : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnCallFailed;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoiceChatChannelLeaveComplete;                   // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UVoiceChatUser*                        __Store__Subsystem;                                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                __Store__ChannelName;                              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVoiceChatUserLeaveChannel* GetDefaultObj();

	class UVoiceChatUserLeaveChannel* LeaveChannel(class UVoiceChatUser* Subsystem, const class FString& ChannelName);
};

}



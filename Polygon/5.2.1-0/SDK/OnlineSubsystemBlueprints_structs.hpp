#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOnlineDataAdvertisementType_ : uint8
{
	DontAdvertise                  = 0,
	ViaPingOnly                    = 1,
	ViaOnlineService               = 2,
	ViaOnlineServiceAndPing        = 3,
	EOnlineDataAdvertisementType_MAX = 4,
};

enum class EOnlineKeyValuePairDataType_ : uint8
{
	Empty                          = 0,
	Int32                          = 1,
	UInt32_NotSupported            = 2,
	Int64                          = 3,
	UInt64_NotSupported            = 4,
	Double_NotSupported            = 5,
	String                         = 6,
	Float                          = 7,
	Blob_NotSupported              = 8,
	Bool                           = 9,
	Json_NotSupported              = 10,
	EOnlineKeyValuePairDataType_MAX = 11,
};

enum class EOnlineLoginStatus : uint8
{
	NotLoggedIn                    = 0,
	UsingLocalProfile              = 1,
	LoggedIn                       = 2,
	EOnlineLoginStatus_MAX         = 3,
};

enum class EOnlineActivityOutcome_ : uint8
{
	Completed                      = 0,
	Failed                         = 1,
	Cancelled                      = 2,
	EOnlineActivityOutcome_MAX     = 3,
};

enum class EOnlineUserPrivilege : uint8
{
	CanPlay                        = 0,
	CanPlayOnline                  = 1,
	CanCommunicateOnline           = 2,
	CanUseUserGeneratedContent     = 3,
	CanUserCrossPlay               = 4,
	EOnlineUserPrivilege_MAX       = 5,
};

enum class ECreatePartyCompletionResult_ : uint8
{
	UnknownClientFailure           = 156,
	AlreadyInPartyOfSpecifiedType  = 157,
	AlreadyCreatingParty           = 158,
	AlreadyInParty                 = 159,
	FailedToCreateMucRoom          = 160,
	NoResponse                     = 161,
	LoggedOut                      = 162,
	NotPrimaryUser                 = 163,
	UnknownInternalFailure         = 0,
	Succeeded                      = 1,
	ECreatePartyCompletionResult_MAX = 164,
};

enum class EJoinPartyCompletionResult_ : uint8
{
	UnknownClientFailure           = 156,
	BadBuild                       = 157,
	InvalidAccessKey               = 158,
	AlreadyInLeadersJoiningList    = 159,
	AlreadyInLeadersPartyRoster    = 160,
	NoSpace                        = 161,
	NotApproved                    = 162,
	RequesteeNotMember             = 163,
	RequesteeNotLeader             = 164,
	NoResponse                     = 165,
	LoggedOut                      = 166,
	UnableToRejoin                 = 167,
	IncompatiblePlatform           = 168,
	AlreadyJoiningParty            = 169,
	AlreadyInParty                 = 170,
	JoinInfoInvalid                = 171,
	AlreadyInPartyOfSpecifiedType  = 172,
	MessagingFailure               = 173,
	GameSpecificReason             = 174,
	UnknownInternalFailure         = 0,
	Succeeded                      = 1,
	EJoinPartyCompletionResult_MAX = 175,
};

enum class EKickMemberCompletionResult_ : uint8
{
	UnknownClientFailure           = 156,
	UnknownParty                   = 157,
	LocalMemberNotMember           = 158,
	LocalMemberNotLeader           = 159,
	RemoteMemberNotMember          = 160,
	MessagingFailure               = 161,
	NoResponse                     = 162,
	LoggedOut                      = 163,
	UnknownInternalFailure         = 0,
	Succeeded                      = 1,
	EKickMemberCompletionResult_MAX = 164,
};

enum class ELeavePartyCompletionResult_ : uint8
{
	UnknownClientFailure           = 156,
	NoResponse                     = 157,
	LoggedOut                      = 158,
	UnknownParty                   = 159,
	LeavePending                   = 160,
	UnknownLocalUser               = 161,
	NotMember                      = 162,
	MessagingFailure               = 163,
	UnknownTransportFailure        = 164,
	UnknownInternalFailure         = 0,
	Succeeded                      = 1,
	ELeavePartyCompletionResult_MAX = 165,
};

enum class EPromoteMemberCompletionResult_ : uint8
{
	UnknownClientFailure           = 156,
	UnknownServiceFailure          = 157,
	UnknownParty                   = 158,
	LocalMemberNotMember           = 159,
	LocalMemberNotLeader           = 160,
	PromotionAlreadyPending        = 161,
	TargetIsSelf                   = 162,
	TargetNotMember                = 163,
	MessagingFailure               = 164,
	NoResponse                     = 165,
	LoggedOut                      = 166,
	UnknownInternalFailure         = 0,
	Succeeded                      = 1,
	EPromoteMemberCompletionResult_MAX = 167,
};

enum class ESendPartyInvitationCompletionResult_ : uint8
{
	NotLoggedIn                    = 156,
	InvitePending                  = 157,
	AlreadyInParty                 = 158,
	PartyFull                      = 159,
	NoPermission                   = 160,
	RateLimited                    = 161,
	UnknownInternalFailure         = 0,
	Succeeded                      = 1,
	ESendPartyInvitationCompletionResult_MAX = 162,
};

enum class EUpdateConfigCompletionResult_ : uint8
{
	UnknownClientFailure           = 156,
	UnknownParty                   = 157,
	LocalMemberNotMember           = 158,
	LocalMemberNotLeader           = 159,
	RemoteMemberNotMember          = 160,
	MessagingFailure               = 161,
	NoResponse                     = 162,
	UnknownInternalFailure         = 0,
	Succeeded                      = 1,
	EUpdateConfigCompletionResult_MAX = 163,
};

enum class EOnJoinSessionCompleteResult_ : uint8
{
	Success                        = 0,
	SessionIsFull                  = 1,
	SessionDoesNotExist            = 2,
	CouldNotRetrieveAddress        = 3,
	AlreadyInSession               = 4,
	UnknownError                   = 5,
	EOnJoinSessionCompleteResult_MAX = 6,
};

enum class EVoiceChatResult_ : uint8
{
	Success                        = 0,
	InvalidState                   = 1,
	NotInitialized                 = 2,
	NotConnected                   = 3,
	NotLoggedIn                    = 4,
	NotPermitted                   = 5,
	Throttled                      = 6,
	InvalidArgument                = 7,
	CredentialsInvalid             = 8,
	CredentialsExpired             = 9,
	ClientTimeout                  = 10,
	ServerTimeout                  = 11,
	DnsFailure                     = 12,
	ConnectionFailure              = 13,
	ImplementationError            = 14,
	EVoiceChatResult_MAX           = 15,
};

enum class EPartySystemPermissions : uint8
{
	Noone                          = 0,
	Leader                         = 1,
	Friends                        = 2,
	Anyone                         = 3,
	EPartySystemPermissions_MAX    = 4,
};

enum class EJoinRequestAction_ : uint8
{
	Manual                         = 0,
	AutoApprove                    = 1,
	AutoReject                     = 2,
	EJoinRequestAction_MAX         = 3,
};

enum class EMemberExitedReason_ : uint8
{
	Unknown                        = 0,
	Left                           = 1,
	Removed                        = 2,
	Kicked                         = 3,
	EMemberExitedReason_MAX        = 4,
};

enum class EPartyState_ : uint8
{
	None                           = 0,
	CreatePending                  = 1,
	JoinPending                    = 2,
	RejoinPending                  = 3,
	LeavePending                   = 4,
	Active                         = 5,
	Disconnected                   = 6,
	CleanUp                        = 7,
	EPartyState_MAX                = 8,
};

enum class EMemberConnectionStatus_ : uint8
{
	Uninitialized                  = 0,
	Disconnected                   = 1,
	Initializing                   = 2,
	Connected                      = 3,
	EMemberConnectionStatus_MAX    = 4,
};

enum class EFOnlineUserPresenceStatusState : uint8
{
	Online                         = 0,
	Offline                        = 1,
	Away                           = 2,
	ExtendedAway                   = 3,
	DoNotDisturb                   = 4,
	Chat                           = 5,
	FOnlineUserPresenceStatusState_MAX = 6,
};

enum class ESessionFailure_ : uint8
{
	ServiceConnectionLost          = 0,
	ESessionFailure_MAX            = 1,
};

enum class EOnSessionParticipantLeftReason_ : uint8
{
	Left                           = 0,
	Disconnected                   = 1,
	Kicked                         = 2,
	Closed                         = 3,
	EOnSessionParticipantLeftReason_MAX = 4,
};

enum class EPlatformMessageType_ : uint8
{
	EmptyStore                     = 0,
	ChatRestricted                 = 1,
	UGCRestricted                  = 2,
	EPlatformMessageType_MAX       = 3,
};

enum class EInviteStatus_ : uint8
{
	Unknown                        = 0,
	Accepted                       = 1,
	PendingInbound                 = 2,
	PendingOutbound                = 3,
	Blocked                        = 4,
	Suggested                      = 5,
	EInviteStatus_MAX              = 6,
};

enum class EOnlineLobbySearchQueryFilterComparator_ : uint8
{
	Equal                          = 0,
	NotEqual                       = 1,
	LessThan                       = 2,
	LessThanOrEqual                = 3,
	GreaterThan                    = 4,
	GreaterThanOrEqual             = 5,
	EOnlineLobbySearchQueryFilterComparator_MAX = 6,
};

enum class EOnlineCachedResult_ : uint8
{
	Success                        = 0,
	NotFound                       = 1,
	EOnlineCachedResult_MAX        = 2,
};

enum class ERequestPartyInvitationCompletionResult_ : uint8
{
	NotLoggedIn                    = 156,
	InvitePending                  = 157,
	AlreadyInParty                 = 158,
	PartyFull                      = 159,
	NoPermission                   = 160,
	UnknownInternalFailure         = 0,
	Succeeded                      = 1,
	ERequestPartyInvitationCompletionResult_MAX = 161,
};

enum class EAcceptPartyInvitationCompletionResult_ : uint8
{
	NotLoggedIn                    = 156,
	InvitePending                  = 157,
	AlreadyInParty                 = 158,
	PartyFull                      = 159,
	NoPermission                   = 160,
	UnknownInternalFailure         = 0,
	Succeeded                      = 1,
	EAcceptPartyInvitationCompletionResult_MAX = 161,
};

enum class ERejectPartyInvitationCompletionResult_ : uint8
{
	NotLoggedIn                    = 156,
	InvitePending                  = 157,
	AlreadyInParty                 = 158,
	PartyFull                      = 159,
	NoPermission                   = 160,
	UnknownInternalFailure         = 0,
	Succeeded                      = 1,
	ERejectPartyInvitationCompletionResult_MAX = 161,
};

enum class EInvitationResponse_ : uint8
{
	UnknownFailure                 = 0,
	BadBuild                       = 1,
	Rejected                       = 2,
	Accepted                       = 3,
	EInvitationResponse_MAX        = 4,
};

enum class EPurchaseTransactionState_ : uint8
{
	NotStarted                     = 0,
	Processing                     = 1,
	Purchased                      = 2,
	Failed                         = 3,
	Deferred                       = 4,
	Canceled                       = 5,
	Restored                       = 6,
	NotAllowed                     = 7,
	Invalid                        = 8,
	EPurchaseTransactionState_MAX  = 9,
};

enum class EOnlineSessionState_ : uint8
{
	NoSession                      = 0,
	Creating                       = 1,
	Pending                        = 2,
	Starting                       = 3,
	InProgress                     = 4,
	Ending                         = 5,
	Ended                          = 6,
	Destroying                     = 7,
	EOnlineSessionState_MAX        = 8,
};

enum class EOnlineAsyncTaskState_ : uint8
{
	NotStarted                     = 0,
	InProgress                     = 1,
	Done                           = 2,
	Failed                         = 3,
	EOnlineAsyncTaskState_MAX      = 4,
};

enum class EOnlineComparisonOp_ : uint8
{
	Equals                         = 0,
	NotEquals                      = 1,
	GreaterThan                    = 2,
	GreaterThanEquals              = 3,
	LessThan                       = 4,
	LessThanEquals                 = 5,
	Near                           = 6,
	In                             = 7,
	NotIn                          = 8,
	EOnlineComparisonOp_MAX        = 9,
};

enum class EOnlineStatModificationType_ : uint8
{
	Unknown                        = 0,
	Sum                            = 1,
	Set                            = 2,
	Largest                        = 3,
	Smallest                       = 4,
	EOnlineStatModificationType_MAX = 5,
};

enum class EVoiceChatChannelType_ : uint8
{
	NonPositional                  = 0,
	Positional                     = 1,
	Echo                           = 2,
	EVoiceChatChannelType_MAX      = 3,
};

enum class EVoiceChatTransmitMode_ : uint8
{
	None                           = 0,
	All                            = 1,
	Channel                        = 2,
	EVoiceChatTransmitMode_MAX     = 3,
};

enum class EVoiceChatAttenuationModel_ : uint8
{
	None                           = 0,
	InverseByDistance              = 1,
	LinearByDistance               = 2,
	ExponentialByDistance          = 3,
	EVoiceChatAttenuationModel_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.FriendSettingsData
struct FFriendSettingsData
{
public:
	TMap<class FString, class FString>           Data;                                              // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.VariantDataBP
struct FVariantDataBP
{
public:
	enum class EOnlineKeyValuePairDataType_      Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AsBool;                                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_134A[0x2];                                     // Fixing Size After Last Property 
	int32                                        AsInt;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AsFloat;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_134B[0x4];                                     // Fixing Size After Last Property 
	int64                                        AsInt64;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AsString;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineSessionSettingBP
struct FOnlineSessionSettingBP
{
public:
	struct FVariantDataBP                        Data;                                              // 0x0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOnlineDataAdvertisementType_     AdvertisementType;                                 // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_134C[0x3];                                     // Fixing Size After Last Property 
	int32                                        ID;                                                // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineSessionSettingsBP
struct FOnlineSessionSettingsBP
{
public:
	uint8                                        Pad_134D[0xD8];                                    // Fixing Size After Last Property 
	int32                                        NumPublicConnections;                              // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPrivateConnections;                             // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAdvertise;                                  // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowJoinInProgress;                              // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLANMatch;                                       // 0xE2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDedicated;                                      // 0xE3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesStats;                                        // 0xE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowInvites;                                     // 0xE5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesPresence;                                     // 0xE6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowJoinViaPresence;                             // 0xE7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowJoinViaPresenceFriendsOnly;                  // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAntiCheatProtected;                               // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLobbiesIfAvailable;                            // 0xEA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLobbiesVoiceChatIfAvailable;                   // 0xEB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BuildUniqueId;                                     // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FOnlineSessionSettingBP> Settings;                                          // 0xF0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineSessionBP
struct FOnlineSessionBP
{
public:
	struct FUniqueNetIdRepl                      OwningUserId;                                      // 0x0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OwningUserName;                                    // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineSessionSettingsBP              SessionSettings;                                   // 0x40(0x140)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UOnlineSessionInfo*                    SessionInfo;                                       // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumOpenPrivateConnections;                         // 0x188(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumOpenPublicConnections;                          // 0x18C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionId;                                         // 0x190(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A8 (0x1A8 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineSessionSearchResultBP
struct FOnlineSessionSearchResultBP
{
public:
	struct FOnlineSessionBP                      Session;                                           // 0x0(0x1A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        PingInMs;                                          // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1351[0x4];                                     // Fixing Size Of Struct
};

// 0x1B0 (0x1B0 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OptionalOnlineSessionSearchResultBP
struct FOptionalOnlineSessionSearchResultBP
{
public:
	bool                                         bSet;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1352[0x7];                                     // Fixing Size After Last Property 
	struct FOnlineSessionSearchResultBP          SearchResult;                                      // 0x8(0x1A8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineErrorInfo
struct FOnlineErrorInfo
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1354[0x7];                                     // Fixing Size After Last Property 
	class FString                                ErrorRaw;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ErrorCode;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ErrorMessage;                                      // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineAccountCredential
struct FOnlineAccountCredential
{
public:
	class FString                                Type;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Token;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.BlockedQueryResultInfo
struct FBlockedQueryResultInfo
{
public:
	bool                                         Blocked;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BlockedNonFriends;                                 // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1356[0x6];                                     // Fixing Size After Last Property 
	class FString                                UserId;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineStatsUserStatsBP
struct FOnlineStatsUserStatsBP
{
public:
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FVariantDataBP>   Stats;                                             // 0x30(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.ExternalIdQueryOptionsBP
struct FExternalIdQueryOptionsBP
{
public:
	bool                                         bLookupByDisplayName;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1361[0x7];                                     // Fixing Size After Last Property 
	class FString                                AuthType;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.VoiceAdminChannelCredentialsBP
struct FVoiceAdminChannelCredentialsBP
{
public:
	struct FUniqueNetIdRepl                      TargetUserId;                                      // 0x0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChannelCredentials;                                // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.VoiceChatResultBP
struct FVoiceChatResultBP
{
public:
	bool                                         Successful;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoiceChatResult_                 ResultCode;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1366[0x6];                                     // Fixing Size After Last Property 
	class FString                                ErrorCode;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ErrorNum;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1367[0x4];                                     // Fixing Size After Last Property 
	class FString                                ErrorDesc;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlinePartyConfiguration
struct FOnlinePartyConfiguration
{
public:
	enum class EJoinRequestAction_               JoinRequestAction;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPartySystemPermissions           PresencePermissions;                               // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPartySystemPermissions           InvitePermissions;                                 // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ChatEnabled;                                       // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldRemoveOnDisconnection;                       // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsAcceptingMembers;                                // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136A[0x2];                                     // Fixing Size After Last Property 
	int32                                        NotAcceptingMembersReason;                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxMembers;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Nickname;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineUserPresenceStatusData
struct FOnlineUserPresenceStatusData
{
public:
	class FString                                Status;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFOnlineUserPresenceStatusState   State;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136D[0x7];                                     // Fixing Size After Last Property 
	TMap<class FString, class FString>           Properties;                                        // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineUserPresenceData
struct FOnlineUserPresenceData
{
public:
	struct FUniqueNetIdRepl                      SessionId;                                         // 0x0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOnline;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPlaying;                                         // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPlayingThisGame;                                 // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsJoinable;                                        // 0x33(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasVoiceSupport;                                   // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1371[0x3];                                     // Fixing Size After Last Property 
	struct FDateTime                             LastOnline;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOnlineUserPresenceStatusData         Status;                                            // 0x40(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineAchievementBP
struct FOnlineAchievementBP
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Progress;                                          // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1375[0x4];                                     // Fixing Size Of Struct
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineAchievementDescBP
struct FOnlineAchievementDescBP
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	class FText                                  LockedDesc;                                        // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	class FText                                  UnlockedDesc;                                      // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	bool                                         bIsHidden;                                         // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1377[0x7];                                     // Fixing Size After Last Property 
	struct FDateTime                             UnlockTime;                                        // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.PurchaseOfferEntryBP
struct FPurchaseOfferEntryBP
{
public:
	class FString                                OfferNamespace;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OfferId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1378[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.PurchaseCheckoutRequestBP
struct FPurchaseCheckoutRequestBP
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPurchaseOfferEntryBP>         PurchaseOffers;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.ExternalUIFlowHandlerRegistration
struct FExternalUIFlowHandlerRegistration
{
public:
	class UObject*                               Interface;                                         // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137B[0x10];                                    // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.LoginFlowResultBP
struct FLoginFlowResultBP
{
public:
	class FString                                Token;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ErrorMessage;                                      // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                ErrorRaw;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumericErrorCode;                                  // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137C[0x4];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.ShowWebUrlParameters
struct FShowWebUrlParameters
{
public:
	bool                                         Embedded;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowCloseButton;                                   // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowBackground;                                    // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HideCursor;                                        // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ResetCookies;                                      // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137E[0x3];                                     // Fixing Size After Last Property 
	int32                                        OffsetX;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OffsetY;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SizeX;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SizeY;                                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        AllowedDomains;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                CallbackPath;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.ShowStoreParameters
struct FShowStoreParameters
{
public:
	class FString                                Category;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProductId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AddToCart;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137F[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineMessagePayloadData
struct FOnlineMessagePayloadData
{
public:
	uint8                                        Pad_1381[0x1];                                     // Fixing Size Of Struct
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.ShowSendMessageParameters
struct FShowSendMessageParameters
{
public:
	class FText                                  DisplayTitle;                                      // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           DisplayTitle_Loc;                                  // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DisplayMessage;                                    // 0x68(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DisplayDetails;                                    // 0x80(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           DisplayDetails_Loc;                                // 0x98(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FOnlineMessagePayloadData             DataPayload;                                       // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1383[0x3];                                     // Fixing Size After Last Property 
	int32                                        MaxRecipients;                                     // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.CloudFileHeaderBP
struct FCloudFileHeaderBP
{
public:
	class FString                                Hash;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HashType;                                          // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DLName;                                            // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FileSize;                                          // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1385[0x4];                                     // Fixing Size After Last Property 
	class FString                                URL;                                               // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ChunkID;                                           // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.PagedQueryBP
struct FPagedQueryBP
{
public:
	int32                                        Start;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.ReportPlayedWithUserInfo
struct FReportPlayedWithUserInfo
{
public:
	struct FUniqueNetIdRepl                      UserId;                                            // 0x0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PresenceStr;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineFriendSettingsSourceDataConfig
struct FOnlineFriendSettingsSourceDataConfig
{
public:
	bool                                         NeverShowAgain;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineActivityTasksToResetBP
struct FOnlineActivityTasksToResetBP
{
public:
	bool                                         bSet;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1388[0x7];                                     // Fixing Size After Last Property 
	TArray<class FString>                        InProgressTasks;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        CompletedTasks;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineActivityPlayerLocationBP
struct FOnlineActivityPlayerLocationBP
{
public:
	bool                                         bSet;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1389[0x7];                                     // Fixing Size After Last Property 
	class FString                                ZoneId;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Coordinates;                                       // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineStatsRowBP
struct FOnlineStatsRowBP
{
public:
	class FString                                PlayerNickname;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rank;                                              // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138D[0x4];                                     // Fixing Size After Last Property 
	TMap<class FName, struct FVariantDataBP>     Columns;                                           // 0x48(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.ColumnMetaDataBP
struct FColumnMetaDataBP
{
public:
	class FName                                  ColumnName;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOnlineKeyValuePairDataType_      DataType;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138F[0x3];                                     // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineLobbySearchQueryFilterBP
struct FOnlineLobbySearchQueryFilterBP
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVariantDataBP                        Value;                                             // 0x10(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOnlineLobbySearchQueryFilterComparator_ Comparison;                                        // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1393[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineLobbySearchQueryBP
struct FOnlineLobbySearchQueryBP
{
public:
	TArray<struct FOnlineLobbySearchQueryFilterBP> Filters;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int64                                        Limit;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasLimit;                                          // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1394[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.RedeemCodeRequestBP
struct FRedeemCodeRequestBP
{
public:
	class FString                                Code;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CodeUseId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FulfillmentSource;                                 // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.LineItemInfoBP
struct FLineItemInfoBP
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UniqueId;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ValidationInfo;                                    // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.ReceiptOfferEntryBP
struct FReceiptOfferEntryBP
{
public:
	class FString                                Namespace;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OfferId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1399[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FLineItemInfoBP>               LineItems;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x1F8 - 0x1A0)
// ScriptStruct OnlineSubsystemBlueprints.NamedOnlineSessionBP
struct FNamedOnlineSessionBP : public FOnlineSessionBP
{
public:
	class FName                                  SessionName;                                       // 0x1A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHosting;                                          // 0x1A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139A[0x7];                                     // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      LocalOwnerId;                                      // 0x1B0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUniqueNetIdRepl>              RegisteredPlayers;                                 // 0x1E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EOnlineSessionState_              SessionState;                                      // 0x1F0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139B[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.SessionSearchParamBP
struct FSessionSearchParamBP
{
public:
	struct FVariantDataBP                        Data;                                              // 0x0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOnlineComparisonOp_              Op;                                                // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139D[0x3];                                     // Fixing Size After Last Property 
	int32                                        ID;                                                // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineStatUpdateBP
struct FOnlineStatUpdateBP
{
public:
	enum class EOnlineStatModificationType_      Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139F[0x7];                                     // Fixing Size After Last Property 
	struct FVariantDataBP                        Value;                                             // 0x8(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineStatsUserUpdatedStatsBP
struct FOnlineStatsUserUpdatedStatsBP
{
public:
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0x0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FOnlineStatUpdateBP> Stats;                                             // 0x30(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineStoreCategoryBP
struct FOnlineStoreCategoryBP
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.OnlineStoreFilterBP
struct FOnlineStoreFilterBP
{
public:
	TArray<class FString>                        Keywords;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FOnlineStoreCategoryBP>        IncludeCategories;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FOnlineStoreCategoryBP>        ExcludeCategories;                                 // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.VoiceChatDeviceInfoBP
struct FVoiceChatDeviceInfoBP
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemBlueprints.VoiceChatChannel3dPropertiesBP
struct FVoiceChatChannel3dPropertiesBP
{
public:
	bool                                         bSet;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoiceChatAttenuationModel_       AttenuationModel;                                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A7[0x2];                                     // Fixing Size After Last Property 
	float                                        MinDistance;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rolloff;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}



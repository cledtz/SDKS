#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESteamResult : uint8
{
	None                           = 0,
	OK                             = 1,
	Fail                           = 2,
	NoConnection                   = 3,
	sultNoConnectionRetry          = 4,
	InvalidPassword                = 5,
	LoggedInElsewhere              = 6,
	InvalidProtocolVer             = 7,
	InvalidParam                   = 8,
	FileNotFound                   = 9,
	Busy                           = 10,
	InvalidState                   = 11,
	InvalidName                    = 12,
	InvalidEmail                   = 13,
	DuplicateName                  = 14,
	AccessDenied                   = 15,
	Timeout                        = 16,
	Banned                         = 17,
	AccountNotFound                = 18,
	InvalidSteamID                 = 19,
	ServiceUnavailable             = 20,
	NotLoggedOn                    = 21,
	Pending                        = 22,
	EncryptionFailure              = 23,
	InsufficientPrivilege          = 24,
	LimitExceeded                  = 25,
	Revoked                        = 26,
	Expired                        = 27,
	AlreadyRedeemed                = 28,
	DuplicateRequest               = 29,
	AlreadyOwned                   = 30,
	IPNotFound                     = 31,
	PersistFailed                  = 32,
	LockingFailed                  = 33,
	LogonSessionReplaced           = 34,
	ConnectFailed                  = 35,
	HandshakeFailed                = 36,
	IOFailure                      = 37,
	RemoteDisconnect               = 38,
	ShoppingCartNotFound           = 39,
	Blocked                        = 40,
	Ignored                        = 41,
	NoMatch                        = 42,
	AccountDisabled                = 43,
	ServiceReadOnly                = 44,
	AccountNotFeatured             = 45,
	AdministratorOK                = 46,
	ContentVersion                 = 47,
	TryAnotherCM                   = 48,
	PasswordRequiredToKickSession  = 49,
	AlreadyLoggedInElsewhere       = 50,
	Suspended                      = 51,
	Cancelled                      = 52,
	DataCorruption                 = 53,
	DiskFull                       = 54,
	RemoteCallFailed               = 55,
	PasswordUnset                  = 56,
	ExternalAccountUnlinked        = 57,
	PSNTicketInvalid               = 58,
	ExternalAccountAlreadyLinked   = 59,
	RemoteFileConflict             = 60,
	IllegalPassword                = 61,
	SameAsPreviousValue            = 62,
	AccountLogonDenied             = 63,
	CannotUseOldPassword           = 64,
	InvalidLoginAuthCode           = 65,
	AccountLogonDeniedNoMail       = 66,
	HardwareNotCapableOfIPT        = 67,
	IPTInitError                   = 68,
	ParentalControlRestricted      = 69,
	FacebookQueryError             = 70,
	ExpiredLoginAuthCode           = 71,
	IPLoginRestrictionFailed       = 72,
	AccountLockedDown              = 73,
	AccountLogonDeniedVerifiedEmailRequired = 74,
	NoMatchingURL                  = 75,
	BadResponse                    = 76,
	RequirePasswordReEntry         = 77,
	ValueOutOfRange                = 78,
	UnexpectedError                = 79,
	Disabled                       = 80,
	InvalidCEGSubmission           = 81,
	RestrictedDevice               = 82,
	RegionLocked                   = 83,
	RateLimitExceeded              = 84,
	AccountLoginDeniedNeedTwoFactor = 85,
	ItemDeleted                    = 86,
	AccountLoginDeniedThrottle     = 87,
	TwoFactorCodeMismatch          = 88,
	TwoFactorActivationCodeMismatch = 89,
	AccountAssociatedToMultiplePartners = 90,
	NotModified                    = 91,
	NoMobileDevice                 = 92,
	TimeNotSynced                  = 93,
	SmsCodeFailed                  = 94,
	AccountLimitExceeded           = 95,
	AccountActivityLimitExceeded   = 96,
	PhoneActivityLimitExceeded     = 97,
	RefundToWallet                 = 98,
	EmailSendFailure               = 99,
	NotSettled                     = 100,
	NeedCaptcha                    = 101,
	GSLTDenied                     = 102,
	GSOwnerDenied                  = 103,
	InvalidItemType                = 104,
	IPBanned                       = 105,
	GSLTExpired                    = 106,
	InsufficientFunds              = 107,
	TooManyPending                 = 108,
	NoSiteLicensesFound            = 109,
	WGNetworkSendExceeded          = 110,
	AccountNotFriends              = 111,
	LimitedUserAccount             = 112,
	CantRemoveItem                 = 113,
	ESteamResult_MAX               = 114,
};

enum class ESteamCheckFileSignature : uint8
{
	InvalidSignature               = 0,
	ValidSignature                 = 1,
	FileNotFound                   = 2,
	NoSignaturesFoundForThisApp    = 3,
	NoSignaturesFoundForThisFile   = 4,
	ESteamCheckFileSignature_MAX   = 5,
};

enum class ESteamDenyReason : uint8
{
	Invalid                        = 0,
	InvalidVersion                 = 1,
	Generic                        = 2,
	NotLoggedOn                    = 3,
	NoLicense                      = 4,
	Cheater                        = 5,
	LoggedInElseWhere              = 6,
	UnknownText                    = 7,
	IncompatibleAnticheat          = 8,
	MemoryCorruption               = 9,
	IncompatibleSoftware           = 10,
	SteamConnectionLost            = 11,
	SteamConnectionError           = 12,
	SteamResponseTimedOut          = 13,
	SteamValidationStalled         = 14,
	SteamOwnerLeftGuestUser        = 15,
	ESteamDenyReason_MAX           = 16,
};

enum class ESteamFavoriteFlags : uint8
{
	None                           = 0,
	Favorite                       = 1,
	History                        = 2,
	ESteamFavoriteFlags_MAX        = 3,
};

enum class ESteamAuthSessionResponse : uint8
{
	OK                             = 0,
	UserNotConnectedToSteam        = 1,
	NoLicenseOrExpired             = 2,
	VACBanned                      = 3,
	LoggedInElseWhere              = 4,
	VACCheckTimedOut               = 5,
	AuthTicketCanceled             = 6,
	AuthTicketInvalidAlreadyUsed   = 7,
	AuthTicketInvalid              = 8,
	PublisherIssuedBan             = 9,
	ESteamAuthSessionResponse_MAX  = 10,
};

enum class ESteamFailureType : uint8
{
	FlushedCallbackQueue           = 0,
	PipeFail                       = 1,
	ESteamFailureType_MAX          = 2,
};

enum class ESteamChatRoomEnterResponse : uint8
{
	None                           = 0,
	Success                        = 1,
	DoesntExist                    = 2,
	NotAllowed                     = 3,
	Full                           = 4,
	Error                          = 5,
	Banned                         = 6,
	Limited                        = 7,
	ClanDisabled                   = 8,
	CommunityBan                   = 9,
	MemberBlockedYou               = 10,
	YouBlockedMember               = 11,
	RatelimitExceeded              = 15,
	ESteamChatRoomEnterResponse_MAX = 16,
};

enum class ESteamChatEntryType : uint8
{
	Invalid                        = 0,
	ChatMsg                        = 1,
	Typing                         = 2,
	InviteGame                     = 3,
	Emote                          = 4,
	LeftConversation               = 6,
	Entered                        = 7,
	WasKicked                      = 8,
	WasBanned                      = 9,
	Disconnected                   = 10,
	HistoricalChat                 = 11,
	LinkBlocked                    = 14,
	ESteamChatEntryType_MAX        = 15,
};

enum class ESteamChatMemberStateChange : uint8
{
	None                           = 0,
	Entered                        = 1,
	Left                           = 2,
	Disconnected                   = 4,
	Kicked                         = 8,
	Banned                         = 16,
	ESteamChatMemberStateChange_MAX = 17,
};

enum class ESteamP2PSessionError : uint8
{
	None                           = 0,
	NotRunningApp                  = 1,
	NoRightsToApp                  = 2,
	DestinationNotLoggedIn         = 3,
	Timeout                        = 4,
	Max                            = 5,
};

enum class ESteamPersonaChange : uint8
{
	Name                           = 0,
	Status                         = 1,
	ComeOnline                     = 2,
	GoneOffline                    = 3,
	GamePlayed                     = 4,
	GameServer                     = 5,
	Avatar                         = 6,
	JoinedSource                   = 7,
	LeftSource                     = 8,
	RelationshipChanged            = 9,
	NameFirstSet                   = 10,
	FacebookInfo                   = 11,
	Nickname                       = 12,
	SteamLevel                     = 13,
	ESteamPersonaChange_MAX        = 14,
};

enum class ESteamMessageType : uint8
{
	ENotification                  = 0,
	EMessage                       = 1,
	EWarning                       = 2,
	ESteamMessageType_MAX          = 3,
};

enum class ESteamPlayerAcceptState : uint8
{
	Unknown                        = 0,
	PlayerAccepted                 = 1,
	PlayerDeclined                 = 2,
	ESteamPlayerAcceptState_MAX    = 3,
};

enum class ESteamSubsystem : uint8
{
	SteamCore                      = 0,
	AppList                        = 1,
	Apps                           = 2,
	Friends                        = 3,
	GameServer                     = 4,
	GameServerStats                = 5,
	Inventory                      = 6,
	Input                          = 7,
	Matchmaking                    = 8,
	MatchmakingServers             = 9,
	Music                          = 10,
	Networking                     = 11,
	NetworkingUtils                = 12,
	ParentalSettings               = 13,
	RemoteStorage                  = 14,
	RemotePlay                     = 15,
	Screenshots                    = 16,
	UGC                            = 17,
	User                           = 18,
	UserStats                      = 19,
	Utils                          = 20,
	Video                          = 21,
	SteamParties                   = 22,
	GameSearch                     = 23,
	ESteamSubsystem_MAX            = 24,
};

enum class ESteamActivateGameOverlayToWebPageMode : uint8
{
	Default                        = 0,
	Modal                          = 1,
	ESteamActivateGameOverlayToWebPageMode_MAX = 2,
};

enum class ESteamFriendRelationship : uint8
{
	None                           = 0,
	Blocked                        = 1,
	RequestRecipient               = 2,
	Friend                         = 3,
	RequestInitiator               = 4,
	Ignored                        = 5,
	IgnoredFriend                  = 6,
	Suggested_DEPRECATED           = 7,
	Max                            = 8,
};

enum class ESteamPersonaState : uint8
{
	Offline                        = 0,
	Online                         = 1,
	Busy                           = 2,
	Away                           = 3,
	Snooze                         = 4,
	LookingToTrade                 = 5,
	LookingToPlay                  = 6,
	Max                            = 7,
};

enum class ESteamFriendFlags : uint8
{
	None                           = 0,
	Blocked                        = 1,
	FriendshipRequested            = 2,
	Immediate                      = 3,
	ClanMember                     = 4,
	OnGameServer                   = 5,
	RequestingFriendship           = 6,
	RequestingInfo                 = 7,
	Ignored                        = 8,
	IgnoredFriend                  = 9,
	ChatMember                     = 10,
	All                            = 11,
	ESteamFriendFlags_MAX          = 12,
};

enum class ESteamUserRestriction : uint8
{
	None                           = 0,
	Unknown                        = 1,
	AnyChat                        = 2,
	VoiceChat                      = 4,
	GroupChat                      = 8,
	Rating                         = 16,
	GameInvites                    = 32,
	Trading                        = 64,
	ESteamUserRestriction_MAX      = 65,
};

enum class ESteamOverlayToStoreFlag : uint8
{
	None                           = 0,
	AddToCart                      = 1,
	AddToCartAndShow               = 2,
	ESteamOverlayToStoreFlag_MAX   = 3,
};

enum class ESteamGameSearchErrorCode : uint8
{
	Invalid                        = 0,
	OK                             = 1,
	Failed_Search_Already_In_Progress = 2,
	Failed_No_Search_In_Progress   = 3,
	Failed_Not_Lobby_Leader        = 4,
	Failed_No_Host_Available       = 5,
	Failed_Search_Params_Invalid   = 6,
	Failed_Offline                 = 7,
	Failed_NotAuthorized           = 8,
	Failed_Unknown_Error           = 9,
	ESteamGameSearchErrorCode_MAX  = 10,
};

enum class ESteamPlayerResult : uint8
{
	Invalid                        = 0,
	FailedToConnect                = 1,
	Abandoned                      = 2,
	Kicked                         = 3,
	Incomplete                     = 4,
	Completed                      = 5,
	ESteamPlayerResult_MAX         = 6,
};

enum class ESteamCoreInputSource : uint8
{
	None                           = 0,
	LeftTrackpad                   = 1,
	RightTrackpad                  = 2,
	Joystick                       = 3,
	ABXY                           = 4,
	Switch                         = 5,
	LeftTrigger                    = 6,
	RightTrigger                   = 7,
	LeftBumper                     = 8,
	RightBumper                    = 9,
	Gyro                           = 10,
	CenterTrackpad                 = 11,
	RightJoystick                  = 12,
	DPad                           = 13,
	Key                            = 14,
	Mouse                          = 15,
	LeftGyro                       = 16,
	Count                          = 17,
	ESteamCoreInputSource_MAX      = 18,
};

enum class ESteamCoreInputSourceMode : uint8
{
	None                           = 0,
	Dpad                           = 1,
	Buttons                        = 2,
	FourButtons                    = 3,
	AbsoluteMouse                  = 4,
	RelativeMouse                  = 5,
	JoystickMove                   = 6,
	JoystickMouse                  = 7,
	JoystickCamera                 = 8,
	ScrollWheel                    = 9,
	Trigger                        = 10,
	TouchMenu                      = 11,
	MouseJoystick                  = 12,
	MouseRegion                    = 13,
	RadialMenu                     = 14,
	SingleButton                   = 15,
	Switches                       = 16,
	ESteamCoreInputSourceMode_MAX  = 17,
};

enum class ESteamCoreInputActionOrigin : uint8
{
	InputActionOrigin_None         = 0,
	InputActionOrigin_SteamController_A = 1,
	InputActionOrigin_SteamController_B = 2,
	InputActionOrigin_SteamController_X = 3,
	InputActionOrigin_SteamController_Y = 4,
	InputActionOrigin_SteamController_LeftBumper = 5,
	InputActionOrigin_SteamController_RightBumper = 6,
	InputActionOrigin_SteamController_LeftGrip = 7,
	InputActionOrigin_SteamController_RightGrip = 8,
	InputActionOrigin_SteamController_Start = 9,
	InputActionOrigin_SteamController_Back = 10,
	InputActionOrigin_SteamController_LeftPad_Touch = 11,
	InputActionOrigin_SteamController_LeftPad_Swipe = 12,
	InputActionOrigin_SteamController_LeftPad_Click = 13,
	InputActionOrigin_SteamController_LeftPad_DPadNorth = 14,
	InputActionOrigin_SteamController_LeftPad_DPadSouth = 15,
	InputActionOrigin_SteamController_LeftPad_DPadWest = 16,
	InputActionOrigin_SteamController_LeftPad_DPadEast = 17,
	InputActionOrigin_SteamController_RightPad_Touch = 18,
	InputActionOrigin_SteamController_RightPad_Swipe = 19,
	InputActionOrigin_SteamController_RightPad_Click = 20,
	InputActionOrigin_SteamController_RightPad_DPadNorth = 21,
	InputActionOrigin_SteamController_RightPad_DPadSouth = 22,
	InputActionOrigin_SteamController_RightPad_DPadWest = 23,
	InputActionOrigin_SteamController_RightPad_DPadEast = 24,
	InputActionOrigin_SteamController_LeftTrigger_Pull = 25,
	InputActionOrigin_SteamController_LeftTrigger_Click = 26,
	InputActionOrigin_SteamController_RightTrigger_Pull = 27,
	InputActionOrigin_SteamController_RightTrigger_Click = 28,
	InputActionOrigin_SteamController_LeftStick_Move = 29,
	InputActionOrigin_SteamController_LeftStick_Click = 30,
	InputActionOrigin_SteamController_LeftStick_DPadNorth = 31,
	InputActionOrigin_SteamController_LeftStick_DPadSouth = 32,
	InputActionOrigin_SteamController_LeftStick_DPadWest = 33,
	InputActionOrigin_SteamController_LeftStick_DPadEast = 34,
	InputActionOrigin_SteamController_Gyro_Move = 35,
	InputActionOrigin_SteamController_Gyro_Pitch = 36,
	InputActionOrigin_SteamController_Gyro_Yaw = 37,
	InputActionOrigin_SteamController_Gyro_Roll = 38,
	InputActionOrigin_SteamController_Reserved0 = 39,
	InputActionOrigin_SteamController_Reserved1 = 40,
	InputActionOrigin_SteamController_Reserved2 = 41,
	InputActionOrigin_SteamController_Reserved3 = 42,
	InputActionOrigin_SteamController_Reserved4 = 43,
	InputActionOrigin_SteamController_Reserved5 = 44,
	InputActionOrigin_SteamController_Reserved6 = 45,
	InputActionOrigin_SteamController_Reserved7 = 46,
	InputActionOrigin_SteamController_Reserved8 = 47,
	InputActionOrigin_SteamController_Reserved9 = 48,
	InputActionOrigin_SteamController_Reserved10 = 49,
	InputActionOrigin_PS4_X        = 50,
	InputActionOrigin_PS4_Circle   = 51,
	InputActionOrigin_PS4_Triangle = 52,
	InputActionOrigin_PS4_Square   = 53,
	InputActionOrigin_PS4_LeftBumper = 54,
	InputActionOrigin_PS4_RightBumper = 55,
	InputActionOrigin_PS4_Options  = 56,
	InputActionOrigin_PS4_Share    = 57,
	InputActionOrigin_PS4_LeftPad_Touch = 58,
	InputActionOrigin_PS4_LeftPad_Swipe = 59,
	InputActionOrigin_PS4_LeftPad_Click = 60,
	InputActionOrigin_PS4_LeftPad_DPadNorth = 61,
	InputActionOrigin_PS4_LeftPad_DPadSouth = 62,
	InputActionOrigin_PS4_LeftPad_DPadWest = 63,
	InputActionOrigin_PS4_LeftPad_DPadEast = 64,
	InputActionOrigin_PS4_RightPad_Touch = 65,
	InputActionOrigin_PS4_RightPad_Swipe = 66,
	InputActionOrigin_PS4_RightPad_Click = 67,
	InputActionOrigin_PS4_RightPad_DPadNorth = 68,
	InputActionOrigin_PS4_RightPad_DPadSouth = 69,
	InputActionOrigin_PS4_RightPad_DPadWest = 70,
	InputActionOrigin_PS4_RightPad_DPadEast = 71,
	InputActionOrigin_PS4_CenterPad_Touch = 72,
	InputActionOrigin_PS4_CenterPad_Swipe = 73,
	InputActionOrigin_PS4_CenterPad_Click = 74,
	InputActionOrigin_PS4_CenterPad_DPadNorth = 75,
	InputActionOrigin_PS4_CenterPad_DPadSouth = 76,
	InputActionOrigin_PS4_CenterPad_DPadWest = 77,
	InputActionOrigin_PS4_CenterPad_DPadEast = 78,
	InputActionOrigin_PS4_LeftTrigger_Pull = 79,
	InputActionOrigin_PS4_LeftTrigger_Click = 80,
	InputActionOrigin_PS4_RightTrigger_Pull = 81,
	InputActionOrigin_PS4_RightTrigger_Click = 82,
	InputActionOrigin_PS4_LeftStick_Move = 83,
	InputActionOrigin_PS4_LeftStick_Click = 84,
	InputActionOrigin_PS4_LeftStick_DPadNorth = 85,
	InputActionOrigin_PS4_LeftStick_DPadSouth = 86,
	InputActionOrigin_PS4_LeftStick_DPadWest = 87,
	InputActionOrigin_PS4_LeftStick_DPadEast = 88,
	InputActionOrigin_PS4_RightStick_Move = 89,
	InputActionOrigin_PS4_RightStick_Click = 90,
	InputActionOrigin_PS4_RightStick_DPadNorth = 91,
	InputActionOrigin_PS4_RightStick_DPadSouth = 92,
	InputActionOrigin_PS4_RightStick_DPadWest = 93,
	InputActionOrigin_PS4_RightStick_DPadEast = 94,
	InputActionOrigin_PS4_DPad_North = 95,
	InputActionOrigin_PS4_DPad_South = 96,
	InputActionOrigin_PS4_DPad_West = 97,
	InputActionOrigin_PS4_DPad_East = 98,
	InputActionOrigin_PS4_Gyro_Move = 99,
	InputActionOrigin_PS4_Gyro_Pitch = 100,
	InputActionOrigin_PS4_Gyro_Yaw = 101,
	InputActionOrigin_PS4_Gyro_Roll = 102,
	InputActionOrigin_PS4_DPad_Move = 103,
	InputActionOrigin_PS4_Reserved1 = 104,
	InputActionOrigin_PS4_Reserved2 = 105,
	InputActionOrigin_PS4_Reserved3 = 106,
	InputActionOrigin_PS4_Reserved4 = 107,
	InputActionOrigin_PS4_Reserved5 = 108,
	InputActionOrigin_PS4_Reserved6 = 109,
	InputActionOrigin_PS4_Reserved7 = 110,
	InputActionOrigin_PS4_Reserved8 = 111,
	InputActionOrigin_PS4_Reserved9 = 112,
	InputActionOrigin_PS4_Reserved10 = 113,
	InputActionOrigin_XBoxOne_A    = 114,
	InputActionOrigin_XBoxOne_B    = 115,
	InputActionOrigin_XBoxOne_X    = 116,
	InputActionOrigin_XBoxOne_Y    = 117,
	InputActionOrigin_XBoxOne_LeftBumper = 118,
	InputActionOrigin_XBoxOne_RightBumper = 119,
	InputActionOrigin_XBoxOne_Menu = 120,
	InputActionOrigin_XBoxOne_View = 121,
	InputActionOrigin_XBoxOne_LeftTrigger_Pull = 122,
	InputActionOrigin_XBoxOne_LeftTrigger_Click = 123,
	InputActionOrigin_XBoxOne_RightTrigger_Pull = 124,
	InputActionOrigin_XBoxOne_RightTrigger_Click = 125,
	InputActionOrigin_XBoxOne_LeftStick_Move = 126,
	InputActionOrigin_XBoxOne_LeftStick_Click = 127,
	InputActionOrigin_XBoxOne_LeftStick_DPadNorth = 128,
	InputActionOrigin_XBoxOne_LeftStick_DPadSouth = 129,
	InputActionOrigin_XBoxOne_LeftStick_DPadWest = 130,
	InputActionOrigin_XBoxOne_LeftStick_DPadEast = 131,
	InputActionOrigin_XBoxOne_RightStick_Move = 132,
	InputActionOrigin_XBoxOne_RightStick_Click = 133,
	InputActionOrigin_XBoxOne_RightStick_DPadNorth = 134,
	InputActionOrigin_XBoxOne_RightStick_DPadSouth = 135,
	InputActionOrigin_XBoxOne_RightStick_DPadWest = 136,
	InputActionOrigin_XBoxOne_RightStick_DPadEast = 137,
	InputActionOrigin_XBoxOne_DPad_North = 138,
	InputActionOrigin_XBoxOne_DPad_South = 139,
	InputActionOrigin_XBoxOne_DPad_West = 140,
	InputActionOrigin_XBoxOne_DPad_East = 141,
	InputActionOrigin_XBoxOne_DPad_Move = 142,
	InputActionOrigin_XBoxOne_LeftGrip_Lower = 143,
	InputActionOrigin_XBoxOne_LeftGrip_Upper = 144,
	InputActionOrigin_XBoxOne_RightGrip_Lower = 145,
	InputActionOrigin_XBoxOne_RightGrip_Upper = 146,
	InputActionOrigin_XBoxOne_Share = 147,
	InputActionOrigin_XBoxOne_Reserved6 = 148,
	InputActionOrigin_XBoxOne_Reserved7 = 149,
	InputActionOrigin_XBoxOne_Reserved8 = 150,
	InputActionOrigin_XBoxOne_Reserved9 = 151,
	InputActionOrigin_XBoxOne_Reserved10 = 152,
	InputActionOrigin_XBox360_A    = 153,
	InputActionOrigin_XBox360_B    = 154,
	InputActionOrigin_XBox360_X    = 155,
	InputActionOrigin_XBox360_Y    = 156,
	InputActionOrigin_XBox360_LeftBumper = 157,
	InputActionOrigin_XBox360_RightBumper = 158,
	InputActionOrigin_XBox360_Start = 159,
	InputActionOrigin_XBox360_Back = 160,
	InputActionOrigin_XBox360_LeftTrigger_Pull = 161,
	InputActionOrigin_XBox360_LeftTrigger_Click = 162,
	InputActionOrigin_XBox360_RightTrigger_Pull = 163,
	InputActionOrigin_XBox360_RightTrigger_Click = 164,
	InputActionOrigin_XBox360_LeftStick_Move = 165,
	InputActionOrigin_XBox360_LeftStick_Click = 166,
	InputActionOrigin_XBox360_LeftStick_DPadNorth = 167,
	InputActionOrigin_XBox360_LeftStick_DPadSouth = 168,
	InputActionOrigin_XBox360_LeftStick_DPadWest = 169,
	InputActionOrigin_XBox360_LeftStick_DPadEast = 170,
	InputActionOrigin_XBox360_RightStick_Move = 171,
	InputActionOrigin_XBox360_RightStick_Click = 172,
	InputActionOrigin_XBox360_RightStick_DPadNorth = 173,
	InputActionOrigin_XBox360_RightStick_DPadSouth = 174,
	InputActionOrigin_XBox360_RightStick_DPadWest = 175,
	InputActionOrigin_XBox360_RightStick_DPadEast = 176,
	InputActionOrigin_XBox360_DPad_North = 177,
	InputActionOrigin_XBox360_DPad_South = 178,
	InputActionOrigin_XBox360_DPad_West = 179,
	InputActionOrigin_XBox360_DPad_East = 180,
	InputActionOrigin_XBox360_DPad_Move = 181,
	InputActionOrigin_XBox360_Reserved1 = 182,
	InputActionOrigin_XBox360_Reserved2 = 183,
	InputActionOrigin_XBox360_Reserved3 = 184,
	InputActionOrigin_XBox360_Reserved4 = 185,
	InputActionOrigin_XBox360_Reserved5 = 186,
	InputActionOrigin_XBox360_Reserved6 = 187,
	InputActionOrigin_XBox360_Reserved7 = 188,
	InputActionOrigin_XBox360_Reserved8 = 189,
	InputActionOrigin_XBox360_Reserved9 = 190,
	InputActionOrigin_XBox360_Reserved10 = 191,
	InputActionOrigin_Switch_A     = 192,
	InputActionOrigin_Switch_B     = 193,
	InputActionOrigin_Switch_X     = 194,
	InputActionOrigin_Switch_Y     = 195,
	InputActionOrigin_Switch_LeftBumper = 196,
	InputActionOrigin_Switch_RightBumper = 197,
	InputActionOrigin_Switch_Plus  = 198,
	InputActionOrigin_Switch_Minus = 199,
	InputActionOrigin_Switch_Capture = 200,
	InputActionOrigin_Switch_LeftTrigger_Pull = 201,
	InputActionOrigin_Switch_LeftTrigger_Click = 202,
	InputActionOrigin_Switch_RightTrigger_Pull = 203,
	InputActionOrigin_Switch_RightTrigger_Click = 204,
	InputActionOrigin_Switch_LeftStick_Move = 205,
	InputActionOrigin_Switch_LeftStick_Click = 206,
	InputActionOrigin_Switch_LeftStick_DPadNorth = 207,
	InputActionOrigin_Switch_LeftStick_DPadSouth = 208,
	InputActionOrigin_Switch_LeftStick_DPadWest = 209,
	InputActionOrigin_Switch_LeftStick_DPadEast = 210,
	InputActionOrigin_Switch_RightStick_Move = 211,
	InputActionOrigin_Switch_RightStick_Click = 212,
	InputActionOrigin_Switch_RightStick_DPadNorth = 213,
	InputActionOrigin_Switch_RightStick_DPadSouth = 214,
	InputActionOrigin_Switch_RightStick_DPadWest = 215,
	InputActionOrigin_Switch_RightStick_DPadEast = 216,
	InputActionOrigin_Switch_DPad_North = 217,
	InputActionOrigin_Switch_DPad_South = 218,
	InputActionOrigin_Switch_DPad_West = 219,
	InputActionOrigin_Switch_DPad_East = 220,
	InputActionOrigin_Switch_ProGyro_Move = 221,
	InputActionOrigin_Switch_ProGyro_Pitch = 222,
	InputActionOrigin_Switch_ProGyro_Yaw = 223,
	InputActionOrigin_Switch_ProGyro_Roll = 224,
	InputActionOrigin_Switch_DPad_Move = 225,
	InputActionOrigin_Switch_Reserved1 = 226,
	InputActionOrigin_Switch_Reserved2 = 227,
	InputActionOrigin_Switch_Reserved3 = 228,
	InputActionOrigin_Switch_Reserved4 = 229,
	InputActionOrigin_Switch_Reserved5 = 230,
	InputActionOrigin_Switch_Reserved6 = 231,
	InputActionOrigin_Switch_Reserved7 = 232,
	InputActionOrigin_Switch_Reserved8 = 233,
	InputActionOrigin_Switch_Reserved9 = 234,
	InputActionOrigin_Switch_Reserved10 = 235,
	InputActionOrigin_Switch_RightGyro_Move = 236,
	InputActionOrigin_Switch_RightGyro_Pitch = 237,
	InputActionOrigin_Switch_RightGyro_Yaw = 238,
	InputActionOrigin_Switch_RightGyro_Roll = 239,
	InputActionOrigin_Switch_LeftGyro_Move = 240,
	InputActionOrigin_Switch_LeftGyro_Pitch = 241,
	InputActionOrigin_Switch_LeftGyro_Yaw = 242,
	InputActionOrigin_Switch_LeftGyro_Roll = 243,
	InputActionOrigin_Switch_LeftGrip_Lower = 244,
	InputActionOrigin_Switch_LeftGrip_Upper = 245,
	InputActionOrigin_Switch_RightGrip_Lower = 246,
	InputActionOrigin_Switch_RightGrip_Upper = 247,
	InputActionOrigin_Switch_Reserved11 = 248,
	InputActionOrigin_Switch_Reserved12 = 249,
	InputActionOrigin_Switch_Reserved13 = 250,
	InputActionOrigin_Switch_Reserved14 = 251,
	InputActionOrigin_Switch_Reserved15 = 252,
	InputActionOrigin_Switch_Reserved16 = 253,
	InputActionOrigin_Switch_Reserved17 = 254,
	InputActionOrigin_Switch_Reserved18 = 255,
	InputActionOrigin_Switch_Reserved19 = 256,
	InputActionOrigin_Switch_Reserved20 = 257,
	InputActionOrigin_PS5_X        = 258,
	InputActionOrigin_PS5_Circle   = 259,
	InputActionOrigin_PS5_Triangle = 260,
	InputActionOrigin_PS5_Square   = 261,
	InputActionOrigin_PS5_LeftBumper = 262,
	InputActionOrigin_PS5_RightBumper = 263,
	InputActionOrigin_PS5_Option   = 264,
	InputActionOrigin_PS5_Create   = 265,
	InputActionOrigin_PS5_Mute     = 266,
	InputActionOrigin_PS5_LeftPad_Touch = 267,
	InputActionOrigin_PS5_LeftPad_Swipe = 268,
	InputActionOrigin_PS5_LeftPad_Click = 269,
	InputActionOrigin_PS5_LeftPad_DPadNorth = 270,
	InputActionOrigin_PS5_LeftPad_DPadSouth = 271,
	InputActionOrigin_PS5_LeftPad_DPadWest = 272,
	InputActionOrigin_PS5_LeftPad_DPadEast = 273,
	InputActionOrigin_PS5_RightPad_Touch = 274,
	InputActionOrigin_PS5_RightPad_Swipe = 275,
	InputActionOrigin_PS5_RightPad_Click = 276,
	InputActionOrigin_PS5_RightPad_DPadNorth = 277,
	InputActionOrigin_PS5_RightPad_DPadSouth = 278,
	InputActionOrigin_PS5_RightPad_DPadWest = 279,
	InputActionOrigin_PS5_RightPad_DPadEast = 280,
	InputActionOrigin_PS5_CenterPad_Touch = 281,
	InputActionOrigin_PS5_CenterPad_Swipe = 282,
	InputActionOrigin_PS5_CenterPad_Click = 283,
	InputActionOrigin_PS5_CenterPad_DPadNorth = 284,
	InputActionOrigin_PS5_CenterPad_DPadSouth = 285,
	InputActionOrigin_PS5_CenterPad_DPadWest = 286,
	InputActionOrigin_PS5_CenterPad_DPadEast = 287,
	InputActionOrigin_PS5_LeftTrigger_Pull = 288,
	InputActionOrigin_PS5_LeftTrigger_Click = 289,
	InputActionOrigin_PS5_RightTrigger_Pull = 290,
	InputActionOrigin_PS5_RightTrigger_Click = 291,
	InputActionOrigin_PS5_LeftStick_Move = 292,
	InputActionOrigin_PS5_LeftStick_Click = 293,
	InputActionOrigin_PS5_LeftStick_DPadNorth = 294,
	InputActionOrigin_PS5_LeftStick_DPadSouth = 295,
	InputActionOrigin_PS5_LeftStick_DPadWest = 296,
	InputActionOrigin_PS5_LeftStick_DPadEast = 297,
	InputActionOrigin_PS5_RightStick_Move = 298,
	InputActionOrigin_PS5_RightStick_Click = 299,
	InputActionOrigin_PS5_RightStick_DPadNorth = 300,
	InputActionOrigin_PS5_RightStick_DPadSouth = 301,
	InputActionOrigin_PS5_RightStick_DPadWest = 302,
	InputActionOrigin_PS5_RightStick_DPadEast = 303,
	InputActionOrigin_PS5_DPad_North = 304,
	InputActionOrigin_PS5_DPad_South = 305,
	InputActionOrigin_PS5_DPad_West = 306,
	InputActionOrigin_PS5_DPad_East = 307,
	InputActionOrigin_PS5_Gyro_Move = 308,
	InputActionOrigin_PS5_Gyro_Pitch = 309,
	InputActionOrigin_PS5_Gyro_Yaw = 310,
	InputActionOrigin_PS5_Gyro_Roll = 311,
	InputActionOrigin_PS5_DPad_Move = 312,
	InputActionOrigin_PS5_Reserved1 = 313,
	InputActionOrigin_PS5_Reserved2 = 314,
	InputActionOrigin_PS5_Reserved3 = 315,
	InputActionOrigin_PS5_Reserved4 = 316,
	InputActionOrigin_PS5_Reserved5 = 317,
	InputActionOrigin_PS5_Reserved6 = 318,
	InputActionOrigin_PS5_Reserved7 = 319,
	InputActionOrigin_PS5_Reserved8 = 320,
	InputActionOrigin_PS5_Reserved9 = 321,
	InputActionOrigin_PS5_Reserved10 = 322,
	InputActionOrigin_PS5_Reserved11 = 323,
	InputActionOrigin_PS5_Reserved12 = 324,
	InputActionOrigin_PS5_Reserved13 = 325,
	InputActionOrigin_PS5_Reserved14 = 326,
	InputActionOrigin_PS5_Reserved15 = 327,
	InputActionOrigin_PS5_Reserved16 = 328,
	InputActionOrigin_PS5_Reserved17 = 329,
	InputActionOrigin_PS5_Reserved18 = 330,
	InputActionOrigin_PS5_Reserved19 = 331,
	InputActionOrigin_PS5_Reserved20 = 332,
	InputActionOrigin_SteamDeck_A  = 333,
	InputActionOrigin_SteamDeck_B  = 334,
	InputActionOrigin_SteamDeck_X  = 335,
	InputActionOrigin_SteamDeck_Y  = 336,
	InputActionOrigin_SteamDeck_L1 = 337,
	InputActionOrigin_SteamDeck_R1 = 338,
	InputActionOrigin_SteamDeck_Menu = 339,
	InputActionOrigin_SteamDeck_View = 340,
	InputActionOrigin_SteamDeck_LeftPad_Touch = 341,
	InputActionOrigin_SteamDeck_LeftPad_Swipe = 342,
	InputActionOrigin_SteamDeck_LeftPad_Click = 343,
	InputActionOrigin_SteamDeck_LeftPad_DPadNorth = 344,
	InputActionOrigin_SteamDeck_LeftPad_DPadSouth = 345,
	InputActionOrigin_SteamDeck_LeftPad_DPadWest = 346,
	InputActionOrigin_SteamDeck_LeftPad_DPadEast = 347,
	InputActionOrigin_SteamDeck_RightPad_Touch = 348,
	InputActionOrigin_SteamDeck_RightPad_Swipe = 349,
	InputActionOrigin_SteamDeck_RightPad_Click = 350,
	InputActionOrigin_SteamDeck_RightPad_DPadNorth = 351,
	InputActionOrigin_SteamDeck_RightPad_DPadSouth = 352,
	InputActionOrigin_SteamDeck_RightPad_DPadWest = 353,
	InputActionOrigin_SteamDeck_RightPad_DPadEast = 354,
	InputActionOrigin_SteamDeck_L2_SoftPull = 355,
	InputActionOrigin_SteamDeck_L2 = 356,
	InputActionOrigin_SteamDeck_R2_SoftPull = 357,
	InputActionOrigin_SteamDeck_R2 = 358,
	InputActionOrigin_SteamDeck_LeftStick_Move = 359,
	InputActionOrigin_SteamDeck_L3 = 360,
	InputActionOrigin_SteamDeck_LeftStick_DPadNorth = 361,
	InputActionOrigin_SteamDeck_LeftStick_DPadSouth = 362,
	InputActionOrigin_SteamDeck_LeftStick_DPadWest = 363,
	InputActionOrigin_SteamDeck_LeftStick_DPadEast = 364,
	InputActionOrigin_SteamDeck_LeftStick_Touch = 365,
	InputActionOrigin_SteamDeck_RightStick_Move = 366,
	InputActionOrigin_SteamDeck_R3 = 367,
	InputActionOrigin_SteamDeck_RightStick_DPadNorth = 368,
	InputActionOrigin_SteamDeck_RightStick_DPadSouth = 369,
	InputActionOrigin_SteamDeck_RightStick_DPadWest = 370,
	InputActionOrigin_SteamDeck_RightStick_DPadEast = 371,
	InputActionOrigin_SteamDeck_RightStick_Touch = 372,
	InputActionOrigin_SteamDeck_L4 = 373,
	InputActionOrigin_SteamDeck_R4 = 374,
	InputActionOrigin_SteamDeck_L5 = 375,
	InputActionOrigin_SteamDeck_R5 = 376,
	InputActionOrigin_SteamDeck_DPad_Move = 377,
	InputActionOrigin_SteamDeck_DPad_North = 378,
	InputActionOrigin_SteamDeck_DPad_South = 379,
	InputActionOrigin_SteamDeck_DPad_West = 380,
	InputActionOrigin_SteamDeck_DPad_East = 381,
	InputActionOrigin_SteamDeck_Gyro_Move = 382,
	InputActionOrigin_SteamDeck_Gyro_Pitch = 383,
	InputActionOrigin_SteamDeck_Gyro_Yaw = 384,
	InputActionOrigin_SteamDeck_Gyro_Roll = 385,
	InputActionOrigin_SteamDeck_Reserved1 = 386,
	InputActionOrigin_SteamDeck_Reserved2 = 387,
	InputActionOrigin_SteamDeck_Reserved3 = 388,
	InputActionOrigin_SteamDeck_Reserved4 = 389,
	InputActionOrigin_SteamDeck_Reserved5 = 390,
	InputActionOrigin_SteamDeck_Reserved6 = 391,
	InputActionOrigin_SteamDeck_Reserved7 = 392,
	InputActionOrigin_SteamDeck_Reserved8 = 393,
	InputActionOrigin_SteamDeck_Reserved9 = 394,
	InputActionOrigin_SteamDeck_Reserved10 = 395,
	InputActionOrigin_SteamDeck_Reserved11 = 396,
	InputActionOrigin_SteamDeck_Reserved12 = 397,
	InputActionOrigin_SteamDeck_Reserved13 = 398,
	InputActionOrigin_SteamDeck_Reserved14 = 399,
	InputActionOrigin_SteamDeck_Reserved15 = 400,
	InputActionOrigin_SteamDeck_Reserved16 = 401,
	InputActionOrigin_SteamDeck_Reserved17 = 402,
	InputActionOrigin_SteamDeck_Reserved18 = 403,
	InputActionOrigin_SteamDeck_Reserved19 = 404,
	InputActionOrigin_SteamDeck_Reserved20 = 405,
	InputActionOrigin_Count        = 406,
	InputActionOrigin_MaximumPossibleValue = 32767,
	InputActionOrigin_MAX          = 32768,
};

enum class ESteamCoreXboxOrigin : uint8
{
	A                              = 0,
	B                              = 1,
	X                              = 2,
	Y                              = 3,
	LeftBumper                     = 4,
	RightBumper                    = 5,
	Menu                           = 6,
	View                           = 7,
	LeftTrigger_Pull               = 8,
	LeftTrigger_Click              = 9,
	RightTrigger_Pull              = 10,
	RightTrigger_Click             = 11,
	LeftStick_Move                 = 12,
	LeftStick_Click                = 13,
	LeftStick_DPadNorth            = 14,
	LeftStick_DPadSouth            = 15,
	LeftStick_DPadWest             = 16,
	LeftStick_DPadEast             = 17,
	RightStick_Move                = 18,
	RightStick_Click               = 19,
	RightStick_DPadNorth           = 20,
	RightStick_DPadSouth           = 21,
	RightStick_DPadWest            = 22,
	RightStick_DPadEast            = 23,
	DPad_North                     = 24,
	DPad_South                     = 25,
	DPad_West                      = 26,
	DPad_East                      = 27,
	Count                          = 28,
	ESteamCoreXboxOrigin_MAX       = 29,
};

enum class ESteamCoreControllerPad : uint8
{
	Left                           = 0,
	Right                          = 1,
	ESteamCoreControllerPad_MAX    = 2,
};

enum class ESteamCoreInputType : uint8
{
	k_ESteamInputType_Unknown      = 0,
	k_ESteamInputType_SteamController = 1,
	k_ESteamInputType_XBox360Controller = 2,
	k_ESteamInputType_XBoxOneController = 3,
	k_ESteamInputType_GenericGamepad = 4,
	k_ESteamInputType_PS4Controller = 5,
	k_ESteamInputType_AppleMFiController = 6,
	k_ESteamInputType_AndroidController = 7,
	k_ESteamInputType_SwitchJoyConPair = 8,
	k_ESteamInputType_SwitchJoyConSingle = 9,
	k_ESteamInputType_SwitchProController = 10,
	k_ESteamInputType_MobileTouch  = 11,
	k_ESteamInputType_PS3Controller = 12,
	k_ESteamInputType_PS5Controller = 13,
	k_ESteamInputType_SteamDeckController = 14,
	k_ESteamInputType_Count        = 15,
	k_ESteamInputType_MaximumPossibleValue = 255,
	k_ESteamInputType_MAX          = 256,
};

enum class ESteamCoreInputLEDFlag : uint8
{
	SetColor                       = 0,
	RestoreUserDefault             = 1,
	ESteamCoreInputLEDFlag_MAX     = 2,
};

enum class ESteamCoreItemFlags : uint8
{
	ENoTrade                       = 0,
	ERemoved                       = 8,
	EConsumed                      = 9,
	ESteamCoreItemFlags_MAX        = 10,
};

enum class ESteamSessionFindType : uint8
{
	Listen                         = 0,
	Dedicated                      = 1,
	ESteamSessionFindType_MAX      = 2,
};

enum class ESteamLobbyType : uint8
{
	Private                        = 0,
	FriendsOnly                    = 1,
	Public                         = 2,
	Invisible                      = 3,
	ESteamLobbyType_MAX            = 4,
};

enum class ESteamLobbyComparison : uint8
{
	EqualToOrLessThan              = 0,
	LessThan                       = 1,
	Equal                          = 2,
	GreaterThan                    = 3,
	EqualToOrGreaterThan           = 4,
	NotEqual                       = 5,
	ESteamLobbyComparison_MAX      = 6,
};

enum class ESteamLobbyDistanceFilter : uint8
{
	Close                          = 0,
	Default                        = 1,
	Far                            = 2,
	Worldwide                      = 3,
	ESteamLobbyDistanceFilter_MAX  = 4,
};

enum class ESteamAudioPlaybackStatus : uint8
{
	Undefined                      = 0,
	Playing                        = 1,
	Paused                         = 2,
	Idle                           = 3,
	ESteamAudioPlaybackStatus_MAX  = 4,
};

enum class ESteamP2PSend : uint8
{
	Unreliable                     = 0,
	UnreliableNoDelay              = 1,
	Reliable                       = 2,
	ReliableWithBuffering          = 3,
	ESteamP2PSend_MAX              = 4,
};

enum class ESteamParentalFeature : uint8
{
	Invalid                        = 0,
	Store                          = 1,
	Community                      = 2,
	Profile                        = 3,
	Friends                        = 4,
	News                           = 5,
	Trading                        = 6,
	Settings                       = 7,
	Console                        = 8,
	Browser                        = 9,
	ParentalSetup                  = 10,
	Library                        = 11,
	Test                           = 12,
	Max                            = 13,
};

enum class ESteamPartiesBeaconLocationType : uint8
{
	Invalid                        = 0,
	ChatGroup                      = 1,
	Max                            = 2,
};

enum class ESteamPartiesBeaconLocationData : uint8
{
	Invalid                        = 0,
	Name                           = 1,
	IconURLSmall                   = 2,
	IconURLMedium                  = 3,
	IconURLLarge                   = 4,
	ESteamPartiesBeaconLocationData_MAX = 5,
};

enum class ESteamCoreDeviceFormFactor : uint8
{
	Unknown                        = 0,
	Phone                          = 1,
	Tablet                         = 2,
	Computer                       = 3,
	TV                             = 4,
	ESteamCoreDeviceFormFactor_MAX = 5,
};

enum class ESteamRemoteStoragePlatform : uint8
{
	None                           = 0,
	Windows                        = 1,
	OSX                            = 2,
	PS3                            = 4,
	Linux                          = 8,
	Reserved2                      = 16,
	All                            = 254,
	ESteamRemoteStoragePlatform_MAX = 255,
};

enum class ESteamUGCReadAction : uint8
{
	k_EUGCRead_ContinueReadingUntilFinished = 0,
	k_EUGCRead_ContinueReading     = 1,
	k_EUGCRead_Close               = 2,
	k_EUGCRead_MAX                 = 3,
};

enum class ESteamVRScreenshotType : uint8
{
	None                           = 0,
	Mono                           = 1,
	Stereo                         = 2,
	MonoCubemap                    = 3,
	MonoPanorama                   = 4,
	StereoPanorama                 = 5,
	ESteamVRScreenshotType_MAX     = 6,
};

enum class ESteamAttributeType : uint8
{
	NOT_SET                        = 0,
	INTEGER                        = 1,
	BOOL                           = 2,
	STRING                         = 3,
	ESteamAttributeType_MAX        = 4,
};

enum class ESteamComparisonOp : uint8
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
	ESteamComparisonOp_MAX         = 9,
};

enum class EOnlineComparison : uint8
{
	Equals                         = 0,
	NotEquals                      = 1,
	GreaterThan                    = 2,
	GreaterThanEquals              = 3,
	LessThan                       = 4,
	LessThanEquals                 = 5,
	EOnlineComparison_MAX          = 6,
};

enum class ESteamUserHasLicenseForAppResult : uint8
{
	HasLicense                     = 0,
	DoesNotHaveLicense             = 1,
	NoAuth                         = 2,
	ESteamUserHasLicenseForAppResult_MAX = 3,
};

enum class ESteamBeginAuthSessionResult : uint8
{
	OK                             = 0,
	InvalidTicket                  = 1,
	DuplicateRequest               = 2,
	InvalidVersion                 = 3,
	GameMismatch                   = 4,
	ExpiredTicket                  = 5,
	ESteamBeginAuthSessionResult_MAX = 6,
};

enum class ESteamAccountType : uint8
{
	Invalid                        = 0,
	Individual                     = 1,
	Multiseat                      = 2,
	GameServer                     = 3,
	AnonGameServer                 = 4,
	Pending                        = 5,
	ContentServer                  = 6,
	Clan                           = 7,
	Chat                           = 8,
	ConsoleUser                    = 9,
	AnonUser                       = 10,
	Max                            = 11,
};

enum class ESteamUGCMatchingUGCType : uint8
{
	Items                          = 0,
	Items_Mtx                      = 1,
	Items_ReadyToUse               = 2,
	Collections                    = 3,
	Artwork                        = 4,
	Videos                         = 5,
	Screenshots                    = 6,
	AllGuides                      = 7,
	WebGuides                      = 8,
	IntegratedGuides               = 9,
	UsableInGame                   = 10,
	ControllerBindings             = 11,
	GameManagedItems               = 12,
	All                            = 13,
	ESteamUGCMatchingUGCType_MAX   = 14,
};

enum class ESteamUserUGCList : uint8
{
	Published                      = 0,
	VotedOn                        = 1,
	VotedUp                        = 2,
	VotedDown                      = 3,
	WillVoteLater                  = 4,
	Favorited                      = 5,
	Subscribed                     = 6,
	UsedOrPlayed                   = 7,
	Followed                       = 8,
	ESteamUserUGCList_MAX          = 9,
};

enum class ESteamUserUGCListSortOrder : uint8
{
	CreationOrderDesc              = 0,
	CreationOrderAsc               = 1,
	TitleAsc                       = 2,
	LastUpdatedDesc                = 3,
	SubscriptionDateDesc           = 4,
	VoteScoreDesc                  = 5,
	ForModeration                  = 6,
	ESteamUserUGCListSortOrder_MAX = 7,
};

enum class ESteamUGCQuery : uint8
{
	RankedByVote                   = 0,
	RankedByPublicationDate        = 1,
	AcceptedForGameRankedByAcceptanceDate = 2,
	RankedByTrend                  = 3,
	FavoritedByFriendsRankedByPublicationDate = 4,
	CreatedByFriendsRankedByPublicationDate = 5,
	RankedByNumTimesReported       = 6,
	CreatedByFollowedUsersRankedByPublicationDate = 7,
	NotYetRated                    = 8,
	RankedByTotalVotesAsc          = 9,
	RankedByVotesUp                = 10,
	RankedByTextSearch             = 11,
	RankedByTotalUniqueSubscriptions = 12,
	RankedByPlaytimeTrend          = 13,
	RankedByTotalPlaytime          = 14,
	RankedByAveragePlaytimeTrend   = 15,
	RankedByLifetimeAveragePlaytime = 16,
	RankedByPlaytimeSessionsTrend  = 17,
	RankedByLifetimePlaytimeSessions = 18,
	ESteamUGCQuery_MAX             = 19,
};

enum class ESteamItemUpdateStatus : uint8
{
	Invalid                        = 0,
	PreparingConfig                = 1,
	PreparingContent               = 2,
	UploadingContent               = 3,
	UploadingPreviewFile           = 4,
	CommittingChanges              = 5,
	ESteamItemUpdateStatus_MAX     = 6,
};

enum class ESteamItemState : uint8
{
	None                           = 0,
	Subscribed                     = 1,
	LegacyItem                     = 2,
	Installed                      = 4,
	NeedsUpdate                    = 8,
	Downloading                    = 16,
	DownloadPending                = 32,
	ESteamItemState_MAX            = 33,
};

enum class ESteamItemStatistic : uint8
{
	NumSubscriptions               = 0,
	NumFavorites                   = 1,
	NumFollowers                   = 2,
	NumUniqueSubscriptions         = 3,
	NumUniqueFavorites             = 4,
	NumUniqueFollowers             = 5,
	NumUniqueWebsiteViews          = 6,
	ReportScore                    = 7,
	NumSecondsPlayed               = 8,
	NumPlaytimeSessions            = 9,
	NumComments                    = 10,
	NumSecondsPlayedDuringTimePeriod = 11,
	NumPlaytimeSessionsDuringTimePeriod = 12,
	ESteamItemStatistic_MAX        = 13,
};

enum class ESteamItemPreviewType : uint8
{
	Image                          = 0,
	YouTubeVideo                   = 1,
	Sketchfab                      = 2,
	EnvironmentMap_HorizontalCross = 3,
	EnvironmentMap_LatLong         = 4,
	ReservedMax                    = 254,
	ESteamItemPreviewType_MAX      = 255,
};

enum class ESteamWorkshopFileType : uint8
{
	First                          = 0,
	Community                      = 0,
	Microtransaction               = 1,
	Collection                     = 2,
	Art                            = 3,
	Video                          = 4,
	Screenshot                     = 5,
	Game                           = 6,
	Software                       = 7,
	Concept                        = 8,
	WebGuide                       = 9,
	IntegratedGuide                = 10,
	Merch                          = 11,
	ControllerBinding              = 12,
	SteamworksAccessInvite         = 13,
	SteamVideo                     = 14,
	GameManagedItem                = 15,
	Max                            = 16,
};

enum class ESteamRemoteStoragePublishedFileVisibility : uint8
{
	Public                         = 0,
	FriendsOnly                    = 1,
	Private                        = 2,
	ESteamRemoteStoragePublishedFileVisibility_MAX = 3,
};

enum class ESteamLeaderboardDataRequest : uint8
{
	Global                         = 0,
	GlobalAroundUser               = 1,
	Friends                        = 2,
	Users                          = 3,
	ESteamLeaderboardDataRequest_MAX = 4,
};

enum class ESteamLeaderboardSortMethod : uint8
{
	None                           = 0,
	Ascending                      = 1,
	Descending                     = 2,
	ESteamLeaderboardSortMethod_MAX = 3,
};

enum class ESteamLeaderboardDisplayType : uint8
{
	None                           = 0,
	Numeric                        = 1,
	TimeSeconds                    = 2,
	TimeMilliSeconds               = 3,
	ESteamLeaderboardDisplayType_MAX = 4,
};

enum class ESteamLeaderboardUploadScoreMethod : uint8
{
	None                           = 0,
	KeepBest                       = 1,
	ForceUpdate                    = 2,
	ESteamLeaderboardUploadScoreMethod_MAX = 3,
};

enum class ESteamVoiceResult : uint8
{
	OK                             = 0,
	NotInitialized                 = 1,
	NotRecording                   = 2,
	NoData                         = 3,
	BufferTooSmall                 = 4,
	DataCorrupted                  = 5,
	Restricted                     = 6,
	UnsupportedCodec               = 7,
	ReceiverOutOfDate              = 8,
	ReceiverDidNotAnswer           = 9,
	ESteamVoiceResult_MAX          = 10,
};

enum class ESteamCoreValid : uint8
{
	Valid                          = 0,
	NotValid                       = 1,
	ESteamCoreValid_MAX            = 2,
};

enum class ESteamCoreIdentical : uint8
{
	Identical                      = 0,
	NotIdentical                   = 1,
	ESteamCoreIdentical_MAX        = 2,
};

enum class ESteamTextFilteringContext : uint8
{
	k_ETextFilteringContextUnknown = 0,
	k_ETextFilteringContextGameContent = 1,
	k_ETextFilteringContextChat    = 2,
	k_ETextFilteringContextName    = 3,
	k_MAX                          = 4,
};

enum class ESteamGamepadTextInputLineMode : uint8
{
	SingleLine                     = 0,
	MultipleLines                  = 1,
	ESteamGamepadTextInputLineMode_MAX = 2,
};

enum class ESteamGamepadTextInputMode : uint8
{
	Normal                         = 0,
	Password                       = 1,
	ESteamGamepadTextInputMode_MAX = 2,
};

enum class ESteamNotificationPosition : uint8
{
	TopLeft                        = 0,
	TopRight                       = 1,
	BottomLeft                     = 2,
	BottomRight                    = 3,
	ESteamNotificationPosition_MAX = 4,
};

enum class ESteamUniverse : uint8
{
	Invalid                        = 0,
	Public                         = 1,
	Beta                           = 2,
	Internal                       = 3,
	Dev                            = 4,
	Max                            = 5,
};

enum class ESteamBroadcastUploadResult : uint8
{
	None                           = 0,
	OK                             = 1,
	InitFailed                     = 2,
	FrameFailed                    = 3,
	Timeout                        = 4,
	BandwidthExceeded              = 5,
	LowFPS                         = 6,
	MissingKeyFrames               = 7,
	NoConnection                   = 8,
	RelayFailed                    = 9,
	SettingsChanged                = 10,
	MissingAudio                   = 11,
	TooFarBehind                   = 12,
	TranscodeBehind                = 13,
	ESteamBroadcastUploadResult_MAX = 14,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.EndGameResultCallback
struct FEndGameResultCallback
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBD[0x7];                                     // Fixing Size After Last Property
	class FString                                UniqueGameID;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamCore.SteamSessionSetting
struct FSteamSessionSetting
{
public:
	uint8                                        Pad_1BC1[0x28];                                    // Fixing Size Of Struct
};

// 0x130 (0x130 - 0x0)
// ScriptStruct SteamCore.SteamSessionResult
struct FSteamSessionResult
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FSteamSessionSetting>          SessionSettings;                                   // 0x120(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.PublishedFileID
struct FPublishedFileID
{
public:
	uint8                                        Pad_1BC3[0x8];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.AddAppDependencyResult
struct FAddAppDependencyResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC5[0x7];                                     // Fixing Size After Last Property
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC6[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.UserFavoriteItemsListChanged
struct FUserFavoriteItemsListChanged
{
public:
	struct FPublishedFileID                      PublishedFileID;                                   // 0x0(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasAddRequest;                                    // 0x9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC7[0x6];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.AddUGCDependencyResult
struct FAddUGCDependencyResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC9[0x7];                                     // Fixing Size After Last Property
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      ChildPublishedFileId;                              // 0x10(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.AssociateWithClanResult
struct FAssociateWithClanResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.SteamLeaderboard
struct FSteamLeaderboard
{
public:
	uint8                                        Pad_1BCE[0x8];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.AttachLeaderboardUGCData
struct FAttachLeaderboardUGCData
{
public:
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD2[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.SteamID
struct FSteamID
{
public:
	uint8                                        Pad_1BD3[0x8];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamCore.AvatarImageLoaded
struct FAvatarImageLoaded
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	class UTexture2D*                            Image;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD5[0x10];                                    // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.ChangeNumOpenSlotsData
struct FChangeNumOpenSlotsData
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.CheckFileSignature
struct FCheckFileSignature
{
public:
	enum class ESteamCheckFileSignature          CheckFileSignature;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.ClanOfficerListResponse
struct FClanOfficerListResponse
{
public:
	struct FSteamID                              SteamIDClan;                                       // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Officers;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD8[0x3];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamCore.ClientGameServerDeny
struct FClientGameServerDeny
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD9[0x4];                                     // Fixing Size After Last Property
	class FString                                GameServerIP;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameServerPort;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BSecure;                                           // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamDenyReason                  Reason;                                            // 0x1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDB[0x2];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.ComputeNewPlayerCompatibilityResult
struct FComputeNewPlayerCompatibilityResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDF[0x3];                                     // Fixing Size After Last Property
	int32                                        PlayersThatDontLikeCandidate;                      // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayersThatCandidateDoesntLike;                    // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClanPlayersThatDontLikeCandidate;                  // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDCandidate;                                  // 0x10(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.PartyBeaconID
struct FPartyBeaconID
{
public:
	uint8                                        Pad_1BE2[0x8];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.CreateBeaconData
struct FCreateBeaconData
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE4[0x7];                                     // Fixing Size After Last Property
	struct FPartyBeaconID                        BeaconID;                                          // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.CreateItemResult
struct FCreateItemResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE5[0x7];                                     // Fixing Size After Last Property
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUserNeedsToAcceptWorkshopLegalAgreement;          // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE6[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.CreateLobbyData
struct FCreateLobbyData
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE7[0x7];                                     // Fixing Size After Last Property
	struct FSteamID                              SteamIDLobby;                                      // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.UGCDeleteItemResult
struct FUGCDeleteItemResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE9[0x7];                                     // Fixing Size After Last Property
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SteamCore.DLCInstalled
struct FDLCInstalled
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.DownloadClanActivityCountsResult
struct FDownloadClanActivityCountsResult
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.DownloadItemResult
struct FDownloadItemResult
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BED[0x4];                                     // Fixing Size After Last Property
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BEE[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.SteamLeaderboardEntries
struct FSteamLeaderboardEntries
{
public:
	uint8                                        Pad_1BF0[0x8];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.LeaderboardScoresDownloaded
struct FLeaderboardScoresDownloaded
{
public:
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamLeaderboardEntries              SteamLeaderboardEntries;                           // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        EntryCount;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF4[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.LeaderboardScoresDownloadedForUsers
struct FLeaderboardScoresDownloadedForUsers
{
public:
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamLeaderboardEntries              SteamLeaderboardEntries;                           // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        EntryCount;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF8[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamCore.FriendsEnumerateFollowingList
struct FFriendsEnumerateFollowingList
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFB[0x7];                                     // Fixing Size After Last Property
	TArray<struct FSteamID>                      SteamIDs;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	int32                                        Results;                                           // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalResult;                                       // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.FavoritesListAccountsUpdated
struct FFavoritesListAccountsUpdated
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct SteamCore.FavoritesListChanged
struct FFavoritesListChanged
{
public:
	class FString                                IP;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QueryPort;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConnectionPort;                                    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFF[0x4];                                     // Fixing Size After Last Property
	TArray<enum class ESteamFavoriteFlags>       Flags;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bAdd;                                              // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C02[0x7];                                     // Fixing Size After Last Property
	struct FSteamID                              SteamID;                                           // 0x38(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamCore.FileDetailsResult
struct FFileDetailsResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C05[0x3];                                     // Fixing Size After Last Property
	int32                                        FileSize;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SHA;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Flags;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.RemoteStorageFileReadAsyncComplete
struct FRemoteStorageFileReadAsyncComplete
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C08[0x3];                                     // Fixing Size After Last Property
	int32                                        Offset;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Read;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C09[0xC];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.SteamUGCHandle
struct FSteamUGCHandle
{
public:
	uint8                                        Pad_1C0A[0x8];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamCore.RemoteStorageFileShareResult
struct FRemoteStorageFileShareResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C0C[0x7];                                     // Fixing Size After Last Property
	struct FSteamUGCHandle                       File;                                              // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.RemoteStorageFileWriteAsyncComplete
struct FRemoteStorageFileWriteAsyncComplete
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.LeaderboardFindResult
struct FLeaderboardFindResult
{
public:
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLeaderboardFound;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C10[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.FindOrCreateLeaderboardData
struct FFindOrCreateLeaderboardData
{
public:
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLeaderboardFound;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C12[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.FriendRichPresenceUpdate
struct FFriendRichPresenceUpdate
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C14[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.GameConnectedChatJoin
struct FGameConnectedChatJoin
{
public:
	struct FSteamID                              SteamIDClanChat;                                   // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDUser;                                       // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.GameConnectedChatLeave
struct FGameConnectedChatLeave
{
public:
	struct FSteamID                              SteamIDClanChat;                                   // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDUser;                                       // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bKicked;                                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDropped;                                          // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C16[0x6];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.GameConnectedClanChatMsg
struct FGameConnectedClanChatMsg
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDClanChat;                                   // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MessageID;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C1A[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.GameConnectedFriendChatMsg
struct FGameConnectedFriendChatMsg
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MessageID;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C1C[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.GameLobbyJoinRequested
struct FGameLobbyJoinRequested
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDFriend;                                     // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.GameOverlayActivated
struct FGameOverlayActivated
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.GamepadTextInputDismissed
struct FGamepadTextInputDismissed
{
public:
	bool                                         bSubmitted;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C20[0x3];                                     // Fixing Size After Last Property
	int32                                        SubmittedText;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.GameRichPresenceJoinRequested
struct FGameRichPresenceJoinRequested
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                Connect;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamCore.GameServerChangeRequested
struct FGameServerChangeRequested
{
public:
	class FString                                Server;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.GameWebCallback
struct FGameWebCallback
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamCore.GetAppDependenciesResult
struct FGetAppDependenciesResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C25[0x7];                                     // Fixing Size After Last Property
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<int32>                                AppIDs;                                            // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumAppDependencies;                                // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalNumAppDependencies;                           // 0x24(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SteamCore.SteamTicketHandle
struct FSteamTicketHandle
{
public:
	uint8                                        Pad_1C28[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.GetAuthSessionTicketResponse
struct FGetAuthSessionTicketResponse
{
public:
	struct FSteamTicketHandle                    AuthTicket;                                        // 0x0(0x4)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C2B[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.FriendsGetFollowerCount
struct FFriendsGetFollowerCount
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C2C[0x7];                                     // Fixing Size After Last Property
	struct FSteamID                              SteamID;                                           // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C2D[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.NumberOfCurrentPlayers
struct FNumberOfCurrentPlayers
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C2E[0x3];                                     // Fixing Size After Last Property
	int32                                        Players;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.GetOPFSettingsResult
struct FGetOPFSettingsResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C2F[0x3];                                     // Fixing Size After Last Property
	int32                                        AppID;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.GetUserItemVoteResult
struct FGetUserItemVoteResult
{
public:
	struct FPublishedFileID                      PublishedFileID;                                   // 0x0(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVotedUp;                                          // 0x9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVotedDown;                                        // 0xA(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVoteSkipped;                                      // 0xB(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C32[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.GetVideoURLResult
struct FGetVideoURLResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C33[0x3];                                     // Fixing Size After Last Property
	int32                                        AppID;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.GSClientApprove
struct FGSClientApprove
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              OwnerSteamID;                                      // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamCore.GSClientDeny
struct FGSClientDeny
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamDenyReason                  DenyReason;                                        // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C36[0x7];                                     // Fixing Size After Last Property
	class FString                                OptionalText;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.GSClientGroupStatus
struct FGSClientGroupStatus
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDGroup;                                      // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bMember;                                           // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOfficer;                                          // 0x11(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C39[0x6];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.GSPolicyResponse
struct FGSPolicyResponse
{
public:
	bool                                         BSecure;                                           // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.GSStatsUnloaded
struct FGSStatsUnloaded
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.ValidateAuthTicketResponse
struct FValidateAuthTicketResponse
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamAuthSessionResponse         AuthSessionResponse;                               // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C3C[0x7];                                     // Fixing Size After Last Property
	struct FSteamID                              OwnerSteamID;                                      // 0x10(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.IPCFailure
struct FIPCFailure
{
public:
	enum class ESteamFailureType                 FailureType;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.IPCountry
struct FIPCountry
{
public:
	uint8                                        Pad_1C40[0x1];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.FriendsIsFollowing
struct FFriendsIsFollowing
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C41[0x7];                                     // Fixing Size After Last Property
	struct FSteamID                              SteamID;                                           // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsFollowing;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C42[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.ItemInstalled
struct FItemInstalled
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C43[0x4];                                     // Fixing Size After Last Property
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.JoinClanChatRoomCompletionResult
struct FJoinClanChatRoomCompletionResult
{
public:
	struct FSteamID                              SteamIDClanChat;                                   // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamChatRoomEnterResponse       ChatRoomEnterResponse;                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C45[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.JoinLobbyData
struct FJoinLobbyData
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Blocked;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamChatRoomEnterResponse       ChatRoomEnterResponse;                             // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C47[0x6];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamCore.JoinPartyData
struct FJoinPartyData
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C4A[0x7];                                     // Fixing Size After Last Property
	struct FPartyBeaconID                        BeaconID;                                          // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDBeaconOwner;                                // 0x10(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ConnectString;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.LicensesUpdated
struct FLicensesUpdated
{
public:
	uint8                                        Pad_1C4B[0x1];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.LobbyChatMsg
struct FLobbyChatMsg
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDUser;                                       // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamChatEntryType               ChatEntryType;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C4D[0x3];                                     // Fixing Size After Last Property
	int32                                        ChatID;                                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamCore.LobbyChatUpdate
struct FLobbyChatUpdate
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDUserChanged;                                // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDMakingChange;                               // 0x10(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	TArray<enum class ESteamChatMemberStateChange> ChatMemberStateChange;                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.LobbyDataUpdate
struct FLobbyDataUpdate
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDMember;                                     // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C50[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.LobbyEnterData
struct FLobbyEnterData
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Blocked;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamChatRoomEnterResponse       ChatRoomEnterResponse;                             // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C52[0x6];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamCore.LobbyGameCreated
struct FLobbyGameCreated
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDGameServer;                                 // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                IP;                                                // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Port;                                              // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C54[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.SteamGameID
struct FSteamGameID
{
public:
	uint8                                        Pad_1C56[0x8];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.LobbyInviteData
struct FLobbyInviteData
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDLobby;                                      // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamGameID                          GameID;                                            // 0x10(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.LobbyKickedData
struct FLobbyKickedData
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDAdmin;                                      // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bKickedDueToDisconnect;                            // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C5A[0x7];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SteamCore.LowBatteryPower
struct FLowBatteryPower
{
public:
	int32                                        MinutesBatteryLeft;                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamCore.MicroTxnAuthorizationResponse
struct FMicroTxnAuthorizationResponse
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C5D[0x4];                                     // Fixing Size After Last Property
	class FString                                OrderID;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAuthorized;                                       // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C5E[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.P2PSessionConnectFail
struct FP2PSessionConnectFail
{
public:
	struct FSteamID                              SteamIDRemote;                                     // 0x0(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamP2PSessionError             P2PSessionError;                                   // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C61[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.P2PSessionRequest
struct FP2PSessionRequest
{
public:
	struct FSteamID                              SteamIDRemote;                                     // 0x0(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.PersonaStateChange
struct FPersonaStateChange
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	TArray<enum class ESteamPersonaChange>       Flags;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SteamCore.SteamServerAddr
struct FSteamServerAddr
{
public:
	class FString                                IP;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Port;                                              // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        QueryPort;                                         // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ConnectionAddressString;                           // 0x18(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                SteamP2PAddr;                                      // 0x28(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct SteamCore.GameServerItem
struct FGameServerItem
{
public:
	class FString                                ServerName;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapName;                                           // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameDescription;                                   // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameTags;                                          // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamServerAddr                      SteamServerAddr;                                   // 0x40(0x38)(BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        Ping;                                              // 0x78(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Players;                                           // 0x7C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers;                                        // 0x80(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BotPlayers;                                        // 0x84(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerVersion;                                     // 0x88(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPassword;                                         // 0x8C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BSecure;                                           // 0x8D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6A[0x22];                                    // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.PlaybackStatusHasChanged
struct FPlaybackStatusHasChanged
{
public:
	uint8                                        Pad_1C6C[0x1];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.RemoteStoragePublishedFileSubscribed
struct FRemoteStoragePublishedFileSubscribed
{
public:
	struct FPublishedFileID                      PublishedFileID;                                   // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6E[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.RemoteStoragePublishedFileUnsubscribed
struct FRemoteStoragePublishedFileUnsubscribed
{
public:
	struct FPublishedFileID                      PublishedFileID;                                   // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C70[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.RemoteStorageSubscribePublishedFileResult
struct FRemoteStorageSubscribePublishedFileResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C72[0x7];                                     // Fixing Size After Last Property
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.RemoteStorageUnsubscribePublishedFileResult
struct FRemoteStorageUnsubscribePublishedFileResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C73[0x7];                                     // Fixing Size After Last Property
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.RemoveAppDependencyResult
struct FRemoveAppDependencyResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C75[0x7];                                     // Fixing Size After Last Property
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C76[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.RemoveUGCDependencyResult
struct FRemoveUGCDependencyResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C78[0x7];                                     // Fixing Size After Last Property
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      ChildPublishedFileId;                              // 0x10(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.SteamInventoryEligiblePromoItemDefIDs
struct FSteamInventoryEligiblePromoItemDefIDs
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7A[0x7];                                     // Fixing Size After Last Property
	struct FSteamID                              SteamID;                                           // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumEligiblePromoItemDefs;                          // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCachedData;                                       // 0x14(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7B[0x3];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.EncryptedAppTicketResponse
struct FEncryptedAppTicketResponse
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.GlobalAchievementPercentagesReady
struct FGlobalAchievementPercentagesReady
{
public:
	struct FSteamGameID                          GameID;                                            // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7D[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.GlobalStatsReceived
struct FGlobalStatsReceived
{
public:
	struct FSteamGameID                          GameID;                                            // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7F[0x7];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SteamCore.LobbyMatchList
struct FLobbyMatchList
{
public:
	int32                                        LobbiesMatching;                                   // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.RequestUserStatsData
struct FRequestUserStatsData
{
public:
	struct FSteamGameID                          GameID;                                            // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C81[0x7];                                     // Fixing Size After Last Property
	struct FSteamID                              SteamIDUser;                                       // 0x10(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.ReservationNotificationData
struct FReservationNotificationData
{
public:
	struct FPartyBeaconID                        BeaconID;                                          // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDJoiner;                                     // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SteamCore.ScreenshotHandle
struct FScreenshotHandle
{
public:
	uint8                                        Pad_1C84[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.ScreenshotReady
struct FScreenshotReady
{
public:
	struct FScreenshotHandle                     Handle;                                            // 0x0(0x4)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C85[0x3];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.ScreenshotRequested
struct FScreenshotRequested
{
public:
	uint8                                        Pad_1C86[0x1];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.UGCQueryHandle
struct FUGCQueryHandle
{
public:
	uint8                                        Pad_1C88[0x8];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.SteamUGCQueryCompleted
struct FSteamUGCQueryCompleted
{
public:
	struct FUGCQueryHandle                       Handle;                                            // 0x0(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C89[0x3];                                     // Fixing Size After Last Property
	int32                                        NumResultsReturned;                                // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalMatchingResults;                              // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCachedData;                                       // 0x14(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C8A[0x3];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.GSStatsReceived
struct FGSStatsReceived
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C8C[0x7];                                     // Fixing Size After Last Property
	struct FSteamID                              SteamIDUser;                                       // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamCore.GameServerRule
struct FGameServerRule
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.GSStatsStored
struct FGSStatsStored
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C8E[0x7];                                     // Fixing Size After Last Property
	struct FSteamID                              SteamIDUser;                                       // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct SteamCore.SetPersonaNameResponse
struct FSetPersonaNameResponse
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalSuccess;                                     // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.SetUserItemVoteResult
struct FSetUserItemVoteResult
{
public:
	struct FPublishedFileID                      PublishedFileID;                                   // 0x0(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVoteUp;                                           // 0x9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C92[0x6];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.StartPlaytimeTrackingResult
struct FStartPlaytimeTrackingResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SteamCore.SteamAppInstalled
struct FSteamAppInstalled
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SteamCore.SteamAppUninstalled
struct FSteamAppUninstalled
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SteamCore.SteamInventoryResult
struct FSteamInventoryResult
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SteamCore.SteamInventoryFullUpdate
struct FSteamInventoryFullUpdate
{
public:
	struct FSteamInventoryResult                 Handle;                                            // 0x0(0x4)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.SteamInventoryRequestPricesResult
struct FSteamInventoryRequestPricesResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C98[0x7];                                     // Fixing Size After Last Property
	class FString                                Currency;                                          // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.SteamInventoryResultReady
struct FSteamInventoryResultReady
{
public:
	struct FSteamInventoryResult                 Handle;                                            // 0x0(0x4)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x4(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9A[0x3];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamCore.SteamInventoryStartPurchaseResult
struct FSteamInventoryStartPurchaseResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9B[0x7];                                     // Fixing Size After Last Property
	class FString                                OrderID;                                           // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TransactionId;                                     // 0x18(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SteamCore.SteamRemotePlaySessionConnected
struct FSteamRemotePlaySessionConnected
{
public:
	int32                                        SessionId;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SteamCore.SteamRemotePlaySessionDisconnected
struct FSteamRemotePlaySessionDisconnected
{
public:
	int32                                        SessionId;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct SteamCore.SteamServerConnectFailure
struct FSteamServerConnectFailure
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStillRetrying;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.SteamServersConnected
struct FSteamServersConnected
{
public:
	uint8                                        Pad_1CA2[0x1];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.SteamServersDisconnected
struct FSteamServersDisconnected
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.SteamShutdown
struct FSteamShutdown
{
public:
	uint8                                        Pad_1CA4[0x1];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.StopPlaytimeTrackingResult
struct FStopPlaytimeTrackingResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.StoreAuthURLResponse
struct FStoreAuthURLResponse
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.SubmitItemUpdateResult
struct FSubmitItemUpdateResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUserNeedsToAcceptWorkshopLegalAgreement;          // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA7[0x6];                                     // Fixing Size After Last Property
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SteamCore.RemoteStorageDownloadUGCResult
struct FRemoteStorageDownloadUGCResult
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAB[0x7];                                     // Fixing Size After Last Property
	struct FSteamUGCHandle                       FileHandle;                                        // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SizeInBytes;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDOwner;                                      // 0x28(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamCore.LeaderboardScoreUploaded
struct FLeaderboardScoreUploaded
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB3[0x7];                                     // Fixing Size After Last Property
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x8(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Score;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScoreChanged;                                     // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB5[0x3];                                     // Fixing Size After Last Property
	int32                                        GlobalRankNew;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GlobalRankPrevious;                                // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SteamCore.UserAchievementIconFetched
struct FUserAchievementIconFetched
{
public:
	struct FSteamGameID                          GameID;                                            // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                AchievementName;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAchieved;                                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CBB[0x7];                                     // Fixing Size After Last Property
	class UTexture2D*                            Icon;                                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CBC[0x8];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamCore.UserAchievementStored
struct FUserAchievementStored
{
public:
	struct FSteamGameID                          GameID;                                            // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bGroupAchievement;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC1[0x7];                                     // Fixing Size After Last Property
	class FString                                AchievementName;                                   // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentProgress;                                   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxProgress;                                       // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.UserStatsReceived
struct FUserStatsReceived
{
public:
	struct FSteamID                              GameID;                                            // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC6[0x7];                                     // Fixing Size After Last Property
	struct FSteamID                              SteamID;                                           // 0x10(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.UserStatsStored
struct FUserStatsStored
{
public:
	struct FSteamGameID                          GameID;                                            // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC9[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.UserStatsUnloaded
struct FUserStatsUnloaded
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SteamCore.VolumeHasChanged
struct FVolumeHasChanged
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamCore.RequestPlayersForGameFinalResultCallback
struct FRequestPlayersForGameFinalResultCallback
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CCE[0x7];                                     // Fixing Size After Last Property
	class FString                                SearchID;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UniqueGameID;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.RequestPlayersForGameProgressCallback
struct FRequestPlayersForGameProgressCallback
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD2[0x7];                                     // Fixing Size After Last Property
	class FString                                SearchID;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct SteamCore.RequestPlayersForGameResultCallback
struct FRequestPlayersForGameResultCallback
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD7[0x7];                                     // Fixing Size After Last Property
	class FString                                SearchID;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDPlayerFound;                                // 0x18(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDLobby;                                      // 0x20(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamPlayerAcceptState           PlayerAcceptState;                                 // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CDA[0x3];                                     // Fixing Size After Last Property
	int32                                        PlayerIndex;                                       // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalPlayersFound;                                 // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalPlayersAcceptedGame;                          // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SuggestedTeamIndex;                                // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CDB[0x4];                                     // Fixing Size After Last Property
	class FString                                UniqueGameID;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SteamCore.SearchForGameProgressCallback
struct FSearchForGameProgressCallback
{
public:
	class FString                                SearchID;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE2[0x7];                                     // Fixing Size After Last Property
	struct FSteamID                              LobbyId;                                           // 0x18(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDEndedSearch;                                // 0x20(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        SecondsRemainingEstimate;                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayersSearching;                                  // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SteamCore.SearchForGameResultCallback
struct FSearchForGameResultCallback
{
public:
	class FString                                SearchID;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE6[0x3];                                     // Fixing Size After Last Property
	int32                                        CountPlayersInGame;                                // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CountAcceptedGame;                                 // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE7[0x4];                                     // Fixing Size After Last Property
	struct FSteamID                              SteamIDHost;                                       // 0x20(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bFinalCallback;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE9[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamCore.SubmitPlayerResultResultCallback
struct FSubmitPlayerResultResultCallback
{
public:
	enum class ESteamResult                      Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CEB[0x7];                                     // Fixing Size After Last Property
	class FString                                UniqueGameID;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDPlayer;                                     // 0x18(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct SteamCore.SteamFriendsGroupID
struct FSteamFriendsGroupID
{
public:
	uint8                                        Pad_1D1E[0x2];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.InputAnalogActionData
struct FInputAnalogActionData
{
public:
	enum class ESteamCoreInputSourceMode         Mode;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D20[0x3];                                     // Fixing Size After Last Property
	float                                        X;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D21[0x3];                                     // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// ScriptStruct SteamCore.InputDigitalActionData
struct FInputDigitalActionData
{
public:
	bool                                         bState;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamCore.InputMotionData
struct FInputMotionData
{
public:
	float                                        RotQuatX;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotQuatY;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotQuatZ;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotQuatW;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PosAccelX;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PosAccelY;                                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PosAccelZ;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotVelX;                                           // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotVelY;                                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotVelZ;                                           // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.InputHandle
struct FInputHandle
{
public:
	uint8                                        Pad_1D2F[0x8];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.InputActionSetHandle
struct FInputActionSetHandle
{
public:
	uint8                                        Pad_1D31[0x8];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.InputDigitalActionHandle
struct FInputDigitalActionHandle
{
public:
	uint8                                        Pad_1D33[0x8];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.InputAnalogActionHandle
struct FInputAnalogActionHandle
{
public:
	uint8                                        Pad_1D34[0x8];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.SteamItemInstanceID
struct FSteamItemInstanceID
{
public:
	uint8                                        Pad_1D35[0x8];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SteamCore.SteamItemDef
struct FSteamItemDef
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamCore.SteamItemDetails
struct FSteamItemDetails
{
public:
	struct FSteamItemInstanceID                  InstanceId;                                        // 0x0(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamItemDef                         Definition;                                        // 0x8(0x4)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class ESteamCoreItemFlags>       Flags;                                             // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamCore.SteamP2PSessionState
struct FSteamP2PSessionState
{
public:
	bool                                         bConnectionActive;                                 // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConnecting;                                       // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESteamP2PSessionError             P2PSessionError;                                   // 0x2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUsingRelay;                                       // 0x3(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BytesQueuedForSend;                                // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PacketsQueuedForSend;                              // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D3A[0x4];                                     // Fixing Size After Last Property
	class FString                                RemoteIP;                                          // 0x10(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        RemotePort;                                        // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D3C[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.SteamNetworkPingLocation
struct FSteamNetworkPingLocation
{
public:
	class FString                                Location;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SteamCore.SteamParentalSettingsChanged
struct FSteamParentalSettingsChanged
{
public:
	uint8                                        Pad_1D3D[0x1];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SteamCore.SteamPartyBeaconLocation
struct FSteamPartyBeaconLocation
{
public:
	enum class ESteamPartiesBeaconLocationType   Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3E[0x7];                                     // Fixing Size After Last Property
	class FString                                LocationId;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.UGCFileWriteStreamHandle
struct FUGCFileWriteStreamHandle
{
public:
	uint8                                        Pad_1D3F[0x8];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.SteamInventoryUpdateHandle
struct FSteamInventoryUpdateHandle
{
public:
	uint8                                        Pad_1D42[0x8];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SteamCore.HostPingData
struct FHostPingData
{
public:
	class FString                                HostString;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamCore.SteamSessionSearchSetting
struct FSteamSessionSearchSetting
{
public:
	uint8                                        Pad_1D44[0x20];                                    // Fixing Size Of Struct
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct SteamCore.SteamUGCDetails
struct FSteamUGCDetails
{
public:
	struct FPublishedFileID                      PublishedFileID;                                   // 0x0(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamResult                      Result;                                            // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamWorkshopFileType            FileType;                                          // 0x9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D48[0x2];                                     // Fixing Size After Last Property
	int32                                        CreatorAppID;                                      // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConsumerAppID;                                     // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D49[0x4];                                     // Fixing Size After Last Property
	class FString                                Title;                                             // 0x18(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x28(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDOwner;                                      // 0x38(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        TimeCreated;                                       // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TimeUpdated;                                       // 0x44(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TimeAddedToUserList;                               // 0x48(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamRemoteStoragePublishedFileVisibility Visibility;                                        // 0x4C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBanned;                                           // 0x4D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAcceptedForUse;                                   // 0x4E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTagsTruncated;                                    // 0x4F(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0x50(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSteamUGCHandle                       File;                                              // 0x60(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamUGCHandle                       PreviewFile;                                       // 0x68(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x70(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FileSize;                                          // 0x80(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreviewFileSize;                                   // 0x84(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x88(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VotesUp;                                           // 0x98(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VotesDown;                                         // 0x9C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Score;                                             // 0xA0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumChildren;                                       // 0xA4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SteamCore.UGCUpdateHandle
struct FUGCUpdateHandle
{
public:
	uint8                                        Pad_1D51[0x8];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamCore.SteamLeaderboardEntry
struct FSteamLeaderboardEntry
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        GlobalRank;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Score;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Details;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D53[0x4];                                     // Fixing Size After Last Property
	struct FSteamUGCHandle                       UGCHandle;                                         // 0x18(0x8)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

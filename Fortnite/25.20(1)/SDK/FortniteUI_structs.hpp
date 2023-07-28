#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFortUIFeature : uint8
{
	ShowHome                       = 0,
	ShowPlay                       = 1,
	ShowCommand                    = 2,
	ShowHeros                      = 3,
	ShowSquads                     = 4,
	ShowArmory                     = 5,
	ShowLocker                     = 6,
	ShowSkillTree                  = 7,
	ShowStore                      = 8,
	ShowQuests                     = 9,
	ShowMainStore                  = 10,
	ShowContextHelpMenu            = 11,
	ShowCampaign                   = 12,
	ShowActiveBoost                = 13,
	ShowJournal                    = 14,
	ShowPartyBar                   = 15,
	ShowChatWindow                 = 16,
	ShowFriendsMenu                = 17,
	ShowObjectives                 = 18,
	ShowRatingIconsInTopbar        = 19,
	ShowAntiAddictionMessage       = 20,
	ShowMinorShutdownMessage       = 21,
	ShowHealthWarningScreen        = 22,
	ShowSimplifiedHUD              = 23,
	LargeHeaderFooterButtons       = 24,
	ShowAthenaFavoriting           = 25,
	ShowAthenaItemRandomization    = 26,
	ShowAthenaQuests               = 27,
	ShowBattlePass                 = 28,
	ShowNewBattlePass              = 29,
	ShowDynamicBattlePass          = 30,
	ShowBattlePassFAQ              = 31,
	ShowReplays                    = 32,
	ShowProfileStatsUI             = 33,
	ShowAthenaItemShop             = 34,
	ShowMultiProductItemShop       = 35,
	ShowShowdown                   = 36,
	SpecialEventsStart             = 37,
	ShowSpecialEvent               = 38,
	ShowWinterfest                 = 39,
	SpecialEventsEnd               = 40,
	ShowSpatialUI                  = 41,
	ShowSocial                     = 42,
	ShowAccountBoosts              = 43,
	ShowCustomerSupport            = 44,
	ShowGlobalChat                 = 45,
	ShowEULA                       = 46,
	ShowEndOfZoneCinematic         = 47,
	ShowOnboardingCinematics       = 48,
	ShowFounderBannerIcons         = 49,
	ShowCurrentRegionInLobby       = 50,
	ShowPrerollLlamas              = 51,
	EnableFoundersDailyRewards     = 52,
	EnableMatchmakingRegionSetting = 53,
	EnableLanguageSetting          = 54,
	EnableFriendCodeSetting        = 55,
	EnableEarlyAccessLoadingScreenBanner = 56,
	EnableAlterationModifications  = 57,
	EnableSchematicRarityUpgrade   = 58,
	EnableMissionActivationVote    = 59,
	EnableLtmRetrieveTheData       = 60,
	EnableUpgradesVideos           = 61,
	ShowPreviewTestTab             = 62,
	ShowDMCustomization            = 63,
	ShowDMModes                    = 64,
	EnableSearchTabInTopNavigationBar = 65,
	EnableDiscoverTabInTopNavigationBar = 66,
	EnableLibraryTabInTopNavigationBar = 67,
	Max_None                       = 68,
	EFortUIFeature_MAX             = 69,
};

enum class EFortFrontEndFeatureStateReason : uint8
{
	Default                        = 0,
	NoHeroes                       = 1,
	Tutorial                       = 2,
	BROnly                         = 3,
	NoPlayerController             = 4,
	UnexpectedFeature              = 5,
	Invalid                        = 6,
	EFortFrontEndFeatureStateReason_MAX = 7,
};

enum class EFortFrontEndFeatureState : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	Invalid                        = 3,
	EFortFrontEndFeatureState_MAX  = 4,
};

enum class EFortFrontEndFeature : uint8
{
	ShowHomeBase                   = 0,
	ShowHeroList                   = 1,
	ShowVault                      = 2,
	ShowStore                      = 3,
	PlayZone                       = 4,
	ShowHeroSelect                 = 5,
	RecruitHero                    = 6,
	ShowHomeBaseOverview           = 7,
	STWArmory_Transform            = 8,
	STWArmory_CollectionBook       = 9,
	MAX_None                       = 10,
	EFortFrontEndFeature_MAX       = 11,
};

enum class EFortItemCooldownType : uint8
{
	None                           = 0,
	AmmoRegeneration               = 1,
	ItemActivation                 = 2,
	WeaponReloading                = 3,
	Death                          = 4,
	AthenaWeaponFireCooldown       = 5,
	AbilitySetActivateByInputAbility = 6,
	DirectProgressUpdate           = 7,
	EFortItemCooldownType_MAX      = 8,
};

enum class EFortBuildingInteraction : uint8
{
	None                           = 0,
	Build                          = 1,
	Repair                         = 2,
	Upgrade                        = 3,
	Edit                           = 4,
	BeingModified                  = 5,
	ConfirmEdit                    = 6,
	Creative                       = 7,
	EFortBuildingInteraction_MAX   = 8,
};

enum class EFortBuildingHealthDisplayRule : uint8
{
	Never                          = 0,
	Allowed                        = 1,
	Always                         = 2,
	EFortBuildingHealthDisplayRule_MAX = 3,
};

enum class EFortHitPointModificationReason : uint8
{
	Invalid                        = 0,
	InitalSet                      = 1,
	AutoRegen                      = 2,
	ItemRegen                      = 3,
	DamageOverTime                 = 4,
	DamageReceived                 = 5,
	EFortHitPointModificationReason_MAX = 6,
};

enum class EFortStoreState : uint8
{
	Error                          = 0,
	Closed                         = 1,
	CardPackStore                  = 2,
	CurrencyStore                  = 3,
	WebPayment                     = 4,
	PurchaseOpen                   = 5,
	PackOpen                       = 6,
	CardEnter                      = 7,
	CardBackReveal                 = 8,
	CardFlip                       = 9,
	CardFrontReveal                = 10,
	CardExit                       = 11,
	SummaryAdd                     = 12,
	PackDestroy                    = 13,
	Summary                        = 14,
	PresentChoice                  = 15,
	ChoiceMade                     = 16,
	SummaryAddTransition           = 17,
	MAX_None                       = 18,
	EFortStoreState_MAX            = 19,
};

enum class EFortUIFeatureStateReason : uint8
{
	Default                        = 0,
	Tutorial                       = 1,
	ContentInstall                 = 2,
	AccountRestrictions            = 3,
	Platform                       = 4,
	SeasonOrEventNotActive         = 5,
	NoPlayerController             = 6,
	UnexpectedFeature              = 7,
	Invalid                        = 8,
	EFortUIFeatureStateReason_MAX  = 9,
};

enum class EFortUIFeatureState : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	Invalid                        = 3,
	EFortUIFeatureState_MAX        = 4,
};

enum class EFortPrioritizedWidgetContestedBehavior : uint8
{
	QueueBehind                    = 0,
	StompOther                     = 1,
	EFortPrioritizedWidgetContestedBehavior_MAX = 2,
};

enum class EFortPrioritizedWidgetPriority : uint8
{
	Priority_0                     = 0,
	Priority_1                     = 1,
	Priority_2                     = 2,
	Priority_3                     = 3,
	Priority_4                     = 4,
	Priority_5                     = 5,
	NumberOfPrios                  = 6,
	EFortPrioritizedWidgetPriority_MAX = 7,
};

enum class EPostGameHUDMode : uint8
{
	None                           = 0,
	AllHidden                      = 1,
	Spectating                     = 2,
	AllHiddenExceptXP              = 3,
	EPostGameHUDMode_MAX           = 4,
};

enum class EPostGameClickCatcherMode : uint8
{
	Catch_None                     = 0,
	Catch_MobileOnly               = 1,
	Catch_MouseOnly                = 2,
	Catch_All                      = 3,
	Catch_MAX                      = 4,
};

enum class EInputPriority : uint8
{
	Normal                         = 0,
	Menu                           = 1,
	Chat                           = 2,
	Modal                          = 3,
	Confirmation                   = 4,
	Error                          = 5,
	HUD                            = 6,
	EInputPriority_MAX             = 7,
};

enum class EDateFormat : uint8
{
	CountdownTextual               = 0,
	CountdownNumeric               = 1,
	CountdownNumUnder12Hours       = 2,
	Date                           = 3,
	DateFormat_MAX                 = 4,
};

enum class EFlagStatus : uint8
{
	FlagPresent                    = 0,
	FlagNotPresent                 = 1,
	EFlagStatus_MAX                = 2,
};

enum class EFortInputMode : uint8
{
	Frontend                       = 0,
	InGame                         = 1,
	InGameCursor                   = 2,
	EFortInputMode_MAX             = 3,
};

enum class EFortUrlType : uint8
{
	NormalWebLink                  = 0,
	AccountCreationLink            = 1,
	HelpLink                       = 2,
	EULALink                       = 3,
	EFortUrlType_MAX               = 4,
};

enum class EGridSortKind : uint8
{
	None                           = 0,
	ByNumber                       = 1,
	ByString                       = 2,
	ByNumberThenString             = 3,
	ByStringThenNumber             = 4,
	EGridSortKind_MAX              = 5,
};

enum class EFortItemCardSize : uint8
{
	XXS                            = 0,
	XS                             = 1,
	Wide_S                         = 2,
	S                              = 3,
	M                              = 4,
	L                              = 5,
	Wide_L                         = 6,
	XL                             = 7,
	XXL                            = 8,
	EFortItemCardSize_MAX          = 9,
};

enum class EViolatorIntensity : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	EViolatorIntensity_MAX         = 3,
};

enum class EItemShopTileSize : uint8
{
	Mini                           = 0,
	Small                          = 1,
	Normal                         = 2,
	DoubleWide                     = 3,
	TripleWide                     = 4,
	Max                            = 5,
};

enum class EItemShopCurrency : uint8
{
	VBucks                         = 0,
	RealMOney                      = 1,
	EItemShopCurrency_MAX          = 2,
};

enum class EFortPlayerPowerRatingType : uint8
{
	Auto                           = 0,
	Campaign                       = 1,
	Phoenix                        = 2,
	Max_None                       = 3,
	EFortPlayerPowerRatingType_MAX = 4,
};

enum class EFortUISpecialEvents : uint8
{
	NoEvent                        = 0,
	FritTemp                       = 1,
	EFortUISpecialEvents_MAX       = 2,
};

enum class ECountdownDisplay : uint8
{
	EventEndTime                   = 0,
	ChallengeUnlockTime            = 1,
	ChallengeBundleUnlockTime      = 2,
	UnlockAlreadySet               = 3,
	MAX                            = 4,
};

enum class EAthenaEventMatchInfoSortMethod : uint8
{
	Eliminations                   = 0,
	Place                          = 1,
	Count                          = 2,
	EAthenaEventMatchInfoSortMethod_MAX = 3,
};

enum class EFrontendVisibilityMode : uint8
{
	Normal                         = 0,
	HideTopTabsOnly                = 1,
	HideTopTabsOnlyWithoutBottomBar = 2,
	OnlyBottom                     = 3,
	OnlyTop                        = 4,
	OnlyTitleBar                   = 5,
	Empty                          = 6,
	EFrontendVisibilityMode_MAX    = 7,
};

enum class EBattlePassInputs : uint8
{
	Back                           = 0,
	ViewItem                       = 1,
	PreviewAction                  = 2,
	ReplayTrailer                  = 3,
	ShowAbout                      = 4,
	BulkBuyRewards                 = 5,
	PageComplete                   = 6,
	ShowAboutCustomization         = 7,
	GiftBattlePass                 = 8,
	SwipeLeft                      = 9,
	SwipeRight                     = 10,
	COUNT                          = 11,
	EBattlePassInputs_MAX          = 12,
};

enum class EFortDonutIdleGameObject : uint8
{
	UnsetObject                    = 0,
	Tree                           = 1,
	Mound                          = 2,
	SmallMound                     = 3,
	JumpPad                        = 4,
	Torch                          = 5,
	PeelMonster                    = 6,
	Chimichanga                    = 7,
	Arm                            = 8,
	EFortDonutIdleGameObject_MAX   = 9,
};

enum class EColorPickerType : uint8
{
	Swatches                       = 0,
	CustomColor                    = 1,
	Both                           = 2,
	EColorPickerType_MAX           = 3,
};

enum class EColorPickerColorRepresentation : uint8
{
	HSV                            = 0,
	RGB                            = 1,
	Max_NONE                       = 2,
	EColorPickerColorRepresentation_MAX = 3,
};

enum class EFortCreativeItemType : uint8
{
	Chest                          = 0,
	Item                           = 1,
	Collection                     = 2,
	SubItems                       = 3,
	NoCreativeItems                = 4,
	EFortCreativeItemType_MAX      = 5,
};

enum class EFortItemManagementMode : uint8
{
	Details                        = 0,
	Comparison                     = 1,
	Mulch                          = 2,
	EFortItemManagementMode_MAX    = 3,
};

enum class ETagComparisonType : uint8
{
	HasAny                         = 0,
	HasAll                         = 1,
	HasNone                        = 2,
	HasAnyExact                    = 3,
	HasAllExact                    = 4,
	ETagComparisonType_MAX         = 5,
};

enum class EFortMtxStoreOfferType : uint8
{
	FoundersPack                   = 0,
	CurrencyPack                   = 1,
	Unknown                        = 2,
	Max_None                       = 3,
	EFortMtxStoreOfferType_MAX     = 4,
};

enum class ESettingType : uint8
{
	None                           = 0,
	Header                         = 1,
	WindowMode                     = 2,
	DisplayResolution              = 3,
	FrameRateLimit                 = 4,
	VideoQuality                   = 5,
	ThreeDResolution               = 6,
	ViewDistance                   = 7,
	Shadows                        = 8,
	AntiAliasing                   = 9,
	Textures                       = 10,
	Effects                        = 11,
	PostProcessing                 = 12,
	VSync                          = 13,
	MotionBlur                     = 14,
	ShowGrass                      = 15,
	MobileFPSType                  = 16,
	ShowFPS                        = 17,
	AllowLowPower                  = 18,
	AllowVideoPlayback             = 19,
	AllowDynamicResolution         = 20,
	Disabled_AllowMultithreadedRendering = 21,
	RenderingAPI                   = 22,
	UseGPUCrashDebugging           = 23,
	RegionHeader                   = 24,
	Language                       = 25,
	Region                         = 26,
	MouseSensitivityYaw            = 27,
	MouseSensitivityPitch          = 28,
	MouseSensitivityMultiplierForAircraft = 29,
	TouchDragSensitivity           = 30,
	ControllerLookSensitivityYaw   = 31,
	ControllerLookSensitivityPitch = 32,
	MouseTargetingMultiplier       = 33,
	MouseScopedMultiplier          = 34,
	GamepadTargetingMultiplier     = 35,
	GamepadScopedMultiplier        = 36,
	GamepadBuildingMultiplier      = 37,
	GamepadEditModeMultiplier      = 38,
	TouchLookAccelerationMultiplier = 39,
	TouchDragTargetingSensitivity  = 40,
	TouchDragScopedSensitivity     = 41,
	TouchBuildingMultiplier        = 42,
	TouchEditModeMultiplier        = 43,
	TouchVerticalSensitivity       = 44,
	InvertPitch                    = 45,
	InvertYaw                      = 46,
	InvertPitchForMotion           = 47,
	InvertPitchForAircraftPrimary  = 48,
	InvertPitchForAircraftSecondary = 49,
	InvertYawForMotion             = 50,
	GyroEnabled                    = 51,
	GyroYawAxis                    = 52,
	GyroSensitivity                = 53,
	GyroTargetingSensitivity       = 54,
	GyroScopedSensitivity          = 55,
	GyroHarvestingToolSensitivity  = 56,
	SafeZone                       = 57,
	AnonymousMode                  = 58,
	AnonymousCharacterMode         = 59,
	HideOtherPlayerNames           = 60,
	HiddenMatchmakingDelay         = 61,
	AutoJoinGameVoiceChannel       = 62,
	ShowVoiceIndicators            = 63,
	HUDScale                       = 64,
	ShowViewerCount                = 65,
	FirstPersonCamera              = 66,
	PeripheralLighting             = 67,
	PingPlaceDangerMarkerWhenTargeting = 68,
	ShowGlobalChat                 = 69,
	ConsoleUnlockedFPS             = 70,
	ToggleDoubleTapAutorun         = 71,
	AutorunLockZonePreference      = 72,
	ToggleSprint                   = 73,
	SprintByDefault                = 74,
	SprintCancelsReload            = 75,
	TapInteract                    = 76,
	InWorldInteract                = 77,
	ToggleTargeting                = 78,
	HoldToSwapPickup               = 79,
	AutoEquipBetterItems           = 80,
	EquipFirstBuildingPieceWhenSwappingQuickbars = 81,
	EquipFirstBuildingPieceWhenSwappingQuickbarsAthena = 82,
	DisablePreEditsWhenPlacingBuilding = 83,
	AimAssist                      = 84,
	EditModeAimAssist              = 85,
	TouchEdit                      = 86,
	EditConfirmOnRelease           = 87,
	QuickEdit                      = 88,
	TurboBuild                     = 89,
	CreativeTurboDelete            = 90,
	AutoChangeMaterial             = 91,
	GamepadAutoRun                 = 92,
	CrossplayPreference            = 93,
	AutoOpenDoors                  = 94,
	AutoPickupWeapons              = 95,
	AutoPickupWeaponsConsolePC     = 96,
	AutoSortConsumablesToRight     = 97,
	EnableTryBuildOnFocus          = 98,
	EditButtonHoldTime             = 99,
	SlideButtonHoldTime            = 100,
	AccessoriesHeader              = 101,
	ForceFeedback                  = 102,
	ContextTutorial                = 103,
	ReplayRecording                = 104,
	ReplayRecordingLargeTeams      = 105,
	ReplayRecordingCreativeMode    = 106,
	UsePowerSavingMode             = 107,
	ShadowPlayHighlights           = 108,
	ShowTemperature                = 109,
	BuildingPossession             = 110,
	GammaValue                     = 111,
	MasterVolume                   = 112,
	MusicVolume                    = 113,
	SoundFXVolume                  = 114,
	DialogVolume                   = 115,
	VoiceChatVolume                = 116,
	CinematicsVolume               = 117,
	Subtitles                      = 118,
	Quality                        = 119,
	VoiceChat                      = 120,
	PushToTalk                     = 121,
	ProximityVoiceChat             = 122,
	VoiceChatInputDevice           = 123,
	VoiceChatOutputDevice          = 124,
	AllowBackgroundAudio           = 125,
	ColorBlindMode                 = 126,
	ColorBlindStrength             = 127,
	IgnoreGamepadInput             = 128,
	LockPrimaryInputMethodToMouse  = 129,
	EnableRudderControl            = 130,
	RudderDeadZone                 = 131,
	RudderMaxThrottle              = 132,
	VisualizeSoundEffects          = 133,
	VisualizeSoundEffectsHeader    = 134,
	MoveStickDeadZone              = 135,
	LookStickDeadZone              = 136,
	LookSensitivityPreset          = 137,
	LookSensitivityPresetAds       = 138,
	LookBuildModeMultiplier        = 139,
	LookEditModeMultiplier         = 140,
	UseAdvancedOptions             = 141,
	LookHorizontalSpeed            = 142,
	LookVerticalSpeed              = 143,
	LookHorizontalSpeedAds         = 144,
	LookVerticalSpeedAds           = 145,
	LookHorizontalBoostSpeed       = 146,
	LookVerticalBoostSpeed         = 147,
	LookBoostAccelerationTime      = 148,
	LookHorizontalBoostSpeedAds    = 149,
	LookVerticalBoostSpeedAds      = 150,
	LookBoostAccelerationTimeAds   = 151,
	InstantBoostWhenBuilding       = 152,
	LookEaseTime                   = 153,
	LookInputCurve                 = 154,
	AimAssistStrength              = 155,
	UseLegacyControls              = 156,
	PlayerSurveysAllowed           = 157,
	LocalNotifications             = 158,
	FireMode                       = 159,
	COUNT                          = 160,
	ESettingType_MAX               = 161,
};

enum class EFortPerksWidgetState : uint8
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortPerksWidgetState_MAX      = 3,
};

enum class EPresenceIndicatorState : uint8
{
	Online                         = 0,
	Away                           = 1,
	Offline                        = 2,
	Blocked                        = 3,
	EPresenceIndicatorState_MAX    = 4,
};

enum class EFortPlayerSurveyQuestionType : uint8
{
	SingleChoice                   = 0,
	MultipleChoice                 = 1,
	Rating                         = 2,
	EFortPlayerSurveyQuestionType_MAX = 3,
};

enum class EFortPlayerSurveyResponseChoiceType : uint8
{
	CheckBox                       = 0,
	Radio                          = 1,
	EFortPlayerSurveyResponseChoiceType_MAX = 2,
};

enum class EFortServerBrowserAction : uint8
{
	BattleLabServerCreate          = 0,
	PlaygroundServerCreate         = 1,
	CreativeServerCreate           = 2,
	Play                           = 3,
	CreativeIslandCode             = 4,
	CreativeDiscovery              = 5,
	EFortServerBrowserAction_MAX   = 6,
};

enum class EFortSettingGameVisibility : uint8
{
	None                           = 0,
	Campaign                       = 1,
	Athena                         = 2,
	EFortSettingGameVisibility_MAX = 3,
};

enum class EFortSidebarSpecialNavType : uint8
{
	None                           = 0,
	GoPrevious                     = 1,
	GoRebootRally                  = 2,
	GoPartyUp                      = 3,
	EFortSidebarSpecialNavType_MAX = 4,
};

enum class EReferFriendOrigin : uint8
{
	AddFriend                      = 0,
	PartyUp                        = 1,
	EReferFriendOrigin_MAX         = 2,
};

enum class ELocalUserOnlineStatus : uint8
{
	Online                         = 0,
	Offline                        = 1,
	Away                           = 2,
	ExtendedAway                   = 3,
	DoNotDisturb                   = 4,
	Chat                           = 5,
	ELocalUserOnlineStatus_MAX     = 6,
};

enum class ELfgState : uint8
{
	NoResults                      = 0,
	Shuffling                      = 1,
	NoSocialTagsAdded              = 2,
	LfgOff                         = 3,
	LfgUnavailable                 = 4,
	LfgOffNoSocialTags             = 5,
	NoSocialTagsSelected           = 6,
	NoFriendsSuggestLFG            = 7,
	RebootInvitePlayerButton       = 8,
	RebootInviteAllRallied         = 9,
	ChangeTagsButton               = 10,
	ApplyButton                    = 11,
	ShuffleButton                  = 12,
	LfgOffSocialBan                = 13,
	ELfgState_MAX                  = 14,
};

enum class EMultiFriendAction : uint8
{
	AcceptFriendRequest            = 0,
	EMultiFriendAction_MAX         = 1,
};

enum class EFortSquadSlottingRestrictionReason : uint8
{
	ItemIsInInventoryOverflow      = 0,
	MandatorySlotWouldBeEmptied    = 1,
	ItemIsOnActiveExpedition       = 2,
	HeroRequiresMissingGameplayTag = 3,
	HeroAlreadyEquippedInLoadout   = 4,
	EFortSquadSlottingRestrictionReason_MAX = 5,
};

enum class ESqueegeeWidgetInjection : uint8
{
	None                           = 0,
	Label                          = 1,
	GameModeInfo                   = 2,
	PinModal                       = 3,
	ParentalControlsLeft           = 4,
	ParentalControlsRight          = 5,
	ParentalControlsModal          = 6,
	CreativeList                   = 7,
	ItemCard                       = 8,
	ESqueegeeWidgetInjection_MAX   = 9,
};

enum class ESqueegeeText : uint8
{
	LobbyGameModeAction            = 0,
	LobbyGameModeActionCabined     = 1,
	GameModeInfoAction             = 2,
	GameModeDetailsDisplayAction   = 3,
	OptionSettingName              = 4,
	OptionSettingDescription       = 5,
	ActionSettingName              = 6,
	ActionSettingDescription       = 7,
	ESqueegeeText_MAX              = 8,
};

enum class EFortToastType : uint8
{
	Default                        = 0,
	Subdued                        = 1,
	Impactful                      = 2,
	EFortToastType_MAX             = 3,
};

enum class EFortUIState : uint8
{
	Invalid                        = 0,
	Login                          = 1,
	JoinServer                     = 2,
	SubgameSelect                  = 3,
	FrontEnd                       = 4,
	InGame_Custom                  = 5,
	UNUSED                         = 6,
	InGame_STW                     = 7,
	Cinematic                      = 8,
	InGame_BR                      = 9,
	AthenaSpectator                = 10,
	Replay                         = 11,
	InGame_STW_Custom              = 12,
	MAX                            = 13,
};

enum class EFortInventoryContext : uint8
{
	Game                           = 0,
	Lobby                          = 1,
	FrontEnd                       = 2,
	Pickup                         = 3,
	EFortInventoryContext_MAX      = 4,
};

enum class ENotificationResult : uint8
{
	Confirmed                      = 0,
	Declined                       = 1,
	Unknown                        = 2,
	ENotificationResult_MAX        = 3,
};

enum class ENotificationType : uint8
{
	Basic                          = 0,
	Friends                        = 1,
	ENotificationType_MAX          = 2,
};

enum class EModalContainerSize : uint8
{
	ExtraSmall                     = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	Max                            = 4,
};

enum class EFortSocialPanelType : uint8
{
	Join                           = 0,
	Invite                         = 1,
	Max                            = 2,
};

enum class EFortSocialPanelTab : uint8
{
	PartyInvitations               = 0,
	Friends                        = 1,
	RecentPlayers                  = 2,
	Max                            = 3,
};

enum class EFortBangSize : uint8
{
	XXS                            = 0,
	XS                             = 1,
	S                              = 2,
	M                              = 3,
	L                              = 4,
	XL                             = 5,
	EFortBangSize_MAX              = 6,
};

enum class EFortTutorialGlowType : uint8
{
	None                           = 0,
	Look                           = 1,
	Click                          = 2,
	EFortTutorialGlowType_MAX      = 3,
};

enum class EFortAnimSpeed : uint8
{
	Instant                        = 0,
	Fast                           = 1,
	Normal                         = 2,
	EFortAnimSpeed_MAX             = 3,
};

enum class EFortStatValueDisplayType : uint8
{
	BasicPaired                    = 0,
	BasicSingle                    = 1,
	Unique                         = 2,
	ElementalFire                  = 3,
	ElementalIce                   = 4,
	ElementalElectric              = 5,
	EFortStatValueDisplayType_MAX  = 6,
};

enum class EFortBuffState : uint8
{
	NoChange                       = 0,
	Better                         = 1,
	Worse                          = 2,
	EFortBuffState_MAX             = 3,
};

enum class EFortClampState : uint8
{
	NoClamp                        = 0,
	MinClamp                       = 1,
	MaxClamp                       = 2,
	EFortClampState_MAX            = 3,
};

enum class EFortComparisonType : uint8
{
	None                           = 0,
	HigherValue                    = 1,
	LowerValue                     = 2,
	Upgrade                        = 3,
	EFortComparisonType_MAX        = 4,
};

enum class EPlayerReportReasons : uint8
{
	None                           = 0,
	Communication                  = 1,
	Offensive                      = 2,
	AFK                            = 3,
	IgnoringObjective              = 4,
	Harassment                     = 5,
	Exploiting                     = 6,
	TradeScam                      = 7,
	CommunicationsAbuse            = 8,
	OffensiveName                  = 9,
	TeamingUpWithEnemies           = 10,
	InappropriateContent           = 11,
	ExploitingOrHacking            = 12,
	Harassment_Threatening         = 13,
	Harassment_Annoying            = 14,
	Harassment_Selling             = 15,
	Harassment_Verbal              = 16,
	Harassment_GameBehavior        = 17,
	EPlayerReportReasons_MAX       = 18,
};

enum class ESubscriptionContentTab : uint8
{
	SubscriptionManagementScreen   = 0,
	ProgressiveItemScreen          = 1,
	ESubscriptionContentTab_MAX    = 2,
};

enum class EItemShopNavigationAction : uint8
{
	None                           = 0,
	ShowOfferDetails               = 1,
	NavigateToOffer                = 2,
	EItemShopNavigationAction_MAX  = 3,
};

enum class ESpatialStyleCharacterUnlockPrerequisite : uint8
{
	BattlepassPurchase             = 0,
	BattlepassLevel                = 1,
	ESpatialStyleCharacterUnlockPrerequisite_MAX = 2,
};

enum class EFortSubscriptionContentInterfaceCloseReason : uint8
{
	Normal                         = 0,
	SubscriptionPurchased          = 1,
	EFortSubscriptionContentInterfaceCloseReason_MAX = 2,
};

enum class EFortServerItemIneligibleReason : uint8
{
	None                           = 0,
	PartyTooBig                    = 1,
	PartyTooSmall                  = 2,
	NotPartyLeader                 = 3,
	MatchmakingAlready             = 4,
	NotSupportedByLeto             = 5,
	InvalidData                    = 6,
	EFortServerItemIneligibleReason_MAX = 7,
};

enum class EAvailableSquadSlotsListEntryState : uint8
{
	Detailed                       = 0,
	Simplified                     = 1,
	EAvailableSquadSlotsListEntryState_MAX = 2,
};

enum class EAthenaConfirmationResult : uint8
{
	Confirmed                      = 0,
	Declined                       = 1,
	Canceled                       = 2,
	Max_NONE                       = 3,
	EAthenaConfirmationResult_MAX  = 4,
};

enum class EEquippedWeaponDisplay : uint8
{
	None                           = 0,
	Resource                       = 1,
	Magazine                       = 2,
	Utility                        = 3,
	Chargeable                     = 4,
	EEquippedWeaponDisplay_MAX     = 5,
};

enum class EAthenaPlayerActionAlert : uint8
{
	PlayerDown                     = 0,
	PlayerKill                     = 1,
	EnteredStorm                   = 2,
	NewZebulonDrone                = 3,
	NewZebulonDroneYou             = 4,
	EAthenaPlayerActionAlert_MAX   = 5,
};

enum class ELockerScreenState : uint8
{
	Equipping                      = 0,
	Archiving                      = 1,
	Unarchiving                    = 2,
	ELockerScreenState_MAX         = 3,
};

enum class EAthenaSelectorCalloutSlot : uint8
{
	PrimaryCallout                 = 0,
	SecondaryCallout               = 1,
	EAthenaSelectorCalloutSlot_MAX = 2,
};

enum class EFortAthenaPlaylist : uint8
{
	AthenaSolo                     = 0,
	AthenaDuo                      = 1,
	AthenaSquad                    = 2,
	EFortAthenaPlaylist_MAX        = 3,
};

enum class EAthenaLockerInfoRestrictionWarning : uint8
{
	UnsatisfiedExclusiveItem       = 0,
	LockedEmote                    = 1,
	CosmeticRestriction            = 2,
	AllItemsAreArchived            = 3,
	Unknown                        = 4,
	EAthenaLockerInfoRestrictionWarning_MAX = 5,
};

enum class EFortMarkerActions : uint8
{
	None                           = 0,
	Cancel                         = 1,
	Confirm                        = 2,
	CancelAndReturnNPC             = 3,
	EFortMarkerActions_MAX         = 4,
};

enum class EHealthBarType : uint8
{
	Health                         = 0,
	Shield                         = 1,
	Overshield                     = 2,
	Armor                          = 3,
	Stamina                        = 4,
	VehicleHealth                  = 5,
	SignalInStorm                  = 6,
	EHealthBarType_MAX             = 7,
};

enum class EBPStatus : uint8
{
	UnpurchasedBP                  = 0,
	PurchasedBP                    = 1,
	EBPStatus_MAX                  = 2,
};

enum class EAthenaSquadListUpdateType : uint8
{
	None                           = 0,
	CanResurrect                   = 1,
	FindResurrectChip              = 2,
	EAthenaSquadListUpdateType_MAX = 3,
};

enum class ERespawnUIState : uint8
{
	Hidden                         = 0,
	ShowRespawnEnabled             = 1,
	ShowRespawnDisabled            = 2,
	ERespawnUIState_MAX            = 3,
};

enum class EStormSurgeThresholdType : uint8
{
	None                           = 0,
	Above                          = 1,
	Below                          = 2,
	Equal                          = 3,
	EStormSurgeThresholdType_MAX   = 4,
};

enum class EWinConditionParentType : uint8
{
	None                           = 0,
	Desktop                        = 1,
	Mobile                         = 2,
	EWinConditionParentType_MAX    = 3,
};

enum class EChallengeListSection : uint8
{
	SpecialOffers                  = 0,
	CompletionRewards              = 1,
	AllChallenges                  = 2,
	FreeChallenges                 = 3,
	PaidChallenges                 = 4,
	Objectives                     = 5,
	EChallengeListSection_MAX      = 6,
};

enum class EChallengeListEntryType : uint8
{
	DisabledHeader                 = 0,
	GoalCard                       = 1,
	Header                         = 2,
	Normal                         = 3,
	PartyUp                        = 4,
	LockedQuest                    = 5,
	AllQuestsComplete              = 6,
	CustomMessage                  = 7,
	Count                          = 8,
	EChallengeListEntryType_MAX    = 9,
};

enum class EEndOfMatchQuestCategoryType : uint8
{
	Completed                      = 0,
	InProgress                     = 1,
	EEndOfMatchQuestCategoryType_MAX = 2,
};

enum class ELocationEntryState : uint8
{
	Found                          = 0,
	NotFound                       = 1,
	Unused                         = 2,
	ELocationEntryState_MAX        = 3,
};

enum class EFortCosmeticLoadoutScreenMode : uint8
{
	Browse                         = 0,
	Save                           = 1,
	EFortCosmeticLoadoutScreenMode_MAX = 2,
};

enum class EFortNameLoadoutPopupType : uint8
{
	Rename                         = 0,
	Overwrite                      = 1,
	SaveNew                        = 2,
	EFortNameLoadoutPopupType_MAX  = 3,
};

enum class EAthenaGameFeatureStatus : uint8
{
	InProgress                     = 0,
	ProgressPaused                 = 1,
	ErrorOccured                   = 2,
	EAthenaGameFeatureStatus_MAX   = 3,
};

enum class EMinigameActivityWidgetStatFormat : uint8
{
	Score                          = 0,
	Time                           = 1,
	AddTime                        = 2,
	Distance                       = 3,
	Laps                           = 4,
	EMinigameActivityWidgetStatFormat_MAX = 5,
};

enum class EHabaneroProgressError : uint8
{
	None                           = 0,
	MissingHabaneroComponent       = 1,
	HabaneroComponentSocialUserNotBound = 2,
	HabaneroComponentUnableToQueryProgress = 3,
	EmptyRankType                  = 4,
	InitialProgressMapInvalid      = 5,
	CurrentProgressMapInvalid      = 6,
	InvalidCurrentTrack            = 7,
	InitialProgressEntryNotFound   = 8,
	CurrentProgressEntryNotFound   = 9,
	GameModeNotFound               = 10,
	CurrentTierLessThanZero        = 11,
	NotEnoughTiersForInitialTier   = 12,
	NotEnoughTiersForCurrentTier   = 13,
	FailedToFindUnrankedTier       = 14,
	UnknownError                   = 15,
	EHabaneroProgressError_MAX     = 16,
};

enum class EPostGameScreenContinueBehavior : uint8
{
	Next                           = 0,
	Previous                       = 1,
	EPostGameScreenContinueBehavior_MAX = 2,
};

enum class EPostGamePlacement : uint8
{
	Win                            = 0,
	Lose                           = 1,
	Tie                            = 2,
	NoPlacement                    = 3,
	EPostGamePlacement_MAX         = 4,
};

enum class EBattleLabAlertType : uint8
{
	QuestComplete                  = 0,
	QuestGranted                   = 1,
	Reward                         = 2,
	EBattleLabAlertType_MAX        = 3,
};

enum class ECobaltStatusTeam : uint8
{
	Ally                           = 0,
	Enemy                          = 1,
	MAX                            = 255,
};

enum class EBracketNodeState : uint8
{
	LocalTeam                      = 0,
	EnemyTeam                      = 1,
	Neutral                        = 2,
	EBracketNodeState_MAX          = 3,
};

enum class ESurvivalObjectiveIconState : uint8
{
	None                           = 0,
	Spawned                        = 1,
	Destroyed                      = 2,
	ESurvivalObjectiveIconState_MAX = 3,
};

enum class EDiscoCaptureUIState : uint8
{
	None                           = 0,
	Hidden                         = 1,
	Dance                          = 2,
	Capturing                      = 3,
	Contested                      = 4,
	EDiscoCaptureUIState_MAX       = 5,
};

enum class EDiscoCaptureIconState : uint8
{
	None                           = 0,
	Hidden                         = 1,
	Neutral                        = 2,
	AllyCaptured                   = 3,
	EnemyCaptured                  = 4,
	EDiscoCaptureIconState_MAX     = 5,
};

enum class EDiscoCaptureProgressState : uint8
{
	None                           = 0,
	AllyProgress                   = 1,
	EnemyProgress                  = 2,
	EDiscoCaptureProgressState_MAX = 3,
};

enum class EDiscoScoreProgressTypes : uint8
{
	None                           = 0,
	ProgressSoundMild              = 1,
	ProgressSoundMedium            = 2,
	ProgressSoundStrong            = 3,
	CountdownSoundNormal           = 4,
	CountdownSoundStrong           = 5,
	EDiscoScoreProgressTypes_MAX   = 6,
};

enum class EHeistExitCraftUIState : uint8
{
	None                           = 0,
	OnTheWay                       = 1,
	Incoming                       = 2,
	Arrived                        = 3,
	EHeistExitCraftUIState_MAX     = 4,
};

enum class EHeistBlingIconState : uint8
{
	None                           = 0,
	SupplyDrop                     = 1,
	PickupItem                     = 2,
	CarriedEnemy                   = 3,
	CarriedAlly                    = 4,
	EHeistBlingIconState_MAX       = 5,
};

enum class EHeistExitCraftIconState : uint8
{
	None                           = 0,
	Incoming                       = 1,
	Spawned                        = 2,
	Exited                         = 3,
	EHeistExitCraftIconState_MAX   = 4,
};

enum class EMinigameCaptureObjectiveIconState : uint8
{
	NotCaptured                    = 0,
	Captured                       = 1,
	EMinigameCaptureObjectiveIconState_MAX = 2,
};

enum class ETDMScoreProgressTypes : uint8
{
	None                           = 0,
	ProgressSoundMild              = 1,
	ProgressSoundMedium            = 2,
	ProgressSoundStrong            = 3,
	CountdownSoundNormal           = 4,
	CountdownSoundStrong           = 5,
	ETDMScoreProgressTypes_MAX     = 6,
};

enum class EQuestCategoryButtonTimerState : uint8
{
	Countdown                      = 0,
	Custom                         = 1,
	Disabled                       = 2,
	None                           = 3,
	EQuestCategoryButtonTimerState_MAX = 4,
};

enum class EComboSlotType : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Combo                          = 2,
	Creative                       = 3,
	COUNT                          = 4,
	EComboSlotType_MAX             = 5,
};

enum class EBacchusSignalQuality : uint8
{
	None                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EBacchusSignalQuality_MAX      = 4,
};

enum class ECooldownTrackingType : uint8
{
	Cue                            = 0,
	AbilityCooldownTags            = 1,
	COUNT                          = 2,
	ECooldownTrackingType_MAX      = 3,
};

enum class EFortPrioritizedWidgetInterruptedBehavior : uint8
{
	RemainInQueue                  = 0,
	Drop                           = 1,
	EFortPrioritizedWidgetInterruptedBehavior_MAX = 2,
};

enum class EAthenaSpectatorNameplateDistanceState : uint8
{
	Near                           = 0,
	MidDistance                    = 1,
	FurtherThanMaxDistance         = 2,
	EAthenaSpectatorNameplateDistanceState_MAX = 3,
};

enum class EAthenaSpectatorNameplateDetailState : uint8
{
	High                           = 0,
	Low                            = 1,
	Arrow                          = 2,
	Off                            = 3,
	EAthenaSpectatorNameplateDetailState_MAX = 4,
};

enum class EBattleMapTimelineWidgetState : uint8
{
	None                           = 0,
	HasNext                        = 1,
	HasPrevious                    = 2,
	IsInReplay                     = 4,
	CanBeScrubbed                  = 8,
	IsStreaming                    = 16,
	Invalid                        = 32,
	EBattleMapTimelineWidgetState_MAX = 33,
};

enum class ESpectatorBuildCountType : uint8
{
	BuildCount                     = 0,
	Wood                           = 1,
	Stone                          = 2,
	Metal                          = 3,
	Gold                           = 4,
	ESpectatorBuildCountType_MAX   = 5,
};

enum class ESpectatorLeaderboardEntryType : uint8
{
	ScoreWithEndScore              = 0,
	NoEndScore                     = 1,
	Time                           = 2,
	Invalid                        = 3,
	ESpectatorLeaderboardEntryType_MAX = 4,
};

enum class ESpectatorMapPlayerListState : uint8
{
	Default                        = 0,
	Irrelevant                     = 1,
	Eliminated                     = 2,
	ESpectatorMapPlayerListState_MAX = 3,
};

enum class ESpectatorPlayerListSortMethod : uint8
{
	SquadId                        = 0,
	PlayerName                     = 1,
	Eliminations                   = 2,
	EventScore                     = 3,
	State                          = 4,
	Count                          = 5,
	ESpectatorPlayerListSortMethod_MAX = 6,
};

enum class EOptionalFlowSteps : uint8
{
	TryShowMobileGuidedTutorial    = 0,
	TryPlaySeasonTrailer           = 1,
	TryPlayBattlePassTrailer       = 2,
	TryShowMOTDs                   = 3,
	TryShowNormalBanModal          = 4,
	TryShowSocialBanModal          = 5,
	TryShowMFAModal                = 6,
	TryShowCrossplayDialog         = 7,
	TryShowSocialImport            = 8,
	TryShowSurveys                 = 9,
	TryShowFireModeModal           = 10,
	TryShowBadMatchPopup           = 11,
	TryShowMobileInGameAppRating   = 12,
	TryShowSamsungSensorWarning    = 13,
	TryShowBattlePassPurchaseScreen = 14,
	TryShowMultipleSubscriptionsAlert = 15,
	TryPushGiftingScreen           = 16,
	TryPushMessagingScreen         = 17,
	TryGoToBattlePassTab           = 18,
	TryShowRefundTokenNotification = 19,
	TryShowPriceChangeAcknowledgeNotification = 20,
	TryShowFireModeSelectionReminderModal = 21,
	TryShowSettingsChangeAcknowledgementScreen = 22,
	TryShowMatchmaking             = 23,
	TryShowEnterCabinModeScreen    = 24,
	TryShowHabaneroIntroModal      = 25,
	EOptionalFlowSteps_MAX         = 26,
};

enum class EFuelTankState : uint8
{
	Empty                          = 0,
	LowFuel                        = 1,
	RegularFuel                    = 2,
	EFuelTankState_MAX             = 3,
};

enum class EActionBindingComparisonType : uint8
{
	NoneBound                      = 0,
	AnyBound                       = 1,
	AllBound                       = 2,
	EActionBindingComparisonType_MAX = 3,
};

enum class ENumericalIndicatorActionType : uint8
{
	Adding                         = 0,
	Removing                       = 1,
	Nothing                        = 2,
	ENumericalIndicatorActionType_MAX = 3,
};

enum class ELinkAcrossSimpleAction : uint8
{
	AddToAll                       = 0,
	RemovedFromAll                 = 1,
	Custom                         = 2,
	Nothing                        = 3,
	ELinkAcrossSimpleAction_MAX    = 4,
};

enum class EHUDLayoutToolPopupType : uint8
{
	Warning                        = 0,
	Generic                        = 1,
	EHUDLayoutToolPopupType_MAX    = 2,
};

enum class EHUDLayoutToolTextInputPopupType : uint8
{
	Rename                         = 0,
	ImportLayoutID                 = 1,
	EHUDLayoutToolTextInputPopupType_MAX = 2,
};

enum class EHUDLayoutToolToasterType : uint8
{
	Success                        = 0,
	Failure                        = 1,
	LocalFailure                   = 2,
	CloudFailure                   = 3,
	EHUDLayoutToolToasterType_MAX  = 4,
};

enum class EContextLayoutAccessLevel : uint8
{
	Editable                       = 0,
	Hidden                         = 1,
	EContextLayoutAccessLevel_MAX  = 2,
};

enum class EFortMaterialProgressBarSection : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Tertiary                       = 2,
	Negative                       = 3,
	MAX_PROGRESS_BAR_SECTIONS      = 4,
	EFortMaterialProgressBarSection_MAX = 5,
};

enum class EFortMaterialProgressBarSectionColorNumber : uint8
{
	Color1                         = 0,
	Color2                         = 1,
	EFortMaterialProgressBarSectionColorNumber_MAX = 2,
};

enum class EFortMaterialProgressBarSectionOverflowBehavior : uint8
{
	PreserveValues                 = 0,
	ReverseCollapse                = 1,
	EFortMaterialProgressBarSectionOverflowBehavior_MAX = 2,
};

enum class ECrewDetailsTag : uint8
{
	SeasonLaunchBenefit            = 0,
	MonthlyBenefit                 = 1,
	CrewMonthBenefit               = 2,
	AvailableUntilBenefit          = 3,
	MonthlySubscription            = 4,
	None                           = 5,
	ECrewDetailsTag_MAX            = 6,
};

enum class ECrewTileType : uint8
{
	None                           = 0,
	Basic                          = 1,
	BattlePass                     = 2,
	CrewPack                       = 3,
	ProgressiveCosmetic            = 4,
	ECrewTileType_MAX              = 5,
};

enum class EAthenaNewsEntryType : uint8
{
	Text                           = 0,
	Item                           = 1,
	Website                        = 2,
	NavigateToTab                  = 3,
	Challenge                      = 4,
	Setting                        = 5,
	SpatialScreen                  = 6,
	SmallNews                      = 7,
	NavigateToBattlePassSubPage    = 8,
	Creative                       = 9,
	NavigateToSubscriptionSubPage  = 10,
	ProgressiveItemLearnMore       = 11,
	ProgressiveItemReminder        = 12,
	ProgressiveItemClaimRewards    = 13,
	Event                          = 14,
	Discovery                      = 15,
	NavigateToCompetitiveSubPage   = 16,
	NavigateToSocialMenu           = 17,
	NavigateToSocialTagsSubPage    = 18,
	NavigateToRebootRallySubPage   = 19,
	NavigateToMapSubPage           = 20,
	NavigateToHabaneroSubPage      = 21,
	Invalid                        = 22,
	EAthenaNewsEntryType_MAX       = 23,
};

enum class EAthenaNewsStyle : uint8
{
	None                           = 0,
	SpecialEvent                   = 1,
	SpecialEvent2                  = 2,
	EAthenaNewsStyle_MAX           = 3,
};

enum class EBuildingFocusType : uint8
{
	Contextual                     = 0,
	Interactable                   = 1,
	Normal                         = 2,
	Count                          = 3,
	EBuildingFocusType_MAX         = 4,
};

enum class EVaultItemLimitStatus : uint8
{
	WellBelowCapacity              = 0,
	NearCapacity                   = 1,
	AtCapacity                     = 2,
	OverCapacity                   = 3,
	EVaultItemLimitStatus_MAX      = 4,
};

enum class EItemRecyclingRestrictionReason : uint8
{
	InnatelyUnrecyclable           = 0,
	IsSlottedGroundOperative       = 1,
	MissingCatalyst                = 2,
	ItemOutOnExpedition            = 3,
	InUseByCrafting                = 4,
	MulchingNotAllowed             = 5,
	IsSlottedAttributeWorker       = 6,
	EItemRecyclingRestrictionReason_MAX = 7,
};

enum class EItemRecyclingWarning : uint8
{
	HighLevel                      = 0,
	HighRarity                     = 1,
	CanSlotInCollectionBook        = 2,
	EItemRecyclingWarning_MAX      = 3,
};

enum class EConversionControlKeyRequest : uint8
{
	AllKeys                        = 0,
	NonConsumableKeys              = 1,
	ConsumableKeys                 = 2,
	EConversionControlKeyRequest_MAX = 3,
};

enum class ECardPackPurchaseError : uint8
{
	PendingServerConfirmation      = 0,
	CannotAffordItem               = 1,
	NoneLeft                       = 2,
	PurchaseAlreadyPending         = 3,
	NoConnection                   = 4,
	ECardPackPurchaseError_MAX     = 5,
};

enum class EPauseType : uint8
{
	NoPause                        = 0,
	Rare                           = 1,
	New                            = 2,
	NewAndRare                     = 3,
	EPauseType_MAX                 = 4,
};

enum class EShowChannelDetails : uint8
{
	FromMinigameSettings           = 0,
	ForceShow                      = 1,
	ForceHide                      = 2,
	EShowChannelDetails_MAX        = 3,
};

enum class EFortCreativeIslandLinkCategory : uint8
{
	Default                        = 0,
	Favorite                       = 1,
	Published                      = 2,
	Recent                         = 3,
	EFortCreativeIslandLinkCategory_MAX = 4,
};

enum class EFortCreativeIslandSelectTabType : uint8
{
	IslandCode                     = 0,
	ListView                       = 1,
	EFortCreativeIslandSelectTabType_MAX = 2,
};

enum class ECreativePublishError : uint8
{
	None                           = 0,
	RateLimited                    = 1,
	PlotOverBudget                 = 2,
	LinkCodeInvalid                = 3,
	SanitizationFiltered           = 4,
	Other                          = 5,
	ECreativePublishError_MAX      = 6,
};

enum class EConfirmDialogType : uint8
{
	CancelChanges                  = 0,
	CharLimitExceeded              = 1,
	MarkupWarning                  = 2,
	EConfirmDialogType_MAX         = 3,
};

enum class EButtonContext : uint8
{
	NoButtonSelected               = 0,
	ButtonSelected                 = 1,
	StylingButtons                 = 2,
	EButtonContext_MAX             = 3,
};

enum class EFortCreativeServerPrivacySetting : uint8
{
	Unknown                        = 0,
	Private                        = 1,
	Public                         = 2,
	EFortCreativeServerPrivacySetting_MAX = 3,
};

enum class EFortActivityBrowserTagType : uint8
{
	Default                        = 0,
	EpicOriginal                   = 1,
	SquadSize                      = 2,
	MaxPlayers                     = 3,
	XP                             = 4,
	PurchaseRequired               = 5,
	DownloadRequired               = 6,
	EFortActivityBrowserTagType_MAX = 7,
};

enum class ELeaderboardDisplayType : uint8
{
	Default                        = 0,
	Extra                          = 1,
	ELeaderboardDisplayType_MAX    = 2,
};

enum class EHabaneroDisplayState : uint8
{
	Solo                           = 0,
	Party                          = 1,
	Hidden                         = 2,
	EHabaneroDisplayState_MAX      = 3,
};

enum class EChatMessageOrigin : uint8
{
	Local                          = 0,
	Remote                         = 1,
	System                         = 2,
	Unknown                        = 3,
	EChatMessageOrigin_MAX         = 4,
};

enum class EFortContentBrowserQuickbarState : uint8
{
	Disabled                       = 0,
	Creative                       = 1,
	Primary                        = 2,
	Trap                           = 3,
	EFortContentBrowserQuickbarState_MAX = 4,
};

enum class ECenterPopupMessageStateEnum : uint8
{
	NotVisible                     = 0,
	WaitingForOutpostOwner         = 1,
	ECenterPopupMessageStateEnum_MAX = 2,
};

enum class EContextPositionPlatform : uint8
{
	NonMobile                      = 0,
	Mobile                         = 1,
	EContextPositionPlatform_MAX   = 2,
};

enum class EFortKeybindForcedHoldStatus : uint8
{
	NoForcedHold                   = 0,
	ForcedHold                     = 1,
	NeverShowHold                  = 2,
	EFortKeybindForcedHoldStatus_MAX = 3,
};

enum class EFortLegacySlateWidget : uint8
{
	None                           = 0,
	Minimap                        = 1,
	MAX                            = 2,
};

enum class EFortModifiedStatus : uint8
{
	IsDefault                      = 0,
	IsModified                     = 1,
	Unsupported                    = 2,
	EFortModifiedStatus_MAX        = 3,
};

enum class EModalContainerSlot : uint8
{
	Top                            = 0,
	Middle                         = 1,
	Bottom                         = 2,
	Background                     = 3,
	Max                            = 4,
};

enum class EPinGrantState : uint8
{
	Initial                        = 0,
	Error                          = 1,
	Downloading                    = 2,
	Granted                        = 3,
	EPinGrantState_MAX             = 4,
};

enum class ERedeemCodeFailureReason : uint8
{
	InvalidCode                    = 0,
	CodeAlreadyUsed                = 1,
	AlreadyHasAccess               = 2,
	FailedToGetItem                = 3,
	Unknown                        = 4,
	ERedeemCodeFailureReason_MAX   = 5,
};

enum class EFortRewardItemType : uint8
{
	RewardedBadges                 = 0,
	MissedBadges                   = 1,
	RewardedItems                  = 2,
	RewardedAccountItems           = 3,
	EFortRewardItemType_MAX        = 4,
};

enum class EFortTouchControlRegion : uint8
{
	MovePlayer                     = 0,
	RotateCamera                   = 1,
	NoRegion                       = 2,
	COUNT                          = 3,
	EFortTouchControlRegion_MAX    = 4,
};

enum class EFortControlType : uint8
{
	None                           = 0,
	CameraAndMovement              = 1,
	Picking                        = 2,
	COUNT                          = 3,
	EFortControlType_MAX           = 4,
};

enum class ETouchState : uint8
{
	None                           = 0,
	WaitingForStart                = 1,
	Started                        = 2,
	Active                         = 3,
	COUNT                          = 4,
	ETouchState_MAX                = 5,
};

enum class EActivatePanelOption : uint8
{
	Show                           = 0,
	Hide                           = 1,
	PlatformDefault                = 2,
	EActivatePanelOption_MAX       = 3,
};

enum class EFortNamedBundle : uint8
{
	Menu                           = 0,
	MenuCampaign                   = 1,
	MenuAthena                     = 2,
	Zone                           = 3,
	ZoneCampaign                   = 4,
	ZoneAthena                     = 5,
	Client                         = 6,
	ClientCampaign                 = 7,
	ClientAthena                   = 8,
	EFortNamedBundle_MAX           = 9,
};

enum class EFortUINavigationOp : uint8
{
	PopContentStack                = 0,
	FeatureSwitch                  = 1,
	NavigateToSkillTree            = 2,
	NavigateToSquadSlot            = 3,
	NavigateToQuest                = 4,
	NavigateToItemManagement       = 5,
	NavigateToExpeditions          = 6,
	NavigateToCollectionBook       = 7,
	None                           = 8,
	EFortUINavigationOp_MAX        = 9,
};

enum class EForcedIntroTextDisplayState : uint8
{
	Initialized                    = 0,
	WaitingForPlaylistPlugin       = 1,
	WaitingForMatchmakingStartTime = 2,
	InitialDelay                   = 3,
	Matchmaking                    = 4,
	Success                        = 5,
	Failure                        = 6,
	EForcedIntroTextDisplayState_MAX = 7,
};

enum class EFortAthenaRewardState : uint8
{
	LevelAchieved                  = 0,
	Claimed                        = 1,
	ForceLocked                    = 2,
	Owned                          = 3,
	Max_None                       = 4,
	EFortAthenaRewardState_MAX     = 5,
};

enum class EFortFortMobileShareButtonOS : uint8
{
	Android                        = 0,
	iOS                            = 1,
	EFortFortMobileShareButtonOS_MAX = 2,
};

enum class EItemPreviewRestrictionMode : uint8
{
	AlwaysShowTargetCosmetic       = 0,
	HideTargetCosmetic             = 1,
	EItemPreviewRestrictionMode_MAX = 2,
};

enum class ESceneTransitionType : uint8
{
	NoTransition                   = 0,
	Clockwise                      = 1,
	CounterClockwise               = 2,
	ESceneTransitionType_MAX       = 3,
};

enum class EShareButtonType : uint8
{
	IOS                            = 0,
	Android                        = 1,
	Generic                        = 2,
	EShareButtonType_MAX           = 3,
};

enum class EFortSidebarButtonType : uint8
{
	PartyUp                        = 0,
	FindFriends                    = 1,
	VoiceChat                      = 2,
	Settings                       = 3,
	YourProfile                    = 4,
	Tags                           = 5,
	Exit                           = 6,
	EFortSidebarButtonType_MAX     = 7,
};

enum class ESidebarExitActions : uint8
{
	None                           = 0,
	LeaveExperience                = 1,
	AthenaLeaveAction              = 2,
	LogOut                         = 3,
	QuitGame                       = 4,
	ESidebarExitActions_MAX        = 5,
};

enum class ESidebarExitConfirmationNavBehavior : uint8
{
	None                           = 0,
	ButtonYesFocus                 = 1,
	ButtonYesSelection             = 2,
	ButtonYesFocusSelection        = 3,
	ButtonNoFocus                  = 4,
	ButtonNoSelection              = 5,
	ButtonNoFocusSelection         = 6,
	ESidebarExitConfirmationNavBehavior_MAX = 7,
};

enum class ESocialTutorialType : uint8
{
	None                           = 0,
	TagsEditor                     = 1,
	LookingForParty                = 2,
	LikeIsland                     = 3,
	RebootRallyUsers               = 4,
	KWSSidebarSupervisedSettings   = 5,
	KWSVoiceChannelPanelSupervisedSettings = 6,
	ESocialTutorialType_MAX        = 7,
};

enum class EFortSidebarSocialInteractionArrow : uint8
{
	None                           = 0,
	Up                             = 1,
	Down                           = 2,
	Left                           = 3,
	Right                          = 4,
	EFortSidebarSocialInteractionArrow_MAX = 5,
};

enum class ESocialImportPanelType : uint8
{
	Athena                         = 0,
	SaveTheWorld                   = 1,
	ESocialImportPanelType_MAX     = 2,
};

enum class EFriendLinkShareButtonType : uint8
{
	IOS                            = 0,
	Android                        = 1,
	Generic                        = 2,
	EFriendLinkShareButtonType_MAX = 3,
};

enum class ESidebarState : uint8
{
	TabButtons                     = 0,
	UserListPanels                 = 1,
	ExitPopup                      = 2,
	ESidebarState_MAX              = 3,
};

enum class EListHeaderType : uint8
{
	TeamMember                     = 0,
	PartyMember                    = 1,
	JoinableParty                  = 2,
	PlatformOnlineFriend           = 3,
	McpOnlineFriend                = 4,
	OfflineFriend                  = 5,
	Blocked                        = 6,
	FriendInvite                   = 7,
	SuggestedFriend                = 8,
	RecentPlayer                   = 9,
	SearchResults                  = 10,
	JoinRequests                   = 11,
	LfgFilter                      = 12,
	LfgPlayers                     = 13,
	LfgInvites                     = 14,
	RebootPlayers                  = 15,
	GameVoice                      = 16,
	PartyVoice                     = 17,
	PlatformVoice                  = 18,
	AwayFriend                     = 19,
	Hidden                         = 20,
	Invalid                        = 21,
	EListHeaderType_MAX            = 22,
};

enum class ESocialTagListHighlightPolicy : uint8
{
	All                            = 0,
	TagList                        = 1,
	LocalUser                      = 2,
	FullColor                      = 3,
	ESocialTagListHighlightPolicy_MAX = 4,
};

enum class ESocialTagCategory : uint8
{
	GameModes                      = 0,
	Mood                           = 1,
	Utility                        = 2,
	Competitive                    = 3,
	Other                          = 4,
	ESocialTagCategory_MAX         = 5,
};

enum class EParentalControlsViewState : uint8
{
	Invalid                        = 0,
	EnterPin                       = 1,
	AskToEnableControls            = 2,
	VerifyEmail                    = 3,
	SetupEmail                     = 4,
	SetupPin                       = 5,
	DisplaySettings                = 6,
	DisableParentalControls        = 7,
	AskToReEnable                  = 8,
	ReEnabling                     = 9,
	CabinModeEmailChange           = 10,
	Squeegee                       = 11,
	EParentalControlsViewState_MAX = 12,
};

enum class EParentalControlsCabinEmailViewState : uint8
{
	Initial                        = 0,
	Sending                        = 1,
	Sent                           = 2,
	SendFailed                     = 3,
	EParentalControlsCabinEmailViewState_MAX = 4,
};

enum class ESpatialCustomizationRoomState : uint8
{
	None                           = 0,
	CategorySelection              = 1,
	CustomizationSelection         = 2,
	ESpatialCustomizationRoomState_MAX = 3,
};

enum class ESpatialCustomizationCategoryState : uint8
{
	LockedByBattlePass             = 0,
	LockedByChallenge              = 1,
	LockedByChallengeCompletion    = 2,
	UnlockAvailable                = 3,
	UnlockUsed                     = 4,
	Max_NONE                       = 5,
	ESpatialCustomizationCategoryState_MAX = 6,
};

enum class EFFortTopBarTabButtonGroup : uint8
{
	Discover                       = 0,
	Game                           = 1,
	Core                           = 2,
	FFortTopBarTabButtonGroup_MAX  = 3,
};

enum class ETooltipAlignment : uint8
{
	Up                             = 0,
	Down                           = 1,
	Left                           = 2,
	Right                          = 3,
	ETooltipAlignment_MAX          = 4,
};

enum class EFortNotificationEntryCompletionStatus : uint8
{
	New                            = 0,
	Active                         = 1,
	Completed                      = 2,
	MAX                            = 3,
};

enum class EFortEarnedSubRewardType : uint8
{
	XP                             = 0,
	Bars                           = 1,
	EFortEarnedSubRewardType_MAX   = 2,
};

enum class EItemContextAction : uint8
{
	Equip                          = 0,
	GoToBattlePassRewards          = 1,
	GoToBattlePassCustomization    = 2,
	GoToSpecialCollection          = 3,
	Count                          = 4,
	EItemContextAction_MAX         = 5,
};

enum class EFortLoadoutCardType : uint8
{
	Items                          = 0,
	AddTile                        = 1,
	AddPreviewItems                = 2,
	Blank                          = 3,
	EFortLoadoutCardType_MAX       = 4,
};

enum class EFortSupportPerkWidgetState : uint8
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortSupportPerkWidgetState_MAX = 3,
};

enum class EFortItemCountStyle : uint8
{
	StackCount                     = 0,
	OverrideCount                  = 1,
	StackCountOverOverride         = 2,
	EFortItemCountStyle_MAX        = 3,
};

enum class EPresentationMode : uint8
{
	ItemList                       = 0,
	VariantList                    = 1,
	EPresentationMode_MAX          = 2,
};

enum class ELiveStreamStandaloneBlocked : uint8
{
	StreamInWorldActive            = 0,
	ELiveStreamStandaloneBlocked_MAX = 1,
};

enum class EMatchmakingInputSource : uint8
{
	Local                          = 0,
	Remote                         = 1,
	Pool                           = 2,
	EMatchmakingInputSource_MAX    = 3,
};

enum class EUFortActivatableVideoEvents : uint8
{
	Finished                       = 0,
	Skipped                        = 1,
	UFortActivatableVideoEvents_MAX = 2,
};

enum class EUFortActivatablePrePostRollStates : uint8
{
	None                           = 0,
	PreRoll                        = 1,
	PreRollComplete                = 2,
	PostRoll                       = 3,
	PostRollComplete               = 4,
	BeginningStepOne               = 5,
	BeginningStepTwo               = 6,
	Middle                         = 7,
	End                            = 8,
	UFortActivatablePrePostRollStates_MAX = 9,
};

enum class EUFortActivatableVideoPanelEvents : uint8
{
	Finished                       = 0,
	Skipped                        = 1,
	UFortActivatableVideoPanelEvents_MAX = 2,
};

enum class EFortMissionActivationWidgetState : uint8
{
	Default                        = 0,
	StartObjective                 = 1,
	IncreaseDifficulty             = 2,
	Invalid                        = 3,
	EFortMissionActivationWidgetState_MAX = 4,
};

enum class EFortMtxOfferDisplaySize : uint8
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	EFortMtxOfferDisplaySize_MAX   = 3,
};

enum class EFortMPItemShopShowIneligibleOffers : uint8
{
	Always                         = 0,
	OnlyGiftable                   = 1,
	Never                          = 2,
	EFortMPItemShopShowIneligibleOffers_MAX = 3,
};

enum class EChannelSpeakerStyle : uint8
{
	InGame                         = 0,
	InLobby                        = 1,
	OutOfClient                    = 2,
	Max                            = 3,
};

enum class EPlayerFeedbackSubmitState : uint8
{
	Start                          = 0,
	Submitting                     = 1,
	SubmitFailed                   = 2,
	SubmitSucceeded                = 3,
	EPlayerFeedbackSubmitState_MAX = 4,
};

enum class EPlayerFeedback_EpicQAState : uint8
{
	SignInPage                     = 0,
	SigningInFailed                = 1,
	SigningIn                      = 2,
	SelectBugComponent             = 3,
	EPlayerFeedback_MAX            = 4,
};

enum class EFortPlayerFeedbackFlags : uint8
{
	SubscreenFlow_ForceDisplayFreeText = 0,
	SubscreenFlow_IncludeScreenshotSubscreen = 1,
	DoNotDisplay_SaveTheWorld      = 2,
	DoNotDisplay_Athena            = 3,
	DoNotDisplay_Creative          = 4,
	Submit_TryDisplayBlockUser     = 5,
	Submit_TryDisplayCommunityRulesURL = 6,
	EFortPlayerFeedbackFlags_MAX   = 7,
};

enum class ESaveProfileForBanners : uint8
{
	SaveTheWorld                   = 0,
	BattleRoyale                   = 1,
	ESaveProfileForBanners_MAX     = 2,
};

enum class EFortRadialControllingStick : uint8
{
	Right                          = 0,
	Left                           = 1,
	EFortRadialControllingStick_MAX = 2,
};

enum class ECardinalPoint : uint8
{
	E                              = 0,
	NE                             = 1,
	N                              = 2,
	NW                             = 3,
	W                              = 4,
	SW                             = 5,
	S                              = 6,
	SE                             = 7,
	None                           = 8,
	ECardinalPoint_MAX             = 9,
};

enum class ERadialOrderingMode : uint8
{
	CounterClockwise               = 0,
	Clockwise                      = 1,
	Cardinal                       = 2,
	Custom                         = 3,
	ERadialOrderingMode_MAX        = 4,
};

enum class EBattlePassPurchaseButtonLayout : uint8
{
	Normal                         = 0,
	Bundle                         = 1,
	Normal_PaysForSelf             = 2,
	EBattlePassPurchaseButtonLayout_MAX = 3,
};

enum class EBattlePassView : uint8
{
	None                           = 0,
	LandingPage                    = 1,
	RewardOverview                 = 2,
	ItemDetails                    = 3,
	BulkBuyRewards                 = 4,
	CharacterCustomizer            = 5,
	BonusRewards                   = 6,
	Weekly                         = 7,
	Quests                         = 8,
	EBattlePassView_MAX            = 9,
};

enum class EBattlePassFeatures : uint8
{
	None                           = 0,
	BuyBattlePass                  = 1,
	GiftBattlePass                 = 2,
	BuySubscription                = 3,
	ViewDetails                    = 4,
	WatchVideo                     = 5,
	ShowAbout                      = 6,
	PurchaseResources              = 7,
	EBattlePassFeatures_MAX        = 8,
};

enum class EBattlePassCurrencyType : uint8
{
	BattleStar                     = 0,
	CustomSkin                     = 1,
	TOTAL_CURRENCIES               = 2,
	EBattlePassCurrencyType_MAX    = 3,
};

enum class EBattlePassRewardPrerequisiteType : uint8
{
	RewardCount                    = 0,
	RequiredItems                  = 1,
	Quest                          = 2,
	NeededLevels                   = 3,
	NONE                           = 4,
	EBattlePassRewardPrerequisiteType_MAX = 5,
};

enum class ERewardPageType : uint8
{
	Reward                         = 0,
	Quest                          = 1,
	Bonus                          = 2,
	Customization                  = 3,
	Weekly                         = 4,
	MAX                            = 5,
};

enum class EFortDateTimeStyle : uint8
{
	Default                        = 0,
	Short                          = 1,
	Medium                         = 2,
	Long                           = 3,
	Full                           = 4,
	EFortDateTimeStyle_MAX         = 5,
};

enum class EFortShowdownMatchType : uint8
{
	Unknown                        = 0,
	Solo                           = 1,
	Duos                           = 2,
	Squads                         = 3,
	EFortShowdownMatchType_MAX     = 4,
};

enum class EFortShowdownEventState : uint8
{
	Unknown                        = 0,
	FutureTBD                      = 1,
	FutureScheduled                = 2,
	FutureNext                     = 3,
	Live                           = 4,
	LiveParticipating              = 5,
	LiveNotParticipating           = 6,
	Completed                      = 7,
	CompletedParticipated          = 8,
	CompletedNotPartipated         = 9,
	Cancelled                      = 10,
	EFortShowdownEventState_MAX    = 11,
};

enum class EFortEventWindowEligibility : uint8
{
	Unknown                        = 0,
	Public                         = 1,
	Private                        = 2,
	Locked                         = 3,
	EFortEventWindowEligibility_MAX = 4,
};

enum class EFortShowdownPinState : uint8
{
	None                           = 0,
	Locked                         = 1,
	Unlocked                       = 2,
	EFortShowdownPinState_MAX      = 3,
};

enum class EFortAlterationWidgetState : uint8
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortAlterationWidgetState_MAX = 3,
};

enum class EFortDefenderSlotType : uint8
{
	Invalid                        = 0,
	Defender                       = 1,
	Weapon                         = 2,
	EFortDefenderSlotType_MAX      = 3,
};

enum class ESubgameLoadFromCMS : uint8
{
	DoNotLoadFromCMS               = 0,
	LoadImageFromCMS               = 1,
	ESubgameLoadFromCMS_MAX        = 2,
};

enum class ESubgameTileType : uint8
{
	Campaign                       = 0,
	Athena                         = 1,
	Creative                       = 2,
	ESubgameTileType_MAX           = 3,
};

enum class EProgressiveSetProgress : uint8
{
	NoProgress                     = 0,
	PartialProgress                = 1,
	Completed                      = 2,
	Expired                        = 3,
	EProgressiveSetProgress_MAX    = 4,
};

enum class ESubscriptionCancellability : uint8
{
	NotCancellable                 = 0,
	CancellabeOnPlatform           = 1,
	CancellableAnywhere            = 2,
	ESubscriptionCancellability_MAX = 3,
};

enum class EFortMemberConnectionState : uint8
{
	Open                           = 0,
	Connecting                     = 1,
	Connected                      = 2,
	Invalid                        = 3,
	EFortMemberConnectionState_MAX = 4,
};

enum class ETournmentPosterViolatorState : uint8
{
	Hidden                         = 0,
	Live                           = 1,
	Countdown                      = 2,
	Info                           = 3,
	ETournmentPosterViolatorState_MAX = 4,
};

enum class EFortAthenaTutorialStep : uint8
{
	Look                           = 0,
	Move                           = 1,
	Harvest                        = 2,
	Clamber                        = 3,
	Pickup                         = 4,
	Shoot                          = 5,
	Ambush                         = 6,
	Heal                           = 7,
	Build                          = 8,
	Chest                          = 9,
	Scoping                        = 10,
	Completed                      = 11,
	Count                          = 12,
	EFortAthenaTutorialStep_MAX    = 13,
};

enum class EFortAthenaTutorialSubstep : uint8
{
	ScreenSwipeToLook              = 0,
	ScreenFindMarker               = 1,
	ScreenUseLeftStick             = 2,
	ScreenMoveToBuilding           = 3,
	ScreenJump                     = 4,
	ScreenCrouch                   = 5,
	ScreenReachMarker              = 6,
	ScreenUsePickaxe               = 7,
	ScreenReachClamber             = 8,
	ScreenClamber                  = 9,
	ScreenReachPickUp              = 10,
	ScreenPickUpItems              = 11,
	ScreenEquipItem                = 12,
	ScreenShootTargets             = 13,
	ScreenReload                   = 14,
	ScreenReachLocation            = 15,
	ScreenDefendYourself           = 16,
	ScreenHealthAlert              = 17,
	ScreenDestroyEnemies           = 18,
	ScreenCollectLoot              = 19,
	ScreenUseMedkit                = 20,
	ScreenUseShield                = 21,
	ScreenShieldInfo               = 22,
	ScreenLookForChest             = 23,
	ScreenChestFound               = 24,
	ScreenSelectBuildMode          = 25,
	ScreenShowMaterials            = 26,
	ScreenShowBuildPieces          = 27,
	ScreenSelectStairs             = 28,
	ScreenPlaceStairs              = 29,
	ScreenReachChest               = 30,
	ScreenExitBuildMode            = 31,
	ScreenLootChest                = 32,
	ScreenCollectLootChest         = 33,
	ScreenEquipRifle               = 34,
	ScreenUseScope                 = 35,
	ScreenShootTargetsScoping      = 36,
	ScreenCompleted                = 37,
	HealingInterrupted             = 38,
	Count                          = 39,
	EFortAthenaTutorialSubstep_MAX = 40,
};

enum class EFortAthenaTutorialScreenExtraWidget : uint8
{
	None                           = 0,
	DragToTurn                     = 1,
	Completed                      = 2,
	Count                          = 3,
	EFortAthenaTutorialScreenExtraWidget_MAX = 4,
};

enum class EUIKitItemCardIconSize : uint8
{
	Small                          = 0,
	Large                          = 1,
	Wide                           = 2,
	EUIKitItemCardIconSize_MAX     = 3,
};

enum class ELetoDisplayMode : uint8
{
	PrimaryOnly                    = 0,
	SingleToggle                   = 1,
	Simultaneous                   = 2,
	ELetoDisplayMode_MAX           = 3,
};

enum class EFortLoginDisplay : uint8
{
	LoginStatus                    = 0,
	SplashScreen                   = 1,
	SignIn                         = 2,
	SafeZoneEditor                 = 3,
	HealthWarning                  = 4,
	QualityPresetSelection         = 5,
	EFortLoginDisplay_MAX          = 6,
};

enum class EDynamicEntryPatternDirection : uint8
{
	FirstToLast                    = 0,
	LastToFirst                    = 1,
	EDynamicEntryPatternDirection_MAX = 2,
};

enum class ETutorialButtonInteractionType : uint8
{
	Click                          = 0,
	Press                          = 1,
	ETutorialButtonInteractionType_MAX = 2,
};

enum class EHighlightType : uint8
{
	ESquareHighlight               = 0,
	ECircleHighlight_Big           = 1,
	ECircleHighlight_Small         = 2,
	EHighlightType_MAX             = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteUI.FrontendLobbyFXData
struct FFrontendLobbyFXData
{
public:
	struct FTransform                            Location;                                          // 0x0(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UNiagaraSystem>         NiagaraFX;                                         // 0x60(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_358D[0x8];                                     // Fixing Size Of Struct..
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteUI.FrontendLobbyData
struct FFrontendLobbyData
{
public:
	TSoftObjectPtr<class UTexture>               Texture;                                           // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstance>      Material;                                          // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInstance>      PreBlurMaterial;                                   // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFrontendLobbyFXData>          SpawnFXList;                                       // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        FadeGrid;                                          // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeFloorToBlack;                                  // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.GridSortKey
struct FGridSortKey
{
public:
	float                                        Number;                                            // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_358E[0x4];                                     // Fixing Size After Last Property..
	class FString                                String;                                            // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortFocusedBuildingInfo
struct FFortFocusedBuildingInfo
{
public:
	bool                                         bIsInteractable;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBePlayerEdited;                                // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_358F[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               IndicatorRelativeLocation;                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuildingHealthDisplayRule    HealthDisplayRule;                                 // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3590[0x3];                                     // Fixing Size After Last Property..
	float                                        MaxHealth;                                         // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAnyTrapAttached;                                // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTrapAttachedFacingPlayer;                       // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPreviewTrapAttached;                            // 0x2A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3591[0x1];                                     // Fixing Size After Last Property..
	float                                        AttachedTrapMaxDurability;                         // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuildingInteraction          InteractionType;                                   // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3592[0x3];                                     // Fixing Size After Last Property..
	int32                                        InteractionCost;                                   // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortResourceType                 BuildingMaterial;                                  // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3593[0x3];                                     // Fixing Size After Last Property..
	class FName                                  QuickEditClass;                                    // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlayerBuilt;                                    // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3594[0x7];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// ScriptStruct FortniteUI.FortHUDState
struct FFortHUDState
{
public:
	uint8                                        bInBuildMode : 1;                                  // Mask: 0x1, PropSize: 0x10x0(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInCombatMode : 1;                                 // Mask: 0x2, PropSize: 0x10x0(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInEditMode : 1;                                   // Mask: 0x4, PropSize: 0x10x0(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInCreativeMode : 1;                               // Mask: 0x8, PropSize: 0x10x0(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsParachuteOpen : 1;                              // Mask: 0x10, PropSize: 0x10x0(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsFreeFalling : 1;                                // Mask: 0x20, PropSize: 0x10x0(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInLockedBus : 1;                                  // Mask: 0x40, PropSize: 0x10x0(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInUnlockedBus : 1;                                // Mask: 0x80, PropSize: 0x10x0(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnTargeting : 1;                                  // Mask: 0x1, PropSize: 0x10x1(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnUsingScopeTargeting : 1;                        // Mask: 0x2, PropSize: 0x10x1(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnCanTarget : 1;                                  // Mask: 0x4, PropSize: 0x10x1(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnCanUseScopeTargeting : 1;                       // Mask: 0x8, PropSize: 0x10x1(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnCanUseSecondaryAbility : 1;                     // Mask: 0x10, PropSize: 0x10x1(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanOpenChute : 1;                                 // Mask: 0x20, PropSize: 0x10x1(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCrouching : 1;                                    // Mask: 0x40, PropSize: 0x10x1(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDBNO : 1;                                         // Mask: 0x80, PropSize: 0x10x1(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsControllingRCPawn : 1;                          // Mask: 0x1, PropSize: 0x10x2(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsInVehicle : 1;                                  // Mask: 0x2, PropSize: 0x10x2(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsDrivingVehicle : 1;                             // Mask: 0x4, PropSize: 0x10x2(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanSwapSeats : 1;                                 // Mask: 0x8, PropSize: 0x10x2(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsCarryingDBNO : 1;                               // Mask: 0x10, PropSize: 0x10x2(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsCarryingHeldObject : 1;                         // Mask: 0x20, PropSize: 0x10x2(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsZiplining : 1;                                  // Mask: 0x40, PropSize: 0x10x2(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsCreativeFlying : 1;                             // Mask: 0x80, PropSize: 0x10x2(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bImprovedDBNO : 1;                                 // Mask: 0x1, PropSize: 0x10x3(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.UINavigationData
struct FUINavigationData
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UObject*                               ObjectData;                                        // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IdData;                                            // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntData;                                           // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct FortniteUI.FortPrioritizedWidgetData
struct FFortPrioritizedWidgetData
{
public:
	enum class EFortPrioritizedWidgetPriority    Priority;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortPrioritizedWidgetContestedBehavior WhenContesting;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct FortniteUI.FortTabButtonLabelInfo
struct FFortTabButtonLabelInfo
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_3595[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           IconBrush;                                         // 0x20(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FFortPrioritizedWidgetData            PriorityData;                                      // 0xE0(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3596[0x6];                                     // Fixing Size Of Struct..
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct FortniteUI.FortAthenaItemManagementInventoryFilterTabLabelInfo
struct FFortAthenaItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
public:
	class FName                                  FilterTabNameId;                                   // 0xE8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowEmptySlotItem;                               // 0xEC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3597[0x3];                                     // Fixing Size After Last Property..
	class FText                                  EmptyFilterDisplay;                                // 0xF0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  EmptyArchivedFilterDisplay;                        // 0x108(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.AthenaWinnerInfo
struct FAthenaWinnerInfo
{
public:
	class FString                                BigNameWinnerName;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        WinnerNames;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.FortPostGameScreenConfig
struct FFortPostGameScreenConfig
{
public:
	enum class EPostGameClickCatcherMode         ClickCatcherState;                                 // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPostGameHUDMode                  PostGameHUDMode;                                   // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSohwCinematicBars;                                // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPlacementOverlay;                             // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsContainerSafeZoneEnabled;                       // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowSpectatingPlayerName;                         // 0x5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPutPawnInStasis;                                  // 0x6(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowEmotesInStasis;                              // 0x7(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct FortniteUI.FortUIStatStyle
struct FFortUIStatStyle
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  HighestText;                                       // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Icon;                                              // 0x30(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ECommonNumericType                NumericType;                                       // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3598[0x3];                                     // Fixing Size After Last Property..
	float                                        MinimalNotableValue;                               // 0xF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3599[0x8];                                     // Fixing Size Of Struct..
};

// 0x3 (0x3 - 0x0)
// ScriptStruct FortniteUI.PrimaryContentSetup
struct FPrimaryContentSetup
{
public:
	bool                                         bShowBottomBar;                                    // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowChatWidget;                                   // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTopBar;                                       // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct FortniteUI.FortTabListRegistrationInfo
struct FFortTabListRegistrationInfo
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowedInZone;                                    // 0x5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_359A[0xA];                                     // Fixing Size After Last Property..
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x10(0xF0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonButtonBase>         TabButtonType;                                     // 0x100(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonUserWidget>         TabContentType;                                    // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               CreatedTabContentWidget;                           // 0x110(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_359B[0x8];                                     // Fixing Size Of Struct..
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteUI.FortBackendVersion
struct FFortBackendVersion
{
public:
	uint8                                        Pad_359C[0x98];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortUIFeatureStruct
struct FFortUIFeatureStruct
{
public:
	enum class EFortUIFeatureState               CurrentState;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeatureState               ForcedState;                                       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeatureStateReason         ForcedStateReason;                                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_359D[0x5];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            ChangeDelegate;                                    // 0x8(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct FortniteUI.FortAttributeModifierDisplayData
struct FFortAttributeModifierDisplayData
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierType;                                      // 0x3C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_359E[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTagRequirements              SourceTags;                                        // 0x40(0x40)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTags;                                        // 0x80(0x40)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct FortniteUI.FortReceivedItemLootInfo
struct FFortReceivedItemLootInfo
{
public:
	struct FFortItemHeaderInformation            HeaderInformation;                                 // 0x0(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortItem*                             GeneratedItemInstance;                             // 0x98(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   ItemDef;                                           // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TemplateId;                                        // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0xB8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_359F[0xC];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortMPItemShopLayout
struct FFortMPItemShopLayout
{
public:
	class FString                                SectionID;                                         // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubsectionID;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortMPItemShopCMSColors
struct FFortMPItemShopCMSColors
{
public:
	class FString                                Color1;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Color2;                                            // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3B8 (0x3B8 - 0x0)
// ScriptStruct FortniteUI.FortSettingsFilterState
struct FFortSettingsFilterState
{
public:
	bool                                         bIncludeDisabled;                                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeHidden;                                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeResetable;                                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeNestedPages;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A0[0x394];                                   // Fixing Size After Last Property..
	TArray<class UFortSetting*>                  SettingRootList;                                   // 0x398(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortSetting*>                  SettingWhiteList;                                  // 0x3A8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteUI.FortSimpleWidgetAnimation
struct FFortSimpleWidgetAnimation
{
public:
	class FName                                  TargetName;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A1[0x4];                                     // Fixing Size After Last Property..
	class UCurveVector*                          Translation;                                       // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                          Scale;                                             // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           Alpha;                                             // 0x18(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetOnFinish;                                    // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAnimateTranslation;                         // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAnimateScale;                               // 0x22(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAnimateAlpha;                               // 0x23(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A2[0xC];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UWorld>                 WeakWorld;                                         // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35A3[0x30];                                    // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortSimpleWidgetAnimations
struct FFortSimpleWidgetAnimations
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A4[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FFortSimpleWidgetAnimation>    Targets;                                           // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAnimationsFinished;                              // 0x18(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A5[0x8];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.TimerDisplayData
struct FTimerDisplayData
{
public:
	struct FLinearColor                          BrushColor;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TimeRemainingDisplayText;                          // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextColor;                                         // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct FortniteUI.AthenaInventoryDropStackSizeRow
struct FAthenaInventoryDropStackSizeRow : public FTableRowBase
{
public:
	struct FGameplayTagContainer                 ItemTags;                                          // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
	int32                                        StackSize;                                         // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A6[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.StatBound
struct FStatBound
{
public:
	float                                        Minimum;                                           // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct FortniteUI.AthenaInventoryItemStatBoundsRow
struct FAthenaInventoryItemStatBoundsRow : public FTableRowBase
{
public:
	struct FGameplayTagContainer                 ItemTags;                                          // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FStatBound                            Damage;                                            // 0x28(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatBound                            FireRate;                                          // 0x30(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatBound                            MagazineSize;                                      // 0x38(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatBound                            ReloadTime;                                        // 0x40(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteUI.AthenaItemShopReloadMtxInfo
struct FAthenaItemShopReloadMtxInfo
{
public:
	TArray<class FName>                          StaticStorefrontNames;                             // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          DynamicStorefrontNames;                            // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  IncrementalStorefrontName;                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A7[0x4];                                     // Fixing Size After Last Property..
	class FString                                DynamicOtherOptionOfferId;                         // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxMtxQuantityToShowDynamicReloadMtx;              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A8[0x4];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UAthenaReloadMtxScreenLegacy> StaticReloadMtxScreenClass;                        // 0x40(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UAthenaDynamicReloadMtxScreenLegacy> DynamicReloadMtxScreenClass;                       // 0x68(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.AthenaMapScreenContainerTabInfo
struct FAthenaMapScreenContainerTabInfo
{
public:
	class FText                                  TabTitle;                                          // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                TabIcon;                                           // 0x18(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Order;                                             // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDefaultFrontendActiveTab;                         // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDefaultInGameActiveTab;                           // 0x45(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPlayerProfile;                                // 0x46(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A9[0x1];                                     // Fixing Size After Last Property..
	class FName                                  TabId;                                             // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35AA[0x4];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.AthenaPostMatchScreenContainerTabInfo
struct FAthenaPostMatchScreenContainerTabInfo
{
public:
	class FText                                  TabTitle;                                          // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                TabIcon;                                           // 0x18(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Order;                                             // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDefaultInGameActiveTab;                           // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35AB[0x3];                                     // Fixing Size After Last Property..
	class FName                                  AutoAdvanceToTabID;                                // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TabId;                                             // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.AthenaReplayBrowserRowData
struct FAthenaReplayBrowserRowData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Date;                                              // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rank;                                              // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPlayers;                                        // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Eliminations;                                      // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DownloadModulesCount;                              // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35AC[0x14];                                    // Fixing Size Of Struct..
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteUI.AthenaVariantFilterTabInfo
struct FAthenaVariantFilterTabInfo
{
public:
	TSoftObjectPtr<class UObject>                Icon;                                              // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Label;                                             // 0x28(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 IncludedVariantChannels;                           // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FMcpVariantChannelInfo>        ForcedVariantSelections;                           // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ZoomLevel;                                         // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableScrollBox;                                 // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35AD[0x3];                                     // Fixing Size Of Struct..
};

// 0x88 (0x88 - 0x0)
// ScriptStruct FortniteUI.AthenaVariantFilterTabInfo_Primary
struct FAthenaVariantFilterTabInfo_Primary
{
public:
	struct FAthenaVariantFilterTabInfo           PrimaryTab;                                        // 0x0(0x78)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FAthenaVariantFilterTabInfo>   SubTabs;                                           // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.AthenaVariantFilterSet
struct FAthenaVariantFilterSet
{
public:
	TArray<struct FAthenaVariantFilterTabInfo_Primary> PrimaryTabs;                                       // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.CreativeContentBrowserRemoveItemDefinitionMessage
struct FCreativeContentBrowserRemoveItemDefinitionMessage
{
public:
	TArray<class UFortItemDefinition*>           ItemDefinitionsToRemove;                           // 0x0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.CreativeContentBrowserTabInitializer
struct FCreativeContentBrowserTabInitializer
{
public:
	class FText                                  TabLabel;                                          // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortCreativeContentBrowserTabPanelBase> CreativeContentBrowserTabClass;                    // 0x18(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCreativeContentBrowserTab_CreationCondition* CreationCondition;                                 // 0x40(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteUI.CreativeDeviceSubscription
struct FCreativeDeviceSubscription
{
public:
	int32                                        DestinationDeviceGUID;                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEvent;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35AE[0x3];                                     // Fixing Size After Last Property..
	class FText                                  SourceSubscriptionDisplayName;                     // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DestinationDeviceDisplayName;                      // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DestinationSubscriptionDisplayName;                // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UActor>                 ActorPtr;                                          // 0x50(0x28)(BlueprintVisible, BlueprintReadOnly, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_Configuration
struct FFortItemCard_PowerRatingBlock_Configuration
{
public:
	uint8                                        Pad_35AF[0x10];                                    // Fixing Size After Last Property..
	struct FSlateBrush                           MoonbeamBorderBrush;                               // 0x10(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               MoonbeamBorderExteriorPadding;                     // 0xD0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               MoonbeamBorderPadding;                             // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               CustomRatingInternalPadding;                       // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             CustomRatingIconSize;                              // 0x100(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        CustomRatingTextStyle;                             // 0x110(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ComparisonIndicatorSize;                           // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B0[0x8];                                     // Fixing Size Of Struct..
};

// 0x1E0 (0x330 - 0x150)
// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration
struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration : public FFortItemCard_PowerRatingBlock_Configuration
{
public:
	struct FSlateBrush                           PersonnelPowerRatingIconBrush;                     // 0x150(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        PersonnelPowerRatingTextStyle;                     // 0x210(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B1[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           SchematicPowerRatingIconBrush;                     // 0x240(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        SchematicPowerRatingTextStyle;                     // 0x300(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B2[0x8];                                     // Fixing Size Of Struct..
};

// 0xF0 (0x240 - 0x150)
// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_ItemInstance_Configuration
struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration : public FFortItemCard_PowerRatingBlock_Configuration
{
public:
	struct FSlateBrush                           PowerRatingIconBrush;                              // 0x150(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        PowerRatingTextStyle;                              // 0x210(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B3[0x8];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_StackCountBlock_Configuration
struct FFortItemCard_StackCountBlock_Configuration
{
public:
	bool                                         bShowShorthandStackCount;                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B4[0x7];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UCommonTextStyle>        TextStyle;                                         // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_NameplateBorder_Configuration
struct FFortItemCard_NameplateBorder_Configuration
{
public:
	struct FMargin                               Padding;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush;                                             // 0x10(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_DefenderWeaponTypeIcon_Configuration
struct FFortItemCard_DefenderWeaponTypeIcon_Configuration
{
public:
	struct FVector2D                             IconConstraints;                                   // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_DetailAreaBorder_Configuration
struct FFortItemCard_DetailAreaBorder_Configuration
{
public:
	float                                        MinimumHeight;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_TierMeter_Configuration
struct FFortItemCard_TierMeter_Configuration
{
public:
	struct FVector2D                             PipSize;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterPipPadding;                                   // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B5[0x4];                                     // Fixing Size Of Struct..
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_LevelMeter_Configuration
struct FFortItemCard_LevelMeter_Configuration
{
public:
	float                                        MeterThickness;                                    // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               MeterPadding;                                      // 0x4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_DurabilityMeter_Configuration
struct FFortItemCard_DurabilityMeter_Configuration
{
public:
	float                                        MeterThickness;                                    // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               MeterPadding;                                      // 0x4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x560 (0x560 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration
struct FFortItemCard_XL_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                  // 0x10(0x330)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x340(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                         // 0x350(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        ItemNameTextStyle;                                 // 0x420(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeadSurvivorTypeIconSize;                          // 0x448(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstIconSlotSize;                                 // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenIconSlots;                           // 0x468(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B6[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             SecondIconSlotSize;                                // 0x470(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                            // 0x480(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x490(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RarityNameTextLeftPadding;                         // 0x4A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        RarityNameTextStyle;                               // 0x4A8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClassIconImageLeftPadding;                         // 0x4D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B7[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             ClassIconSize;                                     // 0x4D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenClassIconAndName;                    // 0x4E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B8[0x4];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UCommonTextStyle>        ClassNameTextStyle;                                // 0x4F0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TierMeterLeftPadding;                              // 0x518(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B9[0x4];                                     // Fixing Size After Last Property..
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x520(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               IconSlotOverNameplatePadding;                      // 0x538(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             IconSlotOverNameplateSize;                         // 0x548(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35BA[0x8];                                     // Fixing Size Of Struct..
};

// 0x320 (0x320 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XL_ItemInstance_Configuration
struct FFortItemCard_XL_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x240)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x260(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x270(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x2A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenTraitIcons;                          // 0x2C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35BB[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             SecondTraitSize;                                   // 0x2C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TierMeterPadding;                                  // 0x2D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x2E8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x300(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_35BC[0xC];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XL_TransformKey_Configuration
struct FFortItemCard_XL_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4C0 (0x4C0 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_L_PersonnelAndSchematics_Configuration
struct FFortItemCard_L_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                  // 0x10(0x330)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x340(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                         // 0x350(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             ClassIconSize;                                     // 0x420(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeadSurvivorTypeIconSize;                          // 0x430(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstIconSlotSize;                                 // 0x440(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenIconSlots;                           // 0x450(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35BD[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             SecondIconSlotSize;                                // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                            // 0x468(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x478(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter;                                        // 0x48C(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TierMeterLeftPadding;                              // 0x4A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35BE[0x4];                                     // Fixing Size After Last Property..
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x4A8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x320 (0x320 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_L_ItemInstance_Configuration
struct FFortItemCard_L_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x240)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x260(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x270(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x2A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenTraitIcons;                          // 0x2C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35BF[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             SecondTraitSize;                                   // 0x2C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TierMeterPadding;                                  // 0x2D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x2E8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x300(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C0[0xC];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_L_TransformKey_Configuration
struct FFortItemCard_L_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4C0 (0x4C0 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_M_PersonnelAndSchematics_Configuration
struct FFortItemCard_M_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                  // 0x10(0x330)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x340(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                         // 0x350(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             ClassIconSize;                                     // 0x420(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeadSurvivorTypeIconSize;                          // 0x430(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstIconSlotSize;                                 // 0x440(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenIconSlots;                           // 0x450(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C1[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             SecondIconSlotSize;                                // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                            // 0x468(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x478(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter;                                        // 0x48C(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TierMeterLeftPadding;                              // 0x4A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C2[0x4];                                     // Fixing Size After Last Property..
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x4A8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x320 (0x320 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_M_ItemInstance_Configuration
struct FFortItemCard_M_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x240)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x260(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x270(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x2A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenTraitIcons;                          // 0x2C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C3[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             SecondTraitSize;                                   // 0x2C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TierMeterPadding;                                  // 0x2D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x2E8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x300(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C4[0xC];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_M_TransformKey_Configuration
struct FFortItemCard_M_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4C0 (0x4C0 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_S_PersonnelAndSchematics_Configuration
struct FFortItemCard_S_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                  // 0x10(0x330)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x340(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                         // 0x350(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             ClassIconSize;                                     // 0x420(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeadSurvivorTypeIconSize;                          // 0x430(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstIconSlotSize;                                 // 0x440(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenIconSlots;                           // 0x450(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C5[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             SecondIconSlotSize;                                // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                            // 0x468(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x478(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter;                                        // 0x48C(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TierMeterLeftPadding;                              // 0x4A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C6[0x4];                                     // Fixing Size After Last Property..
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x4A8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x300 (0x300 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_S_ItemInstance_Configuration
struct FFortItemCard_S_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x240)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x260(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x270(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x2A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TierMeterPadding;                                  // 0x2C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x2D0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x2E8(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C7[0x4];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_S_TransformKey_Configuration
struct FFortItemCard_S_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XS_PersonnelAndSchematics_Configuration
struct FFortItemCard_XS_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x20(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C8[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             AvailableUpgradeIconSize;                          // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2E0 (0x2E0 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XS_ItemInstance_Configuration
struct FFortItemCard_XS_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x240)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x260(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x270(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x280(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x290(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x2C0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C9[0xC];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XS_TransformKey_Configuration
struct FFortItemCard_XS_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XXS_ItemInstance_Configuration
struct FFortItemCard_XXS_ItemInstance_Configuration
{
public:
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct FortniteUI.FortItemManagementInventoryFilterTabLabelInfo
struct FFortItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
public:
	class FName                                  FilterTabNameId;                                   // 0xE8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35CA[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.QuickbarEquipSlotIndicesConfig
struct FQuickbarEquipSlotIndicesConfig
{
public:
	TArray<int32>                                EquipSlotIndices;                                  // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.QueriedResultIconAssignment
struct FQueriedResultIconAssignment
{
public:
	class UPaperSprite*                          SpriteToUse;                                       // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortMobileButtonBehaviorComponent_IconPicker*> QueriedIconComponents;                             // 0x8(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.QueriedResultVisibilityAssignment
struct FQueriedResultVisibilityAssignment
{
public:
	enum class ESlateVisibility                  VisibilityToAssign;                                // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35CB[0x7];                                     // Fixing Size After Last Property..
	TArray<class UFortMobileButtonBehaviorComponent_Visibility*> QueriedVisibilityComponents;                       // 0x8(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.TagFilterOverride
struct FTagFilterOverride
{
public:
	struct FGameplayTagContainer                 OverridingTags;                                    // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class ETagComparisonType                ComparisonTypeToOverride;                          // 0x20(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35CC[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 TagsToFilterOut;                                   // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.TagVisibility
struct FTagVisibility
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class ETagComparisonType                ComparisonType;                                    // 0x20(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  Visibility;                                        // 0x21(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35CD[0x6];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.IconPicker
struct FIconPicker
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class ETagComparisonType                ComparisonType;                                    // 0x20(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35CE[0x7];                                     // Fixing Size After Last Property..
	class UPaperSprite*                          Sprite;                                            // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct FortniteUI.FortModalContainerSizeEntry
struct FFortModalContainerSizeEntry
{
public:
	float                                        AbsoluteWidth;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TopPercent;                                        // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MiddlePercent;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BottomPercent;                                     // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VerticalPadding;                                   // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HorizontalPadding;                                 // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ContentPadding;                                    // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortUIPerkTier
struct FFortUIPerkTier
{
public:
	class UFortHeroSpecialization*               HeroSpecialization;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortHero*                             CurrentHero;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemTier                     Tier;                                              // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUpgrade;                                        // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEvolution;                                      // 0x12(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35CF[0x5];                                     // Fixing Size Of Struct..
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteUI.FortUIPerk
struct FFortUIPerk
{
public:
	struct FFortSpecializationSlot               SpecializationSlot;                                // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortHero*                             Hero;                                              // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemTier                     Tier;                                              // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortSupportBonusType             SupportBonusType;                                  // 0x91(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTierPerk;                                       // 0x92(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUpgrade;                                        // 0x93(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEvolution;                                      // 0x94(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEvolutionBranch;                                // 0x95(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D0[0x2];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyLocalizableText
struct FFortPlayerSurveyLocalizableText
{
public:
	class FString                                TextID;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LocalizedText;                                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSCustomTextReplacement
struct FFortPlayerSurveyCMSCustomTextReplacement
{
public:
	class FString                                TextReplacementTag;                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortPlayerSurveyLocalizableText> TextReplacementValues;                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSQuestion
struct FFortPlayerSurveyCMSQuestion
{
public:
	struct FFortPlayerSurveyLocalizableText      QuestionText;                                      // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Type;                                              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NumberOfOptions;                                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D1[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FFortPlayerSurveyLocalizableText> Responses;                                         // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bRandomizeResponseOrder;                           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D2[0x7];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSFrequentlyAskedQuestion
struct FFortPlayerSurveyCMSFrequentlyAskedQuestion
{
public:
	class FString                                FrequentlyAskedQuestionID;                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortPlayerSurveyCMSQuestion          Question;                                          // 0x10(0x50)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSFrequentlyAskedQuestionID
struct FFortPlayerSurveyCMSFrequentlyAskedQuestionID
{
public:
	class FString                                ID;                                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSQuestionContainer
struct FFortPlayerSurveyCMSQuestionContainer
{
public:
	struct FFortPlayerSurveyCMSFrequentlyAskedQuestionID FrequentlyAskedQuestionID;                         // 0x0(0x10)(NativeAccessSpecifierPublic)
	struct FFortPlayerSurveyCMSQuestion          Question;                                          // 0x10(0x50)(NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSCondition
struct FFortPlayerSurveyCMSCondition
{
public:
	class FString                                Type;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Operation;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ComparisonValue;                                   // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ConditionInfo;                                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>            ChildConditions;                                   // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSConditionGroup
struct FFortPlayerSurveyCMSConditionGroup
{
public:
	class FString                                ConditionGroupID;                                  // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortPlayerSurveyCMSCondition> Conditions;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSSurvey
struct FFortPlayerSurveyCMSSurvey
{
public:
	class FString                                SurveyID;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        SurveyTags;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ConditionGroupIDs;                                 // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortPlayerSurveyCMSCondition> Conditions;                                        // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortPlayerSurveyCMSQuestionContainer> Questions;                                         // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortPlayerSurveyCMSCustomTextReplacement> TextReplacementOverrides;                          // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bRandomizeQuestionOrder;                           // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D3[0x7];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSData
struct FFortPlayerSurveyCMSData
{
public:
	TArray<struct FFortPlayerSurveyCMSConditionGroup> ConditionGroups;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortPlayerSurveyCMSFrequentlyAskedQuestion> FrequentlyAskedQuestions;                          // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortPlayerSurveyCMSCustomTextReplacement> CustomTextReplacements;                            // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortPlayerSurveyCMSCustomTextReplacement> WhitelistedTextReplacements;                       // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortPlayerSurveyCMSSurvey>    Surveys;                                           // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bSurveysEnabled;                                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D4[0x7];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.FortRichTextDecoratorExtension
struct FFortRichTextDecoratorExtension
{
public:
	TSoftClassPtr<class UUserWidget>             TargetClass;                                       // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class URichTextBlockDecorator>> Decorators;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.SqueegeeStyleParams
struct FSqueegeeStyleParams
{
public:
	struct FVector2D                             IconSize;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             IconSkewSize;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FontSize;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingSize;                                       // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDetails;                                      // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D5[0x7];                                     // Fixing Size Of Struct..
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.FortUIPickerTrapSortScores
struct FFortUIPickerTrapSortScores
{
public:
	float                                        UniqueTrapBonus;                                   // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlottedBonus;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FavoriteBonus;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTrackedTrapBonusTime;                           // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TrackedTrapBonusMultiplier;                        // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct FortniteUI.FortUIPickerTrapSortModifier
struct FFortUIPickerTrapSortModifier : public FTableRowBase
{
public:
	struct FGameplayTagQuery                     ItemTagQuery;                                      // 0x8(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        ScoreBonus;                                        // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D6[0x4];                                     // Fixing Size Of Struct..
};

// 0x140 (0x140 - 0x0)
// ScriptStruct FortniteUI.FortTopBarTabButtonInfo
struct FFortTopBarTabButtonInfo
{
public:
	class FName                                  TabId;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D7[0x4];                                     // Fixing Size After Last Property..
	class FString                                CalendarEventName;                                 // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           IconBrush;                                         // 0x30(0xC0)(Edit, NativeAccessSpecifierPublic)
	enum class EFortUIFeature                    LinkedUIFeature;                                   // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBangType                     BangType;                                          // 0xF1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D8[0x2];                                     // Fixing Size After Last Property..
	int32                                        SortOrder;                                         // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceImage;                                       // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrimaryPlayerOnly;                                // 0xF9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInteractAnalytic;                                 // 0xFA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D9[0x5];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UFortTopBarTabButton>    OverrideTabWidget;                                 // 0x100(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class UFortPersistentTabObject>> PersistentTabObjects;                              // 0x128(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bIsDynamicTab;                                     // 0x138(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFFortTopBarTabButtonGroup        ButtonGroup;                                       // 0x139(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35DA[0x6];                                     // Fixing Size Of Struct..
};

// 0x170 (0x170 - 0x0)
// ScriptStruct FortniteUI.ExternalDynamicTabParams
struct FExternalDynamicTabParams
{
public:
	TSoftClassPtr<class UWidget>                 TabScreenClass;                                    // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35DB[0x8];                                     // Fixing Size After Last Property..
	struct FFortTopBarTabButtonInfo              TabButtonInfo;                                     // 0x30(0x140)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FrontendDisabledTabs
struct FFrontendDisabledTabs
{
public:
	TArray<class FName>                          DisabledTabNames;                                  // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          HiddenTabNames;                                    // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x4 - 0x4)
// ScriptStruct FortniteUI.UIStateTag
struct FUIStateTag : public FUITag
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct FortniteUI.UIStateTag_FortStartup
struct FUIStateTag_FortStartup : public FUIStateTag
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct FortniteUI.UIStateTag_Athena
struct FUIStateTag_Athena : public FUIStateTag
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct FortniteUI.UIStateTag_STW
struct FUIStateTag_STW : public FUIStateTag
{
public:
};

// 0xEC0 (0xEC0 - 0x0)
// ScriptStruct FortniteUI.FortUIStyleWindowButtons
struct FFortUIStyleWindowButtons
{
public:
	struct FButtonStyle                          Close;                                             // 0x0(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          Minimize;                                          // 0x3B0(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          Maximize;                                          // 0x760(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          Restore;                                           // 0xB10(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xEC0 (0xEC0 - 0x0)
// ScriptStruct FortniteUI.FortUIStyleDefinition
struct FFortUIStyleDefinition
{
public:
	struct FFortUIStyleWindowButtons             WindowButtons;                                     // 0x0(0xEC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct FortniteUI.FortUITutorialData
struct FFortUITutorialData : public FTableRowBase
{
public:
	class FName                                  TutorialWidgetName;                                // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35DC[0x4];                                     // Fixing Size After Last Property..
	class FText                                  Title;                                             // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                DevComment;                                        // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                          Descriptions;                                      // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UTexture2D>>     PreviewImages;                                     // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteUI.FortToastDisplayInfo
struct FFortToastDisplayInfo
{
public:
	class FText                                  Header;                                            // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x30(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortToastType                    Type;                                              // 0x58(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35DD[0x7];                                     // Fixing Size Of Struct..
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteUI.FortErrorInfo
struct FFortErrorInfo
{
public:
	class FText                                  Operation;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ErrorMessage;                                      // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                ErrorCode;                                         // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortErrorSeverity                ErrorSeverity;                                     // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35DE[0x7];                                     // Fixing Size After Last Property..
	class FText                                  ContinueButtonText;                                // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_35DF[0x10];                                    // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.FortDisplayModifier
struct FFortDisplayModifier
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EFortStatValueDisplayType         DisplayType;                                       // 0x30(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuffState                    BuffState;                                         // 0x31(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35E0[0x6];                                     // Fixing Size Of Struct..
};

// 0x88 (0x88 - 0x0)
// ScriptStruct FortniteUI.FortDisplayAttribute
struct FFortDisplayAttribute
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Label;                                             // 0x38(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x50(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  HoverText;                                         // 0x68(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        NumericValue;                                      // 0x80(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortStatValueDisplayType         DisplayType;                                       // 0x84(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuffState                    BuffState;                                         // 0x85(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortClampState                   ClampState;                                        // 0x86(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortComparisonType               ComparisonType;                                    // 0x87(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x488 (0x490 - 0x8)
// ScriptStruct FortniteUI.FortSquadIconData
struct FFortSquadIconData : public FTableRowBase
{
public:
	uint8                                        Pad_35E1[0x8];                                     // Fixing Size After Last Property..
	struct FFortMultiSizeBrush                   Brush;                                             // 0x10(0x480)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct FortniteUI.FortHealthyGamingData
struct FFortHealthyGamingData : public FTableRowBase
{
public:
	float                                        HealthWarningToastInterval;                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35E2[0x4];                                     // Fixing Size After Last Property..
	class FText                                  HealthWarningToastDescriptionFormat;               // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  HealthWarningScreenText;                           // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  GameplayRestrictionText;                           // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        GameplayRestrictionWarningTimeOffset;              // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35E3[0x4];                                     // Fixing Size After Last Property..
	class FText                                  AntiAddictionTotalDescriptionFormat;               // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bUsePlayerTimeLimitSystem;                         // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35E4[0x7];                                     // Fixing Size After Last Property..
	TArray<TSoftObjectPtr<class UTexture2D>>     RatingIcons;                                       // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteUI.MatchmakingUIOverride
struct FMatchmakingUIOverride
{
public:
	TSoftClassPtr<class UCommonActivatableWidget> SoftMatchmakingOptionsClass;                       // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonActivatableWidget> SoftMatchmakingOptionsClassV2;                     // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortAthenaMatchmakingWidgetLegacy> SoftLobbyMatchmakingWidgetClass;                   // 0x50(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.MobileEnhancedInputData
struct FMobileEnhancedInputData
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x8(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x18(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.AthenaStyleMissionData
struct FAthenaStyleMissionData
{
public:
	class UFortVariantTokenType*                 StyleDefinition;                                   // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortVariantTokenType*>         OptionalAdditionalStyleDefinitions;                // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UFortQuestItemDefinition*              Mission;                                           // 0x18(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                       OverrideIdleAnimation;                             // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.AthenaSpatialStyleCharacterData
struct FAthenaSpatialStyleCharacterData
{
public:
	class UAthenaCharacterItemDefinition*        Character;                                         // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAthenaStyleMissionData>       Styles;                                            // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class ESpatialStyleCharacterUnlockPrerequisite> CharacterPrerequisites;                            // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAnimationAsset*                       CharacterIdleAnimation;                            // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteUI.VideoWidgetConfig
struct FVideoWidgetConfig
{
public:
	class UFortStreamMediaSource*                StreamingMediaSource;                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VideoString;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VideoDisplayDataID;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FallbackVideoID;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckAutoPlay;                                    // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceAutoPlay;                                    // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStreamingEnabled;                                 // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35E5[0x1];                                     // Fixing Size After Last Property..
	class FString                                VideoUID;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldBeModal;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSkipBoundaries;                                // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHoldToSkip;                                       // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFadeFromColor;                                    // 0x2B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEndFadeFromColor;                                 // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFadeUpToColor;                                    // 0x2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSkipping;                                    // 0x2E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35E6[0x1];                                     // Fixing Size After Last Property..
	class FString                                MimeType;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VideoURL;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableLooping;                                    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoClose;                                        // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideControls;                                     // 0x52(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideBackground;                                   // 0x53(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideBackgroundUntilVideoDetected;                 // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartMTTransparent;                               // 0x55(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35E7[0x2];                                     // Fixing Size After Last Property..
	class USoundMix*                             SoundMixOverride;                                  // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideSoundMix;                                 // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35E8[0x7];                                     // Fixing Size After Last Property..
	class USoundClass*                           SoundClassOverride;                                // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bControlWorldRendering;                            // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bControlShaderPipelineCacheBatching;               // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisablePiP;                                       // 0x72(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35E9[0x1];                                     // Fixing Size After Last Property..
	float                                        PartySyncStartTime;                                // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableCursor;                                    // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableStreamLimitsFromWidget;                    // 0x79(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartHidden;                                      // 0x7A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAudioOnlyHandlingFromMetadata;                    // 0x7B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTreatAudioOnlyAsColorFades;                       // 0x7C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDebugCommands;                              // 0x7D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35EA[0x2];                                     // Fixing Size After Last Property..
	struct FLinearColor                          FadeColor;                                         // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrePostRollNoAudioMix;                            // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35EB[0x7];                                     // Fixing Size Of Struct..
};

// 0x88 (0x88 - 0x0)
// ScriptStruct FortniteUI.AthenaCollectionScreenContainerTabInfo
struct FAthenaCollectionScreenContainerTabInfo
{
public:
	class FText                                  TabTitle;                                          // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                TabIcon;                                           // 0x18(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonActivatableWidget> TabClass;                                          // 0x40(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TabCategoryTags;                                   // 0x68(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.MutatorAddedWidgets
struct FMutatorAddedWidgets
{
public:
	uint8                                        Pad_35EC[0x10];                                    // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.AthenaCustomizationParams
struct FAthenaCustomizationParams
{
public:
	enum class EAthenaCustomizationCategory      Category;                                          // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35ED[0x3];                                     // Fixing Size After Last Property..
	int32                                        CategorySubslotIndex;                              // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CategoryDisplayName;                               // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ItemDisplayTypeName;                               // 0x20(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bAllowUnownedItems;                                // 0x38(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOneItemPerSlot;                                   // 0x39(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35EE[0x6];                                     // Fixing Size After Last Property..
	class UMaterialInstance*                     OverrideSlotImage;                                 // 0x40(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteUI.AthenaPlaylistLeaderboardData
struct FAthenaPlaylistLeaderboardData
{
public:
	class FName                                  StatId;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35EF[0x4];                                     // Fixing Size After Last Property..
	class FText                                  StatDisplayName;                                   // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  TabDisplayName;                                    // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  RowDisplayName;                                    // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                BaseGameplayTag;                                   // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGlobal;                                         // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35F0[0x7];                                     // Fixing Size Of Struct..
};

// 0x38 (0x40 - 0x8)
// ScriptStruct FortniteUI.AthenaLeaderboardData
struct FAthenaLeaderboardData : public FTableRowBase
{
public:
	enum class EFortAthenaPlaylist               Playlist;                                          // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35F1[0x3];                                     // Fixing Size After Last Property..
	class FName                                  PlaylistName;                                      // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonInputType                  InputType;                                         // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35F2[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FAthenaPlaylistLeaderboardData> Stats;                                             // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bExcludePlaylistNames;                             // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35F3[0x7];                                     // Fixing Size After Last Property..
	TArray<class FString>                        PlaylistNames;                                     // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.PlaylistFilter
struct FPlaylistFilter
{
public:
	class UDataTable*                            PlaylistsData;                                     // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35F4[0x8];                                     // Fixing Size Of Struct..
};

// 0x8 (0x18 - 0x10)
// ScriptStruct FortniteUI.LeaderboardFilter
struct FLeaderboardFilter : public FPlaylistFilter
{
public:
	uint8                                        Pad_35F5[0x8];                                     // Fixing Size Of Struct..
};

// 0x3 (0x3 - 0x0)
// ScriptStruct FortniteUI.FortResurrectionUIData
struct FFortResurrectionUIData
{
public:
	bool                                         bResurrectionChipAvailable;                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResurrectionChipPickedUp;                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResurrectionChipRebooting;                        // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.MarkerLargeIndicatorType
struct FMarkerLargeIndicatorType
{
public:
	class UMaterialInterface*                    MarkerMaterial;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ImageSize;                                         // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.AthenaTeamCountSlotData
struct FAthenaTeamCountSlotData
{
public:
	class FText                                  TeamNameText;                                      // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  TeamCountText;                                     // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsMyTeam;                                         // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35F6[0x7];                                     // Fixing Size Of Struct..
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.WinConditionPlacementData
struct FWinConditionPlacementData
{
public:
	struct FMargin                               Padding;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35F7[0x2];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.WinConditionPlacementDataMapWrapper
struct FWinConditionPlacementDataMapWrapper
{
public:
	TMap<enum class EHUDMessagePlacement, struct FWinConditionPlacementData> Data;                                              // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteUI.GlyphUpdateTransition
struct FGlyphUpdateTransition
{
public:
	int32                                        Count;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinTimeOffset;                                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeOffset;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.GlyphAllUpdateTransitions
struct FGlyphAllUpdateTransitions
{
public:
	uint8                                        Pad_35F8[0x18];                                    // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteUI.AthenaChallengeListVisualOptions
struct FAthenaChallengeListVisualOptions
{
public:
	bool                                         bHideHeaders;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideCompletionRewards;                            // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideQuestRewards;                                 // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCompactActionInfo;                             // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideLockedQuests;                                 // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideCompletedQuests;                              // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowOnlyCurentBundleLevelChallenges;              // 0x6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSortCompletedToEnd;                               // 0x7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreviewBundleLevel;                                // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.QuestEntryVisualData
struct FQuestEntryVisualData
{
public:
	TSubclassOf<class UAthenaChallengeListEntryBase> EntryClass;                                        // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreAllocationCount;                                // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35F9[0x4];                                     // Fixing Size Of Struct..
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.QuestRecapData
struct FQuestRecapData
{
public:
	TWeakObjectPtr<class UFortQuestItem>         QuestItem;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastKnownMcpValue;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AchivedCount;                                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredCount;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct FortniteUI.AthenaFeatTimelineDisplayData
struct FAthenaFeatTimelineDisplayData : public FTableRowBase
{
public:
	struct FGameplayTag                          FeatChallengeBundleTag;                            // 0x8(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35FA[0x4];                                     // Fixing Size After Last Property..
	class FText                                  SeasonText;                                        // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color1;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color2;                                            // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.LevelEffectsData
struct FLevelEffectsData
{
public:
	int32                                        MinPlayerLevel;                                    // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ContentColor;                                      // 0x4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OutlineColor;                                      // 0x14(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35FB[0x4];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UObject>                FlameDisplayObject;                                // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.FortEmotePickerCategory
struct FFortEmotePickerCategory
{
public:
	uint8                                        Pad_35FC[0x28];                                    // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortEmotePickerSubCategoryIdentifier
struct FFortEmotePickerSubCategoryIdentifier
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35FD[0x4];                                     // Fixing Size After Last Property..
	class FText                                  Name;                                              // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.GenericAction
struct FGenericAction
{
public:
	uint8                                        Pad_35FE[0x28];                                    // Fixing Size Of Struct..
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct FortniteUI.SquadComsNPCCommandEntry
struct FSquadComsNPCCommandEntry
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_35FF[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           Brush;                                             // 0x20(0xC0)(Edit, NativeAccessSpecifierPublic)
	enum class EPingCommandType                  CommandType;                                       // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3600[0x7];                                     // Fixing Size After Last Property..
	class USoundBase*                            ConfirmSound;                                      // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct FortniteUI.SquadComsQuickChatEntry
struct FSquadComsQuickChatEntry
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_3601[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           Brush;                                             // 0x20(0xC0)(Edit, NativeAccessSpecifierPublic)
	enum class EFortWorldMarkerType              MarkerType;                                        // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3602[0xF];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.FortSquadComsPickerCategory
struct FFortSquadComsPickerCategory
{
public:
	uint8                                        Pad_3603[0x28];                                    // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortSquadComsPickerSubCategoryIdentifier
struct FFortSquadComsPickerSubCategoryIdentifier
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3604[0x4];                                     // Fixing Size After Last Property..
	class FText                                  Name;                                              // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.AthenaItemShopSectionData
struct FAthenaItemShopSectionData
{
public:
	uint8                                        Pad_3605[0x50];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.BarrierObjectState
struct FBarrierObjectState
{
public:
	class UAthenaBarrierObjective*               ObjectiveActor;                                    // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TeamNum;                                           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBarrierFoodTeam                  FoodTeam;                                          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBarrierObjectiveDamageState      DamageState;                                       // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3606[0x5];                                     // Fixing Size Of Struct..
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteUI.BattleLabDisplayData
struct FBattleLabDisplayData
{
public:
	class FText                                  TitleText;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DescriptionText;                                   // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EBattleLabAlertType               AlertType;                                         // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3607[0x3];                                     // Fixing Size After Last Property..
	int32                                        RewardCount;                                       // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RewardCountTotal;                                  // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3608[0x4];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UTexture2D>             MainIconTexture;                                   // 0x40(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.AthenaBossHealthData
struct FAthenaBossHealthData
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowShields;                                      // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3609[0x6];                                     // Fixing Size After Last Property..
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Health;                                            // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HealthMax;                                         // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Shields;                                           // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShieldsMax;                                        // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.CobaltPlayerPortraitIndexInfo
struct FCobaltPlayerPortraitIndexInfo
{
public:
	TArray<int32>                                PortraitIndexArray;                                // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteUI.SurvivalObjectiveIconData
struct FSurvivalObjectiveIconData
{
public:
	int32                                        IconIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESurvivalObjectiveIconState       IconState;                                         // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESurvivalObjectiveIconState       PrevIconState;                                     // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_360A[0x2];                                     // Fixing Size After Last Property..
	class FName                                  SpecialActorID;                                    // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.SurvivalObjectiveText
struct FSurvivalObjectiveText
{
public:
	TArray<class FString>                        SafezoneStateText;                                 // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.DiscoCaptureUIData
struct FDiscoCaptureUIData
{
public:
	enum class EDiscoCaptureUIState              CurrDisplayState;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_360B[0x7];                                     // Fixing Size After Last Property..
	class UAthenaCapturePoint*                   CapturePoint;                                      // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerPawnAthena*                 CurrPawn;                                          // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              CurrMID;                                           // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FillAmount;                                        // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_360C[0x4];                                     // Fixing Size After Last Property..
	class FText                                  DisplayText;                                       // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.DiscoCaptureIconData
struct FDiscoCaptureIconData
{
public:
	enum class EDiscoCaptureIconState            CurrIconState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDiscoCaptureProgressState        CurrProgressState;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_360D[0x2];                                     // Fixing Size After Last Property..
	float                                        CurrCapturePercent;                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaCapturePoint*                   CapturePoint;                                      // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.DiscoTeamScoreData
struct FDiscoTeamScoreData
{
public:
	class FText                                  CurrScoreText;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        CurrScorePercent;                                  // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrScore;                                         // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x17 (0x18 - 0x1)
// ScriptStruct FortniteUI.GGCenterDisplayEntry
struct FGGCenterDisplayEntry : public FFortChangeMonitoringStruct
{
public:
	uint8                                        Pad_360E[0x7];                                     // Fixing Size After Last Property..
	class UFortWeaponItemDefinition*             WeaponAt;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayersAtWeapon;                                   // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowHarvestingTool;                               // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_360F[0x2];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.HeistBlingIconData
struct FHeistBlingIconData
{
public:
	int32                                        IconIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHeistBlingIconState              IconState;                                         // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHeistBlingIconState              PrevIconState;                                     // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3610[0x2];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.HeistExitCraftIconData
struct FHeistExitCraftIconData
{
public:
	int32                                        IconIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHeistExitCraftIconState          IconState;                                         // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHeistExitCraftIconState          PrevIconState;                                     // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3611[0x2];                                     // Fixing Size After Last Property..
	int32                                        SecondsUntilIncoming;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTeamHasBling;                                     // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3612[0x3];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortCountdownSounds
struct FFortCountdownSounds
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartTime;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StopTime;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOutTime;                                       // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayed;                                           // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3613[0x3];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       PlayInstance;                                      // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.PerkPipData
struct FPerkPipData
{
public:
	class UFortAccoladeItemDefinition*           AccoladeItemDef;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumOfPips;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3614[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.SoundThreshold
struct FSoundThreshold
{
public:
	class USoundCue*                             SoundCue;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Threshold;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3615[0x4];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.TDMTeamScoreData
struct FTDMTeamScoreData
{
public:
	class FText                                  CurrScoreText;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        CurrScorePercent;                                  // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrScore;                                         // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.WaxPlacementData
struct FWaxPlacementData
{
public:
	int32                                        Placement;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3616[0x4];                                     // Fixing Size After Last Property..
	class FString                                PlayerName;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CoinCount;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlayer;                                         // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3617[0x3];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.GoalsPageCategoryTabData
struct FGoalsPageCategoryTabData
{
public:
	class UObject*                               TabDisplayAsset;                                   // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTag                          IncludeTag;                                        // 0x20(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3618[0x4];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.SelectedChallengesData
struct FSelectedChallengesData
{
public:
	uint8                                        Pad_3619[0x10];                                    // Fixing Size After Last Property..
	bool                                         bIsCompleted;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLocked;                                         // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasIconOverride;                                  // 0x12(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_361A[0x1];                                     // Fixing Size After Last Property..
	float                                        Progress;                                          // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumObjectivesCompleted;                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumObjectives;                                     // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.DisabledQuestData
struct FDisabledQuestData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct FortniteUI.StatGroupData
struct FStatGroupData
{
public:
	class FText                                  GroupName;                                         // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_361B[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           Group;                                             // 0x20(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0xE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChartValue;                                        // 0xE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChartOrigionalValue;                               // 0xE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_361C[0x4];                                     // Fixing Size Of Struct..
};

// 0x88 (0x88 - 0x0)
// ScriptStruct FortniteUI.AthenaTeamDisplayInfo
struct FAthenaTeamDisplayInfo
{
public:
	TSoftObjectPtr<class UObject>                Icon;                                              // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                Ribbon;                                            // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextColor;                                         // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PedestalColor;                                     // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.ActionBindingIconPicker
struct FActionBindingIconPicker
{
public:
	TArray<class FName>                          ActionNames;                                       // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UPaperSprite*                          Sprite;                                            // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.ActionBindingVisibility
struct FActionBindingVisibility
{
public:
	TArray<class FName>                          ActionNames;                                       // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EActionBindingComparisonType      ComparisonType;                                    // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  Visibility;                                        // 0x11(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_361D[0x6];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.GameplayMessageVisibility
struct FGameplayMessageVisibility
{
public:
	struct FEventMessageTag                      EventMessageTag;                                   // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  MessageReceivedVisibility;                         // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  MessageStateClearedVisibility;                     // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_361E[0x2];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.HUDWidgetRegistryEntry
struct FHUDWidgetRegistryEntry
{
public:
	struct FGameplayTag                          HUDWidgetTag;                                      // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMandatory;                                      // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_361F[0x3];                                     // Fixing Size After Last Property..
	float                                        MandatoryOnScreenPercent;                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumAmountOfInstances;                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZOrder;                                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasDynamicUIUniqueID;                             // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3620[0x3];                                     // Fixing Size After Last Property..
	class FName                                  DynamicUIUniqueID;                                 // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3621[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UFortMobileHUDElement>     HUDWidgetClass;                                    // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortMobileHUDElementProxy> HUDWidgetProxyClass;                               // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHUDLayoutToolV2_WidgetPreview> HUDWidgetPreviewClass;                             // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortMobileHUDWidgetCustomPropertyModel*> CustomPropertyModels;                              // 0x38(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.HUDWidgetBehaviorRegistryEntry
struct FHUDWidgetBehaviorRegistryEntry
{
public:
	struct FGameplayTag                          HUDWidgetBehaviorTag;                              // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          HUDWidgetOverrideTag;                              // 0x4(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHUDWidgetBehavior>        HUDWidgetBehaviorClass;                            // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.HUDWidgetSchemaInitializer
struct FHUDWidgetSchemaInitializer
{
public:
	uint8                                        Pad_3622[0x10];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.HUDWidgetBehaviorExtensionsRegistryEntry
struct FHUDWidgetBehaviorExtensionsRegistryEntry
{
public:
	struct FGameplayTag                          HUDWidgetBehaviorTag;                              // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3623[0x4];                                     // Fixing Size After Last Property..
	TArray<TSubclassOf<class UFortMobileHUDWidgetBehaviorExtension>> HUDWidgetBehaviorExtensions;                       // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.HUDWidgetException
struct FHUDWidgetException
{
public:
	struct FHUDWidgetBehaviorRegistryEntry       HUDWidgetBehaviorRegistryEntry;                    // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                CVarEnabler;                                       // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.TouchInteractionIconOverride
struct FTouchInteractionIconOverride
{
public:
	TSoftObjectPtr<class UTexture2D>             IconOverride;                                      // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IconScale;                                         // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3624[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.ButtonInteractionPair
struct FButtonInteractionPair
{
public:
	class UActor*                                TrackedInteraction;                                // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTouchInteractionButton*           TrackedButton;                                     // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.UserAction
struct FUserAction
{
public:
	uint8                                        Pad_3625[0x8];                                     // Fixing Size After Last Property..
	class FString                                ActionName;                                        // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x58 - 0x18)
// ScriptStruct FortniteUI.UserGenericAction
struct FUserGenericAction : public FUserAction
{
public:
	struct FFortMobileHUDProfileBase             ActiveProfile;                                     // 0x18(0x40)(NativeAccessSpecifierPublic)
};

// 0x20 (0x38 - 0x18)
// ScriptStruct FortniteUI.UserRenameAction
struct FUserRenameAction : public FUserAction
{
public:
	class FString                                PreviousName;                                      // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewName;                                           // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x98 - 0x18)
// ScriptStruct FortniteUI.UserSelectProfileAction
struct FUserSelectProfileAction : public FUserAction
{
public:
	struct FFortMobileHUDProfileBase             PreviousProfile;                                   // 0x18(0x40)(NativeAccessSpecifierPublic)
	struct FFortMobileHUDProfileBase             NewProfile;                                        // 0x58(0x40)(NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.HUDLayoutToolV2_ButtonStateColor
struct FHUDLayoutToolV2_ButtonStateColor
{
public:
	struct FSlateColor                           TextColor;                                         // 0x0(0x14)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          IconColor;                                         // 0x14(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0x24(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IconAngle;                                         // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.LinkAcrossNumericalIndicatorActionSymbol
struct FLinkAcrossNumericalIndicatorActionSymbol
{
public:
	enum class ENumericalIndicatorActionType     ActionType;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3626[0x7];                                     // Fixing Size After Last Property..
	class FText                                  ActionSymbol;                                      // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          ActionColor;                                       // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.SimpleActionMessages
struct FSimpleActionMessages
{
public:
	enum class ELinkAcrossSimpleAction           SimpleActionType;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3627[0x7];                                     // Fixing Size After Last Property..
	class FText                                  SimpleActionTitle;                                 // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  SimpleActionBody;                                  // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteUI.HUDLayoutToolV2_PopupContent
struct FHUDLayoutToolV2_PopupContent
{
public:
	enum class EHUDLayoutToolPopupType           PopupType;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3628[0x7];                                     // Fixing Size After Last Property..
	class FText                                  TitleText;                                         // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DescriptionText;                                   // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ButtonConfirmText;                                 // 0x38(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ButtonCancelText;                                  // 0x50(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.QuickbarProxySlotIconContainer
struct FQuickbarProxySlotIconContainer
{
public:
	TArray<class UPaperSprite*>                  SlotIcons;                                         // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteUI.HUDLayoutToolV2_TextInputPopupContent
struct FHUDLayoutToolV2_TextInputPopupContent
{
public:
	enum class EHUDLayoutToolTextInputPopupType  PopupType;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3629[0x7];                                     // Fixing Size After Last Property..
	class FText                                  TitleText;                                         // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DescriptionText;                                   // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ButtonConfirmText;                                 // 0x38(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ButtonCancelText;                                  // 0x50(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.HUDLayoutToolV2_ToastNotificationContent
struct FHUDLayoutToolV2_ToastNotificationContent
{
public:
	enum class EHUDLayoutToolToasterType         ToasterType;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_362A[0x7];                                     // Fixing Size After Last Property..
	class FText                                  TitleText;                                         // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DescriptionText;                                   // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.FortMobileContextFilter
struct FFortMobileContextFilter
{
public:
	struct FGameplayTagContainer                 ShownInContexts;                                   // 0x0(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 HiddenInContexts;                                  // 0x20(0x20)(Edit, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortMobileHUDContextLayout
struct FFortMobileHUDContextLayout
{
public:
	uint8                                        Pad_362B[0x10];                                    // Fixing Size After Last Property..
	class UFortMobileHUDContextModel*            HUDContextModel;                                   // 0x10(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_362C[0x8];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.FortMobileHUDContextModelExtension
struct FFortMobileHUDContextModelExtension
{
public:
	struct FGameplayTag                          ContextLayoutTag;                                  // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_362D[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 UseableHUDWidgetTags;                              // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.FortMobileHUDLayoutProfile
struct FFortMobileHUDLayoutProfile
{
public:
	class FText                                  ProfileName;                                       // 0x0(0x18)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FFortMobileHUDContextLayout>   ContextLayouts;                                    // 0x18(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_362E[0x18];                                    // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteUI.FortMobileHUDWidgetLayout
struct FFortMobileHUDWidgetLayout
{
public:
	struct FAnchorData                           LayoutData;                                        // 0x0(0x40)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	int32                                        ZOrder;                                            // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_362F[0x14];                                    // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortMaterialProgressBarSectionStyle
struct FFortMaterialProgressBarSectionStyle
{
public:
	bool                                         bGradientBar;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3630[0x3];                                     // Fixing Size After Last Property..
	class FName                                  BarParamName;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BarColorOneParamName;                              // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BarColorTwoParamName;                              // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BarColorOne;                                       // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BarColorTwo;                                       // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct FortniteUI.FortMaterialProgressBarSectionInfo
struct FFortMaterialProgressBarSectionInfo
{
public:
	struct FFortMaterialProgressBarSectionStyle  SectionStyle;                                      // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Percent;                                           // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.AthenaSubscriptionProgressiveInfo
struct FAthenaSubscriptionProgressiveInfo
{
public:
	TArray<class FText>                          InfoModalEntries;                                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  NewStagesUnlockFinePrint;                          // 0x10(0x18)(NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.SubscriptionModalInfo
struct FSubscriptionModalInfo
{
public:
	class FString                                ModalId;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAppStore                         PlatformId;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3631[0x7];                                     // Fixing Size After Last Property..
	TArray<class FText>                          Entries;                                           // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                QrCodeImage;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.SubscriptionModals
struct FSubscriptionModals
{
public:
	TArray<struct FSubscriptionModalInfo>        Modals;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.CrewTileImages
struct FCrewTileImages
{
public:
	class FString                                TileImageURL;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NextTileImageURL;                                  // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteUI.BattlePassPurchaseData
struct FBattlePassPurchaseData
{
public:
	class FString                                BattlePassPurchaseBackgroundURL;                   // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  BattlePassPurchaseDisclaimer;                      // 0x10(0x18)(NativeAccessSpecifierPublic)
	class FText                                  BattlePassScreenDisclaimer;                        // 0x28(0x18)(NativeAccessSpecifierPublic)
	class FText                                  BattlePassPurchaseLevelDisclaimer;                 // 0x40(0x18)(NativeAccessSpecifierPublic)
	class FText                                  BattlePassPurchaseDescription;                     // 0x58(0x18)(NativeAccessSpecifierPublic)
	class FString                                BattlePassPurchaseConfirmBackgroundURL;            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCrewTileImages                       BattlePassTileImages;                              // 0x80(0x20)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.CrewDefaultData
struct FCrewDefaultData
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(NativeAccessSpecifierPublic)
	class FString                                BackgroundURL;                                     // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteUI.CrewTileDetailsData
struct FCrewTileDetailsData
{
public:
	class FString                                TileImageURL;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x10(0x18)(NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(NativeAccessSpecifierPublic)
	enum class ECrewDetailsTag                   Tag;                                               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3632[0x7];                                     // Fixing Size After Last Property..
	class FString                                BackgroundImageURL;                                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteUI.CrewTileDataBasic
struct FCrewTileDataBasic
{
public:
	uint8                                        Pad_3633[0x8];                                     // Fixing Size After Last Property..
	enum class ECrewTileType                     TileType;                                          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3634[0x7];                                     // Fixing Size After Last Property..
	class FText                                  TileLabel;                                         // 0x10(0x18)(NativeAccessSpecifierPublic)
	struct FCrewTileDetailsData                  Details;                                           // 0x28(0x58)(NativeAccessSpecifierPublic)
};

// 0x0 (0x80 - 0x80)
// ScriptStruct FortniteUI.CrewTileDataBattlePass
struct FCrewTileDataBattlePass : public FCrewTileDataBasic
{
public:
};

// 0x80 (0x100 - 0x80)
// ScriptStruct FortniteUI.CrewTileDataCrewPack
struct FCrewTileDataCrewPack : public FCrewTileDataBasic
{
public:
	TArray<class FString>                        CrewPackItems;                                     // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bHasNextCrewPackDetails;                           // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3635[0x7];                                     // Fixing Size After Last Property..
	struct FCrewTileDetailsData                  NextDetails;                                       // 0x98(0x58)(NativeAccessSpecifierPublic)
	TArray<class FString>                        NextCrewPackItems;                                 // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x80 - 0x80)
// ScriptStruct FortniteUI.CrewTileDataProgressiveCosmetic
struct FCrewTileDataProgressiveCosmetic : public FCrewTileDataBasic
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.CrewBenefits
struct FCrewBenefits
{
public:
	uint8                                        Pad_3636[0x20];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.CrewSubscriptionStateModal
struct FCrewSubscriptionStateModal
{
public:
	enum class EMcpSubscriptionState             SubscriptionState;                                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3637[0x7];                                     // Fixing Size After Last Property..
	TArray<class FText>                          BulletPoints;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.CrewPlatformAndCountriesPair
struct FCrewPlatformAndCountriesPair
{
public:
	enum class EAppStore                         SubscriptionPlatform;                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3638[0x7];                                     // Fixing Size After Last Property..
	class FString                                CountryCodes;                                      // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.CrewTableRow
struct FCrewTableRow
{
public:
	TArray<class FText>                          RowData;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsHeaderRow;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3639[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.CrewPlatformTable
struct FCrewPlatformTable
{
public:
	enum class EAppStore                         SubscriptionPlatform;                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_363A[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FCrewTableRow>                 TableRows;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct FortniteUI.CrewPlatformAndCountriesNotificationModal
struct FCrewPlatformAndCountriesNotificationModal
{
public:
	class FString                                NotificationId;                                    // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCrewPlatformAndCountriesPair> ValidPlatformAndCountriesPairs;                    // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x20(0x18)(NativeAccessSpecifierPublic)
	class FText                                  DefaultBodyText;                                   // 0x38(0x18)(NativeAccessSpecifierPublic)
	class FText                                  BodyTextIfSubscriptionCanceled;                    // 0x50(0x18)(NativeAccessSpecifierPublic)
	class FText                                  BodyTextIfNoBodyTable;                             // 0x68(0x18)(NativeAccessSpecifierPublic)
	class FText                                  BodyTextIfNoBodyTableAndSubscriptionCanceled;      // 0x80(0x18)(NativeAccessSpecifierPublic)
	struct FDateTime                             EffectiveDate;                                     // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCrewPlatformTable>            PlatformSpecificBodyTables;                        // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  CheckboxText;                                      // 0xB0(0x18)(NativeAccessSpecifierPublic)
	class FText                                  DefaultConfirmButtonText;                          // 0xC8(0x18)(NativeAccessSpecifierPublic)
	class FText                                  ConfirmButtonTextIfSubscriptionCanceled;           // 0xE0(0x18)(NativeAccessSpecifierPublic)
	class FText                                  CancelSubscriptionButtonText;                      // 0xF8(0x18)(NativeAccessSpecifierPublic)
	class FText                                  MoreInfoText;                                      // 0x110(0x18)(NativeAccessSpecifierPublic)
	class FText                                  MoreInfoUrl;                                       // 0x128(0x18)(NativeAccessSpecifierPublic)
	struct FDateTime                             NotificationStartDate;                             // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             NotificationEndDate;                               // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.CrewModals
struct FCrewModals
{
public:
	TArray<struct FCrewSubscriptionStateModal>   CancellationInfoErrorStateModals;                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCrewPlatformAndCountriesNotificationModal> PlatformAndCountriesNotificationModals;            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteUI.CrewItemShopTileData
struct FCrewItemShopTileData
{
public:
	class FText                                  ViolatorText;                                      // 0x0(0x18)(NativeAccessSpecifierPublic)
	enum class EViolatorIntensity                ViolatorIntensity;                                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_363B[0x7];                                     // Fixing Size After Last Property..
	class FText                                  NextViolatorText;                                  // 0x20(0x18)(NativeAccessSpecifierPublic)
	enum class EViolatorIntensity                NextViolatorIntensity;                             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_363C[0x7];                                     // Fixing Size After Last Property..
	struct FCrewTileImages                       ItemShopTileImages;                                // 0x40(0x20)(NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct FortniteUI.CrewScreenData
struct FCrewScreenData
{
public:
	class FText                                  CrewDisclaimer;                                    // 0x0(0x18)(NativeAccessSpecifierPublic)
	struct FCrewDefaultData                      DefaultData;                                       // 0x18(0x40)(NativeAccessSpecifierPublic)
	struct FCrewBenefits                         Benefits;                                          // 0x58(0x20)(NativeAccessSpecifierPublic)
	struct FCrewModals                           CrewModals;                                        // 0x78(0x20)(NativeAccessSpecifierPublic)
	struct FCrewItemShopTileData                 ItemShopTileData;                                  // 0x98(0x60)(NativeAccessSpecifierPublic)
	struct FAthenaSubscriptionProgressiveInfo    ProgressiveInfo;                                   // 0xF8(0x28)(NativeAccessSpecifierPublic)
	struct FSubscriptionModals                   SubModals;                                         // 0x120(0x10)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.ImageRef
struct FImageRef
{
public:
	int32                                        Width;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct FortniteUI.AthenaMOTDBase
struct FAthenaMOTDBase
{
public:
	uint8                                        Pad_363D[0x8];                                     // Fixing Size After Last Property..
	enum class EAthenaNewsEntryType              EntryType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_363E[0x7];                                     // Fixing Size After Last Property..
	class FString                                Title;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Body;                                              // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FImageRef>                     Images;                                            // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FImageRef>                     TileImages;                                        // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FColor                                CustomDarkColor;                                   // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                CustomLightColor;                                  // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AdSpace;                                           // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TabTitleOverride;                                  // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ButtonTextOverride;                                // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasCustomColor;                                   // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFtueMotd;                                       // 0x89(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_363F[0x46];                                    // Fixing Size Of Struct..
};

// 0x0 (0xD0 - 0xD0)
// ScriptStruct FortniteUI.SmallNewsMOTD
struct FSmallNewsMOTD : public FAthenaMOTDBase
{
public:
};

// 0x18 (0xE8 - 0xD0)
// ScriptStruct FortniteUI.ItemMOTD
struct FItemMOTD : public FAthenaMOTDBase
{
public:
	uint8                                        Pad_3640[0x18];                                    // Fixing Size Of Struct..
};

// 0x18 (0xE8 - 0xD0)
// ScriptStruct FortniteUI.NavigateToTabMOTD
struct FNavigateToTabMOTD : public FAthenaMOTDBase
{
public:
	uint8                                        Pad_3641[0x18];                                    // Fixing Size Of Struct..
};

// 0x20 (0xF0 - 0xD0)
// ScriptStruct FortniteUI.SettingsMOTD
struct FSettingsMOTD : public FAthenaMOTDBase
{
public:
	uint8                                        Pad_3642[0x20];                                    // Fixing Size Of Struct..
};

// 0x10 (0xE0 - 0xD0)
// ScriptStruct FortniteUI.ChallengeMOTD
struct FChallengeMOTD : public FAthenaMOTDBase
{
public:
	uint8                                        Pad_3643[0x10];                                    // Fixing Size Of Struct..
};

// 0x20 (0xF0 - 0xD0)
// ScriptStruct FortniteUI.WebsiteMOTD
struct FWebsiteMOTD : public FAthenaMOTDBase
{
public:
	uint8                                        Pad_3644[0x20];                                    // Fixing Size Of Struct..
};

// 0x10 (0xE0 - 0xD0)
// ScriptStruct FortniteUI.SpatialScreenMOTD
struct FSpatialScreenMOTD : public FAthenaMOTDBase
{
public:
	uint8                                        Pad_3645[0x10];                                    // Fixing Size Of Struct..
};

// 0x28 (0xF8 - 0xD0)
// ScriptStruct FortniteUI.NavigateToBattlePassSubPageMOTD
struct FNavigateToBattlePassSubPageMOTD : public FAthenaMOTDBase
{
public:
	uint8                                        Pad_3646[0x28];                                    // Fixing Size Of Struct..
};

// 0x30 (0x100 - 0xD0)
// ScriptStruct FortniteUI.CreativeMOTD
struct FCreativeMOTD : public FAthenaMOTDBase
{
public:
	uint8                                        Pad_3647[0x30];                                    // Fixing Size Of Struct..
};

// 0x8 (0xD8 - 0xD0)
// ScriptStruct FortniteUI.NavigateToSubscriptionSubPageMOTD
struct FNavigateToSubscriptionSubPageMOTD : public FAthenaMOTDBase
{
public:
	uint8                                        Pad_3648[0x8];                                     // Fixing Size Of Struct..
};

// 0x8 (0xD8 - 0xD0)
// ScriptStruct FortniteUI.NavigateToSocialMenuMOTD
struct FNavigateToSocialMenuMOTD : public FAthenaMOTDBase
{
public:
	uint8                                        Pad_3649[0x8];                                     // Fixing Size Of Struct..
};

// 0x0 (0xD0 - 0xD0)
// ScriptStruct FortniteUI.NavigateToSocialTagsSubPageMOTD
struct FNavigateToSocialTagsSubPageMOTD : public FAthenaMOTDBase
{
public:
};

// 0x0 (0xD0 - 0xD0)
// ScriptStruct FortniteUI.NavigateToRebootRallySubPageMOTD
struct FNavigateToRebootRallySubPageMOTD : public FAthenaMOTDBase
{
public:
};

// 0x8 (0xD8 - 0xD0)
// ScriptStruct FortniteUI.EventMOTD
struct FEventMOTD : public FAthenaMOTDBase
{
public:
	uint8                                        Pad_364A[0x8];                                     // Fixing Size Of Struct..
};

// 0x20 (0xF0 - 0xD0)
// ScriptStruct FortniteUI.DiscoveryMOTD
struct FDiscoveryMOTD : public FAthenaMOTDBase
{
public:
	uint8                                        Pad_364B[0x20];                                    // Fixing Size Of Struct..
};

// 0x10 (0xE0 - 0xD0)
// ScriptStruct FortniteUI.NavigateToCompetitiveSubPageMOTD
struct FNavigateToCompetitiveSubPageMOTD : public FAthenaMOTDBase
{
public:
	uint8                                        Pad_364C[0x10];                                    // Fixing Size Of Struct..
};

// 0x8 (0xD8 - 0xD0)
// ScriptStruct FortniteUI.NavigateToMapSubPageMOTD
struct FNavigateToMapSubPageMOTD : public FAthenaMOTDBase
{
public:
	uint8                                        Pad_364D[0x8];                                     // Fixing Size Of Struct..
};

// 0x0 (0xD0 - 0xD0)
// ScriptStruct FortniteUI.NavigateToHabaneroSubPageMOTD
struct FNavigateToHabaneroSubPageMOTD : public FAthenaMOTDBase
{
public:
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.AthenaMessageEntry
struct FAthenaMessageEntry
{
public:
	class FString                                Title;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Body;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Image;                                             // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Type;                                              // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AdSpace;                                           // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.AthenaEmergencyNotice
struct FAthenaEmergencyNotice
{
public:
	class FString                                Title;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Body;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_364E[0x20];                                    // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.AthenaSpectatorUITeamEntry
struct FAthenaSpectatorUITeamEntry
{
public:
	uint8                                        Pad_364F[0x20];                                    // Fixing Size Of Struct..
};

// 0x1F8 (0x1F8 - 0x0)
// ScriptStruct FortniteUI.ShowdownTournamentData
struct FShowdownTournamentData
{
public:
	class FString                                Tournament_Display_Id;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title_Line_1;                                      // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Title_Line_2;                                      // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Schedule_Info;                                     // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                Poster_Front_Image;                                // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Poster_Back_Image;                                 // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Flavor_Description;                                // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Details_Description;                               // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Short_Format_Title;                                // 0xA8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Long_Format_Title;                                 // 0xC0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Background_Title;                                  // 0xD8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Pin_Score_Requirement;                             // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3650[0x4];                                     // Fixing Size After Last Property..
	class FText                                  Pin_Earned_Text;                                   // 0xF8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          Base_Color;                                        // 0x110(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Primary_Color;                                     // 0x120(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Secondary_Color;                                   // 0x130(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Highlight_Color;                                   // 0x140(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Title_Color;                                       // 0x150(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Shadow_Color;                                      // 0x160(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Background_Left_Color;                             // 0x170(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Background_Right_Color;                            // 0x180(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Background_Text_Color;                             // 0x190(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Poster_Fade_Color;                                 // 0x1A0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Playlist_Tile_Image;                               // 0x1B0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Loading_Screen_Image;                              // 0x1C0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Style_Info_Id;                                     // 0x1D0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Alert_Text;                                        // 0x1E0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortTournamentAlertType          AlertType;                                         // 0x1F0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3651[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.ShowdownTournamentJsonObject
struct FShowdownTournamentJsonObject
{
public:
	TArray<struct FShowdownTournamentData>       Tournaments;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.ShowdownTournamentSource
struct FShowdownTournamentSource
{
public:
	struct FShowdownTournamentJsonObject         Tournament_Info;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                _title;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                _locale;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct FortniteUI.FortShowdownScoringRuleDisplayInfo
struct FFortShowdownScoringRuleDisplayInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3652[0x4];                                     // Fixing Size After Last Property..
	class FText                                  Description;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  PosterDescription;                                 // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  PosterIntervalDescription;                         // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x50(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowScoreToastNotifications;                      // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3653[0x7];                                     // Fixing Size Of Struct..
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteUI.SubgameDisplayData
struct FSubgameDisplayData
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  SpecialMessage;                                    // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  StandardMessageLine1;                              // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  StandardMessageLine2;                              // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                Image;                                             // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E8 (0x1E8 - 0x0)
// ScriptStruct FortniteUI.SubgameScreenSource
struct FSubgameScreenSource
{
public:
	class FString                                _title;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                __locale;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubgameDisplayData                   Creative;                                          // 0x20(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSubgameDisplayData                   SaveTheWorld;                                      // 0xB8(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSubgameDisplayData                   BattleRoyale;                                      // 0x150(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteUI.CreativeAdData
struct FCreativeAdData
{
public:
	class FString                                Header;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Sub_Header;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Creator_Name;                                      // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Island_Code;                                       // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCreativeAdType               Ad_Type;                                           // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCreativeAdColorPreset        Ad_Color_Preset;                                   // 0x51(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3654[0x6];                                     // Fixing Size After Last Property..
	class FString                                Image;                                             // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.CreativeAdJsonObject
struct FCreativeAdJsonObject
{
public:
	TArray<struct FCreativeAdData>               Ads;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.CreativeAdSource
struct FCreativeAdSource
{
public:
	class FString                                _title;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                __locale;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreativeAdJsonObject                 Ad_Info;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.DynamicBackground
struct FDynamicBackground
{
public:
	class FString                                _title;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                __locale;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicBackgroudKey              Key;                                               // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3655[0x7];                                     // Fixing Size After Last Property..
	class FString                                BackgroundImage;                                   // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Stage;                                             // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.DynamicBackgrounds
struct FDynamicBackgrounds
{
public:
	TArray<struct FDynamicBackground>            Backgrounds;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.DynamicBackgroundsSource
struct FDynamicBackgroundsSource
{
public:
	class FString                                _title;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                __locale;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastModified;                                      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicBackgrounds                   Backgrounds;                                       // 0x30(0x10)(NativeAccessSpecifierPublic)
};

// 0x268 (0x268 - 0x0)
// ScriptStruct FortniteUI.CmsJsonMessages
struct FCmsJsonMessages
{
public:
	class FString                                _title;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                _locale;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShowdownTournamentSource             TournamentInformation;                             // 0x20(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSubgameScreenSource                  SubGameInfo;                                       // 0x50(0x1E8)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FCreativeAdSource                     CreativeAds;                                       // 0x238(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteUI.AthenaShopCarouselItem
struct FAthenaShopCarouselItem
{
public:
	class FText                                  PreviewTitle;                                      // 0x0(0x18)(NativeAccessSpecifierPublic)
	class FText                                  FullTitle;                                         // 0x18(0x18)(NativeAccessSpecifierPublic)
	class FString                                TileImage;                                         // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VideoString;                                       // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OfferID;                                           // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LandingPriority;                                   // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemShopNavigationAction         Action;                                            // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3656[0x2];                                     // Fixing Size Of Struct..
};

// 0x88 (0x88 - 0x0)
// ScriptStruct FortniteUI.AthenaShopSection
struct FAthenaShopSection
{
public:
	class FName                                  SectionID;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3657[0x4];                                     // Fixing Size After Last Property..
	class FText                                  SectionDisplayName;                                // 0x8(0x18)(NativeAccessSpecifierPublic)
	bool                                         bSortOffersByOwnership;                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowIneligibleOffers;                             // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowIneligibleOffersIfGiftable;                   // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTimer;                                        // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableToastNotification;                          // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3658[0x3];                                     // Fixing Size After Last Property..
	int32                                        LandingPriority;                                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3659[0x4];                                     // Fixing Size After Last Property..
	struct FDynamicBackground                    SectionBackground;                                 // 0x30(0x48)(NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_365A[0x7];                                     // Fixing Size After Last Property..
	struct FDateTime                             DateToResetItemShopLanding;                        // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.PlatformPurchaseErrorCodeMessage
struct FPlatformPurchaseErrorCodeMessage
{
public:
	class FString                                ErrorCode;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x10(0x18)(NativeAccessSpecifierPublic)
	TArray<class FText>                          Messages;                                          // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.PlatformPurchaseErrorCodeMessages
struct FPlatformPurchaseErrorCodeMessages
{
public:
	TArray<struct FPlatformPurchaseErrorCodeMessage> ErrorCodeMessageList;                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.PlatformPurchaseMessaging
struct FPlatformPurchaseMessaging
{
public:
	struct FPlatformPurchaseErrorCodeMessages    ErrorCodeMessages;                                 // 0x0(0x10)(NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteUI.AthenaShopSpecialOffer
struct FAthenaShopSpecialOffer
{
public:
	bool                                         bSpecialOfferEnabled;                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_365B[0x7];                                     // Fixing Size After Last Property..
	struct FVideoWidgetConfig                    SpecialOfferVideo;                                 // 0x8(0x98)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.SocialEventJSON
struct FSocialEventJSON
{
public:
	int32                                        Event_id;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_365C[0x4];                                     // Fixing Size After Last Property..
	class FText                                  Title;                                             // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FDateTime                             Starts_at_utc;                                     // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.SocialEventsJsonObject
struct FSocialEventsJsonObject
{
public:
	TArray<struct FSocialEventJSON>              Events;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.SocialEventsSource
struct FSocialEventsSource
{
public:
	class FString                                _title;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                __locale;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastModified;                                      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSocialEventsJsonObject               SocialEvents;                                      // 0x30(0x10)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortActivityImageCache
struct FFortActivityImageCache
{
public:
	uint8                                        Pad_365D[0x18];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortActivityImageRequest
struct FFortActivityImageRequest
{
public:
	TArray<class UFortGameActivity*>             GameActivities;                                    // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortActivityCompressedImageCache
struct FFortActivityCompressedImageCache
{
public:
	TArray<uint8>                                CompressedImage;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_365E[0x8];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.FortActivityImagePayload
struct FFortActivityImagePayload
{
public:
	uint8                                        Pad_365F[0x38];                                    // Fixing Size Of Struct..
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct FortniteUI.FortMissionRewardInfo
struct FFortMissionRewardInfo
{
public:
	struct FSlateBrush                           Icon;                                              // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0xC0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortItem*                             Item;                                              // 0xD8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMissionAlertReward;                             // 0xE0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3660[0xF];                                     // Fixing Size Of Struct..
};

// 0x170 (0x170 - 0x0)
// ScriptStruct FortniteUI.FortMissionDetails
struct FFortMissionDetails
{
public:
	enum class EFortTheaterMapTileType           TileType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3661[0x7];                                     // Fixing Size After Last Property..
	class FText                                  TheaterDisplayName;                                // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  MissionName;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  MissionDescription;                                // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsGroupContent;                                   // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3662[0x7];                                     // Fixing Size After Last Property..
	class UFortMissionGenerator*                 MissionDefinition;                                 // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ZoneName;                                          // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ZoneDescription;                                   // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  RegionThemeName;                                   // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USlateBrushAsset>       RegionThemeIcon;                                   // 0xA8(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DifficultyName;                                    // 0xD0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FFortMissionRewardInfo>        MissionRewards;                                    // 0xE8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimespan                             AvailableTime;                                     // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERatingsEnforcementType           RatingsEnforcement;                                // 0x100(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3663[0x3];                                     // Fixing Size After Last Property..
	int32                                        RequiredBaseRating;                                // 0x104(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RecommendedBaseRating;                             // 0x108(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxBaseRating;                                     // 0x10C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ContentDifficultyLevel;                            // 0x110(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOnboarding;                                     // 0x114(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3664[0x3];                                     // Fixing Size After Last Property..
	int32                                        LootLevel;                                         // 0x118(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideConningText;                              // 0x11C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3665[0x3];                                     // Fixing Size After Last Property..
	class FText                                  ConningOverrideText;                               // 0x120(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                TheaterUniqueId;                                   // 0x138(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortCloudSaveItemDefinition*          AssociatedCloudSaveItemDefinition;                 // 0x148(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortGameplayModifierItemDefinition*> GameplayModifiers;                                 // 0x150(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FText>                          Objectives;                                        // 0x160(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.UnlockableVariantPreviewInfo
struct FUnlockableVariantPreviewInfo
{
public:
	bool                                         bIsValid;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3666[0x3];                                     // Fixing Size After Last Property..
	int32                                        SetNumber;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SetCount;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3667[0x4];                                     // Fixing Size After Last Property..
	class FText                                  UnlockCondition;                                   // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortFrontEndFeatureStruct
struct FFortFrontEndFeatureStruct
{
public:
	enum class EFortFrontEndFeatureState         CurrentState;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontEndFeatureState         ForcedState;                                       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontEndFeatureStateReason   ForcedStateReason;                                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3668[0x5];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            ChangeDelegate;                                    // 0x8(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.ViewVaultItemsParams
struct FViewVaultItemsParams
{
public:
	TArray<class UFortItemDefinition*>           ItemsToView;                                       // 0x0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_3669[0x8];                                     // Fixing Size Of Struct..
};

// 0x4F0 (0x4F0 - 0x0)
// ScriptStruct FortniteUI.FortBasicMissionInfo
struct FFortBasicMissionInfo
{
public:
	class FText                                  MissionName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_366A[0x8];                                     // Fixing Size After Last Property..
	struct FFortMultiSizeBrush                   MissionIcons;                                      // 0x20(0x480)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  TheaterName;                                       // 0x4A0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DifficultyName;                                    // 0x4B8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UMediaSource*                          EndOfMissionMediaSource;                           // 0x4D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                          EndOfMissionMediaSourceStreamed;                   // 0x4D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipEndOfMissionVideo;                            // 0x4E0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGroupContent;                                   // 0x4E1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_366B[0xE];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortItemDelta
struct FFortItemDelta
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseAmount;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeltaAmount;                                       // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortItemListFilter
struct FFortItemListFilter
{
public:
	class FString                                SearchText;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortInventoryFilter              FilterType;                                        // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInStorageVault;                                   // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeVaultOverflow;                             // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_366C[0x5];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortPickerTemporaryWheelItem
struct FFortPickerTemporaryWheelItem
{
public:
	class FText                                  LabelOverride;                                     // 0x0(0x18)(NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   Item;                                              // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortPickerTemporaryWheel
struct FFortPickerTemporaryWheel
{
public:
	uint8                                        Pad_366D[0x20];                                    // Fixing Size After Last Property..
	TArray<struct FFortPickerTemporaryWheelItem> Items;                                             // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.TrackedTrapTimeAndCount
struct FTrackedTrapTimeAndCount
{
public:
	uint8                                        Pad_366E[0x8];                                     // Fixing Size Of Struct..
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteUI.StoreCallout
struct FStoreCallout
{
public:
	struct FFortToastDisplayInfo                 ToastDisplayInfo;                                  // 0x0(0x60)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ItemName;                                          // 0x60(0x18)(NativeAccessSpecifierPublic)
	class FText                                  ItemSet;                                           // 0x78(0x18)(NativeAccessSpecifierPublic)
	class FString                                OfferDisplayAssetPath;                             // 0x90(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteUI.CardPackOffer
struct FCardPackOffer
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        MtxPrice;                                          // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECatalogSaleType                  SaleType;                                          // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_366F[0x3];                                     // Fixing Size After Last Property..
	class FText                                  SaleText;                                          // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RegularPrice;                                      // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAccountItemDefinition*            CurrencyType;                                      // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuantityRemaining;                                 // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTimedOffer;                                       // 0x64(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3670[0x13];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.Card
struct FCard
{
public:
	int32                                        QuantityReceived;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3671[0x4];                                     // Fixing Size After Last Property..
	class UFortItem*                             Item;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPauseType                        PauseType;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3672[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.OpenedCardPack
struct FOpenedCardPack
{
public:
	class UFortCardPackItemDefinition*           CardPackDefinition;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DisplayLevel;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3673[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.CoreGamerRankingInfo
struct FCoreGamerRankingInfo
{
public:
	int32                                        Score;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3674[0x4];                                     // Fixing Size After Last Property..
	class FText                                  Name;                                              // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_3675[0x8];                                     // Fixing Size Of Struct..
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteUI.CreativeDeviceInfo
struct FCreativeDeviceInfo
{
public:
	int32                                        DeviceTrackingGUID;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3676[0x4];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UActor>                 ActorPtr;                                          // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCreativeDeviceSubscription>   OutgoingEvents;                                    // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FCreativeDeviceSubscription>   CalledFunctions;                                   // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	int32                                        NumBoundEvents;                                    // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumBoundFunctions;                                 // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.CreativeDeviceCached
struct FCreativeDeviceCached
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        NumBoundEvents;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumBoundFunctions;                                 // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UActor>                 ActorPtr;                                          // 0x20(0x28)(BlueprintVisible, BlueprintReadOnly, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.CachedIslandsGroup
struct FCachedIslandsGroup
{
public:
	TArray<class UFortCreativeIslandLink*>       IslandLinks;                                       // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_3677[0x18];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.StyleButtonReference
struct FStyleButtonReference
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3678[0x10];                                    // Fixing Size Of Struct..
};

// 0x38 (0x40 - 0x8)
// ScriptStruct FortniteUI.FortCreativeServerDisplayOption
struct FFortCreativeServerDisplayOption : public FTableRowBase
{
public:
	TSoftObjectPtr<class UTexture>               Image;                                             // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.CreativeContentBrowserAddItemDefinitionMessage
struct FCreativeContentBrowserAddItemDefinitionMessage
{
public:
	TArray<class UFortItemDefinition*>           ItemDefinitionsToAdd;                              // 0x0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.FortActivityScaleFontData
struct FFortActivityScaleFontData
{
public:
	int32                                        CharacterCountStart;                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FontSize;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortLeaderboardRequestIds
struct FFortLeaderboardRequestIds
{
public:
	uint8                                        Pad_3679[0x20];                                    // Fixing Size Of Struct..
};

// 0x4A0 (0x4A0 - 0x0)
// ScriptStruct FortniteUI.FortStateStyle
struct FFortStateStyle
{
public:
	struct FFortMultiSizeBrush                   Brush;                                             // 0x0(0x480)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          PrimaryColor;                                      // 0x480(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SecondaryColor;                                    // 0x490(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.ItemListCategoryArray
struct FItemListCategoryArray
{
public:
	TArray<struct FFortItemEntry>                ItemList;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  CategoryTitle;                                     // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct FortniteUI.FortCreativeItemListCategoryData
struct FFortCreativeItemListCategoryData : public FTableRowBase
{
public:
	enum class ECreativeItemCategory             Category;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemCardSize                 CardSize;                                          // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCollapseCardBorderPad;                            // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLegacyItemDetailsPanel;                        // 0xB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_367A[0x4];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortItemListOptionBucket
struct FFortItemListOptionBucket
{
public:
	uint8                                        Pad_367B[0x8];                                     // Fixing Size After Last Property..
	int32                                        ItemIndex;                                         // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_367C[0x4];                                     // Fixing Size After Last Property..
	TArray<class UFortItemListOptionProxy*>      ItemOptionData;                                    // 0x10(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortWeightedObject
struct FFortWeightedObject
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_367D[0x4];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.ContextPosition
struct FContextPosition
{
public:
	enum class EContextPositionPlatform          Platform;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_367E[0x7];                                     // Fixing Size After Last Property..
	struct FVector2D                             Position;                                          // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_367F[0x6];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.DirectProgressUpdateData
struct FDirectProgressUpdateData
{
public:
	float                                        ProgressPercent;                                   // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3680[0x4];                                     // Fixing Size After Last Property..
	class UFortItemDefinition*                   ItemDef;                                           // 0x8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerPawn*                       OwningPawn;                                        // 0x10(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.MeasuredText
struct FMeasuredText
{
public:
	uint8                                        Pad_3681[0x30];                                    // Fixing Size Of Struct..
};

// 0x108 (0x108 - 0x0)
// ScriptStruct FortniteUI.RadialOptionData
struct FRadialOptionData
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_3682[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           Brush;                                             // 0x20(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             SoftIcon;                                          // 0xE0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x110 - 0x108)
// ScriptStruct FortniteUI.BuildingCategoryOptionData
struct FBuildingCategoryOptionData : public FRadialOptionData
{
public:
	enum class EFortBuildingType                 BuildingType;                                      // 0x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3683[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x120 - 0x108)
// ScriptStruct FortniteUI.BuildingOptionData
struct FBuildingOptionData : public FRadialOptionData
{
public:
	class FString                                ClassSuffix;                                       // 0x108(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClassMirrored;                                     // 0x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3684[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x120 - 0x108)
// ScriptStruct FortniteUI.ItemCategoryOptionData
struct FItemCategoryOptionData : public FRadialOptionData
{
public:
	class FString                                TemplatePrefix;                                    // 0x108(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBuildingAttachmentType           BuildingAttachmentType;                            // 0x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3685[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x120 - 0x108)
// ScriptStruct FortniteUI.ChatOptionData
struct FChatOptionData : public FRadialOptionData
{
public:
	class FText                                  ChatText;                                          // 0x108(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct FortniteUI.SquadChatOptionData
struct FSquadChatOptionData : public FRadialOptionData
{
public:
	class FText                                  ChatText;                                          // 0x108(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct FortniteUI.MapNoteOptionData
struct FMapNoteOptionData : public FRadialOptionData
{
public:
	class FText                                  MapNoteText;                                       // 0x108(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x8 (0x110 - 0x108)
// ScriptStruct FortniteUI.EmoteOptionData
struct FEmoteOptionData : public FRadialOptionData
{
public:
	class FName                                  EmoteCommand;                                      // 0x108(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3686[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x110 - 0x108)
// ScriptStruct FortniteUI.ItemDefOptionData
struct FItemDefOptionData : public FRadialOptionData
{
public:
	class UObject*                               ItemDef;                                           // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct FortniteUI.SquadQuickChatOptionData
struct FSquadQuickChatOptionData : public FRadialOptionData
{
public:
	struct FAthenaQuickChatActiveEntry           ChatEntry;                                         // 0x108(0x14)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3687[0x3];                                     // Fixing Size Of Struct..
};

// 0x328 (0x330 - 0x8)
// ScriptStruct FortniteUI.FortRichTextStyleData
struct FFortRichTextStyleData : public FTableRowBase
{
public:
	uint8                                        Pad_3688[0x8];                                     // Fixing Size After Last Property..
	struct FTextBlockStyle                       TextStyle;                                         // 0x10(0x310)(Edit, NativeAccessSpecifierPublic)
	bool                                         bHyperlinkStyle;                                   // 0x320(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3689[0xF];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.PotentialSpectatorTarget
struct FPotentialSpectatorTarget
{
public:
	int32                                        Rank;                                              // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortPlayerStateAthena> PlayerState;                                       // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCurrentViewTarget;                                // 0xC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_368A[0x3];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.StandaloneItemShopTabInfo
struct FStandaloneItemShopTabInfo
{
public:
	class FText                                  TabTitle;                                          // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  TabNameID;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_368B[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               TabIcon;                                           // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonActivatableWidget*              TabWidget;                                         // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.TouchMove
struct FTouchMove
{
public:
	uint8                                        Pad_368C[0x18];                                    // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.StateWidgetEntry
struct FStateWidgetEntry
{
public:
	TSoftClassPtr<class UFortUIStateWidget_NUI>  Class;                                             // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortNamedBundle                  Bundle;                                            // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_368D[0x7];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.UINavigationEntry
struct FUINavigationEntry
{
public:
	struct FUINavigationData                     Data;                                              // 0x0(0x28)(NativeAccessSpecifierPublic)
	FDelegateProperty_                           NavigateToDelegate;                                // 0x28(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           NavigateFromDelegate;                              // 0x34(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.FortUINavigationOperation
struct FFortUINavigationOperation
{
public:
	enum class EFortUINavigationOp               Operation;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_368E[0x3];                                     // Fixing Size After Last Property..
	class FName                                  SquadId;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PageId;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NodeId;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_368F[0x4];                                     // Fixing Size After Last Property..
	class UFortItem*                             Item;                                              // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeature                    Feature;                                           // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontendInventoryFilter      ItemManagementFilter;                              // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3690[0x6];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortUINavigationRequest
struct FFortUINavigationRequest
{
public:
	TArray<struct FFortUINavigationOperation>    Operations;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.VaultVariantOverrideOption
struct FVaultVariantOverrideOption
{
public:
	struct FGameplayTag                          VariantChannelOverride;                            // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VariantTagOverride;                                // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CustomDataPayload;                                 // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   OptionalItemVariantIsUsedFor;                      // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct FortniteUI.ItemPreviewSettings
struct FItemPreviewSettings
{
public:
	class UFortAccountItemDefinition*            ItemToView;                                        // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubslotIndex;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3691[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 PreviewExcludedTags;                               // 0x10(0x20)(NativeAccessSpecifierPublic)
	int32                                        ItemVariantPreviewIndex;                           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3692[0x4C];                                    // Fixing Size After Last Property..
	bool                                         bHasEtherealBackground;                            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3693[0xF];                                     // Fixing Size After Last Property..
	TArray<struct FVaultVariantOverrideOption>   VariantOverrides;                                  // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3694[0x8];                                     // Fixing Size Of Struct..
};

// 0x2 (0x2 - 0x0)
// ScriptStruct FortniteUI.SceneTransitionOptions
struct FSceneTransitionOptions
{
public:
	enum class ESceneTransitionType              TRANSITION;                                        // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKeepInputRotation;                                // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteUI.InterpolatedTransitionCamera
struct FInterpolatedTransitionCamera
{
public:
	struct FTransform                            CameraTransform;                                   // 0x0(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FieldOfView;                                       // 0x60(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3695[0xC];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.CachedComponentMaterials
struct FCachedComponentMaterials
{
public:
	uint8                                        Pad_3696[0x8];                                     // Fixing Size After Last Property..
	TArray<class UMaterialInterface*>            OriginalMaterials;                                 // 0x8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.PlatformPrefixIcon
struct FPlatformPrefixIcon
{
public:
	class FString                                Platform;                                          // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            PrefixIcon;                                        // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.PlatformPrefixIconList
struct FPlatformPrefixIconList
{
public:
	TArray<struct FPlatformPrefixIcon>           PlatformPrefixIcons;                               // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortUserListHeaderInfo
struct FFortUserListHeaderInfo
{
public:
	uint8                                        Pad_3697[0x18];                                    // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.OptionsReleaseInfo
struct FOptionsReleaseInfo
{
public:
	enum class ESettingType                      SettingType;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3698[0x3];                                     // Fixing Size After Last Property..
	int32                                        ReleaseVersion;                                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.RarityArray
struct FRarityArray
{
public:
	TArray<class UFortItemDefinition*>           Items;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.FortActionBeingUnbound
struct FFortActionBeingUnbound
{
public:
	class FName                                  ActionName;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InputIndex;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.AthenaSpatialCustomizationCategoryGroup
struct FAthenaSpatialCustomizationCategoryGroup
{
public:
	TArray<class UAthenaSpatialCustomizationCategoryEntry*> CategoryEntryList;                                 // 0x0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.SpatialCustomizationCategoryStateData
struct FSpatialCustomizationCategoryStateData
{
public:
	enum class ESpatialCustomizationCategoryState State;                                             // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3699[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          Color;                                             // 0x4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_369A[0x4];                                     // Fixing Size After Last Property..
	class FText                                  CategorySelectionHeaderText;                       // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteUI.OfferPopUpData
struct FOfferPopUpData : public FTableRowBase
{
public:
	class FText                                  FormatedText;                                      // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteUI.FortPhoenixSeasonDisplayInfoMapRow
struct FFortPhoenixSeasonDisplayInfoMapRow : public FTableRowBase
{
public:
	class FString                                EventFlagName;                                     // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPhoenixSeasonDisplayInfo*         DisplayInfo;                                       // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortPhoenixLevelProgressionRewards
struct FFortPhoenixLevelProgressionRewards
{
public:
	int32                                        NextRewardLevel;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemQuantityPair                 NextReward;                                        // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NextMajorRewardLevel;                              // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemQuantityPair                 NextMajorReward;                                   // 0x14(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.TagStateWidgetEntry
struct FTagStateWidgetEntry
{
public:
	TSoftClassPtr<class UFortUIStateWidgetBase>  Class;                                             // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortNamedBundle                  Bundle;                                            // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_369B[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.NotificationWidgetClass
struct FNotificationWidgetClass
{
public:
	TSubclassOf<class UFortNotificationEntry>    NotificationWidgetClass;                           // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialPoolSize;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanIncreasePoolSizeAtRunTime;                     // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_369C[0x3];                                     // Fixing Size After Last Property..
	TArray<class UFortNotificationEntry*>        WidgetPool;                                        // 0x10(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.PickupStreamEntry
struct FPickupStreamEntry
{
public:
	class UUserWidget*                           PickupWidget;                                      // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_369D[0x10];                                    // Fixing Size Of Struct..
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteUI.FortSwipeDetector
struct FFortSwipeDetector
{
public:
	struct FVector2D                             SwipeThreshold;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_369E[0x80];                                    // Fixing Size Of Struct..
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.AthenaRewardTracker
struct FAthenaRewardTracker
{
public:
	uint8                                        Pad_369F[0x14];                                    // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.ItemPresentationRestrictionData
struct FItemPresentationRestrictionData
{
public:
	class FText                                  HeaderText;                                        // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                Icon;                                              // 0x18(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.CurrencyDataWithGiftBox
struct FCurrencyDataWithGiftBox
{
public:
	TArray<struct FCurrencyData>                 GiftBoxCurrencyData;                               // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteUI.FortItemFilterDefinition
struct FFortItemFilterDefinition
{
public:
	TArray<enum class EFortItemType>             ItemTypeFilters;                                   // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A0[0x40];                                    // Fixing Size After Last Property..
	bool                                         bRequiresItemDetails;                              // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A1[0xF];                                     // Fixing Size Of Struct..
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct FortniteUI.FortItemListViewConfig
struct FFortItemListViewConfig
{
public:
	uint8                                        Pad_36A2[0xC0];                                    // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.FortItemSorterDefinition
struct FFortItemSorterDefinition
{
public:
	uint8                                        Pad_36A3[0x50];                                    // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.FortItemEntryPreviewData
struct FFortItemEntryPreviewData
{
public:
	int32                                        Quantity;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemInspectionMode           InspectMode;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A4[0x3];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteUI.VideoConfig_Mono
struct FVideoConfig_Mono
{
public:
	class UFortStreamMediaSource*                StreamingMediaSource;                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VideoString;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StreamingVideoID;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FallbackVideoID;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A5[0x4];                                     // Fixing Size After Last Property..
	class FString                                ProdLinkID;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GamedevLinkID;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAutoPlay;                                       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceAutoPlay;                                    // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStreamingEnabled;                                 // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A6[0x5];                                     // Fixing Size After Last Property..
	class FString                                VideoUID;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldBeModal;                                    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSkipBoundaries;                                // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKairosPlayer;                                     // 0x52(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHoldToSkip;                                       // 0x53(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A7[0x4];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortVideoInfo
struct FFortVideoInfo
{
public:
	class FName                                  ID;                                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A8[0x4];                                     // Fixing Size After Last Property..
	class UTexture2D*                            PreviewImage;                                      // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                          VideoSource;                                       // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalizedOverlays*                    SubtitleOverlays;                                  // 0x18(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestObjectiveName;                                // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPrimaryAssetId                       RequiredActiveQuest;                               // 0x24(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A9[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortConfirmationButtonInfo
struct FFortConfirmationButtonInfo
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36AA[0x8];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.ReviewYourSettingsData
struct FReviewYourSettingsData
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(NativeAccessSpecifierPublic)
	TArray<class UFortSetting*>                  Settings;                                          // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortMtxDetailsAttribute
struct FFortMtxDetailsAttribute
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.FortMtxDescriptionAndDetails
struct FFortMtxDescriptionAndDetails
{
public:
	class FText                                  ShortDescription;                                  // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FFortMtxDetailsAttribute>      AssociatedDetailsAttributes;                       // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortMtxGradient
struct FFortMtxGradient
{
public:
	struct FLinearColor                          Start;                                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Stop;                                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortMPItemShopCMSStackRank
struct FFortMPItemShopCMSStackRank
{
public:
	struct FDateTime                             StartDate;                                         // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StackRankValue;                                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36AB[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.FortMPItemShopCMSRow
struct FFortMPItemShopCMSRow
{
public:
	class FString                                RowID;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             UpdatedDate;                                       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortMPItemShopCMSStackRank>   StackRanks;                                        // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteUI.FortMPItemShopCMSSectionMetadata
struct FFortMPItemShopCMSSectionMetadata
{
public:
	class FString                                ShowIneligibleOffers;                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>            Subsections;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortMPItemShopCMSRow>         Rows;                                              // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>            Background;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortMPItemShopCMSColors              Colors;                                            // 0x40(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FFortMPItemShopCMSStackRank>   StackRanks;                                        // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteUI.FortMPItemShopCMSSection
struct FFortMPItemShopCMSSection
{
public:
	class FString                                SectionID;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMPItemShopCMSSectionMetadata     MetaData;                                          // 0x20(0x70)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortMPItemShopCMSData
struct FFortMPItemShopCMSData
{
public:
	TArray<struct FFortMPItemShopCMSSection>     Sections;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.FortFeedbackDropdownCategoryHotfix_Add
struct FFortFeedbackDropdownCategoryHotfix_Add
{
public:
	class FName                                  ParentInternalName;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InternalName;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.FortFeedbackDropdownCategoryHotfix_Modify
struct FFortFeedbackDropdownCategoryHotfix_Modify
{
public:
	class FName                                  InternalName;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddFlag;                                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortPlayerFeedbackFlags          Flag;                                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36AC[0x2];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.TrackCategoryUI
struct FTrackCategoryUI
{
public:
	struct FTrackCategory                        TrackData;                                         // 0x0(0x48)(NativeAccessSpecifierPublic)
	int32                                        LastSelectedIndex;                                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36AD[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.BattlePassPageData
struct FBattlePassPageData
{
public:
	uint8                                        Pad_36AE[0x8];                                     // Fixing Size Of Struct..
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct FortniteUI.PreviewRewardData
struct FPreviewRewardData
{
public:
	uint8                                        Pad_36AF[0xA8];                                    // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.PreviewUnlockRewardData
struct FPreviewUnlockRewardData
{
public:
	int32                                        Currency;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAdditionalRewards;                              // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRewards;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCharacters;                                     // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPreviewRewardData>            Characters;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPreviewRewardData>            AdditionalRewards;                                 // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteUI.PreviewUnlockData
struct FPreviewUnlockData
{
public:
	struct FPreviewUnlockRewardData              InstantRewards;                                    // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FPreviewUnlockRewardData              EarnedRewards;                                     // 0x30(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ChapterNumberText;                                 // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  SeasonNumberText;                                  // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  SummaryText;                                       // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bPaysForSelf;                                      // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B0[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.BattlePassCharacterPreviewDisplayData
struct FBattlePassCharacterPreviewDisplayData
{
public:
	class UAthenaCharacterItemDefinition*        CharacterItemDef;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                     PreviewMaterial;                                   // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.BattlePassShowRewardParams
struct FBattlePassShowRewardParams
{
public:
	uint8                                        Pad_36B1[0x10];                                    // Fixing Size Of Struct..
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteUI.CycledItemPreviewSettings
struct FCycledItemPreviewSettings
{
public:
	uint8                                        Pad_36B2[0xB0];                                    // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.FortBattlePassVideoAnnotation
struct FFortBattlePassVideoAnnotation
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ScreenPosition;                                    // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EntryAngle;                                        // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EntryMagnitude;                                    // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   RewardItemDefinition;                              // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortSettingClassExtensions
struct FFortSettingClassExtensions
{
public:
	TArray<TSoftClassPtr<class UFortSettingDetailExtension>> Extensions;                                        // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortSettingNameExtensions
struct FFortSettingNameExtensions
{
public:
	bool                                         bIncludeClassDefaultExtensions;                    // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B3[0x7];                                     // Fixing Size After Last Property..
	TArray<TSoftClassPtr<class UFortSettingDetailExtension>> Extensions;                                        // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.CheatMenuEntry
struct FCheatMenuEntry
{
public:
	class FString                                DevName;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RichText;                                          // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ConsoleCommands;                                   // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.CheatMenuSection
struct FCheatMenuSection
{
public:
	class FString                                DevName;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MinVersion;                                        // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCheatMenuEntry>               Entries;                                           // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bExpanded;                                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B4[0x7];                                     // Fixing Size Of Struct..
};

// 0x1C (0x1C - 0x0)
// ScriptStruct FortniteUI.FortShowdownEventBestResultsSummary
struct FFortShowdownEventBestResultsSummary
{
public:
	int32                                        TotalScore;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MatchesPlayed;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumVictoryRoyales;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlacementPoints;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EliminationPoints;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EntryFeePoints;                                    // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValidSummary;                                   // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B5[0x3];                                     // Fixing Size Of Struct..
};

// 0x1C8 (0x1D0 - 0x8)
// ScriptStruct FortniteUI.FortTournamentDisplayInfo
struct FFortTournamentDisplayInfo : public FTableRowBase
{
public:
	class FText                                  TitleLine1;                                        // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  TitleLine2;                                        // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ScheduleInfo;                                      // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  FlavorDescription;                                 // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DetailsDescription;                                // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ShortFormatTitle;                                  // 0x80(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LongFormatTitle;                                   // 0x98(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  BackgroundTitle;                                   // 0xB0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        PinScoreRequirement;                               // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B6[0x4];                                     // Fixing Size After Last Property..
	class FText                                  PinEarnedText;                                     // 0xD0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          BaseColor;                                         // 0xE8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PrimaryColor;                                      // 0xF8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SecondaryColor;                                    // 0x108(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          HighlightColor;                                    // 0x118(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TitleColor;                                        // 0x128(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor;                                       // 0x138(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundLeftColor;                               // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundRightColor;                              // 0x158(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundTextColor;                               // 0x168(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PosterFadeColor;                                   // 0x178(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  AlertText;                                         // 0x188(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  SeriesPointLeaderboardName;                        // 0x1A0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EFortTournamentAlertType          AlertType;                                         // 0x1B8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B7[0x7];                                     // Fixing Size After Last Property..
	TArray<class FText>                          RoundDisplayNames;                                 // 0x1C0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA8 - 0x8)
// ScriptStruct FortniteUI.FortEventStyleInfo
struct FFortEventStyleInfo : public FTableRowBase
{
public:
	struct FLinearColor                          BaseColor;                                         // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PrimaryColor;                                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SecondaryColor;                                    // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          HighlightColor;                                    // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TitleColor;                                        // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor;                                       // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundLeftColor;                               // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundRightColor;                              // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundTextColor;                               // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PosterFadeColor;                                   // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.BundledItemInfo
struct FBundledItemInfo
{
public:
	class FString                                TemplateId;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOwned;                                            // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B8[0x3];                                     // Fixing Size Of Struct..
};

// 0x30 (0x38 - 0x8)
// ScriptStruct FortniteUI.FortHeroNamesData
struct FFortHeroNamesData : public FTableRowBase
{
public:
	class FString                                FirstName;                                         // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NickName;                                          // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastName;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct FortniteUI.FortUIXpInfo
struct FFortUIXpInfo
{
public:
	int32                                        InitialLevel;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialDisplayXp;                                  // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortExperienceDelta                  ChangeInXp;                                        // 0x8(0x24)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteUI.FortWeaponBoardDisplaySlot
struct FFortWeaponBoardDisplaySlot
{
public:
	struct FGameplayTag                          RequiredTag;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B9[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            MeshRelativeTransform;                             // 0x10(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalOffsetMultiplier;                             // 0x70(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36BA[0x8];                                     // Fixing Size Of Struct..
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteUI.FortWeaponBoardDisplaySlotItem
struct FFortWeaponBoardDisplaySlotItem
{
public:
	struct FFortWeaponBoardDisplaySlot           DisplaySlot;                                       // 0x0(0x90)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_36BB[0x10];                                    // Fixing Size Of Struct..
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteUI.ProgressiveStageItemInfo
struct FProgressiveStageItemInfo
{
public:
	TArray<class UFortItemDefinition*>           RewardTokens;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_36BC[0x10];                                    // Fixing Size After Last Property..
	class FText                                  OverrideName;                                      // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     TileMaterial;                                      // 0x38(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPreviewStyles;                               // 0x61(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLocked;                                         // 0x62(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36BD[0x1];                                     // Fixing Size After Last Property..
	int32                                        AdditionalMonthsRequired;                          // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StageIndex;                                        // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36BE[0x4];                                     // Fixing Size Of Struct..
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteUI.ProgressiveSetInfo
struct FProgressiveSetInfo
{
public:
	class FText                                  SetName;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     TileMaterial;                                      // 0x18(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProgressiveSetProgress           SetProgress;                                       // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36BF[0x3];                                     // Fixing Size After Last Property..
	int32                                        UnlockedStagesCount;                               // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalStagesCount;                                  // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36C0[0x1C];                                    // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.RewardsDataIds
struct FRewardsDataIds
{
public:
	TArray<class UFortTournamentPayoutThresholdEntry*> ThresholdEntries;                                  // 0x0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_36C1[0x10];                                    // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortAthenaTutorialHighlightInfo
struct FFortAthenaTutorialHighlightInfo
{
public:
	struct FGameplayTag                          WidgetToHighlight;                                 // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ItemHighlightTag;                                  // 0x4(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               HighlightMargin;                                   // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             HighlightWidgetOverride;                           // 0x18(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLegacyHighlight;                                // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36C2[0x7];                                     // Fixing Size Of Struct..
};

// 0x100 (0x100 - 0x0)
// ScriptStruct FortniteUI.FortAthenaTutorialScreenInfo
struct FFortAthenaTutorialScreenInfo
{
public:
	enum class EFortAthenaTutorialSubstep        Substep;                                           // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36C3[0x7];                                     // Fixing Size After Last Property..
	struct FVector2D                             TextPromptPosition;                                // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TextPromptPosition_AthenaHUD;                      // 0x18(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnchors                              TextPromptAnchors;                                 // 0x28(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnchors                              TextPromptAnchors_AthenaHUD;                       // 0x48(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  TextPromptText_Touch;                              // 0x68(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  TextPromptText_Gamepad;                            // 0x80(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  TextPromptText_TouchLegacy;                        // 0x98(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ActionWidget_DataTableRow;                         // 0xB0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          KeybindWidget_NameArray;                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          KeybindWidget_GamepadNameArray;                    // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ForceSingleInputKeybind;                           // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36C4[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FFortAthenaTutorialHighlightInfo> HighlightInfo;                                     // 0xE8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         DisplayNextButton;                                 // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisplayTextPromptTarget;                           // 0xF9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAthenaTutorialScreenExtraWidget ExtraWidget;                                       // 0xFA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36C5[0x5];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortAthenaTutorialStepInfo
struct FFortAthenaTutorialStepInfo
{
public:
	enum class EFortAthenaTutorialStep           TutorialStep;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36C6[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FFortAthenaTutorialScreenInfo> StepScreenInfo;                                    // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct FortniteUI.FortAthenaTutorialStandaloneStepInfo
struct FFortAthenaTutorialStandaloneStepInfo
{
public:
	enum class EFortAthenaTutorial_StandaloneStep StandaloneStep;                                    // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36C7[0x7];                                     // Fixing Size After Last Property..
	struct FFortAthenaTutorialScreenInfo         StepScreenInfo;                                    // 0x8(0x100)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortAthenaStandaloneTutorialStepInfo
struct FFortAthenaStandaloneTutorialStepInfo
{
public:
	TArray<struct FFortAthenaTutorialScreenInfo> StepScreenInfo;                                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.PluginUIStateWidgetEntry
struct FPluginUIStateWidgetEntry
{
public:
	class FName                                  EntryName;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36C8[0x4];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UFortUIStateWidgetBase>  WidgetClass;                                       // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.LoadedUIManagerEntry
struct FLoadedUIManagerEntry
{
public:
	uint8                                        Pad_36C9[0x18];                                    // Fixing Size After Last Property..
	TSubclassOf<class UFortUIManager>            UIManagerClass;                                    // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.RegisteredUIManagerEntry
struct FRegisteredUIManagerEntry
{
public:
	uint8                                        Pad_36CA[0x8];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UFortUIManager>          UIManagerClass;                                    // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortRootViewportLayoutInfo
struct FFortRootViewportLayoutInfo
{
public:
	TWeakObjectPtr<class UFortLocalPlayer>       LocalPlayer;                                       // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           RootLayout;                                        // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36CB[0x8];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortUIManager_Campaign_Player
struct FFortUIManager_Campaign_Player
{
public:
	class UFortLocalPlayer*                      Player;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          Manager;                                           // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortVariantFilterContext
struct FFortVariantFilterContext
{
public:
	uint8                                        Pad_36CC[0x30];                                    // Fixing Size Of Struct..
};

// 0x3 (0x3 - 0x0)
// ScriptStruct FortniteUI.ContentPushState
struct FContentPushState
{
public:
	bool                                         bHideHeader;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideFooter;                                       // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideChatWidget;                                   // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EStatisticResetIntervalOption : uint8
{
	Pfenum_Never                   = 0,
	Pfenum_Hour                    = 1,
	Pfenum_Day                     = 2,
	Pfenum_Week                    = 3,
	Pfenum_Month                   = 4,
	Pfenum_MAX                     = 5,
};

enum class EStatisticAggregationMethod : uint8
{
	Pfenum_Last                    = 0,
	Pfenum_Min                     = 1,
	Pfenum_Max                     = 2,
	Pfenum_Sum                     = 3,
};

enum class ERegion : uint8
{
	Pfenum_USCentral               = 0,
	Pfenum_USEast                  = 1,
	Pfenum_EUWest                  = 2,
	Pfenum_Singapore               = 3,
	Pfenum_Japan                   = 4,
	Pfenum_Brazil                  = 5,
	Pfenum_Australia               = 6,
	Pfenum_MAX                     = 7,
};

enum class EPfSourceType : uint8
{
	Pfenum_Admin                   = 0,
	Pfenum_BackEnd                 = 1,
	Pfenum_GameClient              = 2,
	Pfenum_GameServer              = 3,
	Pfenum_Partner                 = 4,
	Pfenum_Custom                  = 5,
	Pfenum_API                     = 6,
	Pfenum_MAX                     = 7,
};

enum class EGameBuildStatus : uint8
{
	Pfenum_Available               = 0,
	Pfenum_Validating              = 1,
	Pfenum_InvalidBuildPackage     = 2,
	Pfenum_Processing              = 3,
	Pfenum_FailedToProcess         = 4,
	Pfenum_MAX                     = 5,
};

enum class EAuthTokenType : uint8
{
	Pfenum_Email                   = 0,
	Pfenum_MAX                     = 1,
};

enum class ETaskInstanceStatus : uint8
{
	Pfenum_Succeeded               = 0,
	Pfenum_Starting                = 1,
	Pfenum_InProgress              = 2,
	Pfenum_Failed                  = 3,
	Pfenum_Aborted                 = 4,
	Pfenum_Stalled                 = 5,
	Pfenum_MAX                     = 6,
};

enum class EResolutionOutcome : uint8
{
	Pfenum_Revoke                  = 0,
	Pfenum_Reinstate               = 1,
	Pfenum_Manual                  = 2,
	Pfenum_MAX                     = 3,
};

enum class EPushSetupPlatform : uint8
{
	Pfenum_GCM                     = 0,
	Pfenum_APNS                    = 1,
	Pfenum_APNS_SANDBOX            = 2,
	Pfenum_MAX                     = 3,
};

enum class EScheduledTaskType : uint8
{
	Pfenum_CloudScript             = 0,
	Pfenum_ActionsOnPlayerSegment  = 1,
	Pfenum_CloudScriptAzureFunctions = 2,
	Pfenum_InsightsScheduledScaling = 3,
	Pfenum_MAX                     = 4,
};

enum class EUserDataPermission : uint8
{
	Pfenum_Private                 = 0,
	Pfenum_Public                  = 1,
	Pfenum_MAX                     = 2,
};

enum class ELoginIdentityProvider : uint8
{
	Pfenum_Unknown                 = 0,
	Pfenum_PlayFab                 = 1,
	Pfenum_Custom                  = 2,
	Pfenum_GameCenter              = 3,
	Pfenum_GooglePlay              = 4,
	Pfenum_Steam                   = 5,
	Pfenum_XBoxLive                = 6,
	Pfenum_PSN                     = 7,
	Pfenum_Kongregate              = 8,
	Pfenum_Facebook                = 9,
	Pfenum_IOSDevice               = 10,
	Pfenum_AndroidDevice           = 11,
	Pfenum_Twitch                  = 12,
	Pfenum_WindowsHello            = 13,
	Pfenum_GameServer              = 14,
	Pfenum_CustomServer            = 15,
	Pfenum_NintendoSwitch          = 16,
	Pfenum_FacebookInstantGames    = 17,
	Pfenum_OpenIdConnect           = 18,
	Pfenum_Apple                   = 19,
	Pfenum_NintendoSwitchAccount   = 20,
	Pfenum_GooglePlayGames         = 21,
	Pfenum_MAX                     = 22,
};

enum class EIdentifiedDeviceType : uint8
{
	Pfenum_Unknown                 = 0,
	Pfenum_XboxOne                 = 1,
	Pfenum_Scarlett                = 2,
	Pfenum_MAX                     = 3,
};

enum class EMatchmakeStatus : uint8
{
	Pfenum_Complete                = 0,
	Pfenum_Waiting                 = 1,
	Pfenum_GameNotFound            = 2,
	Pfenum_NoAvailableSlots        = 3,
	Pfenum_SessionClosed           = 4,
	Pfenum_MAX                     = 5,
};

enum class ETransactionStatus : uint8
{
	Pfenum_CreateCart              = 0,
	Pfenum_Init                    = 1,
	Pfenum_Approved                = 2,
	Pfenum_Succeeded               = 3,
	Pfenum_FailedByProvider        = 4,
	Pfenum_DisputePending          = 5,
	Pfenum_RefundPending           = 6,
	Pfenum_Refunded                = 7,
	Pfenum_RefundFailed            = 8,
	Pfenum_ChargedBack             = 9,
	Pfenum_FailedByUber            = 10,
	Pfenum_FailedByPlayFab         = 11,
	Pfenum_Revoked                 = 12,
	Pfenum_TradePending            = 13,
	Pfenum_Traded                  = 14,
	Pfenum_Upgraded                = 15,
	Pfenum_StackPending            = 16,
	Pfenum_Stacked                 = 17,
	Pfenum_Other                   = 18,
	Pfenum_Failed                  = 19,
	Pfenum_MAX                     = 20,
};

enum class ECloudScriptRevisionOption : uint8
{
	Pfenum_Live                    = 0,
	Pfenum_Latest                  = 1,
	Pfenum_Specific                = 2,
	Pfenum_MAX                     = 3,
};

enum class EExternalFriendSources : uint8
{
	Pfenum_None                    = 0,
	Pfenum_Steam                   = 1,
	Pfenum_Facebook                = 2,
	Pfenum_Xbox                    = 3,
	Pfenum_Psn                     = 4,
	Pfenum_All                     = 5,
	Pfenum_MAX                     = 6,
};

enum class ETradeStatus : uint8
{
	Pfenum_Invalid                 = 0,
	Pfenum_Opening                 = 1,
	Pfenum_Open                    = 2,
	Pfenum_Accepting               = 3,
	Pfenum_Accepted                = 4,
	Pfenum_Filled                  = 5,
	Pfenum_Cancelled               = 6,
	Pfenum_MAX                     = 7,
};

enum class EAdActivity : uint8
{
	Pfenum_Opened                  = 0,
	Pfenum_Closed                  = 1,
	Pfenum_Start                   = 2,
	Pfenum_End                     = 3,
	Pfenum_MAX                     = 4,
};

enum class EPublishResult : uint8
{
	Pfenum_Unknown                 = 0,
	Pfenum_Pending                 = 1,
	Pfenum_Succeeded               = 2,
	Pfenum_Failed                  = 3,
	Pfenum_Canceled                = 4,
	Pfenum_MAX                     = 5,
};

enum class EConcernCategory : uint8
{
	Pfenum_None                    = 0,
	Pfenum_OffensiveContent        = 1,
	Pfenum_ChildExploitation       = 2,
	Pfenum_MalwareOrVirus          = 3,
	Pfenum_PrivacyConcerns         = 4,
	Pfenum_MisleadingApp           = 5,
	Pfenum_PoorPerformance         = 6,
	Pfenum_ReviewResponse          = 7,
	Pfenum_SpamAdvertising         = 8,
	Pfenum_Profanity               = 9,
	Pfenum_MAX                     = 10,
};

enum class EModerationStatus : uint8
{
	Pfenum_Unknown                 = 0,
	Pfenum_AwaitingModeration      = 1,
	Pfenum_Approved                = 2,
	Pfenum_Rejected                = 3,
	Pfenum_MAX                     = 4,
};

enum class EHelpfulnessVote : uint8
{
	Pfenum_None                    = 0,
	Pfenum_UnHelpful               = 1,
	Pfenum_Helpful                 = 2,
	Pfenum_MAX                     = 3,
};

enum class EExperimentType : uint8
{
	Pfenum_Active                  = 0,
	Pfenum_Snapshot                = 1,
	Pfenum_MAX                     = 2,
};

enum class EOperationTypes : uint8
{
	Pfenum_Created                 = 0,
	Pfenum_Updated                 = 1,
	Pfenum_Deleted                 = 2,
	Pfenum_None                    = 3,
	Pfenum_MAX                     = 4,
};

enum class EAzureVmSize : uint8
{
	Pfenum_Standard_A1             = 0,
	Pfenum_Standard_A2             = 1,
	Pfenum_Standard_A3             = 2,
	Pfenum_Standard_A4             = 3,
	Pfenum_Standard_A1_v2          = 4,
	Pfenum_Standard_A2_v2          = 5,
	Pfenum_Standard_A4_v2          = 6,
	Pfenum_Standard_A8_v2          = 7,
	Pfenum_Standard_D1_v2          = 8,
	Pfenum_Standard_D2_v2          = 9,
	Pfenum_Standard_D3_v2          = 10,
	Pfenum_Standard_D4_v2          = 11,
	Pfenum_Standard_D5_v2          = 12,
	Pfenum_Standard_D2_v3          = 13,
	Pfenum_Standard_D4_v3          = 14,
	Pfenum_Standard_D8_v3          = 15,
	Pfenum_Standard_D16_v3         = 16,
	Pfenum_Standard_F1             = 17,
	Pfenum_Standard_F2             = 18,
	Pfenum_Standard_F4             = 19,
	Pfenum_Standard_F8             = 20,
	Pfenum_Standard_F16            = 21,
	Pfenum_Standard_F2s_v2         = 22,
	Pfenum_Standard_F4s_v2         = 23,
	Pfenum_Standard_F8s_v2         = 24,
	Pfenum_Standard_F16s_v2        = 25,
	Pfenum_Standard_D2as_v4        = 26,
	Pfenum_Standard_D4as_v4        = 27,
	Pfenum_Standard_D8as_v4        = 28,
	Pfenum_Standard_D16as_v4       = 29,
	Pfenum_Standard_D2a_v4         = 30,
	Pfenum_Standard_D4a_v4         = 31,
	Pfenum_Standard_D8a_v4         = 32,
	Pfenum_Standard_D16a_v4        = 33,
	Pfenum_Standard_D2ads_v5       = 34,
	Pfenum_Standard_D4ads_v5       = 35,
	Pfenum_Standard_D8ads_v5       = 36,
	Pfenum_Standard_D16ads_v5      = 37,
	Pfenum_Standard_E2a_v4         = 38,
	Pfenum_Standard_E4a_v4         = 39,
	Pfenum_Standard_E8a_v4         = 40,
	Pfenum_Standard_E16a_v4        = 41,
	Pfenum_Standard_E2as_v4        = 42,
	Pfenum_Standard_E4as_v4        = 43,
	Pfenum_Standard_E8as_v4        = 44,
	Pfenum_Standard_E16as_v4       = 45,
	Pfenum_Standard_D2s_v3         = 46,
	Pfenum_Standard_D4s_v3         = 47,
	Pfenum_Standard_D8s_v3         = 48,
	Pfenum_Standard_D16s_v3        = 49,
	Pfenum_Standard_DS1_v2         = 50,
	Pfenum_Standard_DS2_v2         = 51,
	Pfenum_Standard_DS3_v2         = 52,
	Pfenum_Standard_DS4_v2         = 53,
	Pfenum_Standard_DS5_v2         = 54,
	Pfenum_Standard_NC4as_T4_v3    = 55,
	Pfenum_Standard_D2d_v4         = 56,
	Pfenum_Standard_D4d_v4         = 57,
	Pfenum_Standard_D8d_v4         = 58,
	Pfenum_Standard_D16d_v4        = 59,
	Pfenum_Standard_D2ds_v4        = 60,
	Pfenum_Standard_D4ds_v4        = 61,
	Pfenum_Standard_D8ds_v4        = 62,
	Pfenum_Standard_D16ds_v4       = 63,
	Pfenum_Standard_HB120_16rs_v3  = 64,
	Pfenum_Standard_HB120_32rs_v3  = 65,
	Pfenum_Standard_HB120_64rs_v3  = 66,
	Pfenum_Standard_HB120_96rs_v3  = 67,
	Pfenum_Standard_HB120rs_v3     = 68,
	Pfenum_Standard_MAX            = 69,
};

enum class EContainerFlavor : uint8
{
	Pfenum_ManagedWindowsServerCore = 0,
	Pfenum_CustomLinux             = 1,
	Pfenum_ManagedWindowsServerCorePreview = 2,
	Pfenum_Invalid                 = 3,
	Pfenum_MAX                     = 4,
};

enum class EOwnerMigrationPolicy : uint8
{
	Pfenum_None                    = 0,
	Pfenum_Automatic               = 1,
	Pfenum_Manual                  = 2,
	Pfenum_Server                  = 3,
	Pfenum_MAX                     = 4,
};

enum class EAccessPolicy : uint8
{
	Pfenum_Public                  = 0,
	Pfenum_Friends                 = 1,
	Pfenum_Private                 = 2,
	Pfenum_MAX                     = 3,
};

enum class ETitleMultiplayerServerEnabledStatus : uint8
{
	Pfenum_Initializing            = 0,
	Pfenum_Enabled                 = 1,
	Pfenum_Disabled                = 2,
	Pfenum_MAX                     = 3,
};

enum class ESubscriptionType : uint8
{
	Pfenum_LobbyChange             = 0,
	Pfenum_LobbyInvite             = 1,
	Pfenum_MAX                     = 2,
};

enum class EMembershipLock : uint8
{
	Pfenum_Unlocked                = 0,
	Pfenum_Locked                  = 1,
	Pfenum_MAX                     = 2,
};

enum class EPlayerConnectionState : uint8
{
	Pfenum_Unassigned              = 0,
	Pfenum_Connecting              = 1,
	Pfenum_Participating           = 2,
	Pfenum_Participated            = 3,
	Pfenum_MAX                     = 4,
};

enum class EGameInstanceState : uint8
{
	Pfenum_Open                    = 0,
	Pfenum_Closed                  = 1,
	Pfenum_MAX                     = 2,
};

enum class EChurnRiskLevel : uint8
{
	Pfenum_NoData                  = 0,
	Pfenum_LowRisk                 = 1,
	Pfenum_MediumRisk              = 2,
	Pfenum_HighRisk                = 3,
	Pfenum_MAX                     = 4,
};

enum class EConditionals : uint8
{
	Pfenum_Any                     = 0,
	Pfenum_True                    = 1,
	Pfenum_False                   = 2,
	Pfenum_MAX                     = 3,
};

enum class EContinentCode : uint8
{
	Pfenum_AF                      = 0,
	Pfenum_AN                      = 1,
	Pfenum_AS                      = 2,
	Pfenum_EU                      = 3,
	Pfenum_NA                      = 4,
	Pfenum_OC                      = 5,
	Pfenum_SA                      = 6,
	Pfenum_MAX                     = 7,
};

enum class ECountryCode : uint8
{
	Pfenum_AF                      = 0,
	Pfenum_AX                      = 1,
	Pfenum_AL                      = 2,
	Pfenum_DZ                      = 3,
	Pfenum_AS                      = 4,
	Pfenum_AD                      = 5,
	Pfenum_AO                      = 6,
	Pfenum_AI                      = 7,
	Pfenum_AQ                      = 8,
	Pfenum_AG                      = 9,
	Pfenum_AR                      = 10,
	Pfenum_AM                      = 11,
	Pfenum_AW                      = 12,
	Pfenum_AU                      = 13,
	Pfenum_AT                      = 14,
	Pfenum_AZ                      = 15,
	Pfenum_BS                      = 16,
	Pfenum_BH                      = 17,
	Pfenum_BD                      = 18,
	Pfenum_BB                      = 19,
	Pfenum_BY                      = 20,
	Pfenum_BE                      = 21,
	Pfenum_BZ                      = 22,
	Pfenum_BJ                      = 23,
	Pfenum_BM                      = 24,
	Pfenum_BT                      = 25,
	Pfenum_BO                      = 26,
	Pfenum_BQ                      = 27,
	Pfenum_BA                      = 28,
	Pfenum_BW                      = 29,
	Pfenum_BV                      = 30,
	Pfenum_BR                      = 31,
	Pfenum_IO                      = 32,
	Pfenum_BN                      = 33,
	Pfenum_BG                      = 34,
	Pfenum_BF                      = 35,
	Pfenum_BI                      = 36,
	Pfenum_KH                      = 37,
	Pfenum_CM                      = 38,
	Pfenum_CA                      = 39,
	Pfenum_CV                      = 40,
	Pfenum_KY                      = 41,
	Pfenum_CF                      = 42,
	Pfenum_TD                      = 43,
	Pfenum_CL                      = 44,
	Pfenum_CN                      = 45,
	Pfenum_CX                      = 46,
	Pfenum_CC                      = 47,
	Pfenum_CO                      = 48,
	Pfenum_KM                      = 49,
	Pfenum_CG                      = 50,
	Pfenum_CD                      = 51,
	Pfenum_CK                      = 52,
	Pfenum_CR                      = 53,
	Pfenum_CI                      = 54,
	Pfenum_HR                      = 55,
	Pfenum_CU                      = 56,
	Pfenum_CW                      = 57,
	Pfenum_CY                      = 58,
	Pfenum_CZ                      = 59,
	Pfenum_DK                      = 60,
	Pfenum_DJ                      = 61,
	Pfenum_DM                      = 62,
	Pfenum_DO                      = 63,
	Pfenum_EC                      = 64,
	Pfenum_EG                      = 65,
	Pfenum_SV                      = 66,
	Pfenum_GQ                      = 67,
	Pfenum_ER                      = 68,
	Pfenum_EE                      = 69,
	Pfenum_ET                      = 70,
	Pfenum_FK                      = 71,
	Pfenum_FO                      = 72,
	Pfenum_FJ                      = 73,
	Pfenum_FI                      = 74,
	Pfenum_FR                      = 75,
	Pfenum_GF                      = 76,
	Pfenum_PF                      = 77,
	Pfenum_TF                      = 78,
	Pfenum_GA                      = 79,
	Pfenum_GM                      = 80,
	Pfenum_GE                      = 81,
	Pfenum_DE                      = 82,
	Pfenum_GH                      = 83,
	Pfenum_GI                      = 84,
	Pfenum_GR                      = 85,
	Pfenum_GL                      = 86,
	Pfenum_GD                      = 87,
	Pfenum_GP                      = 88,
	Pfenum_GU                      = 89,
	Pfenum_GT                      = 90,
	Pfenum_GG                      = 91,
	Pfenum_GN                      = 92,
	Pfenum_GW                      = 93,
	Pfenum_GY                      = 94,
	Pfenum_HT                      = 95,
	Pfenum_HM                      = 96,
	Pfenum_VA                      = 97,
	Pfenum_HN                      = 98,
	Pfenum_HK                      = 99,
	Pfenum_HU                      = 100,
	Pfenum_IS                      = 101,
	Pfenum_IN                      = 102,
	Pfenum_ID                      = 103,
	Pfenum_IR                      = 104,
	Pfenum_IQ                      = 105,
	Pfenum_IE                      = 106,
	Pfenum_IM                      = 107,
	Pfenum_IL                      = 108,
	Pfenum_IT                      = 109,
	Pfenum_JM                      = 110,
	Pfenum_JP                      = 111,
	Pfenum_JE                      = 112,
	Pfenum_JO                      = 113,
	Pfenum_KZ                      = 114,
	Pfenum_KE                      = 115,
	Pfenum_KI                      = 116,
	Pfenum_KP                      = 117,
	Pfenum_KR                      = 118,
	Pfenum_KW                      = 119,
	Pfenum_KG                      = 120,
	Pfenum_LA                      = 121,
	Pfenum_LV                      = 122,
	Pfenum_LB                      = 123,
	Pfenum_LS                      = 124,
	Pfenum_LR                      = 125,
	Pfenum_LY                      = 126,
	Pfenum_LI                      = 127,
	Pfenum_LT                      = 128,
	Pfenum_LU                      = 129,
	Pfenum_MO                      = 130,
	Pfenum_MK                      = 131,
	Pfenum_MG                      = 132,
	Pfenum_MW                      = 133,
	Pfenum_MY                      = 134,
	Pfenum_MV                      = 135,
	Pfenum_ML                      = 136,
	Pfenum_MT                      = 137,
	Pfenum_MH                      = 138,
	Pfenum_MQ                      = 139,
	Pfenum_MR                      = 140,
	Pfenum_MU                      = 141,
	Pfenum_YT                      = 142,
	Pfenum_MX                      = 143,
	Pfenum_FM                      = 144,
	Pfenum_MD                      = 145,
	Pfenum_MC                      = 146,
	Pfenum_MN                      = 147,
	Pfenum_ME                      = 148,
	Pfenum_MS                      = 149,
	Pfenum_MA                      = 150,
	Pfenum_MZ                      = 151,
	Pfenum_MM                      = 152,
	Pfenum_NA                      = 153,
	Pfenum_NR                      = 154,
	Pfenum_NP                      = 155,
	Pfenum_NL                      = 156,
	Pfenum_NC                      = 157,
	Pfenum_NZ                      = 158,
	Pfenum_NI                      = 159,
	Pfenum_NE                      = 160,
	Pfenum_NG                      = 161,
	Pfenum_NU                      = 162,
	Pfenum_NF                      = 163,
	Pfenum_MP                      = 164,
	Pfenum_NO                      = 165,
	Pfenum_OM                      = 166,
	Pfenum_PK                      = 167,
	Pfenum_PW                      = 168,
	Pfenum_PS                      = 169,
	Pfenum_PA                      = 170,
	Pfenum_PG                      = 171,
	Pfenum_PY                      = 172,
	Pfenum_PE                      = 173,
	Pfenum_PH                      = 174,
	Pfenum_PN                      = 175,
	Pfenum_PL                      = 176,
	Pfenum_PT                      = 177,
	Pfenum_PR                      = 178,
	Pfenum_QA                      = 179,
	Pfenum_RE                      = 180,
	Pfenum_RO                      = 181,
	Pfenum_RU                      = 182,
	Pfenum_RW                      = 183,
	Pfenum_BL                      = 184,
	Pfenum_SH                      = 185,
	Pfenum_KN                      = 186,
	Pfenum_LC                      = 187,
	Pfenum_MF                      = 188,
	Pfenum_PM                      = 189,
	Pfenum_VC                      = 190,
	Pfenum_WS                      = 191,
	Pfenum_SM                      = 192,
	Pfenum_ST                      = 193,
	Pfenum_SA                      = 194,
	Pfenum_SN                      = 195,
	Pfenum_RS                      = 196,
	Pfenum_SC                      = 197,
	Pfenum_SL                      = 198,
	Pfenum_SG                      = 199,
	Pfenum_SX                      = 200,
	Pfenum_SK                      = 201,
	Pfenum_SI                      = 202,
	Pfenum_SB                      = 203,
	Pfenum_SO                      = 204,
	Pfenum_ZA                      = 205,
	Pfenum_GS                      = 206,
	Pfenum_SS                      = 207,
	Pfenum_ES                      = 208,
	Pfenum_LK                      = 209,
	Pfenum_SD                      = 210,
	Pfenum_SR                      = 211,
	Pfenum_SJ                      = 212,
	Pfenum_SZ                      = 213,
	Pfenum_SE                      = 214,
	Pfenum_CH                      = 215,
	Pfenum_SY                      = 216,
	Pfenum_TW                      = 217,
	Pfenum_TJ                      = 218,
	Pfenum_TZ                      = 219,
	Pfenum_TH                      = 220,
	Pfenum_TL                      = 221,
	Pfenum_TG                      = 222,
	Pfenum_TK                      = 223,
	Pfenum_TO                      = 224,
	Pfenum_TT                      = 225,
	Pfenum_TN                      = 226,
	Pfenum_TR                      = 227,
	Pfenum_TM                      = 228,
	Pfenum_TC                      = 229,
	Pfenum_TV                      = 230,
	Pfenum_UG                      = 231,
	Pfenum_UA                      = 232,
	Pfenum_AE                      = 233,
	Pfenum_GB                      = 234,
	Pfenum_US                      = 235,
	Pfenum_UM                      = 236,
	Pfenum_UY                      = 237,
	Pfenum_UZ                      = 238,
	Pfenum_VU                      = 239,
	Pfenum_VE                      = 240,
	Pfenum_VN                      = 241,
	Pfenum_VG                      = 242,
	Pfenum_VI                      = 243,
	Pfenum_WF                      = 244,
	Pfenum_EH                      = 245,
	Pfenum_YE                      = 246,
	Pfenum_ZM                      = 247,
	Pfenum_ZW                      = 248,
	Pfenum_MAX                     = 249,
};

enum class ECurrency : uint8
{
	Pfenum_AED                     = 0,
	Pfenum_AFN                     = 1,
	Pfenum_ALL                     = 2,
	Pfenum_AMD                     = 3,
	Pfenum_ANG                     = 4,
	Pfenum_AOA                     = 5,
	Pfenum_ARS                     = 6,
	Pfenum_AUD                     = 7,
	Pfenum_AWG                     = 8,
	Pfenum_AZN                     = 9,
	Pfenum_BAM                     = 10,
	Pfenum_BBD                     = 11,
	Pfenum_BDT                     = 12,
	Pfenum_BGN                     = 13,
	Pfenum_BHD                     = 14,
	Pfenum_BIF                     = 15,
	Pfenum_BMD                     = 16,
	Pfenum_BND                     = 17,
	Pfenum_BOB                     = 18,
	Pfenum_BRL                     = 19,
	Pfenum_BSD                     = 20,
	Pfenum_BTN                     = 21,
	Pfenum_BWP                     = 22,
	Pfenum_BYR                     = 23,
	Pfenum_BZD                     = 24,
	Pfenum_CAD                     = 25,
	Pfenum_CDF                     = 26,
	Pfenum_CHF                     = 27,
	Pfenum_CLP                     = 28,
	Pfenum_CNY                     = 29,
	Pfenum_COP                     = 30,
	Pfenum_CRC                     = 31,
	Pfenum_CUC                     = 32,
	Pfenum_CUP                     = 33,
	Pfenum_CVE                     = 34,
	Pfenum_CZK                     = 35,
	Pfenum_DJF                     = 36,
	Pfenum_DKK                     = 37,
	Pfenum_DOP                     = 38,
	Pfenum_DZD                     = 39,
	Pfenum_EGP                     = 40,
	Pfenum_ERN                     = 41,
	Pfenum_ETB                     = 42,
	Pfenum_EUR                     = 43,
	Pfenum_FJD                     = 44,
	Pfenum_FKP                     = 45,
	Pfenum_GBP                     = 46,
	Pfenum_GEL                     = 47,
	Pfenum_GGP                     = 48,
	Pfenum_GHS                     = 49,
	Pfenum_GIP                     = 50,
	Pfenum_GMD                     = 51,
	Pfenum_GNF                     = 52,
	Pfenum_GTQ                     = 53,
	Pfenum_GYD                     = 54,
	Pfenum_HKD                     = 55,
	Pfenum_HNL                     = 56,
	Pfenum_HRK                     = 57,
	Pfenum_HTG                     = 58,
	Pfenum_HUF                     = 59,
	Pfenum_IDR                     = 60,
	Pfenum_ILS                     = 61,
	Pfenum_IMP                     = 62,
	Pfenum_INR                     = 63,
	Pfenum_IQD                     = 64,
	Pfenum_IRR                     = 65,
	Pfenum_ISK                     = 66,
	Pfenum_JEP                     = 67,
	Pfenum_JMD                     = 68,
	Pfenum_JOD                     = 69,
	Pfenum_JPY                     = 70,
	Pfenum_KES                     = 71,
	Pfenum_KGS                     = 72,
	Pfenum_KHR                     = 73,
	Pfenum_KMF                     = 74,
	Pfenum_KPW                     = 75,
	Pfenum_KRW                     = 76,
	Pfenum_KWD                     = 77,
	Pfenum_KYD                     = 78,
	Pfenum_KZT                     = 79,
	Pfenum_LAK                     = 80,
	Pfenum_LBP                     = 81,
	Pfenum_LKR                     = 82,
	Pfenum_LRD                     = 83,
	Pfenum_LSL                     = 84,
	Pfenum_LYD                     = 85,
	Pfenum_MAD                     = 86,
	Pfenum_MDL                     = 87,
	Pfenum_MGA                     = 88,
	Pfenum_MKD                     = 89,
	Pfenum_MMK                     = 90,
	Pfenum_MNT                     = 91,
	Pfenum_MOP                     = 92,
	Pfenum_MRO                     = 93,
	Pfenum_MUR                     = 94,
	Pfenum_MVR                     = 95,
	Pfenum_MWK                     = 96,
	Pfenum_MXN                     = 97,
	Pfenum_MYR                     = 98,
	Pfenum_MZN                     = 99,
	Pfenum_NAD                     = 100,
	Pfenum_NGN                     = 101,
	Pfenum_NIO                     = 102,
	Pfenum_NOK                     = 103,
	Pfenum_NPR                     = 104,
	Pfenum_NZD                     = 105,
	Pfenum_OMR                     = 106,
	Pfenum_PAB                     = 107,
	Pfenum_PEN                     = 108,
	Pfenum_PGK                     = 109,
	Pfenum_PHP                     = 110,
	Pfenum_PKR                     = 111,
	Pfenum_PLN                     = 112,
	Pfenum_PYG                     = 113,
	Pfenum_QAR                     = 114,
	Pfenum_RON                     = 115,
	Pfenum_RSD                     = 116,
	Pfenum_RUB                     = 117,
	Pfenum_RWF                     = 118,
	Pfenum_SAR                     = 119,
	Pfenum_SBD                     = 120,
	Pfenum_SCR                     = 121,
	Pfenum_SDG                     = 122,
	Pfenum_SEK                     = 123,
	Pfenum_SGD                     = 124,
	Pfenum_SHP                     = 125,
	Pfenum_SLL                     = 126,
	Pfenum_SOS                     = 127,
	Pfenum_SPL                     = 128,
	Pfenum_SRD                     = 129,
	Pfenum_STD                     = 130,
	Pfenum_SVC                     = 131,
	Pfenum_SYP                     = 132,
	Pfenum_SZL                     = 133,
	Pfenum_THB                     = 134,
	Pfenum_TJS                     = 135,
	Pfenum_TMT                     = 136,
	Pfenum_TND                     = 137,
	Pfenum_TOP                     = 138,
	Pfenum_TRY                     = 139,
	Pfenum_TTD                     = 140,
	Pfenum_TVD                     = 141,
	Pfenum_TWD                     = 142,
	Pfenum_TZS                     = 143,
	Pfenum_UAH                     = 144,
	Pfenum_UGX                     = 145,
	Pfenum_USD                     = 146,
	Pfenum_UYU                     = 147,
	Pfenum_UZS                     = 148,
	Pfenum_VEF                     = 149,
	Pfenum_VND                     = 150,
	Pfenum_VUV                     = 151,
	Pfenum_WST                     = 152,
	Pfenum_XAF                     = 153,
	Pfenum_XCD                     = 154,
	Pfenum_XDR                     = 155,
	Pfenum_XOF                     = 156,
	Pfenum_XPF                     = 157,
	Pfenum_YER                     = 158,
	Pfenum_ZAR                     = 159,
	Pfenum_ZMW                     = 160,
	Pfenum_ZWD                     = 161,
	Pfenum_MAX                     = 162,
};

enum class EEffectType : uint8
{
	Pfenum_Allow                   = 0,
	Pfenum_Deny                    = 1,
	Pfenum_MAX                     = 2,
};

enum class EEmailVerificationStatus : uint8
{
	Pfenum_Unverified              = 0,
	Pfenum_Pending                 = 1,
	Pfenum_Confirmed               = 2,
	Pfenum_MAX                     = 3,
};

enum class EPushNotificationPlatform : uint8
{
	Pfenum_ApplePushNotificationService = 0,
	Pfenum_GoogleCloudMessaging    = 1,
	Pfenum_MAX                     = 2,
};

enum class EResultTableNodeType : uint8
{
	Pfenum_ItemId                  = 0,
	Pfenum_TableId                 = 1,
	Pfenum_MAX                     = 2,
};

enum class ESegmentCountryCode : uint8
{
	Pfenum_AF                      = 0,
	Pfenum_AX                      = 1,
	Pfenum_AL                      = 2,
	Pfenum_DZ                      = 3,
	Pfenum_AS                      = 4,
	Pfenum_AD                      = 5,
	Pfenum_AO                      = 6,
	Pfenum_AI                      = 7,
	Pfenum_AQ                      = 8,
	Pfenum_AG                      = 9,
	Pfenum_AR                      = 10,
	Pfenum_AM                      = 11,
	Pfenum_AW                      = 12,
	Pfenum_AU                      = 13,
	Pfenum_AT                      = 14,
	Pfenum_AZ                      = 15,
	Pfenum_BS                      = 16,
	Pfenum_BH                      = 17,
	Pfenum_BD                      = 18,
	Pfenum_BB                      = 19,
	Pfenum_BY                      = 20,
	Pfenum_BE                      = 21,
	Pfenum_BZ                      = 22,
	Pfenum_BJ                      = 23,
	Pfenum_BM                      = 24,
	Pfenum_BT                      = 25,
	Pfenum_BO                      = 26,
	Pfenum_BQ                      = 27,
	Pfenum_BA                      = 28,
	Pfenum_BW                      = 29,
	Pfenum_BV                      = 30,
	Pfenum_BR                      = 31,
	Pfenum_IO                      = 32,
	Pfenum_BN                      = 33,
	Pfenum_BG                      = 34,
	Pfenum_BF                      = 35,
	Pfenum_BI                      = 36,
	Pfenum_KH                      = 37,
	Pfenum_CM                      = 38,
	Pfenum_CA                      = 39,
	Pfenum_CV                      = 40,
	Pfenum_KY                      = 41,
	Pfenum_CF                      = 42,
	Pfenum_TD                      = 43,
	Pfenum_CL                      = 44,
	Pfenum_CN                      = 45,
	Pfenum_CX                      = 46,
	Pfenum_CC                      = 47,
	Pfenum_CO                      = 48,
	Pfenum_KM                      = 49,
	Pfenum_CG                      = 50,
	Pfenum_CD                      = 51,
	Pfenum_CK                      = 52,
	Pfenum_CR                      = 53,
	Pfenum_CI                      = 54,
	Pfenum_HR                      = 55,
	Pfenum_CU                      = 56,
	Pfenum_CW                      = 57,
	Pfenum_CY                      = 58,
	Pfenum_CZ                      = 59,
	Pfenum_DK                      = 60,
	Pfenum_DJ                      = 61,
	Pfenum_DM                      = 62,
	Pfenum_DO                      = 63,
	Pfenum_EC                      = 64,
	Pfenum_EG                      = 65,
	Pfenum_SV                      = 66,
	Pfenum_GQ                      = 67,
	Pfenum_ER                      = 68,
	Pfenum_EE                      = 69,
	Pfenum_ET                      = 70,
	Pfenum_FK                      = 71,
	Pfenum_FO                      = 72,
	Pfenum_FJ                      = 73,
	Pfenum_FI                      = 74,
	Pfenum_FR                      = 75,
	Pfenum_GF                      = 76,
	Pfenum_PF                      = 77,
	Pfenum_TF                      = 78,
	Pfenum_GA                      = 79,
	Pfenum_GM                      = 80,
	Pfenum_GE                      = 81,
	Pfenum_DE                      = 82,
	Pfenum_GH                      = 83,
	Pfenum_GI                      = 84,
	Pfenum_GR                      = 85,
	Pfenum_GL                      = 86,
	Pfenum_GD                      = 87,
	Pfenum_GP                      = 88,
	Pfenum_GU                      = 89,
	Pfenum_GT                      = 90,
	Pfenum_GG                      = 91,
	Pfenum_GN                      = 92,
	Pfenum_GW                      = 93,
	Pfenum_GY                      = 94,
	Pfenum_HT                      = 95,
	Pfenum_HM                      = 96,
	Pfenum_VA                      = 97,
	Pfenum_HN                      = 98,
	Pfenum_HK                      = 99,
	Pfenum_HU                      = 100,
	Pfenum_IS                      = 101,
	Pfenum_IN                      = 102,
	Pfenum_ID                      = 103,
	Pfenum_IR                      = 104,
	Pfenum_IQ                      = 105,
	Pfenum_IE                      = 106,
	Pfenum_IM                      = 107,
	Pfenum_IL                      = 108,
	Pfenum_IT                      = 109,
	Pfenum_JM                      = 110,
	Pfenum_JP                      = 111,
	Pfenum_JE                      = 112,
	Pfenum_JO                      = 113,
	Pfenum_KZ                      = 114,
	Pfenum_KE                      = 115,
	Pfenum_KI                      = 116,
	Pfenum_KP                      = 117,
	Pfenum_KR                      = 118,
	Pfenum_KW                      = 119,
	Pfenum_KG                      = 120,
	Pfenum_LA                      = 121,
	Pfenum_LV                      = 122,
	Pfenum_LB                      = 123,
	Pfenum_LS                      = 124,
	Pfenum_LR                      = 125,
	Pfenum_LY                      = 126,
	Pfenum_LI                      = 127,
	Pfenum_LT                      = 128,
	Pfenum_LU                      = 129,
	Pfenum_MO                      = 130,
	Pfenum_MK                      = 131,
	Pfenum_MG                      = 132,
	Pfenum_MW                      = 133,
	Pfenum_MY                      = 134,
	Pfenum_MV                      = 135,
	Pfenum_ML                      = 136,
	Pfenum_MT                      = 137,
	Pfenum_MH                      = 138,
	Pfenum_MQ                      = 139,
	Pfenum_MR                      = 140,
	Pfenum_MU                      = 141,
	Pfenum_YT                      = 142,
	Pfenum_MX                      = 143,
	Pfenum_FM                      = 144,
	Pfenum_MD                      = 145,
	Pfenum_MC                      = 146,
	Pfenum_MN                      = 147,
	Pfenum_ME                      = 148,
	Pfenum_MS                      = 149,
	Pfenum_MA                      = 150,
	Pfenum_MZ                      = 151,
	Pfenum_MM                      = 152,
	Pfenum_NA                      = 153,
	Pfenum_NR                      = 154,
	Pfenum_NP                      = 155,
	Pfenum_NL                      = 156,
	Pfenum_NC                      = 157,
	Pfenum_NZ                      = 158,
	Pfenum_NI                      = 159,
	Pfenum_NE                      = 160,
	Pfenum_NG                      = 161,
	Pfenum_NU                      = 162,
	Pfenum_NF                      = 163,
	Pfenum_MP                      = 164,
	Pfenum_NO                      = 165,
	Pfenum_OM                      = 166,
	Pfenum_PK                      = 167,
	Pfenum_PW                      = 168,
	Pfenum_PS                      = 169,
	Pfenum_PA                      = 170,
	Pfenum_PG                      = 171,
	Pfenum_PY                      = 172,
	Pfenum_PE                      = 173,
	Pfenum_PH                      = 174,
	Pfenum_PN                      = 175,
	Pfenum_PL                      = 176,
	Pfenum_PT                      = 177,
	Pfenum_PR                      = 178,
	Pfenum_QA                      = 179,
	Pfenum_RE                      = 180,
	Pfenum_RO                      = 181,
	Pfenum_RU                      = 182,
	Pfenum_RW                      = 183,
	Pfenum_BL                      = 184,
	Pfenum_SH                      = 185,
	Pfenum_KN                      = 186,
	Pfenum_LC                      = 187,
	Pfenum_MF                      = 188,
	Pfenum_PM                      = 189,
	Pfenum_VC                      = 190,
	Pfenum_WS                      = 191,
	Pfenum_SM                      = 192,
	Pfenum_ST                      = 193,
	Pfenum_SA                      = 194,
	Pfenum_SN                      = 195,
	Pfenum_RS                      = 196,
	Pfenum_SC                      = 197,
	Pfenum_SL                      = 198,
	Pfenum_SG                      = 199,
	Pfenum_SX                      = 200,
	Pfenum_SK                      = 201,
	Pfenum_SI                      = 202,
	Pfenum_SB                      = 203,
	Pfenum_SO                      = 204,
	Pfenum_ZA                      = 205,
	Pfenum_GS                      = 206,
	Pfenum_SS                      = 207,
	Pfenum_ES                      = 208,
	Pfenum_LK                      = 209,
	Pfenum_SD                      = 210,
	Pfenum_SR                      = 211,
	Pfenum_SJ                      = 212,
	Pfenum_SZ                      = 213,
	Pfenum_SE                      = 214,
	Pfenum_CH                      = 215,
	Pfenum_SY                      = 216,
	Pfenum_TW                      = 217,
	Pfenum_TJ                      = 218,
	Pfenum_TZ                      = 219,
	Pfenum_TH                      = 220,
	Pfenum_TL                      = 221,
	Pfenum_TG                      = 222,
	Pfenum_TK                      = 223,
	Pfenum_TO                      = 224,
	Pfenum_TT                      = 225,
	Pfenum_TN                      = 226,
	Pfenum_TR                      = 227,
	Pfenum_TM                      = 228,
	Pfenum_TC                      = 229,
	Pfenum_TV                      = 230,
	Pfenum_UG                      = 231,
	Pfenum_UA                      = 232,
	Pfenum_AE                      = 233,
	Pfenum_GB                      = 234,
	Pfenum_US                      = 235,
	Pfenum_UM                      = 236,
	Pfenum_UY                      = 237,
	Pfenum_UZ                      = 238,
	Pfenum_VU                      = 239,
	Pfenum_VE                      = 240,
	Pfenum_VN                      = 241,
	Pfenum_VG                      = 242,
	Pfenum_VI                      = 243,
	Pfenum_WF                      = 244,
	Pfenum_EH                      = 245,
	Pfenum_YE                      = 246,
	Pfenum_ZM                      = 247,
	Pfenum_ZW                      = 248,
	Pfenum_MAX                     = 249,
};

enum class ESegmentCurrency : uint8
{
	Pfenum_AED                     = 0,
	Pfenum_AFN                     = 1,
	Pfenum_ALL                     = 2,
	Pfenum_AMD                     = 3,
	Pfenum_ANG                     = 4,
	Pfenum_AOA                     = 5,
	Pfenum_ARS                     = 6,
	Pfenum_AUD                     = 7,
	Pfenum_AWG                     = 8,
	Pfenum_AZN                     = 9,
	Pfenum_BAM                     = 10,
	Pfenum_BBD                     = 11,
	Pfenum_BDT                     = 12,
	Pfenum_BGN                     = 13,
	Pfenum_BHD                     = 14,
	Pfenum_BIF                     = 15,
	Pfenum_BMD                     = 16,
	Pfenum_BND                     = 17,
	Pfenum_BOB                     = 18,
	Pfenum_BRL                     = 19,
	Pfenum_BSD                     = 20,
	Pfenum_BTN                     = 21,
	Pfenum_BWP                     = 22,
	Pfenum_BYR                     = 23,
	Pfenum_BZD                     = 24,
	Pfenum_CAD                     = 25,
	Pfenum_CDF                     = 26,
	Pfenum_CHF                     = 27,
	Pfenum_CLP                     = 28,
	Pfenum_CNY                     = 29,
	Pfenum_COP                     = 30,
	Pfenum_CRC                     = 31,
	Pfenum_CUC                     = 32,
	Pfenum_CUP                     = 33,
	Pfenum_CVE                     = 34,
	Pfenum_CZK                     = 35,
	Pfenum_DJF                     = 36,
	Pfenum_DKK                     = 37,
	Pfenum_DOP                     = 38,
	Pfenum_DZD                     = 39,
	Pfenum_EGP                     = 40,
	Pfenum_ERN                     = 41,
	Pfenum_ETB                     = 42,
	Pfenum_EUR                     = 43,
	Pfenum_FJD                     = 44,
	Pfenum_FKP                     = 45,
	Pfenum_GBP                     = 46,
	Pfenum_GEL                     = 47,
	Pfenum_GGP                     = 48,
	Pfenum_GHS                     = 49,
	Pfenum_GIP                     = 50,
	Pfenum_GMD                     = 51,
	Pfenum_GNF                     = 52,
	Pfenum_GTQ                     = 53,
	Pfenum_GYD                     = 54,
	Pfenum_HKD                     = 55,
	Pfenum_HNL                     = 56,
	Pfenum_HRK                     = 57,
	Pfenum_HTG                     = 58,
	Pfenum_HUF                     = 59,
	Pfenum_IDR                     = 60,
	Pfenum_ILS                     = 61,
	Pfenum_IMP                     = 62,
	Pfenum_INR                     = 63,
	Pfenum_IQD                     = 64,
	Pfenum_IRR                     = 65,
	Pfenum_ISK                     = 66,
	Pfenum_JEP                     = 67,
	Pfenum_JMD                     = 68,
	Pfenum_JOD                     = 69,
	Pfenum_JPY                     = 70,
	Pfenum_KES                     = 71,
	Pfenum_KGS                     = 72,
	Pfenum_KHR                     = 73,
	Pfenum_KMF                     = 74,
	Pfenum_KPW                     = 75,
	Pfenum_KRW                     = 76,
	Pfenum_KWD                     = 77,
	Pfenum_KYD                     = 78,
	Pfenum_KZT                     = 79,
	Pfenum_LAK                     = 80,
	Pfenum_LBP                     = 81,
	Pfenum_LKR                     = 82,
	Pfenum_LRD                     = 83,
	Pfenum_LSL                     = 84,
	Pfenum_LYD                     = 85,
	Pfenum_MAD                     = 86,
	Pfenum_MDL                     = 87,
	Pfenum_MGA                     = 88,
	Pfenum_MKD                     = 89,
	Pfenum_MMK                     = 90,
	Pfenum_MNT                     = 91,
	Pfenum_MOP                     = 92,
	Pfenum_MRO                     = 93,
	Pfenum_MUR                     = 94,
	Pfenum_MVR                     = 95,
	Pfenum_MWK                     = 96,
	Pfenum_MXN                     = 97,
	Pfenum_MYR                     = 98,
	Pfenum_MZN                     = 99,
	Pfenum_NAD                     = 100,
	Pfenum_NGN                     = 101,
	Pfenum_NIO                     = 102,
	Pfenum_NOK                     = 103,
	Pfenum_NPR                     = 104,
	Pfenum_NZD                     = 105,
	Pfenum_OMR                     = 106,
	Pfenum_PAB                     = 107,
	Pfenum_PEN                     = 108,
	Pfenum_PGK                     = 109,
	Pfenum_PHP                     = 110,
	Pfenum_PKR                     = 111,
	Pfenum_PLN                     = 112,
	Pfenum_PYG                     = 113,
	Pfenum_QAR                     = 114,
	Pfenum_RON                     = 115,
	Pfenum_RSD                     = 116,
	Pfenum_RUB                     = 117,
	Pfenum_RWF                     = 118,
	Pfenum_SAR                     = 119,
	Pfenum_SBD                     = 120,
	Pfenum_SCR                     = 121,
	Pfenum_SDG                     = 122,
	Pfenum_SEK                     = 123,
	Pfenum_SGD                     = 124,
	Pfenum_SHP                     = 125,
	Pfenum_SLL                     = 126,
	Pfenum_SOS                     = 127,
	Pfenum_SPL                     = 128,
	Pfenum_SRD                     = 129,
	Pfenum_STD                     = 130,
	Pfenum_SVC                     = 131,
	Pfenum_SYP                     = 132,
	Pfenum_SZL                     = 133,
	Pfenum_THB                     = 134,
	Pfenum_TJS                     = 135,
	Pfenum_TMT                     = 136,
	Pfenum_TND                     = 137,
	Pfenum_TOP                     = 138,
	Pfenum_TRY                     = 139,
	Pfenum_TTD                     = 140,
	Pfenum_TVD                     = 141,
	Pfenum_TWD                     = 142,
	Pfenum_TZS                     = 143,
	Pfenum_UAH                     = 144,
	Pfenum_UGX                     = 145,
	Pfenum_USD                     = 146,
	Pfenum_UYU                     = 147,
	Pfenum_UZS                     = 148,
	Pfenum_VEF                     = 149,
	Pfenum_VND                     = 150,
	Pfenum_VUV                     = 151,
	Pfenum_WST                     = 152,
	Pfenum_XAF                     = 153,
	Pfenum_XCD                     = 154,
	Pfenum_XDR                     = 155,
	Pfenum_XOF                     = 156,
	Pfenum_XPF                     = 157,
	Pfenum_YER                     = 158,
	Pfenum_ZAR                     = 159,
	Pfenum_ZMW                     = 160,
	Pfenum_ZWD                     = 161,
	Pfenum_MAX                     = 162,
};

enum class ESegmentFilterComparison : uint8
{
	Pfenum_GreaterThan             = 0,
	Pfenum_LessThan                = 1,
	Pfenum_EqualTo                 = 2,
	Pfenum_NotEqualTo              = 3,
	Pfenum_GreaterThanOrEqual      = 4,
	Pfenum_LessThanOrEqual         = 5,
	Pfenum_Exists                  = 6,
	Pfenum_Contains                = 7,
	Pfenum_NotContains             = 8,
	Pfenum_MAX                     = 9,
};

enum class ESegmentLoginIdentityProvider : uint8
{
	Pfenum_Unknown                 = 0,
	Pfenum_PlayFab                 = 1,
	Pfenum_Custom                  = 2,
	Pfenum_GameCenter              = 3,
	Pfenum_GooglePlay              = 4,
	Pfenum_Steam                   = 5,
	Pfenum_XBoxLive                = 6,
	Pfenum_PSN                     = 7,
	Pfenum_Kongregate              = 8,
	Pfenum_Facebook                = 9,
	Pfenum_IOSDevice               = 10,
	Pfenum_AndroidDevice           = 11,
	Pfenum_Twitch                  = 12,
	Pfenum_WindowsHello            = 13,
	Pfenum_GameServer              = 14,
	Pfenum_CustomServer            = 15,
	Pfenum_NintendoSwitch          = 16,
	Pfenum_FacebookInstantGames    = 17,
	Pfenum_OpenIdConnect           = 18,
	Pfenum_Apple                   = 19,
	Pfenum_NintendoSwitchAccount   = 20,
	Pfenum_MAX                     = 21,
};

enum class ESegmentPushNotificationDevicePlatform : uint8
{
	Pfenum_ApplePushNotificationService = 0,
	Pfenum_GoogleCloudMessaging    = 1,
	Pfenum_MAX                     = 2,
};

enum class EStatisticVersionArchivalStatus : uint8
{
	Pfenum_NotScheduled            = 0,
	Pfenum_Scheduled               = 1,
	Pfenum_Queued                  = 2,
	Pfenum_InProgress              = 3,
	Pfenum_Complete                = 4,
	Pfenum_MAX                     = 5,
};

enum class EStatisticVersionStatus : uint8
{
	Pfenum_Active                  = 0,
	Pfenum_SnapshotPending         = 1,
	Pfenum_Snapshot                = 2,
	Pfenum_ArchivalPending         = 3,
	Pfenum_Archived                = 4,
	Pfenum_MAX                     = 5,
};

enum class ESubscriptionProviderStatus : uint8
{
	Pfenum_NoError                 = 0,
	Pfenum_Cancelled               = 1,
	Pfenum_UnknownError            = 2,
	Pfenum_BillingError            = 3,
	Pfenum_ProductUnavailable      = 4,
	Pfenum_CustomerDidNotAcceptPriceChange = 5,
	Pfenum_FreeTrial               = 6,
	Pfenum_PaymentPending          = 7,
	Pfenum_MAX                     = 8,
};

enum class ETitleActivationStatus : uint8
{
	Pfenum_None                    = 0,
	Pfenum_ActivatedTitleKey       = 1,
	Pfenum_PendingSteam            = 2,
	Pfenum_ActivatedSteam          = 3,
	Pfenum_RevokedSteam            = 4,
	Pfenum_MAX                     = 5,
};

enum class EUserOrigination : uint8
{
	Pfenum_Organic                 = 0,
	Pfenum_Steam                   = 1,
	Pfenum_Google                  = 2,
	Pfenum_Amazon                  = 3,
	Pfenum_Facebook                = 4,
	Pfenum_Kongregate              = 5,
	Pfenum_GamersFirst             = 6,
	Pfenum_Unknown                 = 7,
	Pfenum_IOS                     = 8,
	Pfenum_LoadTest                = 9,
	Pfenum_Android                 = 10,
	Pfenum_PSN                     = 11,
	Pfenum_GameCenter              = 12,
	Pfenum_CustomId                = 13,
	Pfenum_XboxLive                = 14,
	Pfenum_Parse                   = 15,
	Pfenum_Twitch                  = 16,
	Pfenum_ServerCustomId          = 17,
	Pfenum_NintendoSwitchDeviceId  = 18,
	Pfenum_FacebookInstantGamesId  = 19,
	Pfenum_OpenIdConnect           = 20,
	Pfenum_Apple                   = 21,
	Pfenum_NintendoSwitchAccount   = 22,
	Pfenum_GooglePlayGames         = 23,
	Pfenum_MAX                     = 24,
};

enum class EPfTriggerType : uint8
{
	Pfenum_HTTP                    = 0,
	Pfenum_Queue                   = 1,
	Pfenum_MAX                     = 2,
};

enum class EDisplayPropertyType : uint8
{
	Pfenum_None                    = 0,
	Pfenum_QueryDateTime           = 1,
	Pfenum_QueryDouble             = 2,
	Pfenum_QueryString             = 3,
	Pfenum_SearchString            = 4,
	Pfenum_MAX                     = 5,
};

enum class EAnalysisTaskState : uint8
{
	Pfenum_Waiting                 = 0,
	Pfenum_ReadyForSubmission      = 1,
	Pfenum_SubmittingToPipeline    = 2,
	Pfenum_Running                 = 3,
	Pfenum_Completed               = 4,
	Pfenum_Failed                  = 5,
	Pfenum_Canceled                = 6,
	Pfenum_MAX                     = 7,
};

enum class EExperimentState : uint8
{
	Pfenum_New                     = 0,
	Pfenum_Started                 = 1,
	Pfenum_Stopped                 = 2,
	Pfenum_Deleted                 = 3,
	Pfenum_MAX                     = 4,
};

enum class EAzureRegion : uint8
{
	Pfenum_AustraliaEast           = 0,
	Pfenum_AustraliaSoutheast      = 1,
	Pfenum_BrazilSouth             = 2,
	Pfenum_CentralUs               = 3,
	Pfenum_EastAsia                = 4,
	Pfenum_EastUs                  = 5,
	Pfenum_EastUs2                 = 6,
	Pfenum_JapanEast               = 7,
	Pfenum_JapanWest               = 8,
	Pfenum_NorthCentralUs          = 9,
	Pfenum_NorthEurope             = 10,
	Pfenum_SouthCentralUs          = 11,
	Pfenum_SoutheastAsia           = 12,
	Pfenum_WestEurope              = 13,
	Pfenum_WestUs                  = 14,
	Pfenum_SouthAfricaNorth        = 15,
	Pfenum_WestCentralUs           = 16,
	Pfenum_KoreaCentral            = 17,
	Pfenum_FranceCentral           = 18,
	Pfenum_WestUs2                 = 19,
	Pfenum_CentralIndia            = 20,
	Pfenum_UaeNorth                = 21,
	Pfenum_UkSouth                 = 22,
	Pfenum_MAX                     = 23,
};

enum class EAzureVmFamily : uint8
{
	Pfenum_A                       = 0,
	Pfenum_Av2                     = 1,
	Pfenum_Dv2                     = 2,
	Pfenum_Dv3                     = 3,
	Pfenum_F                       = 4,
	Pfenum_Fsv2                    = 5,
	Pfenum_Dasv4                   = 6,
	Pfenum_Dav4                    = 7,
	Pfenum_Dadsv5                  = 8,
	Pfenum_Eav4                    = 9,
	Pfenum_Easv4                   = 10,
	Pfenum_Ev4                     = 11,
	Pfenum_Esv4                    = 12,
	Pfenum_Dsv3                    = 13,
	Pfenum_Dsv2                    = 14,
	Pfenum_NCasT4_v3               = 15,
	Pfenum_Ddv4                    = 16,
	Pfenum_Ddsv4                   = 17,
	Pfenum_HBv3                    = 18,
	Pfenum_MAX                     = 19,
};

enum class ECancellationReason : uint8
{
	Pfenum_Requested               = 0,
	Pfenum_Internal                = 1,
	Pfenum_Timeout                 = 2,
	Pfenum_MAX                     = 3,
};

enum class EOsPlatform : uint8
{
	Pfenum_Windows                 = 0,
	Pfenum_Linux                   = 1,
	Pfenum_MAX                     = 2,
};

enum class EProtocolType : uint8
{
	Pfenum_TCP                     = 0,
	Pfenum_UDP                     = 1,
	Pfenum_MAX                     = 2,
};

enum class ERoutingType : uint8
{
	Pfenum_Microsoft               = 0,
	Pfenum_Internet                = 1,
	Pfenum_MAX                     = 2,
};

enum class EServerType : uint8
{
	Pfenum_Container               = 0,
	Pfenum_Process                 = 1,
	Pfenum_MAX                     = 2,
};

enum class EPFJson : uint8
{
	None                           = 0,
	Null                           = 1,
	String                         = 2,
	Number                         = 3,
	Boolean                        = 4,
	Array                          = 5,
	Object                         = 6,
	EPFJson_MAX                    = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct PlayFab.PlayFabError
struct FPlayFabError
{
public:
	bool                                         HasError;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_379D[0x3];                                     // Fixing Size After Last Property 
	int32                                        ErrorCode;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ErrorName;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ErrorMessage;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ErrorDetails;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct PlayFab.PlayFabBaseModel
struct FPlayFabBaseModel
{
public:
	struct FPlayFabError                         ResponseError;                                     // 0x0(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ResponseData;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct PlayFab.PlayFabResultCommon
struct FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Request;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminEmptyResponse
struct FAdminEmptyResponse : public FPlayFabResultCommon
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct PlayFab.PlayFabRequestCommon
struct FPlayFabRequestCommon
{
public:
	class UPlayFabAuthenticationContext*         AuthenticationContext;                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.AdminAbortTaskInstanceRequest
struct FAdminAbortTaskInstanceRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TaskInstanceId;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminAddLocalizedNewsResult
struct FAdminAddLocalizedNewsResult : public FPlayFabResultCommon
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.AdminAddLocalizedNewsRequest
struct FAdminAddLocalizedNewsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Body;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Language;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewsId;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminAddNewsResult
struct FAdminAddNewsResult : public FPlayFabResultCommon
{
public:
	class FString                                NewsId;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.AdminAddNewsRequest
struct FAdminAddNewsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Body;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminAddPlayerTagResult
struct FAdminAddPlayerTagResult : public FPlayFabResultCommon
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminAddPlayerTagRequest
struct FAdminAddPlayerTagRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TagName;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminModifyUserVirtualCurrencyResult
struct FAdminModifyUserVirtualCurrencyResult : public FPlayFabResultCommon
{
public:
	int32                                        Balance;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BalanceChange;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VirtualCurrency;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.AdminAddUserVirtualCurrencyRequest
struct FAdminAddUserVirtualCurrencyRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37A1[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VirtualCurrency;                                   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminBlankResult
struct FAdminBlankResult : public FPlayFabResultCommon
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminAddVirtualCurrencyTypesRequest
struct FAdminAddVirtualCurrencyTypesRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            VirtualCurrencies;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminBanUsersResult
struct FAdminBanUsersResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BanData;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.AdminBanUsersRequest
struct FAdminBanUsersRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Bans;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminCheckLimitedEditionItemAvailabilityResult
struct FAdminCheckLimitedEditionItemAvailabilityResult : public FPlayFabResultCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37A2[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminCheckLimitedEditionItemAvailabilityRequest
struct FAdminCheckLimitedEditionItemAvailabilityRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemId;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminCreateTaskResult
struct FAdminCreateTaskResult : public FPlayFabResultCommon
{
public:
	class FString                                TaskId;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.AdminCreateActionsOnPlayerSegmentTaskRequest
struct FAdminCreateActionsOnPlayerSegmentTaskRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsActive;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37A4[0x7];                                     // Fixing Size After Last Property 
	class FString                                Name;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Parameter;                                         // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Schedule;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.AdminCreateCloudScriptTaskRequest
struct FAdminCreateCloudScriptTaskRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsActive;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37A5[0x7];                                     // Fixing Size After Last Property 
	class FString                                Name;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Parameter;                                         // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Schedule;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.AdminCreateInsightsScheduledScalingTaskRequest
struct FAdminCreateInsightsScheduledScalingTaskRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsActive;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37A6[0x7];                                     // Fixing Size After Last Property 
	class FString                                Name;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Parameter;                                         // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Schedule;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.AdminCreateOpenIdConnectionRequest
struct FAdminCreateOpenIdConnectionRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ClientId;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientSecret;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ConnectionId;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreNonce;                                       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37A7[0x7];                                     // Fixing Size After Last Property 
	class FString                                IssuerDiscoveryUrl;                                // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    IssuerInformation;                                 // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminCreatePlayerSharedSecretResult
struct FAdminCreatePlayerSharedSecretResult : public FPlayFabResultCommon
{
public:
	class FString                                SecretKey;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminCreatePlayerSharedSecretRequest
struct FAdminCreatePlayerSharedSecretRequest : public FPlayFabRequestCommon
{
public:
	class FString                                FriendlyName;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminCreatePlayerStatisticDefinitionResult
struct FAdminCreatePlayerStatisticDefinitionResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Statistic;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminCreatePlayerStatisticDefinitionRequest
struct FAdminCreatePlayerStatisticDefinitionRequest : public FPlayFabRequestCommon
{
public:
	enum class EStatisticAggregationMethod       AggregationMethod;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37A9[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatisticResetIntervalOption     VersionChangeInterval;                             // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37AA[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminCreateSegmentResponse
struct FAdminCreateSegmentResponse : public FPlayFabResultCommon
{
public:
	class FString                                ErrorMessage;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SegmentId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminCreateSegmentRequest
struct FAdminCreateSegmentRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    SegmentModel;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminDeleteMasterPlayerAccountResult
struct FAdminDeleteMasterPlayerAccountResult : public FPlayFabResultCommon
{
public:
	class FString                                JobReceiptId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TitleIds;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminDeleteMembershipSubscriptionResult
struct FAdminDeleteMembershipSubscriptionResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminDeletePlayerResult
struct FAdminDeletePlayerResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminDeletePlayerSharedSecretResult
struct FAdminDeletePlayerSharedSecretResult : public FPlayFabResultCommon
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminDeleteSegmentsResponse
struct FAdminDeleteSegmentsResponse : public FPlayFabResultCommon
{
public:
	class FString                                ErrorMessage;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminDeleteStoreResult
struct FAdminDeleteStoreResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminDeleteTitleResult
struct FAdminDeleteTitleResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminDeleteTitleDataOverrideResult
struct FAdminDeleteTitleDataOverrideResult : public FPlayFabResultCommon
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminExportMasterPlayerDataResult
struct FAdminExportMasterPlayerDataResult : public FPlayFabResultCommon
{
public:
	class FString                                JobReceiptId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminExportPlayersInSegmentResult
struct FAdminExportPlayersInSegmentResult : public FPlayFabResultCommon
{
public:
	class FString                                ExportId;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SegmentId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetActionsOnPlayersInSegmentTaskInstanceResult
struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Parameter;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Summary;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetAllSegmentsResult
struct FAdminGetAllSegmentsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Segments;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetCatalogItemsResult
struct FAdminGetCatalogItemsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Catalog;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.AdminGetCloudScriptRevisionResult
struct FAdminGetCloudScriptRevisionResult : public FPlayFabResultCommon
{
public:
	class FString                                CreatedAt;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Files;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         IsPublished;                                       // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37AE[0x3];                                     // Fixing Size After Last Property 
	int32                                        Revision;                                          // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37AF[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetCloudScriptTaskInstanceResult
struct FAdminGetCloudScriptTaskInstanceResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Parameter;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Summary;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetCloudScriptVersionsResult
struct FAdminGetCloudScriptVersionsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Versions;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.AdminGetContentListResult
struct FAdminGetContentListResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Contents;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ItemCount;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalSize;                                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetContentUploadUrlResult
struct FAdminGetContentUploadUrlResult : public FPlayFabResultCommon
{
public:
	class FString                                URL;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetDataReportResult
struct FAdminGetDataReportResult : public FPlayFabResultCommon
{
public:
	class FString                                DownloadUrl;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB8 - 0x8)
// ScriptStruct PlayFab.AdminGetMatchmakerGameInfoResult
struct FAdminGetMatchmakerGameInfoResult : public FPlayFabResultCommon
{
public:
	class FString                                BuildVersion;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EndTime;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Mode;                                              // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Players;                                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERegion                           Region;                                            // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37B0[0x7];                                     // Fixing Size After Last Property 
	class FString                                ServerIPV4Address;                                 // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerIPV6Address;                                 // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerPort;                                        // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37B1[0x4];                                     // Fixing Size After Last Property 
	class FString                                ServerPublicDNSName;                               // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StartTime;                                         // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TitleId;                                           // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetMatchmakerGameModesResult
struct FAdminGetMatchmakerGameModesResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            GameModes;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayedTitleListResult
struct FAdminGetPlayedTitleListResult : public FPlayFabResultCommon
{
public:
	class FString                                TitleIds;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayerIdFromAuthTokenResult
struct FAdminGetPlayerIdFromAuthTokenResult : public FPlayFabResultCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayerProfileResult
struct FAdminGetPlayerProfileResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    PlayerProfile;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayerSegmentsResult
struct FAdminGetPlayerSegmentsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Segments;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayerSharedSecretsResult
struct FAdminGetPlayerSharedSecretsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            SharedSecrets;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayersInSegmentResult
struct FAdminGetPlayersInSegmentResult : public FPlayFabResultCommon
{
public:
	class FString                                ContinuationToken;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            PlayerProfiles;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ProfilesInSegment;                                 // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37B3[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayerStatisticDefinitionsResult
struct FAdminGetPlayerStatisticDefinitionsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Statistics;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayerStatisticVersionsResult
struct FAdminGetPlayerStatisticVersionsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            StatisticVersions;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayerTagsResult
struct FAdminGetPlayerTagsResult : public FPlayFabResultCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tags;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminGetPolicyResponse
struct FAdminGetPolicyResponse : public FPlayFabResultCommon
{
public:
	class FString                                PolicyName;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolicyVersion;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37B5[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            Statements;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminGetPublisherDataResult
struct FAdminGetPublisherDataResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Data;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminGetRandomResultTablesResult
struct FAdminGetRandomResultTablesResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Tables;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayersInSegmentExportResponse
struct FAdminGetPlayersInSegmentExportResponse : public FPlayFabResultCommon
{
public:
	class FString                                IndexUrl;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                State;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminGetSegmentsResponse
struct FAdminGetSegmentsResponse : public FPlayFabResultCommon
{
public:
	class FString                                ErrorMessage;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Segments;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.AdminGetStoreItemsResult
struct FAdminGetStoreItemsResult : public FPlayFabResultCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MarketingData;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPfSourceType                     Source;                                            // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37B7[0x7];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            Store;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                StoreId;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetTaskInstancesResult
struct FAdminGetTaskInstancesResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Summaries;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetTasksResult
struct FAdminGetTasksResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Tasks;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminGetTitleDataResult
struct FAdminGetTitleDataResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Data;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminLookupUserAccountInfoResult
struct FAdminLookupUserAccountInfoResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    UserInfo;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetUserBansResult
struct FAdminGetUserBansResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BanData;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminGetUserDataResult
struct FAdminGetUserDataResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Data;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataVersion;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37B8[0x4];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.AdminGetUserInventoryResult
struct FAdminGetUserInventoryResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Inventory;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrency;                                   // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrencyRechargeTimes;                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGrantItemsToUsersResult
struct FAdminGrantItemsToUsersResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            ItemGrantResults;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminIncrementLimitedEditionItemAvailabilityResult
struct FAdminIncrementLimitedEditionItemAvailabilityResult : public FPlayFabResultCommon
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminIncrementPlayerStatisticVersionResult
struct FAdminIncrementPlayerStatisticVersionResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    StatisticVersion;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminListOpenIdConnectionResponse
struct FAdminListOpenIdConnectionResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Connections;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminListVirtualCurrencyTypesResult
struct FAdminListVirtualCurrencyTypesResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            VirtualCurrencies;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct PlayFab.AdminModifyServerBuildResult
struct FAdminModifyServerBuildResult : public FPlayFabResultCommon
{
public:
	class FString                                ActiveRegions;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildId;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CommandLineTemplate;                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Comment;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExecutablePath;                                    // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxGamesPerHost;                                   // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinFreeGameSlots;                                  // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameBuildStatus                  Status;                                            // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37BB[0x7];                                     // Fixing Size After Last Property 
	class FString                                Timestamp;                                         // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TitleId;                                           // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminRefundPurchaseResponse
struct FAdminRefundPurchaseResponse : public FPlayFabResultCommon
{
public:
	class FString                                PurchaseStatus;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminRemovePlayerTagResult
struct FAdminRemovePlayerTagResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminResetCharacterStatisticsResult
struct FAdminResetCharacterStatisticsResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminResetPasswordResult
struct FAdminResetPasswordResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminResetUserStatisticsResult
struct FAdminResetUserStatisticsResult : public FPlayFabResultCommon
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminResolvePurchaseDisputeResponse
struct FAdminResolvePurchaseDisputeResponse : public FPlayFabResultCommon
{
public:
	class FString                                PurchaseStatus;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminRevokeAllBansForUserResult
struct FAdminRevokeAllBansForUserResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BanData;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminRevokeBansResult
struct FAdminRevokeBansResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BanData;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminRevokeInventoryResult
struct FAdminRevokeInventoryResult : public FPlayFabResultCommon
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminRevokeInventoryItemsResult
struct FAdminRevokeInventoryItemsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Errors;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminRunTaskResult
struct FAdminRunTaskResult : public FPlayFabResultCommon
{
public:
	class FString                                TaskInstanceId;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminSendAccountRecoveryEmailResult
struct FAdminSendAccountRecoveryEmailResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminUpdateCatalogItemsResult
struct FAdminUpdateCatalogItemsResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminSetMembershipOverrideResult
struct FAdminSetMembershipOverrideResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminSetPlayerSecretResult
struct FAdminSetPlayerSecretResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminSetPublishedRevisionResult
struct FAdminSetPublishedRevisionResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminSetPublisherDataResult
struct FAdminSetPublisherDataResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminUpdateStoreItemsResult
struct FAdminUpdateStoreItemsResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminSetTitleDataResult
struct FAdminSetTitleDataResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminSetTitleDataAndOverridesResult
struct FAdminSetTitleDataAndOverridesResult : public FPlayFabResultCommon
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminSetupPushNotificationResult
struct FAdminSetupPushNotificationResult : public FPlayFabResultCommon
{
public:
	class FString                                ARN;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminUpdateBansResult
struct FAdminUpdateBansResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BanData;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminUpdateCloudScriptResult
struct FAdminUpdateCloudScriptResult : public FPlayFabResultCommon
{
public:
	int32                                        Revision;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminUpdatePlayerSharedSecretResult
struct FAdminUpdatePlayerSharedSecretResult : public FPlayFabResultCommon
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminUpdatePlayerStatisticDefinitionResult
struct FAdminUpdatePlayerStatisticDefinitionResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Statistic;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminUpdatePolicyResponse
struct FAdminUpdatePolicyResponse : public FPlayFabResultCommon
{
public:
	class FString                                PolicyName;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Statements;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminUpdateRandomResultTablesResult
struct FAdminUpdateRandomResultTablesResult : public FPlayFabResultCommon
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminUpdateSegmentResponse
struct FAdminUpdateSegmentResponse : public FPlayFabResultCommon
{
public:
	class FString                                ErrorMessage;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SegmentId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminUpdateUserDataResult
struct FAdminUpdateUserDataResult : public FPlayFabResultCommon
{
public:
	int32                                        DataVersion;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37BD[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminUpdateUserTitleDisplayNameResult
struct FAdminUpdateUserTitleDisplayNameResult : public FPlayFabResultCommon
{
public:
	class FString                                DisplayName;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminDeleteContentRequest
struct FAdminDeleteContentRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Key;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminDeleteMasterPlayerAccountRequest
struct FAdminDeleteMasterPlayerAccountRequest : public FPlayFabRequestCommon
{
public:
	class FString                                MetaData;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.AdminDeleteMembershipSubscriptionRequest
struct FAdminDeleteMembershipSubscriptionRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MembershipId;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubscriptionId;                                    // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminDeleteOpenIdConnectionRequest
struct FAdminDeleteOpenIdConnectionRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ConnectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminDeletePlayerRequest
struct FAdminDeletePlayerRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminDeletePlayerSharedSecretRequest
struct FAdminDeletePlayerSharedSecretRequest : public FPlayFabRequestCommon
{
public:
	class FString                                SecretKey;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminDeleteSegmentRequest
struct FAdminDeleteSegmentRequest : public FPlayFabRequestCommon
{
public:
	class FString                                SegmentId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminDeleteStoreRequest
struct FAdminDeleteStoreRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StoreId;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminDeleteTaskRequest
struct FAdminDeleteTaskRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    Identifier;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminDeleteTitleRequest
struct FAdminDeleteTitleRequest : public FPlayFabRequestCommon
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminDeleteTitleDataOverrideRequest
struct FAdminDeleteTitleDataOverrideRequest : public FPlayFabRequestCommon
{
public:
	class FString                                OverrideLabel;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminExportMasterPlayerDataRequest
struct FAdminExportMasterPlayerDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminExportPlayersInSegmentRequest
struct FAdminExportPlayersInSegmentRequest : public FPlayFabRequestCommon
{
public:
	class FString                                SegmentId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetTaskInstanceRequest
struct FAdminGetTaskInstanceRequest : public FPlayFabRequestCommon
{
public:
	class FString                                TaskInstanceId;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminGetAllSegmentsRequest
struct FAdminGetAllSegmentsRequest : public FPlayFabRequestCommon
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetCatalogItemsRequest
struct FAdminGetCatalogItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminGetCloudScriptRevisionRequest
struct FAdminGetCloudScriptRevisionRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Revision;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminGetCloudScriptVersionsRequest
struct FAdminGetCloudScriptVersionsRequest : public FPlayFabRequestCommon
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetContentListRequest
struct FAdminGetContentListRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Prefix;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminGetContentUploadUrlRequest
struct FAdminGetContentUploadUrlRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ContentType;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminGetDataReportRequest
struct FAdminGetDataReportRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Day;                                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Month;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReportName;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Year;                                              // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C1[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetMatchmakerGameInfoRequest
struct FAdminGetMatchmakerGameInfoRequest : public FPlayFabRequestCommon
{
public:
	class FString                                LobbyId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetMatchmakerGameModesRequest
struct FAdminGetMatchmakerGameModesRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildVersion;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayedTitleListRequest
struct FAdminGetPlayedTitleListRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayerIdFromAuthTokenRequest
struct FAdminGetPlayerIdFromAuthTokenRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Token;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAuthTokenType                    TokenType;                                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C2[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayerProfileRequest
struct FAdminGetPlayerProfileRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayersSegmentsRequest
struct FAdminGetPlayersSegmentsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayerSharedSecretsRequest
struct FAdminGetPlayerSharedSecretsRequest : public FPlayFabRequestCommon
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayersInSegmentRequest
struct FAdminGetPlayersInSegmentRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ContinuationToken;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GetProfilesAsync;                                  // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C3[0x3];                                     // Fixing Size After Last Property 
	int32                                        MaxBatchSize;                                      // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondsToLive;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C4[0x4];                                     // Fixing Size After Last Property 
	class FString                                SegmentId;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayerStatisticDefinitionsRequest
struct FAdminGetPlayerStatisticDefinitionsRequest : public FPlayFabRequestCommon
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayerStatisticVersionsRequest
struct FAdminGetPlayerStatisticVersionsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayerTagsRequest
struct FAdminGetPlayerTagsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Namespace;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetPolicyRequest
struct FAdminGetPolicyRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PolicyName;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetPublisherDataRequest
struct FAdminGetPublisherDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Keys;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetRandomResultTablesRequest
struct FAdminGetRandomResultTablesRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetPlayersInSegmentExportRequest
struct FAdminGetPlayersInSegmentExportRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ExportId;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetSegmentsRequest
struct FAdminGetSegmentsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                SegmentIds;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminGetStoreItemsRequest
struct FAdminGetStoreItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StoreId;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.AdminGetTaskInstancesRequest
struct FAdminGetTaskInstancesRequest : public FPlayFabRequestCommon
{
public:
	class FString                                StartedAtRangeFrom;                                // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StartedAtRangeTo;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETaskInstanceStatus               StatusFilter;                                      // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C5[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    TaskIdentifier;                                    // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminGetTasksRequest
struct FAdminGetTasksRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    Identifier;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminGetTitleDataRequest
struct FAdminGetTitleDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Keys;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OverrideLabel;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.AdminLookupUserAccountInfoRequest
struct FAdminLookupUserAccountInfoRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Email;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TitleDisplayName;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminGetUserBansRequest
struct FAdminGetUserBansRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminGetUserDataRequest
struct FAdminGetUserDataRequest : public FPlayFabRequestCommon
{
public:
	int32                                        IfChangedFromDataVersion;                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C6[0x4];                                     // Fixing Size After Last Property 
	class FString                                Keys;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.AdminGetUserInventoryRequest
struct FAdminGetUserInventoryRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminGrantItemsToUsersRequest
struct FAdminGrantItemsToUsersRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            ItemGrants;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.AdminIncrementLimitedEditionItemAvailabilityRequest
struct FAdminIncrementLimitedEditionItemAvailabilityRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C7[0x4];                                     // Fixing Size After Last Property 
	class FString                                CatalogVersion;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemId;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.AdminIncrementPlayerStatisticVersionRequest
struct FAdminIncrementPlayerStatisticVersionRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminListOpenIdConnectionRequest
struct FAdminListOpenIdConnectionRequest : public FPlayFabRequestCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AdminListVirtualCurrencyTypesRequest
struct FAdminListVirtualCurrencyTypesRequest : public FPlayFabRequestCommon
{
public:
};

// 0x70 (0x78 - 0x8)
// ScriptStruct PlayFab.AdminModifyServerBuildRequest
struct FAdminModifyServerBuildRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ActiveRegions;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildId;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CommandLineTemplate;                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Comment;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExecutablePath;                                    // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxGamesPerHost;                                   // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinFreeGameSlots;                                  // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.AdminRefundPurchaseRequest
struct FAdminRefundPurchaseRequest : public FPlayFabRequestCommon
{
public:
	class FString                                OrderID;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Reason;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminRemovePlayerTagRequest
struct FAdminRemovePlayerTagRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TagName;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminRemoveVirtualCurrencyTypesRequest
struct FAdminRemoveVirtualCurrencyTypesRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            VirtualCurrencies;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminResetCharacterStatisticsRequest
struct FAdminResetCharacterStatisticsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminResetPasswordRequest
struct FAdminResetPasswordRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Token;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.AdminResetUserStatisticsRequest
struct FAdminResetUserStatisticsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.AdminResolvePurchaseDisputeRequest
struct FAdminResolvePurchaseDisputeRequest : public FPlayFabRequestCommon
{
public:
	class FString                                OrderID;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EResolutionOutcome                Outcome;                                           // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37CA[0x7];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Reason;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminRevokeAllBansForUserRequest
struct FAdminRevokeAllBansForUserRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminRevokeBansRequest
struct FAdminRevokeBansRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BanIds;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.AdminRevokeInventoryItemRequest
struct FAdminRevokeInventoryItemRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemInstanceId;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminRevokeInventoryItemsRequest
struct FAdminRevokeInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminRunTaskRequest
struct FAdminRunTaskRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Identifier;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminSendAccountRecoveryEmailRequest
struct FAdminSendAccountRecoveryEmailRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Email;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EmailTemplateId;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.AdminUpdateCatalogItemsRequest
struct FAdminUpdateCatalogItemsRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Catalog;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                CatalogVersion;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SetAsDefaultCatalog;                               // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37CB[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.AdminSetMembershipOverrideRequest
struct FAdminSetMembershipOverrideRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExpirationTime;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MembershipId;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminSetPlayerSecretRequest
struct FAdminSetPlayerSecretRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayerSecret;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminSetPublishedRevisionRequest
struct FAdminSetPublishedRevisionRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Revision;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminSetPublisherDataRequest
struct FAdminSetPublisherDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Key;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.AdminUpdateStoreItemsRequest
struct FAdminUpdateStoreItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MarketingData;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Store;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                StoreId;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminSetTitleDataRequest
struct FAdminSetTitleDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Key;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminSetTitleDataAndOverridesRequest
struct FAdminSetTitleDataAndOverridesRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            KeyValues;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                OverrideLabel;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.AdminSetupPushNotificationRequest
struct FAdminSetupPushNotificationRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Credential;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OverwriteOldARN;                                   // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPushSetupPlatform                Platform;                                          // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37CD[0x6];                                     // Fixing Size Of Struct
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.AdminSubtractUserVirtualCurrencyRequest
struct FAdminSubtractUserVirtualCurrencyRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37CE[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VirtualCurrency;                                   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AdminUpdateBansRequest
struct FAdminUpdateBansRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Bans;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.AdminUpdateCloudScriptRequest
struct FAdminUpdateCloudScriptRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeveloperPlayFabId;                                // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Files;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Publish;                                           // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37CF[0x7];                                     // Fixing Size Of Struct
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.AdminUpdateOpenIdConnectionRequest
struct FAdminUpdateOpenIdConnectionRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ClientId;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientSecret;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ConnectionId;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IssuerDiscoveryUrl;                                // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    IssuerInformation;                                 // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminUpdatePlayerSharedSecretRequest
struct FAdminUpdatePlayerSharedSecretRequest : public FPlayFabRequestCommon
{
public:
	bool                                         Disabled;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D0[0x7];                                     // Fixing Size After Last Property 
	class FString                                FriendlyName;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SecretKey;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminUpdatePlayerStatisticDefinitionRequest
struct FAdminUpdatePlayerStatisticDefinitionRequest : public FPlayFabRequestCommon
{
public:
	enum class EStatisticAggregationMethod       AggregationMethod;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D1[0x7];                                     // Fixing Size After Last Property 
	class FString                                StatisticName;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatisticResetIntervalOption     VersionChangeInterval;                             // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D2[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.AdminUpdatePolicyRequest
struct FAdminUpdatePolicyRequest : public FPlayFabRequestCommon
{
public:
	bool                                         OverwritePolicy;                                   // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D3[0x7];                                     // Fixing Size After Last Property 
	class FString                                PolicyName;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolicyVersion;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D4[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            Statements;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminUpdateRandomResultTablesRequest
struct FAdminUpdateRandomResultTablesRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Tables;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.AdminUpdateSegmentRequest
struct FAdminUpdateSegmentRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    SegmentModel;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.AdminUpdateTaskRequest
struct FAdminUpdateTaskRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Identifier;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsActive;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D5[0x7];                                     // Fixing Size After Last Property 
	class FString                                Name;                                              // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Parameter;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Schedule;                                          // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScheduledTaskType                Type;                                              // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D6[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.AdminUpdateUserDataRequest
struct FAdminUpdateUserDataRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Data;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeysToRemove;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUserDataPermission               Permission;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D8[0x7];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.AdminUpdateUserInternalDataRequest
struct FAdminUpdateUserInternalDataRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Data;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeysToRemove;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AdminUpdateUserTitleDisplayNameRequest
struct FAdminUpdateUserTitleDisplayNameRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AuthenticationAuthenticateCustomIdResult
struct FAuthenticationAuthenticateCustomIdResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    EntityToken;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NewlyCreated;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37DA[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.AuthenticationAuthenticateCustomIdRequest
struct FAuthenticationAuthenticateCustomIdRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CustomId;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.AuthenticationEmptyResponse
struct FAuthenticationEmptyResponse : public FPlayFabResultCommon
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AuthenticationGetEntityTokenResponse
struct FAuthenticationGetEntityTokenResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Entity;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EntityToken;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TokenExpiration;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.AuthenticationValidateEntityTokenResponse
struct FAuthenticationValidateEntityTokenResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Entity;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIdentifiedDeviceType             IdentifiedDeviceType;                              // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELoginIdentityProvider            IdentityProvider;                                  // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37DB[0x6];                                     // Fixing Size After Last Property 
	class FString                                IdentityProviderIssuedId;                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Lineage;                                           // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AuthenticationDeleteRequest
struct FAuthenticationDeleteRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.AuthenticationGetEntityTokenRequest
struct FAuthenticationGetEntityTokenRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.AuthenticationValidateEntityTokenRequest
struct FAuthenticationValidateEntityTokenRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EntityToken;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientAcceptTradeResponse
struct FClientAcceptTradeResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Trade;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ClientAcceptTradeRequest
struct FClientAcceptTradeRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AcceptedInventoryInstanceIds;                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OfferingPlayerId;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TradeId;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientAddFriendResult
struct FClientAddFriendResult : public FPlayFabResultCommon
{
public:
	bool                                         Created;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37DC[0x7];                                     // Fixing Size Of Struct
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ClientAddFriendRequest
struct FClientAddFriendRequest : public FPlayFabRequestCommon
{
public:
	class FString                                FriendEmail;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FriendPlayFabId;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FriendTitleDisplayName;                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FriendUsername;                                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientAddGenericIDResult
struct FClientAddGenericIDResult : public FPlayFabResultCommon
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientAddGenericIDRequest
struct FClientAddGenericIDRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    GenericId;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientAddOrUpdateContactEmailResult
struct FClientAddOrUpdateContactEmailResult : public FPlayFabResultCommon
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientAddOrUpdateContactEmailRequest
struct FClientAddOrUpdateContactEmailRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EmailAddress;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientAddSharedGroupMembersResult
struct FClientAddSharedGroupMembersResult : public FPlayFabResultCommon
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientAddSharedGroupMembersRequest
struct FClientAddSharedGroupMembersRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabIds;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SharedGroupId;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientAddUsernamePasswordResult
struct FClientAddUsernamePasswordResult : public FPlayFabResultCommon
{
public:
	class FString                                Username;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ClientAddUsernamePasswordRequest
struct FClientAddUsernamePasswordRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Email;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientModifyUserVirtualCurrencyResult
struct FClientModifyUserVirtualCurrencyResult : public FPlayFabResultCommon
{
public:
	int32                                        Balance;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BalanceChange;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VirtualCurrency;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientAddUserVirtualCurrencyRequest
struct FClientAddUserVirtualCurrencyRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37DD[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VirtualCurrency;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientAndroidDevicePushNotificationRegistrationResult
struct FClientAndroidDevicePushNotificationRegistrationResult : public FPlayFabResultCommon
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientAndroidDevicePushNotificationRegistrationRequest
struct FClientAndroidDevicePushNotificationRegistrationRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ConfirmationMessage;                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeviceToken;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SendPushNotificationConfirmation;                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37DE[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientAttributeInstallResult
struct FClientAttributeInstallResult : public FPlayFabResultCommon
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientAttributeInstallRequest
struct FClientAttributeInstallRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Adid;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Idfa;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientCancelTradeResponse
struct FClientCancelTradeResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Trade;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientCancelTradeRequest
struct FClientCancelTradeRequest : public FPlayFabRequestCommon
{
public:
	class FString                                TradeId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ClientConfirmPurchaseResult
struct FClientConfirmPurchaseResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                OrderID;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PurchaseDate;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientConfirmPurchaseRequest
struct FClientConfirmPurchaseRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OrderID;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientConsumeItemResult
struct FClientConsumeItemResult : public FPlayFabResultCommon
{
public:
	class FString                                ItemInstanceId;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemainingUses;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37DF[0x4];                                     // Fixing Size Of Struct
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ClientConsumeItemRequest
struct FClientConsumeItemRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConsumeCount;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37E0[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemInstanceId;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientConsumeMicrosoftStoreEntitlementsResponse
struct FClientConsumeMicrosoftStoreEntitlementsResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientConsumeMicrosoftStoreEntitlementsRequest
struct FClientConsumeMicrosoftStoreEntitlementsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MarketplaceSpecificData;                           // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientConsumePS5EntitlementsResult
struct FClientConsumePS5EntitlementsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientConsumePS5EntitlementsRequest
struct FClientConsumePS5EntitlementsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MarketplaceSpecificData;                           // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientConsumePSNEntitlementsResult
struct FClientConsumePSNEntitlementsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            ItemsGranted;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientConsumePSNEntitlementsRequest
struct FClientConsumePSNEntitlementsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServiceLabel;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37E6[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientConsumeXboxEntitlementsResult
struct FClientConsumeXboxEntitlementsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientConsumeXboxEntitlementsRequest
struct FClientConsumeXboxEntitlementsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientCreateSharedGroupResult
struct FClientCreateSharedGroupResult : public FPlayFabResultCommon
{
public:
	class FString                                SharedGroupId;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientCreateSharedGroupRequest
struct FClientCreateSharedGroupRequest : public FPlayFabRequestCommon
{
public:
	class FString                                SharedGroupId;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.ClientExecuteCloudScriptResult
struct FClientExecuteCloudScriptResult : public FPlayFabResultCommon
{
public:
	int32                                        APIRequestsIssued;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37E7[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    Error;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExecutionTimeSeconds;                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37E8[0x4];                                     // Fixing Size After Last Property 
	class FString                                FunctionName;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionResult;                                    // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FunctionResultTooLarge;                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37EA[0x3];                                     // Fixing Size After Last Property 
	int32                                        HttpRequestsIssued;                                // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Logs;                                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         LogsTooLarge;                                      // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37ED[0x3];                                     // Fixing Size After Last Property 
	int32                                        MemoryConsumedBytes;                               // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProcessorTimeSeconds;                              // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Revision;                                          // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientGetAccountInfoResult
struct FClientGetAccountInfoResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    AccountInfo;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetAdPlacementsResult
struct FClientGetAdPlacementsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            AdPlacements;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientListUsersCharactersResult
struct FClientListUsersCharactersResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Characters;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetCatalogItemsResult
struct FClientGetCatalogItemsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Catalog;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientGetCharacterDataResult
struct FClientGetCharacterDataResult : public FPlayFabResultCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Data;                                              // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataVersion;                                       // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37EF[0x4];                                     // Fixing Size Of Struct
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ClientGetCharacterInventoryResult
struct FClientGetCharacterInventoryResult : public FPlayFabResultCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Inventory;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrency;                                   // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrencyRechargeTimes;                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetCharacterLeaderboardResult
struct FClientGetCharacterLeaderboardResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Leaderboard;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientGetCharacterStatisticsResult
struct FClientGetCharacterStatisticsResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    CharacterStatistics;                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetContentDownloadUrlResult
struct FClientGetContentDownloadUrlResult : public FPlayFabResultCommon
{
public:
	class FString                                URL;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientCurrentGamesResult
struct FClientCurrentGamesResult : public FPlayFabResultCommon
{
public:
	int32                                        GameCount;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37F0[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            Games;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PlayerCount;                                       // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37F1[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGetLeaderboardResult
struct FClientGetLeaderboardResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Leaderboard;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextReset;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37F3[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGetFriendLeaderboardAroundPlayerResult
struct FClientGetFriendLeaderboardAroundPlayerResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Leaderboard;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextReset;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37F6[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetFriendsListResult
struct FClientGetFriendsListResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Friends;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGameServerRegionsResult
struct FClientGameServerRegionsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Regions;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetLeaderboardAroundCharacterResult
struct FClientGetLeaderboardAroundCharacterResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Leaderboard;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGetLeaderboardAroundPlayerResult
struct FClientGetLeaderboardAroundPlayerResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Leaderboard;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextReset;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37F8[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetLeaderboardForUsersCharactersResult
struct FClientGetLeaderboardForUsersCharactersResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Leaderboard;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientGetPaymentTokenResult
struct FClientGetPaymentTokenResult : public FPlayFabResultCommon
{
public:
	class FString                                OrderID;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProviderToken;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPhotonAuthenticationTokenResult
struct FClientGetPhotonAuthenticationTokenResult : public FPlayFabResultCommon
{
public:
	class FString                                PhotonCustomAuthenticationToken;                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayerCombinedInfoResult
struct FClientGetPlayerCombinedInfoResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    InfoResultPayload;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayerProfileResult
struct FClientGetPlayerProfileResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    PlayerProfile;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayerSegmentsResult
struct FClientGetPlayerSegmentsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Segments;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayerStatisticsResult
struct FClientGetPlayerStatisticsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Statistics;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayerStatisticVersionsResult
struct FClientGetPlayerStatisticVersionsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            StatisticVersions;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayerTagsResult
struct FClientGetPlayerTagsResult : public FPlayFabResultCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tags;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayerTradesResponse
struct FClientGetPlayerTradesResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            AcceptedTrades;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            OpenedTrades;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookIDsResult
struct FClientGetPlayFabIDsFromFacebookIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult
struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGameCenterIDsResult
struct FClientGetPlayFabIDsFromGameCenterIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGenericIDsResult
struct FClientGetPlayFabIDsFromGenericIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGoogleIDsResult
struct FClientGetPlayFabIDsFromGoogleIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGooglePlayGamesPlayerIDsResult
struct FClientGetPlayFabIDsFromGooglePlayGamesPlayerIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromKongregateIDsResult
struct FClientGetPlayFabIDsFromKongregateIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromNintendoServiceAccountIdsResult
struct FClientGetPlayFabIDsFromNintendoServiceAccountIdsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult
struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromPSNAccountIDsResult
struct FClientGetPlayFabIDsFromPSNAccountIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromSteamIDsResult
struct FClientGetPlayFabIDsFromSteamIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromTwitchIDsResult
struct FClientGetPlayFabIDsFromTwitchIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromXboxLiveIDsResult
struct FClientGetPlayFabIDsFromXboxLiveIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientGetPublisherDataResult
struct FClientGetPublisherDataResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Data;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.ClientGetPurchaseResult
struct FClientGetPurchaseResult : public FPlayFabResultCommon
{
public:
	class FString                                OrderID;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PaymentProvider;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PurchaseDate;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TransactionId;                                     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TransactionStatus;                                 // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientGetSharedGroupDataResult
struct FClientGetSharedGroupDataResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Data;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Members;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ClientGetStoreItemsResult
struct FClientGetStoreItemsResult : public FPlayFabResultCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MarketingData;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPfSourceType                     Source;                                            // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37FE[0x7];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            Store;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                StoreId;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetTimeResult
struct FClientGetTimeResult : public FPlayFabResultCommon
{
public:
	class FString                                Time;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientGetTitleDataResult
struct FClientGetTitleDataResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Data;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetTitleNewsResult
struct FClientGetTitleNewsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            News;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetTitlePublicKeyResult
struct FClientGetTitlePublicKeyResult : public FPlayFabResultCommon
{
public:
	class FString                                RSAPublicKey;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientGetTradeStatusResponse
struct FClientGetTradeStatusResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Trade;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetUserDataResult
struct FClientGetUserDataResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Data;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataVersion;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37FF[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientGetUserInventoryResult
struct FClientGetUserInventoryResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Inventory;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrency;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrencyRechargeTimes;                      // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGrantCharacterToUserResult
struct FClientGrantCharacterToUserResult : public FPlayFabResultCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterType;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3803[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientLinkAndroidDeviceIDResult
struct FClientLinkAndroidDeviceIDResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientEmptyResult
struct FClientEmptyResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientLinkCustomIDResult
struct FClientLinkCustomIDResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientLinkFacebookAccountResult
struct FClientLinkFacebookAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientLinkFacebookInstantGamesIdResult
struct FClientLinkFacebookInstantGamesIdResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientLinkGameCenterAccountResult
struct FClientLinkGameCenterAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientLinkGoogleAccountResult
struct FClientLinkGoogleAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientLinkGooglePlayGamesServicesAccountResult
struct FClientLinkGooglePlayGamesServicesAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientLinkIOSDeviceIDResult
struct FClientLinkIOSDeviceIDResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientLinkKongregateAccountResult
struct FClientLinkKongregateAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientLinkNintendoSwitchDeviceIdResult
struct FClientLinkNintendoSwitchDeviceIdResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientLinkPSNAccountResult
struct FClientLinkPSNAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientLinkSteamAccountResult
struct FClientLinkSteamAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientLinkTwitchAccountResult
struct FClientLinkTwitchAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientLinkXboxAccountResult
struct FClientLinkXboxAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.PlayFabLoginResultCommon
struct FPlayFabLoginResultCommon : public FPlayFabResultCommon
{
public:
	class UPlayFabAuthenticationContext*         AuthenticationContext;                             // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x68 - 0x10)
// ScriptStruct PlayFab.ClientLoginResult
struct FClientLoginResult : public FPlayFabLoginResultCommon
{
public:
	class UPlayFabJsonObject*                    EntityToken;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoResultPayload;                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastLoginTime;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NewlyCreated;                                      // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3805[0x7];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionTicket;                                     // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    SettingsForUser;                                   // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    TreatmentAssignment;                               // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct PlayFab.ClientMatchmakeResult
struct FClientMatchmakeResult : public FPlayFabResultCommon
{
public:
	class FString                                Expires;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PollWaitTimeMS;                                    // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3806[0x4];                                     // Fixing Size After Last Property 
	class FString                                ServerIPV4Address;                                 // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerIPV6Address;                                 // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerPort;                                        // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3807[0x4];                                     // Fixing Size After Last Property 
	class FString                                ServerPublicDNSName;                               // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMatchmakeStatus                  Status;                                            // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3808[0x7];                                     // Fixing Size After Last Property 
	class FString                                Ticket;                                            // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientOpenTradeResponse
struct FClientOpenTradeResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Trade;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct PlayFab.ClientPayForPurchaseResult
struct FClientPayForPurchaseResult : public FPlayFabResultCommon
{
public:
	int32                                        CreditApplied;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_380A[0x4];                                     // Fixing Size After Last Property 
	class FString                                OrderID;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProviderData;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProviderToken;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PurchaseConfirmationPageURL;                       // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PurchaseCurrency;                                  // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PurchasePrice;                                     // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransactionStatus                Status;                                            // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_380E[0x3];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    VCAmount;                                          // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrency;                                   // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientPurchaseItemResult
struct FClientPurchaseItemResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientRedeemCouponResult
struct FClientRedeemCouponResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            GrantedItems;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientEmptyResponse
struct FClientEmptyResponse : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientRegisterForIOSPushNotificationResult
struct FClientRegisterForIOSPushNotificationResult : public FPlayFabResultCommon
{
public:
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ClientRegisterPlayFabUserResult
struct FClientRegisterPlayFabUserResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    EntityToken;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionTicket;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    SettingsForUser;                                   // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientRemoveContactEmailResult
struct FClientRemoveContactEmailResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientRemoveFriendResult
struct FClientRemoveFriendResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientRemoveGenericIDResult
struct FClientRemoveGenericIDResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientRemoveSharedGroupMembersResult
struct FClientRemoveSharedGroupMembersResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientReportAdActivityResult
struct FClientReportAdActivityResult : public FPlayFabResultCommon
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientReportPlayerClientResult
struct FClientReportPlayerClientResult : public FPlayFabResultCommon
{
public:
	int32                                        SubmissionsRemaining;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3811[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientRestoreIOSPurchasesResult
struct FClientRestoreIOSPurchasesResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Fulfillments;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.ClientRewardAdActivityResult
struct FClientRewardAdActivityResult : public FPlayFabResultCommon
{
public:
	class FString                                AdActivityEventId;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DebugResults;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlacementId;                                       // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlacementName;                                     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlacementViewsRemaining;                           // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlacementViewsResetMinutes;                        // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    RewardResults;                                     // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientSendAccountRecoveryEmailResult
struct FClientSendAccountRecoveryEmailResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientSetFriendTagsResult
struct FClientSetFriendTagsResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientSetPlayerSecretResult
struct FClientSetPlayerSecretResult : public FPlayFabResultCommon
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ClientStartPurchaseResult
struct FClientStartPurchaseResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Contents;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                OrderID;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            PaymentOptions;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrencyBalances;                           // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkAndroidDeviceIDResult
struct FClientUnlinkAndroidDeviceIDResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkCustomIDResult
struct FClientUnlinkCustomIDResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkFacebookAccountResult
struct FClientUnlinkFacebookAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkFacebookInstantGamesIdResult
struct FClientUnlinkFacebookInstantGamesIdResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkGameCenterAccountResult
struct FClientUnlinkGameCenterAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkGoogleAccountResult
struct FClientUnlinkGoogleAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkGooglePlayGamesServicesAccountResult
struct FClientUnlinkGooglePlayGamesServicesAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkIOSDeviceIDResult
struct FClientUnlinkIOSDeviceIDResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkKongregateAccountResult
struct FClientUnlinkKongregateAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkNintendoSwitchDeviceIdResult
struct FClientUnlinkNintendoSwitchDeviceIdResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkPSNAccountResult
struct FClientUnlinkPSNAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkSteamAccountResult
struct FClientUnlinkSteamAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkTwitchAccountResult
struct FClientUnlinkTwitchAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkXboxAccountResult
struct FClientUnlinkXboxAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ClientUnlockContainerItemResult
struct FClientUnlockContainerItemResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            GrantedItems;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                UnlockedItemInstanceId;                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UnlockedWithItemInstanceId;                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrency;                                   // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientUpdateCharacterDataResult
struct FClientUpdateCharacterDataResult : public FPlayFabResultCommon
{
public:
	int32                                        DataVersion;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3815[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUpdateCharacterStatisticsResult
struct FClientUpdateCharacterStatisticsResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUpdatePlayerStatisticsResult
struct FClientUpdatePlayerStatisticsResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientUpdateSharedGroupDataResult
struct FClientUpdateSharedGroupDataResult : public FPlayFabResultCommon
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientUpdateUserDataResult
struct FClientUpdateUserDataResult : public FPlayFabResultCommon
{
public:
	int32                                        DataVersion;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3816[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientUpdateUserTitleDisplayNameResult
struct FClientUpdateUserTitleDisplayNameResult : public FPlayFabResultCommon
{
public:
	class FString                                DisplayName;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientValidateAmazonReceiptResult
struct FClientValidateAmazonReceiptResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Fulfillments;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientValidateGooglePlayPurchaseResult
struct FClientValidateGooglePlayPurchaseResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Fulfillments;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientValidateIOSReceiptResult
struct FClientValidateIOSReceiptResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Fulfillments;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientValidateWindowsReceiptResult
struct FClientValidateWindowsReceiptResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Fulfillments;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientWriteEventResponse
struct FClientWriteEventResponse : public FPlayFabResultCommon
{
public:
	class FString                                EventId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientExecuteCloudScriptRequest
struct FClientExecuteCloudScriptRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FunctionName;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionParameter;                                 // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GeneratePlayStreamEvent;                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECloudScriptRevisionOption        RevisionSelection;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3818[0x2];                                     // Fixing Size After Last Property 
	int32                                        SpecificRevision;                                  // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ClientGetAccountInfoRequest
struct FClientGetAccountInfoRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Email;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TitleDisplayName;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientGetAdPlacementsRequest
struct FClientGetAdPlacementsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AppID;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Identifier;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientListUsersCharactersRequest
struct FClientListUsersCharactersRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetCatalogItemsRequest
struct FClientGetCatalogItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ClientGetCharacterDataRequest
struct FClientGetCharacterDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IfChangedFromDataVersion;                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_381B[0x4];                                     // Fixing Size After Last Property 
	class FString                                Keys;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGetCharacterInventoryRequest
struct FClientGetCharacterInventoryRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterId;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientGetCharacterLeaderboardRequest
struct FClientGetCharacterLeaderboardRequest : public FPlayFabRequestCommon
{
public:
	int32                                        MaxResultsCount;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartPosition;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetCharacterStatisticsRequest
struct FClientGetCharacterStatisticsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGetContentDownloadUrlRequest
struct FClientGetContentDownloadUrlRequest : public FPlayFabRequestCommon
{
public:
	class FString                                HttpMethod;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ThruCDN;                                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_381C[0x7];                                     // Fixing Size Of Struct
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ClientCurrentGamesRequest
struct FClientCurrentGamesRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildVersion;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameMode;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERegion                           Region;                                            // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_381D[0x7];                                     // Fixing Size After Last Property 
	class FString                                StatisticName;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    TagFilter;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ClientGetFriendLeaderboardRequest
struct FClientGetFriendLeaderboardRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EExternalFriendSources            ExternalPlatformFriends;                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_381E[0x3];                                     // Fixing Size After Last Property 
	int32                                        MaxResultsCount;                                   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartPosition;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_381F[0x4];                                     // Fixing Size After Last Property 
	class FString                                StatisticName;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpecificVersion;                                // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3820[0x3];                                     // Fixing Size After Last Property 
	int32                                        Version;                                           // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxToken;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.ClientGetFriendLeaderboardAroundPlayerRequest
struct FClientGetFriendLeaderboardAroundPlayerRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EExternalFriendSources            ExternalPlatformFriends;                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3821[0x3];                                     // Fixing Size After Last Property 
	int32                                        MaxResultsCount;                                   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpecificVersion;                                // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3822[0x3];                                     // Fixing Size After Last Property 
	int32                                        Version;                                           // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxToken;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGetFriendsListRequest
struct FClientGetFriendsListRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EExternalFriendSources            ExternalPlatformFriends;                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3823[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGameServerRegionsRequest
struct FClientGameServerRegionsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildVersion;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ClientGetLeaderboardRequest
struct FClientGetLeaderboardRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResultsCount;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3824[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartPosition;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3825[0x4];                                     // Fixing Size After Last Property 
	class FString                                StatisticName;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpecificVersion;                                // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3826[0x3];                                     // Fixing Size After Last Property 
	int32                                        Version;                                           // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGetLeaderboardAroundCharacterRequest
struct FClientGetLeaderboardAroundCharacterRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResultsCount;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3827[0x4];                                     // Fixing Size After Last Property 
	class FString                                StatisticName;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ClientGetLeaderboardAroundPlayerRequest
struct FClientGetLeaderboardAroundPlayerRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResultsCount;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3828[0x4];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpecificVersion;                                // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3829[0x3];                                     // Fixing Size After Last Property 
	int32                                        Version;                                           // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetLeaderboardForUsersCharactersRequest
struct FClientGetLeaderboardForUsersCharactersRequest : public FPlayFabRequestCommon
{
public:
	class FString                                StatisticName;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPaymentTokenRequest
struct FClientGetPaymentTokenRequest : public FPlayFabRequestCommon
{
public:
	class FString                                TokenProvider;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPhotonAuthenticationTokenRequest
struct FClientGetPhotonAuthenticationTokenRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PhotonApplicationId;                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayerCombinedInfoRequest
struct FClientGetPlayerCombinedInfoRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayerProfileRequest
struct FClientGetPlayerProfileRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayerSegmentsRequest
struct FClientGetPlayerSegmentsRequest : public FPlayFabRequestCommon
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayerStatisticsRequest
struct FClientGetPlayerStatisticsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticNames;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            StatisticNameVersions;                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayerStatisticVersionsRequest
struct FClientGetPlayerStatisticVersionsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayerTagsRequest
struct FClientGetPlayerTagsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Namespace;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayerTradesRequest
struct FClientGetPlayerTradesRequest : public FPlayFabRequestCommon
{
public:
	enum class ETradeStatus                      StatusFilter;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_382B[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookIDsRequest
struct FClientGetPlayFabIDsFromFacebookIDsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                FacebookIDs;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest
struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                FacebookInstantGamesIds;                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGameCenterIDsRequest
struct FClientGetPlayFabIDsFromGameCenterIDsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                GameCenterIDs;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGenericIDsRequest
struct FClientGetPlayFabIDsFromGenericIDsRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            GenericIDs;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGoogleIDsRequest
struct FClientGetPlayFabIDsFromGoogleIDsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                GoogleIDs;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromGooglePlayGamesPlayerIDsRequest
struct FClientGetPlayFabIDsFromGooglePlayGamesPlayerIDsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                GooglePlayGamesPlayerIDs;                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromKongregateIDsRequest
struct FClientGetPlayFabIDsFromKongregateIDsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                KongregateIDs;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromNintendoServiceAccountIdsRequest
struct FClientGetPlayFabIDsFromNintendoServiceAccountIdsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                NintendoAccountIds;                                // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                NintendoSwitchDeviceIds;                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromPSNAccountIDsRequest
struct FClientGetPlayFabIDsFromPSNAccountIDsRequest : public FPlayFabRequestCommon
{
public:
	int32                                        IssuerId;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_382C[0x4];                                     // Fixing Size After Last Property 
	class FString                                PSNAccountIDs;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromSteamIDsRequest
struct FClientGetPlayFabIDsFromSteamIDsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                SteamStringIDs;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromTwitchIDsRequest
struct FClientGetPlayFabIDsFromTwitchIDsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                TwitchIds;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientGetPlayFabIDsFromXboxLiveIDsRequest
struct FClientGetPlayFabIDsFromXboxLiveIDsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Sandbox;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxLiveAccountIDs;                                // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPublisherDataRequest
struct FClientGetPublisherDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Keys;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetPurchaseRequest
struct FClientGetPurchaseRequest : public FPlayFabRequestCommon
{
public:
	class FString                                OrderID;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGetSharedGroupDataRequest
struct FClientGetSharedGroupDataRequest : public FPlayFabRequestCommon
{
public:
	bool                                         GetMembers;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_382D[0x7];                                     // Fixing Size After Last Property 
	class FString                                Keys;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SharedGroupId;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientGetStoreItemsRequest
struct FClientGetStoreItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StoreId;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ClientGetTimeRequest
struct FClientGetTimeRequest : public FPlayFabRequestCommon
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientGetTitleDataRequest
struct FClientGetTitleDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Keys;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OverrideLabel;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientGetTitleNewsRequest
struct FClientGetTitleNewsRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Count;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_382E[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientGetTitlePublicKeyRequest
struct FClientGetTitlePublicKeyRequest : public FPlayFabRequestCommon
{
public:
	class FString                                TitleSharedSecret;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientGetTradeStatusRequest
struct FClientGetTradeStatusRequest : public FPlayFabRequestCommon
{
public:
	class FString                                OfferingPlayerId;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TradeId;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGetUserDataRequest
struct FClientGetUserDataRequest : public FPlayFabRequestCommon
{
public:
	int32                                        IfChangedFromDataVersion;                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_382F[0x4];                                     // Fixing Size After Last Property 
	class FString                                Keys;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientGetUserInventoryRequest
struct FClientGetUserInventoryRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ClientGrantCharacterToUserRequest
struct FClientGrantCharacterToUserRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemId;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ClientLinkAndroidDeviceIDRequest
struct FClientLinkAndroidDeviceIDRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AndroidDevice;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AndroidDeviceId;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3831[0x7];                                     // Fixing Size After Last Property 
	class FString                                OS;                                                // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkAppleRequest
struct FClientLinkAppleRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3832[0x7];                                     // Fixing Size After Last Property 
	class FString                                IdentityToken;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkCustomIDRequest
struct FClientLinkCustomIDRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CustomId;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3833[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkFacebookAccountRequest
struct FClientLinkFacebookAccountRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AccessToken;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3835[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkFacebookInstantGamesIdRequest
struct FClientLinkFacebookInstantGamesIdRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FacebookInstantGamesSignature;                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3836[0x7];                                     // Fixing Size Of Struct
};

// 0x60 (0x68 - 0x8)
// ScriptStruct PlayFab.ClientLinkGameCenterAccountRequest
struct FClientLinkGameCenterAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3838[0x7];                                     // Fixing Size After Last Property 
	class FString                                GameCenterId;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PublicKeyUrl;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Salt;                                              // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Signature;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkGoogleAccountRequest
struct FClientLinkGoogleAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_383A[0x7];                                     // Fixing Size After Last Property 
	class FString                                ServerAuthCode;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkGooglePlayGamesServicesAccountRequest
struct FClientLinkGooglePlayGamesServicesAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_383B[0x7];                                     // Fixing Size After Last Property 
	class FString                                ServerAuthCode;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ClientLinkIOSDeviceIDRequest
struct FClientLinkIOSDeviceIDRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeviceID;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeviceModel;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_383C[0x7];                                     // Fixing Size After Last Property 
	class FString                                OS;                                                // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ClientLinkKongregateAccountRequest
struct FClientLinkKongregateAccountRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AuthTicket;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_383E[0x7];                                     // Fixing Size After Last Property 
	class FString                                KongregateId;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkNintendoServiceAccountRequest
struct FClientLinkNintendoServiceAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_383F[0x7];                                     // Fixing Size After Last Property 
	class FString                                IdentityToken;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkNintendoSwitchDeviceIdRequest
struct FClientLinkNintendoSwitchDeviceIdRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3840[0x7];                                     // Fixing Size After Last Property 
	class FString                                NintendoSwitchDeviceId;                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ClientLinkOpenIdConnectRequest
struct FClientLinkOpenIdConnectRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ConnectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3841[0x7];                                     // Fixing Size After Last Property 
	class FString                                IdToken;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ClientLinkPSNAccountRequest
struct FClientLinkPSNAccountRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AuthCode;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3842[0x3];                                     // Fixing Size After Last Property 
	int32                                        IssuerId;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RedirectUri;                                       // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientLinkSteamAccountRequest
struct FClientLinkSteamAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3845[0x7];                                     // Fixing Size After Last Property 
	class FString                                SteamTicket;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TicketIsServiceSpecific;                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3846[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkTwitchAccountRequest
struct FClientLinkTwitchAccountRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AccessToken;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3847[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkXboxAccountRequest
struct FClientLinkXboxAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3849[0x7];                                     // Fixing Size After Last Property 
	class FString                                XboxToken;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithAndroidDeviceIDRequest
struct FClientLoginWithAndroidDeviceIDRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AndroidDevice;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AndroidDeviceId;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CreateAccount;                                     // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_384A[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OS;                                                // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithAppleRequest
struct FClientLoginWithAppleRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_384C[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdentityToken;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithCustomIDRequest
struct FClientLoginWithCustomIDRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_384D[0x7];                                     // Fixing Size After Last Property 
	class FString                                CustomId;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithEmailAddressRequest
struct FClientLoginWithEmailAddressRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Email;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithFacebookRequest
struct FClientLoginWithFacebookRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AccessToken;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CreateAccount;                                     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_384E[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithFacebookInstantGamesIdRequest
struct FClientLoginWithFacebookInstantGamesIdRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_384F[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FacebookInstantGamesSignature;                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithGameCenterRequest
struct FClientLoginWithGameCenterRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3850[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerId;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PublicKeyUrl;                                      // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Salt;                                              // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Signature;                                         // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithGoogleAccountRequest
struct FClientLoginWithGoogleAccountRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3851[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerAuthCode;                                    // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SetEmail;                                          // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3852[0x7];                                     // Fixing Size Of Struct
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithGooglePlayGamesServicesRequest
struct FClientLoginWithGooglePlayGamesServicesRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3854[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerAuthCode;                                    // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithIOSDeviceIDRequest
struct FClientLoginWithIOSDeviceIDRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3856[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeviceID;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeviceModel;                                       // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OS;                                                // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithKongregateRequest
struct FClientLoginWithKongregateRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AuthTicket;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CreateAccount;                                     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3857[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KongregateId;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithNintendoServiceAccountRequest
struct FClientLoginWithNintendoServiceAccountRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3859[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdentityToken;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithNintendoSwitchDeviceIdRequest
struct FClientLoginWithNintendoSwitchDeviceIdRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385A[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NintendoSwitchDeviceId;                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithOpenIdConnectRequest
struct FClientLoginWithOpenIdConnectRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ConnectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CreateAccount;                                     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385C[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdToken;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithPlayFabRequest
struct FClientLoginWithPlayFabRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithPSNRequest
struct FClientLoginWithPSNRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AuthCode;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CreateAccount;                                     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385D[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IssuerId;                                          // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385E[0x4];                                     // Fixing Size After Last Property 
	class FString                                PlayerSecret;                                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RedirectUri;                                       // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithSteamRequest
struct FClientLoginWithSteamRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385F[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SteamTicket;                                       // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TicketIsServiceSpecific;                           // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3860[0x7];                                     // Fixing Size Of Struct
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithTwitchRequest
struct FClientLoginWithTwitchRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AccessToken;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CreateAccount;                                     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3861[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithXboxRequest
struct FClientLoginWithXboxRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3864[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxToken;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct PlayFab.ClientMatchmakeRequest
struct FClientMatchmakeRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildVersion;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterId;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameMode;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERegion                           Region;                                            // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StartNewIfNoneFound;                               // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3865[0x6];                                     // Fixing Size After Last Property 
	class FString                                StatisticName;                                     // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    TagFilter;                                         // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ClientOpenTradeRequest
struct FClientOpenTradeRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AllowedPlayerIds;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OfferedInventoryInstanceIds;                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RequestedCatalogItemIds;                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ClientPayForPurchaseRequest
struct FClientPayForPurchaseRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Currency;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OrderID;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProviderName;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProviderTransactionId;                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct PlayFab.ClientPurchaseItemRequest
struct FClientPurchaseItemRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterId;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemId;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3866[0x4];                                     // Fixing Size After Last Property 
	class FString                                StoreId;                                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VirtualCurrency;                                   // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ClientRedeemCouponRequest
struct FClientRedeemCouponRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterId;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CouponCode;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientRefreshPSNAuthTokenRequest
struct FClientRefreshPSNAuthTokenRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AuthCode;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IssuerId;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3867[0x4];                                     // Fixing Size After Last Property 
	class FString                                RedirectUri;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientRegisterForIOSPushNotificationRequest
struct FClientRegisterForIOSPushNotificationRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ConfirmationMessage;                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeviceToken;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SendPushNotificationConfirmation;                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3868[0x7];                                     // Fixing Size Of Struct
};

// 0x78 (0x80 - 0x8)
// ScriptStruct PlayFab.ClientRegisterPlayFabUserRequest
struct FClientRegisterPlayFabUserRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Email;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequireBothUsernameAndEmail;                       // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3869[0x7];                                     // Fixing Size After Last Property 
	class FString                                Username;                                          // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientRemoveContactEmailRequest
struct FClientRemoveContactEmailRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientRemoveFriendRequest
struct FClientRemoveFriendRequest : public FPlayFabRequestCommon
{
public:
	class FString                                FriendPlayFabId;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientRemoveGenericIDRequest
struct FClientRemoveGenericIDRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    GenericId;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientRemoveSharedGroupMembersRequest
struct FClientRemoveSharedGroupMembersRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabIds;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SharedGroupId;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ClientReportAdActivityRequest
struct FClientReportAdActivityRequest : public FPlayFabRequestCommon
{
public:
	enum class EAdActivity                       Activity;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_386A[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlacementId;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RewardId;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientDeviceInfoRequest
struct FClientDeviceInfoRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    Info;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientReportPlayerClientRequest
struct FClientReportPlayerClientRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Comment;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReporteeId;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientRestoreIOSPurchasesRequest
struct FClientRestoreIOSPurchasesRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceiptData;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientRewardAdActivityRequest
struct FClientRewardAdActivityRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlacementId;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RewardId;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientSendAccountRecoveryEmailRequest
struct FClientSendAccountRecoveryEmailRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Email;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EmailTemplateId;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientSetFriendTagsRequest
struct FClientSetFriendTagsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                FriendPlayFabId;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tags;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientSetPlayerSecretRequest
struct FClientSetPlayerSecretRequest : public FPlayFabRequestCommon
{
public:
	class FString                                EncryptedRequest;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ClientStartPurchaseRequest
struct FClientStartPurchaseRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Items;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                StoreId;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientSubtractUserVirtualCurrencyRequest
struct FClientSubtractUserVirtualCurrencyRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_386B[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VirtualCurrency;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkAndroidDeviceIDRequest
struct FClientUnlinkAndroidDeviceIDRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AndroidDeviceId;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkAppleRequest
struct FClientUnlinkAppleRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkCustomIDRequest
struct FClientUnlinkCustomIDRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CustomId;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkFacebookAccountRequest
struct FClientUnlinkFacebookAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkFacebookInstantGamesIdRequest
struct FClientUnlinkFacebookInstantGamesIdRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FacebookInstantGamesId;                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkGameCenterAccountRequest
struct FClientUnlinkGameCenterAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkGoogleAccountRequest
struct FClientUnlinkGoogleAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkGooglePlayGamesServicesAccountRequest
struct FClientUnlinkGooglePlayGamesServicesAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkIOSDeviceIDRequest
struct FClientUnlinkIOSDeviceIDRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeviceID;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkKongregateAccountRequest
struct FClientUnlinkKongregateAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkNintendoServiceAccountRequest
struct FClientUnlinkNintendoServiceAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkNintendoSwitchDeviceIdRequest
struct FClientUnlinkNintendoSwitchDeviceIdRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NintendoSwitchDeviceId;                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkOpenIdConnectRequest
struct FClientUnlinkOpenIdConnectRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ConnectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkPSNAccountRequest
struct FClientUnlinkPSNAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkSteamAccountRequest
struct FClientUnlinkSteamAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkTwitchAccountRequest
struct FClientUnlinkTwitchAccountRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AccessToken;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ClientUnlinkXboxAccountRequest
struct FClientUnlinkXboxAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ClientUnlockContainerInstanceRequest
struct FClientUnlockContainerInstanceRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterId;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContainerItemInstanceId;                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeyItemInstanceId;                                 // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ClientUnlockContainerItemRequest
struct FClientUnlockContainerItemRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterId;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContainerItemId;                                   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ClientUpdateAvatarUrlRequest
struct FClientUpdateAvatarUrlRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ImageUrl;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ClientUpdateCharacterDataRequest
struct FClientUpdateCharacterDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Data;                                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeysToRemove;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUserDataPermission               Permission;                                        // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_386E[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientUpdateCharacterStatisticsRequest
struct FClientUpdateCharacterStatisticsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CharacterStatistics;                               // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientUpdatePlayerStatisticsRequest
struct FClientUpdatePlayerStatisticsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Statistics;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ClientUpdateSharedGroupDataRequest
struct FClientUpdateSharedGroupDataRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Data;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeysToRemove;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUserDataPermission               Permission;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_386F[0x7];                                     // Fixing Size After Last Property 
	class FString                                SharedGroupId;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientUpdateUserDataRequest
struct FClientUpdateUserDataRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Data;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeysToRemove;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUserDataPermission               Permission;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3870[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ClientUpdateUserTitleDisplayNameRequest
struct FClientUpdateUserTitleDisplayNameRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.ClientValidateAmazonReceiptRequest
struct FClientValidateAmazonReceiptRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrencyCode;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PurchasePrice;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3871[0x4];                                     // Fixing Size After Last Property 
	class FString                                ReceiptId;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserId;                                            // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.ClientValidateGooglePlayPurchaseRequest
struct FClientValidateGooglePlayPurchaseRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrencyCode;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PurchasePrice;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3872[0x4];                                     // Fixing Size After Last Property 
	class FString                                ReceiptJson;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Signature;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ClientValidateIOSReceiptRequest
struct FClientValidateIOSReceiptRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrencyCode;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PurchasePrice;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3873[0x4];                                     // Fixing Size After Last Property 
	class FString                                ReceiptData;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ClientValidateWindowsReceiptRequest
struct FClientValidateWindowsReceiptRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrencyCode;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PurchasePrice;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3874[0x4];                                     // Fixing Size After Last Property 
	class FString                                Receipt;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ClientWriteClientCharacterEventRequest
struct FClientWriteClientCharacterEventRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    Body;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterId;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ClientWriteClientPlayerEventRequest
struct FClientWriteClientPlayerEventRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    Body;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ClientWriteTitleEventRequest
struct FClientWriteTitleEventRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    Body;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.CloudScriptExecuteCloudScriptResult
struct FCloudScriptExecuteCloudScriptResult : public FPlayFabResultCommon
{
public:
	int32                                        APIRequestsIssued;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3875[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    Error;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExecutionTimeSeconds;                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3876[0x4];                                     // Fixing Size After Last Property 
	class FString                                FunctionName;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionResult;                                    // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FunctionResultTooLarge;                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3877[0x3];                                     // Fixing Size After Last Property 
	int32                                        HttpRequestsIssued;                                // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Logs;                                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         LogsTooLarge;                                      // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3878[0x3];                                     // Fixing Size After Last Property 
	int32                                        MemoryConsumedBytes;                               // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProcessorTimeSeconds;                              // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Revision;                                          // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.CloudScriptExecuteFunctionResult
struct FCloudScriptExecuteFunctionResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Error;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExecutionTimeMilliseconds;                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3879[0x4];                                     // Fixing Size After Last Property 
	class FString                                FunctionName;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionResult;                                    // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FunctionResultTooLarge;                            // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387A[0x7];                                     // Fixing Size Of Struct
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.CloudScriptGetFunctionResult
struct FCloudScriptGetFunctionResult : public FPlayFabResultCommon
{
public:
	class FString                                ConnectionString;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FunctionUrl;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TriggerType;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.CloudScriptListFunctionsResult
struct FCloudScriptListFunctionsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Functions;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.CloudScriptListHttpFunctionsResult
struct FCloudScriptListHttpFunctionsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Functions;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.CloudScriptListQueuedFunctionsResult
struct FCloudScriptListQueuedFunctionsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Functions;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.CloudScriptEmptyResult
struct FCloudScriptEmptyResult : public FPlayFabResultCommon
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.CloudScriptExecuteEntityCloudScriptRequest
struct FCloudScriptExecuteEntityCloudScriptRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FunctionName;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionParameter;                                 // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GeneratePlayStreamEvent;                           // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECloudScriptRevisionOption        RevisionSelection;                                 // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387B[0x2];                                     // Fixing Size After Last Property 
	int32                                        SpecificRevision;                                  // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.CloudScriptExecuteFunctionRequest
struct FCloudScriptExecuteFunctionRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FunctionName;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionParameter;                                 // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GeneratePlayStreamEvent;                           // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387C[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.CloudScriptGetFunctionRequest
struct FCloudScriptGetFunctionRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FunctionName;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.CloudScriptListFunctionsRequest
struct FCloudScriptListFunctionsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.CloudScriptPostFunctionResultForEntityTriggeredActionRequest
struct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionResult;                                    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.CloudScriptPostFunctionResultForFunctionExecutionRequest
struct FCloudScriptPostFunctionResultForFunctionExecutionRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionResult;                                    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.CloudScriptPostFunctionResultForPlayerTriggeredActionRequest
struct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionResult;                                    // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    PlayerProfile;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    PlayStreamEventEnvelope;                           // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.CloudScriptPostFunctionResultForScheduledTaskRequest
struct FCloudScriptPostFunctionResultForScheduledTaskRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionResult;                                    // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ScheduledTaskId;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.CloudScriptRegisterHttpFunctionRequest
struct FCloudScriptRegisterHttpFunctionRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FunctionName;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FunctionUrl;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.CloudScriptRegisterQueuedFunctionRequest
struct FCloudScriptRegisterQueuedFunctionRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ConnectionString;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FunctionName;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.CloudScriptUnregisterFunctionRequest
struct FCloudScriptUnregisterFunctionRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FunctionName;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.DataAbortFileUploadsResponse
struct FDataAbortFileUploadsResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Entity;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387D[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.DataAbortFileUploadsRequest
struct FDataAbortFileUploadsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileNames;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387E[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.DataDeleteFilesResponse
struct FDataDeleteFilesResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Entity;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387F[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.DataFinalizeFileUploadsResponse
struct FDataFinalizeFileUploadsResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Entity;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MetaData;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3880[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.DataGetFilesResponse
struct FDataGetFilesResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Entity;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MetaData;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3881[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.DataGetObjectsResponse
struct FDataGetObjectsResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Entity;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Objects;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3882[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.DataInitiateFileUploadsResponse
struct FDataInitiateFileUploadsResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Entity;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3883[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            UploadDetails;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.DataSetObjectsResponse
struct FDataSetObjectsResponse : public FPlayFabResultCommon
{
public:
	int32                                        ProfileVersion;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3884[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            SetResults;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.DataDeleteFilesRequest
struct FDataDeleteFilesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileNames;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3885[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.DataFinalizeFileUploadsRequest
struct FDataFinalizeFileUploadsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileNames;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3886[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.DataGetFilesRequest
struct FDataGetFilesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.DataGetObjectsRequest
struct FDataGetObjectsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EscapeObject;                                      // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3887[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.DataInitiateFileUploadsRequest
struct FDataInitiateFileUploadsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileNames;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3888[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.DataSetObjectsRequest
struct FDataSetObjectsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExpectedProfileVersion;                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3889[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            Objects;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyAddInventoryItemsResponse
struct FEconomyAddInventoryItemsResponse : public FPlayFabResultCommon
{
public:
	class FString                                ETag;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdempotencyId;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TransactionIds;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct PlayFab.EconomyAddInventoryItemsRequest
struct FEconomyAddInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_388A[0x4];                                     // Fixing Size After Last Property 
	class FString                                CollectionId;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DurationInSeconds;                                 // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_388B[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    Entity;                                            // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ETag;                                              // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdempotencyId;                                     // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Item;                                              // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    NewStackValues;                                    // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.EconomyCreateDraftItemResponse
struct FEconomyCreateDraftItemResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.EconomyCreateDraftItemRequest
struct FEconomyCreateDraftItemRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Item;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Publish;                                           // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_388C[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.EconomyCreateUploadUrlsResponse
struct FEconomyCreateUploadUrlsResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            UploadUrls;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.EconomyCreateUploadUrlsRequest
struct FEconomyCreateUploadUrlsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Files;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.EconomyDeleteEntityItemReviewsResponse
struct FEconomyDeleteEntityItemReviewsResponse : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.EconomyDeleteInventoryCollectionResponse
struct FEconomyDeleteInventoryCollectionResponse : public FPlayFabResultCommon
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyDeleteInventoryItemsResponse
struct FEconomyDeleteInventoryItemsResponse : public FPlayFabResultCommon
{
public:
	class FString                                ETag;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdempotencyId;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TransactionIds;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.EconomyDeleteItemResponse
struct FEconomyDeleteItemResponse : public FPlayFabResultCommon
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyExecuteInventoryOperationsResponse
struct FEconomyExecuteInventoryOperationsResponse : public FPlayFabResultCommon
{
public:
	class FString                                ETag;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdempotencyId;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TransactionIds;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.EconomyGetCatalogConfigResponse
struct FEconomyGetCatalogConfigResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Config;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.EconomyGetDraftItemResponse
struct FEconomyGetDraftItemResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.EconomyGetDraftItemsResponse
struct FEconomyGetDraftItemsResponse : public FPlayFabResultCommon
{
public:
	class FString                                ContinuationToken;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Items;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.EconomyGetEntityDraftItemsResponse
struct FEconomyGetEntityDraftItemsResponse : public FPlayFabResultCommon
{
public:
	class FString                                ContinuationToken;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Items;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.EconomyGetEntityItemReviewResponse
struct FEconomyGetEntityItemReviewResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Review;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.EconomyGetInventoryCollectionIdsResponse
struct FEconomyGetInventoryCollectionIdsResponse : public FPlayFabResultCommon
{
public:
	class FString                                CollectionIds;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContinuationToken;                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyGetInventoryItemsResponse
struct FEconomyGetInventoryItemsResponse : public FPlayFabResultCommon
{
public:
	class FString                                ContinuationToken;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ETag;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Items;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.EconomyGetItemResponse
struct FEconomyGetItemResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.EconomyGetItemContainersResponse
struct FEconomyGetItemContainersResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Containers;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ContinuationToken;                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.EconomyGetItemModerationStateResponse
struct FEconomyGetItemModerationStateResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    State;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.EconomyGetItemPublishStatusResponse
struct FEconomyGetItemPublishStatusResponse : public FPlayFabResultCommon
{
public:
	enum class EPublishResult                    Result;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_388D[0x7];                                     // Fixing Size After Last Property 
	class FString                                StatusMessage;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.EconomyGetItemReviewsResponse
struct FEconomyGetItemReviewsResponse : public FPlayFabResultCommon
{
public:
	class FString                                ContinuationToken;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Reviews;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.EconomyGetItemReviewSummaryResponse
struct FEconomyGetItemReviewSummaryResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    LeastFavorableReview;                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MostFavorableReview;                               // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Rating;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReviewsCount;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_388E[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.EconomyGetItemsResponse
struct FEconomyGetItemsResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.EconomyGetMicrosoftStoreAccessTokensResponse
struct FEconomyGetMicrosoftStoreAccessTokensResponse : public FPlayFabResultCommon
{
public:
	class FString                                CollectionsAccessToken;                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CollectionsAccessTokenExpirationDate;              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.EconomyGetTransactionHistoryResponse
struct FEconomyGetTransactionHistoryResponse : public FPlayFabResultCommon
{
public:
	class FString                                ContinuationToken;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Transactions;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.EconomyPublishDraftItemResponse
struct FEconomyPublishDraftItemResponse : public FPlayFabResultCommon
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyPurchaseInventoryItemsResponse
struct FEconomyPurchaseInventoryItemsResponse : public FPlayFabResultCommon
{
public:
	class FString                                ETag;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdempotencyId;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TransactionIds;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyRedeemAppleAppStoreInventoryItemsResponse
struct FEconomyRedeemAppleAppStoreInventoryItemsResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Failed;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Succeeded;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                TransactionIds;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyRedeemGooglePlayInventoryItemsResponse
struct FEconomyRedeemGooglePlayInventoryItemsResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Failed;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Succeeded;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                TransactionIds;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyRedeemMicrosoftStoreInventoryItemsResponse
struct FEconomyRedeemMicrosoftStoreInventoryItemsResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Failed;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Succeeded;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                TransactionIds;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyRedeemNintendoEShopInventoryItemsResponse
struct FEconomyRedeemNintendoEShopInventoryItemsResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Failed;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Succeeded;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                TransactionIds;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyRedeemPlayStationStoreInventoryItemsResponse
struct FEconomyRedeemPlayStationStoreInventoryItemsResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Failed;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Succeeded;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                TransactionIds;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyRedeemSteamInventoryItemsResponse
struct FEconomyRedeemSteamInventoryItemsResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Failed;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Succeeded;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                TransactionIds;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.EconomyReportItemResponse
struct FEconomyReportItemResponse : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.EconomyReportItemReviewResponse
struct FEconomyReportItemReviewResponse : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.EconomyReviewItemResponse
struct FEconomyReviewItemResponse : public FPlayFabResultCommon
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.EconomySearchItemsResponse
struct FEconomySearchItemsResponse : public FPlayFabResultCommon
{
public:
	class FString                                ContinuationToken;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Items;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.EconomySetItemModerationStateResponse
struct FEconomySetItemModerationStateResponse : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.EconomySubmitItemReviewVoteResponse
struct FEconomySubmitItemReviewVoteResponse : public FPlayFabResultCommon
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomySubtractInventoryItemsResponse
struct FEconomySubtractInventoryItemsResponse : public FPlayFabResultCommon
{
public:
	class FString                                ETag;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdempotencyId;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TransactionIds;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.EconomyTakedownItemReviewsResponse
struct FEconomyTakedownItemReviewsResponse : public FPlayFabResultCommon
{
public:
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.EconomyTransferInventoryItemsResponse
struct FEconomyTransferInventoryItemsResponse : public FPlayFabResultCommon
{
public:
	class FString                                GivingETag;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GivingTransactionIds;                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdempotencyId;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceivingTransactionIds;                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.EconomyUpdateCatalogConfigResponse
struct FEconomyUpdateCatalogConfigResponse : public FPlayFabResultCommon
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.EconomyUpdateDraftItemResponse
struct FEconomyUpdateDraftItemResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyUpdateInventoryItemsResponse
struct FEconomyUpdateInventoryItemsResponse : public FPlayFabResultCommon
{
public:
	class FString                                ETag;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdempotencyId;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TransactionIds;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.EconomyDeleteEntityItemReviewsRequest
struct FEconomyDeleteEntityItemReviewsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyDeleteInventoryCollectionRequest
struct FEconomyDeleteInventoryCollectionRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CollectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ETag;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.EconomyDeleteInventoryItemsRequest
struct FEconomyDeleteInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CollectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ETag;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdempotencyId;                                     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Item;                                              // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.EconomyDeleteItemRequest
struct FEconomyDeleteItemRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.EconomyExecuteInventoryOperationsRequest
struct FEconomyExecuteInventoryOperationsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CollectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ETag;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdempotencyId;                                     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Operations;                                        // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.EconomyGetCatalogConfigRequest
struct FEconomyGetCatalogConfigRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.EconomyGetDraftItemRequest
struct FEconomyGetDraftItemRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyGetDraftItemsRequest
struct FEconomyGetDraftItemsRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            AlternateIds;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Ids;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.EconomyGetEntityDraftItemsRequest
struct FEconomyGetEntityDraftItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ContinuationToken;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3897[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filter;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.EconomyGetEntityItemReviewRequest
struct FEconomyGetEntityItemReviewRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.EconomyGetInventoryCollectionIdsRequest
struct FEconomyGetInventoryCollectionIdsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ContinuationToken;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_389B[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.EconomyGetInventoryItemsRequest
struct FEconomyGetInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CollectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContinuationToken;                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_389D[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filter;                                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.EconomyGetItemRequest
struct FEconomyGetItemRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.EconomyGetItemContainersRequest
struct FEconomyGetItemContainersRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContinuationToken;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_389E[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.EconomyGetItemModerationStateRequest
struct FEconomyGetItemModerationStateRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.EconomyGetItemPublishStatusRequest
struct FEconomyGetItemPublishStatusRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.EconomyGetItemReviewsRequest
struct FEconomyGetItemReviewsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContinuationToken;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_389F[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OrderBy;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.EconomyGetItemReviewSummaryRequest
struct FEconomyGetItemReviewSummaryRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyGetItemsRequest
struct FEconomyGetItemsRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            AlternateIds;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Ids;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.EconomyGetMicrosoftStoreAccessTokensRequest
struct FEconomyGetMicrosoftStoreAccessTokensRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.EconomyGetTransactionHistoryRequest
struct FEconomyGetTransactionHistoryRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CollectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContinuationToken;                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38A4[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filter;                                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.EconomyPublishDraftItemRequest
struct FEconomyPublishDraftItemRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ETag;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct PlayFab.EconomyPurchaseInventoryItemsRequest
struct FEconomyPurchaseInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38A5[0x4];                                     // Fixing Size After Last Property 
	class FString                                CollectionId;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DeleteEmptyStacks;                                 // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38A6[0x3];                                     // Fixing Size After Last Property 
	int32                                        DurationInSeconds;                                 // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ETag;                                              // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdempotencyId;                                     // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Item;                                              // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    NewStackValues;                                    // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            PriceAmounts;                                      // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                StoreId;                                           // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyRedeemAppleAppStoreInventoryItemsRequest
struct FEconomyRedeemAppleAppStoreInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CollectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Receipt;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyRedeemGooglePlayInventoryItemsRequest
struct FEconomyRedeemGooglePlayInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CollectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Purchases;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.EconomyRedeemMicrosoftStoreInventoryItemsRequest
struct FEconomyRedeemMicrosoftStoreInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CollectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CollectionsIdKey;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxToken;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyRedeemNintendoEShopInventoryItemsRequest
struct FEconomyRedeemNintendoEShopInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CollectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NintendoServiceAccountIdToken;                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.EconomyRedeemPlayStationStoreInventoryItemsRequest
struct FEconomyRedeemPlayStationStoreInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AuthorizationCode;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CollectionId;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RedirectUri;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServiceLabel;                                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.EconomyRedeemSteamInventoryItemsRequest
struct FEconomyRedeemSteamInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CollectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.EconomyReportItemRequest
struct FEconomyReportItemRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConcernCategory                  ConcernCategory;                                   // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38AB[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Reason;                                            // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.EconomyReportItemReviewRequest
struct FEconomyReportItemReviewRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConcernCategory                  ConcernCategory;                                   // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38AC[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemId;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Reason;                                            // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReviewId;                                          // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.EconomyReviewItemRequest
struct FEconomyReviewItemRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Review;                                            // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct PlayFab.EconomySearchItemsRequest
struct FEconomySearchItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ContinuationToken;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38AD[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filter;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OrderBy;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Search;                                            // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Select;                                            // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Store;                                             // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.EconomySetItemModerationStateRequest
struct FEconomySetItemModerationStateRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Reason;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModerationStatus                 Status;                                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38AE[0x7];                                     // Fixing Size Of Struct
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.EconomySubmitItemReviewVoteRequest
struct FEconomySubmitItemReviewVoteRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    AlternateId;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemId;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReviewId;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHelpfulnessVote                  Vote;                                              // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38AF[0x7];                                     // Fixing Size Of Struct
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.EconomySubtractInventoryItemsRequest
struct FEconomySubtractInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38B1[0x4];                                     // Fixing Size After Last Property 
	class FString                                CollectionId;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DeleteEmptyStacks;                                 // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38B4[0x3];                                     // Fixing Size After Last Property 
	int32                                        DurationInSeconds;                                 // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ETag;                                              // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdempotencyId;                                     // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Item;                                              // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.EconomyTakedownItemReviewsRequest
struct FEconomyTakedownItemReviewsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Reviews;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct PlayFab.EconomyTransferInventoryItemsRequest
struct FEconomyTransferInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38B6[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DeleteEmptyStacks;                                 // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38B7[0x7];                                     // Fixing Size After Last Property 
	class FString                                GivingCollectionId;                                // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    GivingEntity;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GivingETag;                                        // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    GivingItem;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdempotencyId;                                     // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    NewStackValues;                                    // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceivingCollectionId;                             // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ReceivingEntity;                                   // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ReceivingItem;                                     // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.EconomyUpdateCatalogConfigRequest
struct FEconomyUpdateCatalogConfigRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    Config;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.EconomyUpdateDraftItemRequest
struct FEconomyUpdateDraftItemRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Item;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Publish;                                           // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38B8[0x7];                                     // Fixing Size Of Struct
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.EconomyUpdateInventoryItemsRequest
struct FEconomyUpdateInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CollectionId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ETag;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IdempotencyId;                                     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Item;                                              // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.EventsWriteEventsResponse
struct FEventsWriteEventsResponse : public FPlayFabResultCommon
{
public:
	class FString                                AssignedEventIds;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.EventsWriteEventsRequest
struct FEventsWriteEventsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Events;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ExperimentationCreateExclusionGroupResult
struct FExperimentationCreateExclusionGroupResult : public FPlayFabResultCommon
{
public:
	class FString                                ExclusionGroupId;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ExperimentationCreateExclusionGroupRequest
struct FExperimentationCreateExclusionGroupRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ExperimentationCreateExperimentResult
struct FExperimentationCreateExperimentResult : public FPlayFabResultCommon
{
public:
	class FString                                ExperimentId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x98 - 0x8)
// ScriptStruct PlayFab.ExperimentationCreateExperimentRequest
struct FExperimentationCreateExperimentRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EndDate;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExclusionGroupId;                                  // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExclusionGroupTrafficAllocation;                   // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EExperimentType                   ExperimentType;                                    // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38BA[0x3];                                     // Fixing Size After Last Property 
	class FString                                Name;                                              // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SegmentId;                                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StartDate;                                         // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TitlePlayerAccountTestIds;                         // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Variants;                                          // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ExperimentationEmptyResponse
struct FExperimentationEmptyResponse : public FPlayFabResultCommon
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ExperimentationGetExclusionGroupsResult
struct FExperimentationGetExclusionGroupsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            ExclusionGroups;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ExperimentationGetExclusionGroupTrafficResult
struct FExperimentationGetExclusionGroupTrafficResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            TrafficAllocations;                                // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ExperimentationGetExperimentsResult
struct FExperimentationGetExperimentsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Experiments;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ExperimentationGetLatestScorecardResult
struct FExperimentationGetLatestScorecardResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Scorecard;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ExperimentationGetTreatmentAssignmentResult
struct FExperimentationGetTreatmentAssignmentResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    TreatmentAssignment;                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ExperimentationDeleteExclusionGroupRequest
struct FExperimentationDeleteExclusionGroupRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExclusionGroupId;                                  // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ExperimentationDeleteExperimentRequest
struct FExperimentationDeleteExperimentRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExperimentId;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ExperimentationGetExclusionGroupsRequest
struct FExperimentationGetExclusionGroupsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ExperimentationGetExclusionGroupTrafficRequest
struct FExperimentationGetExclusionGroupTrafficRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExclusionGroupId;                                  // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ExperimentationGetExperimentsRequest
struct FExperimentationGetExperimentsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ExperimentationGetLatestScorecardRequest
struct FExperimentationGetLatestScorecardRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExperimentId;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ExperimentationGetTreatmentAssignmentRequest
struct FExperimentationGetTreatmentAssignmentRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ExperimentationStartExperimentRequest
struct FExperimentationStartExperimentRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExperimentId;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ExperimentationStopExperimentRequest
struct FExperimentationStopExperimentRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExperimentId;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ExperimentationUpdateExclusionGroupRequest
struct FExperimentationUpdateExclusionGroupRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExclusionGroupId;                                  // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA8 - 0x8)
// ScriptStruct PlayFab.ExperimentationUpdateExperimentRequest
struct FExperimentationUpdateExperimentRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EndDate;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExclusionGroupId;                                  // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExclusionGroupTrafficAllocation;                   // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EExperimentType                   ExperimentType;                                    // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38BE[0x3];                                     // Fixing Size After Last Property 
	class FString                                ID;                                                // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SegmentId;                                         // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StartDate;                                         // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TitlePlayerAccountTestIds;                         // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Variants;                                          // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.GroupsEmptyResponse
struct FGroupsEmptyResponse : public FPlayFabResultCommon
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.GroupsAcceptGroupApplicationRequest
struct FGroupsAcceptGroupApplicationRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.GroupsAcceptGroupInvitationRequest
struct FGroupsAcceptGroupInvitationRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.GroupsAddMembersRequest
struct FGroupsAddMembersRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Members;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                RoleId;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.GroupsApplyToGroupResponse
struct FGroupsApplyToGroupResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Entity;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Expires;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.GroupsApplyToGroupRequest
struct FGroupsApplyToGroupRequest : public FPlayFabRequestCommon
{
public:
	bool                                         AutoAcceptOutstandingInvite;                       // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38C0[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.GroupsBlockEntityRequest
struct FGroupsBlockEntityRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.GroupsChangeMemberRoleRequest
struct FGroupsChangeMemberRoleRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DestinationRoleId;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Members;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                OriginRoleId;                                      // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.GroupsCreateGroupResponse
struct FGroupsCreateGroupResponse : public FPlayFabResultCommon
{
public:
	class FString                                AdminRoleId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Created;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GroupName;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MemberRoleId;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38C1[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    Roles;                                             // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.GroupsCreateGroupRequest
struct FGroupsCreateGroupRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GroupName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.GroupsCreateGroupRoleResponse
struct FGroupsCreateGroupRoleResponse : public FPlayFabResultCommon
{
public:
	int32                                        ProfileVersion;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38C2[0x4];                                     // Fixing Size After Last Property 
	class FString                                RoleId;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RoleName;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.GroupsCreateGroupRoleRequest
struct FGroupsCreateGroupRoleRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RoleId;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RoleName;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.GroupsGetGroupResponse
struct FGroupsGetGroupResponse : public FPlayFabResultCommon
{
public:
	class FString                                AdminRoleId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Created;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GroupName;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MemberRoleId;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38C4[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    Roles;                                             // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.GroupsInviteToGroupResponse
struct FGroupsInviteToGroupResponse : public FPlayFabResultCommon
{
public:
	class FString                                Expires;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InvitedByEntity;                                   // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InvitedEntity;                                     // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RoleId;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.GroupsIsMemberResponse
struct FGroupsIsMemberResponse : public FPlayFabResultCommon
{
public:
	bool                                         IsMember;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38C6[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.GroupsListGroupApplicationsResponse
struct FGroupsListGroupApplicationsResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Applications;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.GroupsListGroupBlocksResponse
struct FGroupsListGroupBlocksResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BlockedEntities;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.GroupsListGroupInvitationsResponse
struct FGroupsListGroupInvitationsResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Invitations;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.GroupsListGroupMembersResponse
struct FGroupsListGroupMembersResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Members;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.GroupsListMembershipResponse
struct FGroupsListMembershipResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Groups;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.GroupsListMembershipOpportunitiesResponse
struct FGroupsListMembershipOpportunitiesResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Applications;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Invitations;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.GroupsUpdateGroupResponse
struct FGroupsUpdateGroupResponse : public FPlayFabResultCommon
{
public:
	class FString                                OperationReason;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOperationTypes                   SetResult;                                         // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38C8[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.GroupsUpdateGroupRoleResponse
struct FGroupsUpdateGroupRoleResponse : public FPlayFabResultCommon
{
public:
	class FString                                OperationReason;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOperationTypes                   SetResult;                                         // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38CA[0x3];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.GroupsDeleteGroupRequest
struct FGroupsDeleteGroupRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.GroupsDeleteRoleRequest
struct FGroupsDeleteRoleRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RoleId;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.GroupsGetGroupRequest
struct FGroupsGetGroupRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GroupName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.GroupsInviteToGroupRequest
struct FGroupsInviteToGroupRequest : public FPlayFabRequestCommon
{
public:
	bool                                         AutoAcceptOutstandingApplication;                  // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38CC[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RoleId;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.GroupsIsMemberRequest
struct FGroupsIsMemberRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RoleId;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.GroupsListGroupApplicationsRequest
struct FGroupsListGroupApplicationsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.GroupsListGroupBlocksRequest
struct FGroupsListGroupBlocksRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.GroupsListGroupInvitationsRequest
struct FGroupsListGroupInvitationsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.GroupsListGroupMembersRequest
struct FGroupsListGroupMembersRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.GroupsListMembershipRequest
struct FGroupsListMembershipRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.GroupsListMembershipOpportunitiesRequest
struct FGroupsListMembershipOpportunitiesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.GroupsRemoveGroupApplicationRequest
struct FGroupsRemoveGroupApplicationRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.GroupsRemoveGroupInvitationRequest
struct FGroupsRemoveGroupInvitationRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.GroupsRemoveMembersRequest
struct FGroupsRemoveMembersRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Members;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                RoleId;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.GroupsUnblockEntityRequest
struct FGroupsUnblockEntityRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Group;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.GroupsUpdateGroupRequest
struct FGroupsUpdateGroupRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AdminRoleId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExpectedProfileVersion;                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D0[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    Group;                                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GroupName;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MemberRoleId;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.GroupsUpdateGroupRoleRequest
struct FGroupsUpdateGroupRoleRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExpectedProfileVersion;                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D1[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    Group;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RoleId;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RoleName;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.InsightsInsightsGetDetailsResponse
struct FInsightsInsightsGetDetailsResponse : public FPlayFabResultCommon
{
public:
	int32                                        DataUsageMb;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D2[0x4];                                     // Fixing Size After Last Property 
	class FString                                ErrorMessage;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Limits;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            PendingOperations;                                 // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PerformanceLevel;                                  // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RetentionDays;                                     // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.InsightsInsightsGetLimitsResponse
struct FInsightsInsightsGetLimitsResponse : public FPlayFabResultCommon
{
public:
	int32                                        DefaultPerformanceLevel;                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultStorageRetentionDays;                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorageMaxRetentionDays;                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorageMinRetentionDays;                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            SubMeters;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct PlayFab.InsightsInsightsGetOperationStatusResponse
struct FInsightsInsightsGetOperationStatusResponse : public FPlayFabResultCommon
{
public:
	class FString                                Message;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OperationCompletedTime;                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OperationId;                                       // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OperationLastUpdated;                              // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OperationStartedTime;                              // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OperationType;                                     // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OperationValue;                                    // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D4[0x4];                                     // Fixing Size After Last Property 
	class FString                                Status;                                            // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.InsightsInsightsGetPendingOperationsResponse
struct FInsightsInsightsGetPendingOperationsResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            PendingOperations;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.InsightsInsightsOperationResponse
struct FInsightsInsightsOperationResponse : public FPlayFabResultCommon
{
public:
	class FString                                Message;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OperationId;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OperationType;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.InsightsInsightsEmptyRequest
struct FInsightsInsightsEmptyRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.InsightsInsightsGetOperationStatusRequest
struct FInsightsInsightsGetOperationStatusRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OperationId;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.InsightsInsightsGetPendingOperationsRequest
struct FInsightsInsightsGetPendingOperationsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OperationType;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.InsightsInsightsSetPerformanceRequest
struct FInsightsInsightsSetPerformanceRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PerformanceLevel;                                  // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D6[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.InsightsInsightsSetStorageRetentionRequest
struct FInsightsInsightsSetStorageRetentionRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RetentionDays;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D7[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.LocalizationGetLanguageListResponse
struct FLocalizationGetLanguageListResponse : public FPlayFabResultCommon
{
public:
	class FString                                LanguageList;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.LocalizationGetLanguageListRequest
struct FLocalizationGetLanguageListRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MatchmakerAuthUserResponse
struct FMatchmakerAuthUserResponse : public FPlayFabResultCommon
{
public:
	bool                                         Authorized;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D9[0x7];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.MatchmakerAuthUserRequest
struct FMatchmakerAuthUserRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AuthorizationTicket;                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.MatchmakerPlayerJoinedResponse
struct FMatchmakerPlayerJoinedResponse : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.MatchmakerPlayerLeftResponse
struct FMatchmakerPlayerLeftResponse : public FPlayFabResultCommon
{
public:
};

// 0x68 (0x70 - 0x8)
// ScriptStruct PlayFab.MatchmakerUserInfoResponse
struct FMatchmakerUserInfoResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Inventory;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         IsDeveloper;                                       // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38DA[0x7];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SteamID;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TitleDisplayName;                                  // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrency;                                   // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrencyRechargeTimes;                      // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MatchmakerPlayerJoinedRequest
struct FMatchmakerPlayerJoinedRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MatchmakerPlayerLeftRequest
struct FMatchmakerPlayerLeftRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MatchmakerUserInfoRequest
struct FMatchmakerUserInfoRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinCatalogVersion;                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38DC[0x4];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.MultiplayerCancelAllMatchmakingTicketsForPlayerResult
struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult : public FPlayFabResultCommon
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerCancelAllMatchmakingTicketsForPlayerRequest
struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.MultiplayerCancelAllServerBackfillTicketsForPlayerResult
struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult : public FPlayFabResultCommon
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerCancelAllServerBackfillTicketsForPlayerRequest
struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.MultiplayerCancelMatchmakingTicketResult
struct FMultiplayerCancelMatchmakingTicketResult : public FPlayFabResultCommon
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerCancelMatchmakingTicketRequest
struct FMultiplayerCancelMatchmakingTicketRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TicketId;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.MultiplayerCancelServerBackfillTicketResult
struct FMultiplayerCancelServerBackfillTicketResult : public FPlayFabResultCommon
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerCancelServerBackfillTicketRequest
struct FMultiplayerCancelServerBackfillTicketRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TicketId;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.MultiplayerBuildAliasDetailsResponse
struct FMultiplayerBuildAliasDetailsResponse : public FPlayFabResultCommon
{
public:
	class FString                                AliasId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AliasName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            BuildSelectionCriteria;                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateBuildAliasRequest
struct FMultiplayerCreateBuildAliasRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AliasName;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            BuildSelectionCriteria;                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF8 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateBuildWithCustomContainerResponse
struct FMultiplayerCreateBuildWithCustomContainerResponse : public FPlayFabResultCommon
{
public:
	bool                                         AreAssetsReadonly;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38E1[0x7];                                     // Fixing Size After Last Property 
	class FString                                BuildId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildName;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContainerFlavor                  ContainerFlavor;                                   // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38E2[0x7];                                     // Fixing Size After Last Property 
	class FString                                ContainerRunCommand;                               // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CreationTime;                                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomGameContainerImage;                          // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameAssetReferences;                               // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameCertificateReferences;                         // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    LinuxInstrumentationConfiguration;                 // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MetaData;                                          // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MonitoringApplicationConfiguration;                // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiplayerServerCountPerVm;                       // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38E4[0x4];                                     // Fixing Size After Last Property 
	class FString                                OsPlatform;                                        // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            RegionConfigurations;                              // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ServerResourceConstraints;                         // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerType;                                        // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamingForAssetDownloads;                     // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureVmSize                      VmSize;                                            // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38E6[0x6];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    VmStartupScriptConfiguration;                      // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateBuildWithCustomContainerRequest
struct FMultiplayerCreateBuildWithCustomContainerRequest : public FPlayFabRequestCommon
{
public:
	bool                                         AreAssetsReadonly;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38E9[0x7];                                     // Fixing Size After Last Property 
	class FString                                BuildName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContainerFlavor                  ContainerFlavor;                                   // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38EA[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    ContainerImageReference;                           // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContainerRunCommand;                               // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameAssetReferences;                               // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameCertificateReferences;                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    LinuxInstrumentationConfiguration;                 // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MetaData;                                          // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MonitoringApplicationConfiguration;                // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiplayerServerCountPerVm;                       // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38EB[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            RegionConfigurations;                              // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ServerResourceConstraints;                         // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamingForAssetDownloads;                     // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureVmSize                      VmSize;                                            // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38ED[0x6];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    VmStartupScriptConfiguration;                      // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateBuildWithManagedContainerResponse
struct FMultiplayerCreateBuildWithManagedContainerResponse : public FPlayFabResultCommon
{
public:
	bool                                         AreAssetsReadonly;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38EE[0x7];                                     // Fixing Size After Last Property 
	class FString                                BuildId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildName;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContainerFlavor                  ContainerFlavor;                                   // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38F0[0x7];                                     // Fixing Size After Last Property 
	class FString                                CreationTime;                                      // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameAssetReferences;                               // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameCertificateReferences;                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                GameWorkingDirectory;                              // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InstrumentationConfiguration;                      // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MetaData;                                          // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MonitoringApplicationConfiguration;                // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiplayerServerCountPerVm;                       // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38F1[0x4];                                     // Fixing Size After Last Property 
	class FString                                OsPlatform;                                        // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            RegionConfigurations;                              // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ServerResourceConstraints;                         // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerType;                                        // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StartMultiplayerServerCommand;                     // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamingForAssetDownloads;                     // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureVmSize                      VmSize;                                            // 0xF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38F3[0x6];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    VmStartupScriptConfiguration;                      // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateBuildWithManagedContainerRequest
struct FMultiplayerCreateBuildWithManagedContainerRequest : public FPlayFabRequestCommon
{
public:
	bool                                         AreAssetsReadonly;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38F4[0x7];                                     // Fixing Size After Last Property 
	class FString                                BuildName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContainerFlavor                  ContainerFlavor;                                   // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38F5[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameAssetReferences;                               // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameCertificateReferences;                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                GameWorkingDirectory;                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InstrumentationConfiguration;                      // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MetaData;                                          // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MonitoringApplicationConfiguration;                // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiplayerServerCountPerVm;                       // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38F7[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            RegionConfigurations;                              // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ServerResourceConstraints;                         // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StartMultiplayerServerCommand;                     // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamingForAssetDownloads;                     // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureVmSize                      VmSize;                                            // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38F8[0x6];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    VmStartupScriptConfiguration;                      // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    WindowsCrashDumpConfiguration;                     // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateBuildWithProcessBasedServerResponse
struct FMultiplayerCreateBuildWithProcessBasedServerResponse : public FPlayFabResultCommon
{
public:
	bool                                         AreAssetsReadonly;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38F9[0x7];                                     // Fixing Size After Last Property 
	class FString                                BuildId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildName;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContainerFlavor                  ContainerFlavor;                                   // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38FA[0x7];                                     // Fixing Size After Last Property 
	class FString                                CreationTime;                                      // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameAssetReferences;                               // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameCertificateReferences;                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                GameWorkingDirectory;                              // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InstrumentationConfiguration;                      // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOSPreview;                                       // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38FB[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    MetaData;                                          // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MonitoringApplicationConfiguration;                // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiplayerServerCountPerVm;                       // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38FC[0x4];                                     // Fixing Size After Last Property 
	class FString                                OsPlatform;                                        // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            RegionConfigurations;                              // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ServerType;                                        // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StartMultiplayerServerCommand;                     // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamingForAssetDownloads;                     // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureVmSize                      VmSize;                                            // 0xF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38FD[0x6];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    VmStartupScriptConfiguration;                      // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateBuildWithProcessBasedServerRequest
struct FMultiplayerCreateBuildWithProcessBasedServerRequest : public FPlayFabRequestCommon
{
public:
	bool                                         AreAssetsReadonly;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38FE[0x7];                                     // Fixing Size After Last Property 
	class FString                                BuildName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameAssetReferences;                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameCertificateReferences;                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                GameWorkingDirectory;                              // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InstrumentationConfiguration;                      // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOSPreview;                                       // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38FF[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    MetaData;                                          // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MonitoringApplicationConfiguration;                // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiplayerServerCountPerVm;                       // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3901[0x4];                                     // Fixing Size After Last Property 
	class FString                                OsPlatform;                                        // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            RegionConfigurations;                              // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                StartMultiplayerServerCommand;                     // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamingForAssetDownloads;                     // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureVmSize                      VmSize;                                            // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3902[0x6];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    VmStartupScriptConfiguration;                      // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateLobbyResult
struct FMultiplayerCreateLobbyResult : public FPlayFabResultCommon
{
public:
	class FString                                ConnectionString;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateLobbyRequest
struct FMultiplayerCreateLobbyRequest : public FPlayFabRequestCommon
{
public:
	enum class EAccessPolicy                     AccessPolicy;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3903[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    LobbyData;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3904[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            Members;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Owner;                                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOwnerMigrationPolicy             OwnerMigrationPolicy;                              // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3905[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    SearchData;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseConnections;                                    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3906[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateMatchmakingTicketResult
struct FMultiplayerCreateMatchmakingTicketResult : public FPlayFabResultCommon
{
public:
	class FString                                TicketId;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateMatchmakingTicketRequest
struct FMultiplayerCreateMatchmakingTicketRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    Creator;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GiveUpAfterSeconds;                                // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3907[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            MembersToMatchWith;                                // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateRemoteUserResponse
struct FMultiplayerCreateRemoteUserResponse : public FPlayFabResultCommon
{
public:
	class FString                                ExpirationTime;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateRemoteUserRequest
struct FMultiplayerCreateRemoteUserRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExpirationTime;                                    // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VmId;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateServerBackfillTicketResult
struct FMultiplayerCreateServerBackfillTicketResult : public FPlayFabResultCommon
{
public:
	class FString                                TicketId;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateServerBackfillTicketRequest
struct FMultiplayerCreateServerBackfillTicketRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GiveUpAfterSeconds;                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3908[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            Members;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ServerDetails;                                     // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateServerMatchmakingTicketRequest
struct FMultiplayerCreateServerMatchmakingTicketRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GiveUpAfterSeconds;                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3909[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            Members;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse
struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse : public FPlayFabResultCommon
{
public:
	class FString                                RequestId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WasApproved;                                       // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_390A[0x7];                                     // Fixing Size Of Struct
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest
struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ChangeDescription;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Changes;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ContactEmail;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Notes;                                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StartDate;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.MultiplayerEmptyResponse
struct FMultiplayerEmptyResponse : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.MultiplayerLobbyEmptyResult
struct FMultiplayerLobbyEmptyResult : public FPlayFabResultCommon
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.MultiplayerEnableMultiplayerServersForTitleResponse
struct FMultiplayerEnableMultiplayerServersForTitleResponse : public FPlayFabResultCommon
{
public:
	enum class ETitleMultiplayerServerEnabledStatus Status;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_390B[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerFindFriendLobbiesResult
struct FMultiplayerFindFriendLobbiesResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Lobbies;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Pagination;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerFindLobbiesResult
struct FMultiplayerFindLobbiesResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Lobbies;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Pagination;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetAssetDownloadUrlResponse
struct FMultiplayerGetAssetDownloadUrlResponse : public FPlayFabResultCommon
{
public:
	class FString                                AssetDownloadUrl;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetAssetUploadUrlResponse
struct FMultiplayerGetAssetUploadUrlResponse : public FPlayFabResultCommon
{
public:
	class FString                                AssetUploadUrl;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x110 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetBuildResponse
struct FMultiplayerGetBuildResponse : public FPlayFabResultCommon
{
public:
	bool                                         AreAssetsReadonly;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_390C[0x7];                                     // Fixing Size After Last Property 
	class FString                                BuildId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildName;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildStatus;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContainerFlavor                  ContainerFlavor;                                   // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_390D[0x7];                                     // Fixing Size After Last Property 
	class FString                                ContainerRunCommand;                               // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CreationTime;                                      // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomGameContainerImage;                          // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameAssetReferences;                               // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameCertificateReferences;                         // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InstrumentationConfiguration;                      // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MetaData;                                          // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiplayerServerCountPerVm;                       // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_390E[0x4];                                     // Fixing Size After Last Property 
	class FString                                OsPlatform;                                        // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            RegionConfigurations;                              // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ServerResourceConstraints;                         // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerType;                                        // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StartMultiplayerServerCommand;                     // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureVmSize                      VmSize;                                            // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_390F[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    VmStartupScriptConfiguration;                      // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetContainerRegistryCredentialsResponse
struct FMultiplayerGetContainerRegistryCredentialsResponse : public FPlayFabResultCommon
{
public:
	class FString                                DnsName;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetLobbyResult
struct FMultiplayerGetLobbyResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Lobby;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetMatchResult
struct FMultiplayerGetMatchResult : public FPlayFabResultCommon
{
public:
	class FString                                ArrangementString;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MatchID;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Members;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                RegionPreferences;                                 // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ServerDetails;                                     // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetMatchmakingTicketResult
struct FMultiplayerGetMatchmakingTicketResult : public FPlayFabResultCommon
{
public:
	class FString                                CancellationReasonString;                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChangeNumber;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3911[0x4];                                     // Fixing Size After Last Property 
	class FString                                Created;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Creator;                                           // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GiveUpAfterSeconds;                                // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3912[0x4];                                     // Fixing Size After Last Property 
	class FString                                MatchID;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Members;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            MembersToMatchWith;                                // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Status;                                            // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TicketId;                                          // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC8 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetMultiplayerServerDetailsResponse
struct FMultiplayerGetMultiplayerServerDetailsResponse : public FPlayFabResultCommon
{
public:
	class FString                                BuildId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            ConnectedPlayers;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                FQDN;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IPV4Address;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastStateTransitionTime;                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            PublicIPV4Addresses;                               // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerId;                                          // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionId;                                         // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                State;                                             // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VmId;                                              // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetMultiplayerServerLogsResponse
struct FMultiplayerGetMultiplayerServerLogsResponse : public FPlayFabResultCommon
{
public:
	class FString                                LogDownloadUrl;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetQueueStatisticsResult
struct FMultiplayerGetQueueStatisticsResult : public FPlayFabResultCommon
{
public:
	int32                                        NumberOfPlayersMatching;                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3913[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    TimeToMatchStatisticsInSeconds;                    // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetRemoteLoginEndpointResponse
struct FMultiplayerGetRemoteLoginEndpointResponse : public FPlayFabResultCommon
{
public:
	class FString                                IPV4Address;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Port;                                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3914[0x4];                                     // Fixing Size Of Struct
};

// 0x80 (0x88 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetServerBackfillTicketResult
struct FMultiplayerGetServerBackfillTicketResult : public FPlayFabResultCommon
{
public:
	class FString                                CancellationReasonString;                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Created;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GiveUpAfterSeconds;                                // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3915[0x4];                                     // Fixing Size After Last Property 
	class FString                                MatchID;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Members;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ServerDetails;                                     // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Status;                                            // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TicketId;                                          // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse
struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse : public FPlayFabResultCommon
{
public:
	enum class ETitleMultiplayerServerEnabledStatus Status;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3916[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetTitleMultiplayerServersQuotaChangeResponse
struct FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Change;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetTitleMultiplayerServersQuotasResponse
struct FMultiplayerGetTitleMultiplayerServersQuotasResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Quotas;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.MultiplayerJoinLobbyResult
struct FMultiplayerJoinLobbyResult : public FPlayFabResultCommon
{
public:
	class FString                                LobbyId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.MultiplayerJoinMatchmakingTicketResult
struct FMultiplayerJoinMatchmakingTicketResult : public FPlayFabResultCommon
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListMultiplayerServersResponse
struct FMultiplayerListMultiplayerServersResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            MultiplayerServerSummaries;                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3917[0x4];                                     // Fixing Size After Last Property 
	class FString                                SkipToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListAssetSummariesResponse
struct FMultiplayerListAssetSummariesResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            AssetSummaries;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3918[0x4];                                     // Fixing Size After Last Property 
	class FString                                SkipToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListBuildAliasesResponse
struct FMultiplayerListBuildAliasesResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BuildAliases;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3919[0x4];                                     // Fixing Size After Last Property 
	class FString                                SkipToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListBuildSummariesResponse
struct FMultiplayerListBuildSummariesResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BuildSummaries;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391A[0x4];                                     // Fixing Size After Last Property 
	class FString                                SkipToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListCertificateSummariesResponse
struct FMultiplayerListCertificateSummariesResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            CertificateSummaries;                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391B[0x4];                                     // Fixing Size After Last Property 
	class FString                                SkipToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListContainerImagesResponse
struct FMultiplayerListContainerImagesResponse : public FPlayFabResultCommon
{
public:
	class FString                                Images;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391C[0x4];                                     // Fixing Size After Last Property 
	class FString                                SkipToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.MultiplayerListContainerImageTagsResponse
struct FMultiplayerListContainerImageTagsResponse : public FPlayFabResultCommon
{
public:
	class FString                                Tags;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.MultiplayerListMatchmakingTicketsForPlayerResult
struct FMultiplayerListMatchmakingTicketsForPlayerResult : public FPlayFabResultCommon
{
public:
	class FString                                TicketIds;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListPartyQosServersResponse
struct FMultiplayerListPartyQosServersResponse : public FPlayFabResultCommon
{
public:
	int32                                        PageSize;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391D[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            QosServers;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                SkipToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListQosServersForTitleResponse
struct FMultiplayerListQosServersForTitleResponse : public FPlayFabResultCommon
{
public:
	int32                                        PageSize;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391E[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            QosServers;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                SkipToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.MultiplayerListServerBackfillTicketsForPlayerResult
struct FMultiplayerListServerBackfillTicketsForPlayerResult : public FPlayFabResultCommon
{
public:
	class FString                                TicketIds;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.MultiplayerListTitleMultiplayerServersQuotaChangesResponse
struct FMultiplayerListTitleMultiplayerServersQuotaChangesResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Changes;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListVirtualMachineSummariesResponse
struct FMultiplayerListVirtualMachineSummariesResponse : public FPlayFabResultCommon
{
public:
	int32                                        PageSize;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391F[0x4];                                     // Fixing Size After Last Property 
	class FString                                SkipToken;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            VirtualMachines;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC8 - 0x8)
// ScriptStruct PlayFab.MultiplayerRequestMultiplayerServerResponse
struct FMultiplayerRequestMultiplayerServerResponse : public FPlayFabResultCommon
{
public:
	class FString                                BuildId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            ConnectedPlayers;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                FQDN;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IPV4Address;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastStateTransitionTime;                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            PublicIPV4Addresses;                               // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerId;                                          // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionId;                                         // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                State;                                             // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VmId;                                              // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.MultiplayerRolloverContainerRegistryCredentialsResponse
struct FMultiplayerRolloverContainerRegistryCredentialsResponse : public FPlayFabResultCommon
{
public:
	class FString                                DnsName;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.MultiplayerSubscribeToLobbyResourceResult
struct FMultiplayerSubscribeToLobbyResourceResult : public FPlayFabResultCommon
{
public:
	class FString                                Topic;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerDeleteAssetRequest
struct FMultiplayerDeleteAssetRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerDeleteBuildRequest
struct FMultiplayerDeleteBuildRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerDeleteBuildAliasRequest
struct FMultiplayerDeleteBuildAliasRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AliasId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerDeleteBuildRegionRequest
struct FMultiplayerDeleteBuildRegionRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerDeleteCertificateRequest
struct FMultiplayerDeleteCertificateRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerDeleteContainerImageRequest
struct FMultiplayerDeleteContainerImageRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImageName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerDeleteLobbyRequest
struct FMultiplayerDeleteLobbyRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.MultiplayerDeleteRemoteUserRequest
struct FMultiplayerDeleteRemoteUserRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VmId;                                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.MultiplayerEnableMultiplayerServersForTitleRequest
struct FMultiplayerEnableMultiplayerServersForTitleRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.MultiplayerFindFriendLobbiesRequest
struct FMultiplayerFindFriendLobbiesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EExternalFriendSources            ExternalPlatformFriends;                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3922[0x7];                                     // Fixing Size After Last Property 
	class FString                                Filter;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OrderBy;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Pagination;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxToken;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.MultiplayerFindLobbiesRequest
struct FMultiplayerFindLobbiesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filter;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OrderBy;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Pagination;                                        // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetAssetDownloadUrlRequest
struct FMultiplayerGetAssetDownloadUrlRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetAssetUploadUrlRequest
struct FMultiplayerGetAssetUploadUrlRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetBuildRequest
struct FMultiplayerGetBuildRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetBuildAliasRequest
struct FMultiplayerGetBuildAliasRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AliasId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetContainerRegistryCredentialsRequest
struct FMultiplayerGetContainerRegistryCredentialsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetLobbyRequest
struct FMultiplayerGetLobbyRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetMatchRequest
struct FMultiplayerGetMatchRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EscapeObject;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3923[0x7];                                     // Fixing Size After Last Property 
	class FString                                MatchID;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnMemberAttributes;                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3924[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetMatchmakingTicketRequest
struct FMultiplayerGetMatchmakingTicketRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EscapeObject;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3925[0x7];                                     // Fixing Size After Last Property 
	class FString                                QueueName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TicketId;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetMultiplayerServerDetailsRequest
struct FMultiplayerGetMultiplayerServerDetailsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetMultiplayerServerLogsRequest
struct FMultiplayerGetMultiplayerServerLogsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerId;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetMultiplayerSessionLogsBySessionIdRequest
struct FMultiplayerGetMultiplayerSessionLogsBySessionIdRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetQueueStatisticsRequest
struct FMultiplayerGetQueueStatisticsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetRemoteLoginEndpointRequest
struct FMultiplayerGetRemoteLoginEndpointRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VmId;                                              // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetServerBackfillTicketRequest
struct FMultiplayerGetServerBackfillTicketRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EscapeObject;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3926[0x7];                                     // Fixing Size After Last Property 
	class FString                                QueueName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TicketId;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetTitleEnabledForMultiplayerServersStatusRequest
struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetTitleMultiplayerServersQuotaChangeRequest
struct FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RequestId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetTitleMultiplayerServersQuotasRequest
struct FMultiplayerGetTitleMultiplayerServersQuotasRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerInviteToLobbyRequest
struct FMultiplayerInviteToLobbyRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InviteeEntity;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MemberEntity;                                      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.MultiplayerJoinArrangedLobbyRequest
struct FMultiplayerJoinArrangedLobbyRequest : public FPlayFabRequestCommon
{
public:
	enum class EAccessPolicy                     AccessPolicy;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3929[0x7];                                     // Fixing Size After Last Property 
	class FString                                ArrangementString;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers;                                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_392B[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    MemberData;                                        // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MemberEntity;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOwnerMigrationPolicy             OwnerMigrationPolicy;                              // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseConnections;                                    // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_392C[0x6];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerJoinLobbyRequest
struct FMultiplayerJoinLobbyRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ConnectionString;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MemberData;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MemberEntity;                                      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.MultiplayerJoinMatchmakingTicketRequest
struct FMultiplayerJoinMatchmakingTicketRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Member;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TicketId;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerLeaveLobbyRequest
struct FMultiplayerLeaveLobbyRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MemberEntity;                                      // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.MultiplayerListMultiplayerServersRequest
struct FMultiplayerListMultiplayerServersRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_392E[0x4];                                     // Fixing Size After Last Property 
	class FString                                Region;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SkipToken;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerListAssetSummariesRequest
struct FMultiplayerListAssetSummariesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3930[0x4];                                     // Fixing Size After Last Property 
	class FString                                SkipToken;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerListBuildAliasesRequest
struct FMultiplayerListBuildAliasesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3931[0x4];                                     // Fixing Size After Last Property 
	class FString                                SkipToken;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerListBuildSummariesRequest
struct FMultiplayerListBuildSummariesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3933[0x4];                                     // Fixing Size After Last Property 
	class FString                                SkipToken;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerListCertificateSummariesRequest
struct FMultiplayerListCertificateSummariesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3934[0x4];                                     // Fixing Size After Last Property 
	class FString                                SkipToken;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerListContainerImagesRequest
struct FMultiplayerListContainerImagesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3935[0x4];                                     // Fixing Size After Last Property 
	class FString                                SkipToken;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerListContainerImageTagsRequest
struct FMultiplayerListContainerImageTagsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImageName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerListMatchmakingTicketsForPlayerRequest
struct FMultiplayerListMatchmakingTicketsForPlayerRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.MultiplayerListPartyQosServersRequest
struct FMultiplayerListPartyQosServersRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.MultiplayerListQosServersForTitleRequest
struct FMultiplayerListQosServersForTitleRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IncludeAllRegions;                                 // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3937[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerListServerBackfillTicketsForPlayerRequest
struct FMultiplayerListServerBackfillTicketsForPlayerRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.MultiplayerListTitleMultiplayerServersQuotaChangesRequest
struct FMultiplayerListTitleMultiplayerServersQuotaChangesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.MultiplayerListVirtualMachineSummariesRequest
struct FMultiplayerListVirtualMachineSummariesRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3938[0x4];                                     // Fixing Size After Last Property 
	class FString                                Region;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SkipToken;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerRemoveMemberFromLobbyRequest
struct FMultiplayerRemoveMemberFromLobbyRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MemberEntity;                                      // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PreventRejoin;                                     // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3939[0x7];                                     // Fixing Size Of Struct
};

// 0x60 (0x68 - 0x8)
// ScriptStruct PlayFab.MultiplayerRequestMultiplayerServerRequest
struct FMultiplayerRequestMultiplayerServerRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    BuildAliasParams;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InitialPlayers;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PreferredRegions;                                  // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionCookie;                                     // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionId;                                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.MultiplayerRolloverContainerRegistryCredentialsRequest
struct FMultiplayerRolloverContainerRegistryCredentialsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerShutdownMultiplayerServerRequest
struct FMultiplayerShutdownMultiplayerServerRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.MultiplayerSubscribeToLobbyResourceRequest
struct FMultiplayerSubscribeToLobbyResourceRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    EntityKey;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PubSubConnectionHandle;                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ResourceId;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubscriptionVersion;                               // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubscriptionType                 Type;                                              // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393A[0x3];                                     // Fixing Size Of Struct
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.MultiplayerUnsubscribeFromLobbyResourceRequest
struct FMultiplayerUnsubscribeFromLobbyResourceRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    EntityKey;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PubSubConnectionHandle;                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ResourceId;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubscriptionVersion;                               // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubscriptionType                 Type;                                              // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393B[0x3];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerUntagContainerImageRequest
struct FMultiplayerUntagContainerImageRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImageName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tag;                                               // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.MultiplayerUpdateBuildAliasRequest
struct FMultiplayerUpdateBuildAliasRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AliasId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AliasName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            BuildSelectionCriteria;                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerUpdateBuildNameRequest
struct FMultiplayerUpdateBuildNameRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerUpdateBuildRegionRequest
struct FMultiplayerUpdateBuildRegionRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    BuildRegion;                                       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerUpdateBuildRegionsRequest
struct FMultiplayerUpdateBuildRegionsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            BuildRegions;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct PlayFab.MultiplayerUpdateLobbyRequest
struct FMultiplayerUpdateLobbyRequest : public FPlayFabRequestCommon
{
public:
	enum class EAccessPolicy                     AccessPolicy;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393C[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    LobbyData;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyDataToDelete;                                 // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers;                                        // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393D[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    MemberData;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MemberDataToDelete;                                // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MemberEntity;                                      // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMembershipLock                   MembershipLock;                                    // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393E[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    Owner;                                             // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    SearchData;                                        // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SearchDataToDelete;                                // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.MultiplayerUploadCertificateRequest
struct FMultiplayerUploadCertificateRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    GameCertificate;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ProfilesGetGlobalPolicyResponse
struct FProfilesGetGlobalPolicyResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Permissions;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ProfilesGetEntityProfileResponse
struct FProfilesGetEntityProfileResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Profile;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ProfilesGetEntityProfilesResponse
struct FProfilesGetEntityProfilesResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Profiles;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse
struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse : public FPlayFabResultCommon
{
public:
	class FString                                TitleId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    TitlePlayerAccounts;                               // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ProfilesGetTitlePlayersFromProviderIDsResponse
struct FProfilesGetTitlePlayersFromProviderIDsResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    TitlePlayerAccounts;                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ProfilesSetGlobalPolicyResponse
struct FProfilesSetGlobalPolicyResponse : public FPlayFabResultCommon
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ProfilesSetProfileLanguageResponse
struct FProfilesSetProfileLanguageResponse : public FPlayFabResultCommon
{
public:
	enum class EOperationTypes                   OperationResult;                                   // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393F[0x3];                                     // Fixing Size After Last Property 
	int32                                        VersionNumber;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ProfilesSetEntityProfilePolicyResponse
struct FProfilesSetEntityProfilePolicyResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Permissions;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ProfilesGetGlobalPolicyRequest
struct FProfilesGetGlobalPolicyRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ProfilesGetEntityProfileRequest
struct FProfilesGetEntityProfileRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DataAsObject;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3940[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    Entity;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ProfilesGetEntityProfilesRequest
struct FProfilesGetEntityProfilesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DataAsObject;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3941[0x7];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            Entities;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest
struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MasterPlayerAccountIds;                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ProfilesGetTitlePlayersFromXboxLiveIDsRequest
struct FProfilesGetTitlePlayersFromXboxLiveIDsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Sandbox;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxLiveIds;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ProfilesSetGlobalPolicyRequest
struct FProfilesSetGlobalPolicyRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Permissions;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ProfilesSetProfileLanguageRequest
struct FProfilesSetProfileLanguageRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExpectedVersion;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3942[0x4];                                     // Fixing Size After Last Property 
	class FString                                Language;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ProfilesSetEntityProfilePolicyRequest
struct FProfilesSetEntityProfilePolicyRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Statements;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerModifyCharacterVirtualCurrencyResult
struct FServerModifyCharacterVirtualCurrencyResult : public FPlayFabResultCommon
{
public:
	int32                                        Balance;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3944[0x4];                                     // Fixing Size After Last Property 
	class FString                                VirtualCurrency;                                   // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ServerAddCharacterVirtualCurrencyRequest
struct FServerAddCharacterVirtualCurrencyRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3945[0x4];                                     // Fixing Size After Last Property 
	class FString                                CharacterId;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VirtualCurrency;                                   // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerEmptyResponse
struct FServerEmptyResponse : public FPlayFabResultCommon
{
public:
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.ServerAddFriendRequest
struct FServerAddFriendRequest : public FPlayFabRequestCommon
{
public:
	class FString                                FriendEmail;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FriendPlayFabId;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FriendTitleDisplayName;                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FriendUsername;                                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerEmptyResult
struct FServerEmptyResult : public FPlayFabResultCommon
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerAddGenericIDRequest
struct FServerAddGenericIDRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    GenericId;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerAddPlayerTagResult
struct FServerAddPlayerTagResult : public FPlayFabResultCommon
{
public:
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerAddPlayerTagRequest
struct FServerAddPlayerTagRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TagName;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerAddSharedGroupMembersResult
struct FServerAddSharedGroupMembersResult : public FPlayFabResultCommon
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerAddSharedGroupMembersRequest
struct FServerAddSharedGroupMembersRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabIds;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SharedGroupId;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerModifyUserVirtualCurrencyResult
struct FServerModifyUserVirtualCurrencyResult : public FPlayFabResultCommon
{
public:
	int32                                        Balance;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BalanceChange;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VirtualCurrency;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerAddUserVirtualCurrencyRequest
struct FServerAddUserVirtualCurrencyRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3949[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VirtualCurrency;                                   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerAuthenticateSessionTicketResult
struct FServerAuthenticateSessionTicketResult : public FPlayFabResultCommon
{
public:
	bool                                         IsSessionTicketExpired;                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394A[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    UserInfo;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerAuthenticateSessionTicketRequest
struct FServerAuthenticateSessionTicketRequest : public FPlayFabRequestCommon
{
public:
	class FString                                SessionTicket;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerAwardSteamAchievementResult
struct FServerAwardSteamAchievementResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            AchievementResults;                                // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerAwardSteamAchievementRequest
struct FServerAwardSteamAchievementRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Achievements;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerBanUsersResult
struct FServerBanUsersResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BanData;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerBanUsersRequest
struct FServerBanUsersRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Bans;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerConsumeItemResult
struct FServerConsumeItemResult : public FPlayFabResultCommon
{
public:
	class FString                                ItemInstanceId;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemainingUses;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394B[0x4];                                     // Fixing Size Of Struct
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ServerConsumeItemRequest
struct FServerConsumeItemRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConsumeCount;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394D[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemInstanceId;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerCreateSharedGroupResult
struct FServerCreateSharedGroupResult : public FPlayFabResultCommon
{
public:
	class FString                                SharedGroupId;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerCreateSharedGroupRequest
struct FServerCreateSharedGroupRequest : public FPlayFabRequestCommon
{
public:
	class FString                                SharedGroupId;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerDeleteCharacterFromUserResult
struct FServerDeleteCharacterFromUserResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerDeletePlayerResult
struct FServerDeletePlayerResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerDeletePushNotificationTemplateResult
struct FServerDeletePushNotificationTemplateResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerDeregisterGameResponse
struct FServerDeregisterGameResponse : public FPlayFabResultCommon
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerEvaluateRandomResultTableResult
struct FServerEvaluateRandomResultTableResult : public FPlayFabResultCommon
{
public:
	class FString                                ResultItemId;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.ServerExecuteCloudScriptResult
struct FServerExecuteCloudScriptResult : public FPlayFabResultCommon
{
public:
	int32                                        APIRequestsIssued;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394E[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    Error;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExecutionTimeSeconds;                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394F[0x4];                                     // Fixing Size After Last Property 
	class FString                                FunctionName;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionResult;                                    // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FunctionResultTooLarge;                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3950[0x3];                                     // Fixing Size After Last Property 
	int32                                        HttpRequestsIssued;                                // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Logs;                                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         LogsTooLarge;                                      // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3951[0x3];                                     // Fixing Size After Last Property 
	int32                                        MemoryConsumedBytes;                               // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProcessorTimeSeconds;                              // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Revision;                                          // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetAllSegmentsResult
struct FServerGetAllSegmentsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Segments;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerListUsersCharactersResult
struct FServerListUsersCharactersResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Characters;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetCatalogItemsResult
struct FServerGetCatalogItemsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Catalog;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerGetCharacterDataResult
struct FServerGetCharacterDataResult : public FPlayFabResultCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Data;                                              // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataVersion;                                       // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3952[0x4];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ServerGetCharacterInventoryResult
struct FServerGetCharacterInventoryResult : public FPlayFabResultCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Inventory;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrency;                                   // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrencyRechargeTimes;                      // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetCharacterLeaderboardResult
struct FServerGetCharacterLeaderboardResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Leaderboard;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerGetCharacterStatisticsResult
struct FServerGetCharacterStatisticsResult : public FPlayFabResultCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CharacterStatistics;                               // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetContentDownloadUrlResult
struct FServerGetContentDownloadUrlResult : public FPlayFabResultCommon
{
public:
	class FString                                URL;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerGetLeaderboardResult
struct FServerGetLeaderboardResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Leaderboard;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextReset;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3953[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetFriendsListResult
struct FServerGetFriendsListResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Friends;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetLeaderboardAroundCharacterResult
struct FServerGetLeaderboardAroundCharacterResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Leaderboard;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerGetLeaderboardAroundUserResult
struct FServerGetLeaderboardAroundUserResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Leaderboard;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextReset;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3954[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetLeaderboardForUsersCharactersResult
struct FServerGetLeaderboardForUsersCharactersResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Leaderboard;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayerCombinedInfoResult
struct FServerGetPlayerCombinedInfoResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    InfoResultPayload;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayerProfileResult
struct FServerGetPlayerProfileResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    PlayerProfile;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayerSegmentsResult
struct FServerGetPlayerSegmentsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Segments;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayersInSegmentResult
struct FServerGetPlayersInSegmentResult : public FPlayFabResultCommon
{
public:
	class FString                                ContinuationToken;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            PlayerProfiles;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ProfilesInSegment;                                 // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3956[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayerStatisticsResult
struct FServerGetPlayerStatisticsResult : public FPlayFabResultCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Statistics;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayerStatisticVersionsResult
struct FServerGetPlayerStatisticVersionsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            StatisticVersions;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayerTagsResult
struct FServerGetPlayerTagsResult : public FPlayFabResultCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tags;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookIDsResult
struct FServerGetPlayFabIDsFromFacebookIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookInstantGamesIdsResult
struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromGenericIDsResult
struct FServerGetPlayFabIDsFromGenericIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromNintendoServiceAccountIdsResult
struct FServerGetPlayFabIDsFromNintendoServiceAccountIdsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult
struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromPSNAccountIDsResult
struct FServerGetPlayFabIDsFromPSNAccountIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromSteamIDsResult
struct FServerGetPlayFabIDsFromSteamIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromTwitchIDsResult
struct FServerGetPlayFabIDsFromTwitchIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromXboxLiveIDsResult
struct FServerGetPlayFabIDsFromXboxLiveIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ServerGetPublisherDataResult
struct FServerGetPublisherDataResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Data;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ServerGetRandomResultTablesResult
struct FServerGetRandomResultTablesResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Tables;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetServerCustomIDsFromPlayFabIDsResult
struct FServerGetServerCustomIDsFromPlayFabIDsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Data;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerGetSharedGroupDataResult
struct FServerGetSharedGroupDataResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Data;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Members;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ServerGetStoreItemsResult
struct FServerGetStoreItemsResult : public FPlayFabResultCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MarketingData;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPfSourceType                     Source;                                            // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3959[0x7];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            Store;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                StoreId;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetTimeResult
struct FServerGetTimeResult : public FPlayFabResultCommon
{
public:
	class FString                                Time;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ServerGetTitleDataResult
struct FServerGetTitleDataResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Data;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetTitleNewsResult
struct FServerGetTitleNewsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            News;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ServerGetUserAccountInfoResult
struct FServerGetUserAccountInfoResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    UserInfo;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetUserBansResult
struct FServerGetUserBansResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BanData;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerGetUserDataResult
struct FServerGetUserDataResult : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Data;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataVersion;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_395A[0x4];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerGetUserInventoryResult
struct FServerGetUserInventoryResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Inventory;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrency;                                   // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrencyRechargeTimes;                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGrantCharacterToUserResult
struct FServerGrantCharacterToUserResult : public FPlayFabResultCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGrantItemsToCharacterResult
struct FServerGrantItemsToCharacterResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            ItemGrantResults;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGrantItemsToUserResult
struct FServerGrantItemsToUserResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            ItemGrantResults;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGrantItemsToUsersResult
struct FServerGrantItemsToUsersResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            ItemGrantResults;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerLinkNintendoSwitchDeviceIdResult
struct FServerLinkNintendoSwitchDeviceIdResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerLinkPSNAccountResult
struct FServerLinkPSNAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerLinkServerCustomIdResult
struct FServerLinkServerCustomIdResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerLinkSteamIdResult
struct FServerLinkSteamIdResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerLinkXboxAccountResult
struct FServerLinkXboxAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x58 (0x68 - 0x10)
// ScriptStruct PlayFab.ServerServerLoginResult
struct FServerServerLoginResult : public FPlayFabLoginResultCommon
{
public:
	class UPlayFabJsonObject*                    EntityToken;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoResultPayload;                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastLoginTime;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NewlyCreated;                                      // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_395D[0x7];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionTicket;                                     // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    SettingsForUser;                                   // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    TreatmentAssignment;                               // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerModifyItemUsesResult
struct FServerModifyItemUsesResult : public FPlayFabResultCommon
{
public:
	class FString                                ItemInstanceId;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemainingUses;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_395F[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerMoveItemToCharacterFromCharacterResult
struct FServerMoveItemToCharacterFromCharacterResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerMoveItemToCharacterFromUserResult
struct FServerMoveItemToCharacterFromUserResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerMoveItemToUserFromCharacterResult
struct FServerMoveItemToUserFromCharacterResult : public FPlayFabResultCommon
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ServerNotifyMatchmakerPlayerLeftResult
struct FServerNotifyMatchmakerPlayerLeftResult : public FPlayFabResultCommon
{
public:
	enum class EPlayerConnectionState            PlayerState;                                       // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3960[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerRedeemCouponResult
struct FServerRedeemCouponResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            GrantedItems;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerRedeemMatchmakerTicketResult
struct FServerRedeemMatchmakerTicketResult : public FPlayFabResultCommon
{
public:
	class FString                                Error;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TicketIsValid;                                     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3961[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    UserInfo;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerRefreshGameServerInstanceHeartbeatResult
struct FServerRefreshGameServerInstanceHeartbeatResult : public FPlayFabResultCommon
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerRegisterGameResponse
struct FServerRegisterGameResponse : public FPlayFabResultCommon
{
public:
	class FString                                LobbyId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerRemovePlayerTagResult
struct FServerRemovePlayerTagResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerRemoveSharedGroupMembersResult
struct FServerRemoveSharedGroupMembersResult : public FPlayFabResultCommon
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ServerReportPlayerServerResult
struct FServerReportPlayerServerResult : public FPlayFabResultCommon
{
public:
	int32                                        SubmissionsRemaining;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3962[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerRevokeAllBansForUserResult
struct FServerRevokeAllBansForUserResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BanData;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerRevokeBansResult
struct FServerRevokeBansResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BanData;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerRevokeInventoryResult
struct FServerRevokeInventoryResult : public FPlayFabResultCommon
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerRevokeInventoryItemsResult
struct FServerRevokeInventoryItemsResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Errors;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerSavePushNotificationTemplateResult
struct FServerSavePushNotificationTemplateResult : public FPlayFabResultCommon
{
public:
	class FString                                PushNotificationTemplateId;                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerSendCustomAccountRecoveryEmailResult
struct FServerSendCustomAccountRecoveryEmailResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerSendEmailFromTemplateResult
struct FServerSendEmailFromTemplateResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerSendPushNotificationResult
struct FServerSendPushNotificationResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerSetGameServerInstanceDataResult
struct FServerSetGameServerInstanceDataResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerSetGameServerInstanceStateResult
struct FServerSetGameServerInstanceStateResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerSetGameServerInstanceTagsResult
struct FServerSetGameServerInstanceTagsResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerSetPlayerSecretResult
struct FServerSetPlayerSecretResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerSetPublisherDataResult
struct FServerSetPublisherDataResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerSetTitleDataResult
struct FServerSetTitleDataResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerUnlinkNintendoSwitchDeviceIdResult
struct FServerUnlinkNintendoSwitchDeviceIdResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerUnlinkPSNAccountResult
struct FServerUnlinkPSNAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerUnlinkServerCustomIdResult
struct FServerUnlinkServerCustomIdResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerUnlinkSteamIdResult
struct FServerUnlinkSteamIdResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerUnlinkXboxAccountResult
struct FServerUnlinkXboxAccountResult : public FPlayFabResultCommon
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerUnlockContainerItemResult
struct FServerUnlockContainerItemResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            GrantedItems;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                UnlockedItemInstanceId;                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UnlockedWithItemInstanceId;                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    VirtualCurrency;                                   // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerUpdateBansResult
struct FServerUpdateBansResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BanData;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ServerUpdateCharacterDataResult
struct FServerUpdateCharacterDataResult : public FPlayFabResultCommon
{
public:
	int32                                        DataVersion;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3963[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerUpdateCharacterStatisticsResult
struct FServerUpdateCharacterStatisticsResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerUpdatePlayerStatisticsResult
struct FServerUpdatePlayerStatisticsResult : public FPlayFabResultCommon
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerUpdateSharedGroupDataResult
struct FServerUpdateSharedGroupDataResult : public FPlayFabResultCommon
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ServerUpdateUserDataResult
struct FServerUpdateUserDataResult : public FPlayFabResultCommon
{
public:
	int32                                        DataVersion;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3965[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerWriteEventResponse
struct FServerWriteEventResponse : public FPlayFabResultCommon
{
public:
	class FString                                EventId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerDeleteCharacterFromUserRequest
struct FServerDeleteCharacterFromUserRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SaveCharacterInventory;                            // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3966[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerDeletePlayerRequest
struct FServerDeletePlayerRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerDeletePushNotificationTemplateRequest
struct FServerDeletePushNotificationTemplateRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PushNotificationTemplateId;                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerDeleteSharedGroupRequest
struct FServerDeleteSharedGroupRequest : public FPlayFabRequestCommon
{
public:
	class FString                                SharedGroupId;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerDeregisterGameRequest
struct FServerDeregisterGameRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerEvaluateRandomResultTableRequest
struct FServerEvaluateRandomResultTableRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TableId;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ServerExecuteCloudScriptServerRequest
struct FServerExecuteCloudScriptServerRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FunctionName;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionParameter;                                 // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GeneratePlayStreamEvent;                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3967[0x7];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECloudScriptRevisionOption        RevisionSelection;                                 // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3968[0x3];                                     // Fixing Size After Last Property 
	int32                                        SpecificRevision;                                  // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerGetAllSegmentsRequest
struct FServerGetAllSegmentsRequest : public FPlayFabRequestCommon
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerListUsersCharactersRequest
struct FServerListUsersCharactersRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetCatalogItemsRequest
struct FServerGetCatalogItemsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerGetCharacterDataRequest
struct FServerGetCharacterDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IfChangedFromDataVersion;                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3969[0x4];                                     // Fixing Size After Last Property 
	class FString                                Keys;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerGetCharacterInventoryRequest
struct FServerGetCharacterInventoryRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterId;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerGetCharacterLeaderboardRequest
struct FServerGetCharacterLeaderboardRequest : public FPlayFabRequestCommon
{
public:
	int32                                        MaxResultsCount;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartPosition;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerGetCharacterStatisticsRequest
struct FServerGetCharacterStatisticsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerGetContentDownloadUrlRequest
struct FServerGetContentDownloadUrlRequest : public FPlayFabRequestCommon
{
public:
	class FString                                HttpMethod;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ThruCDN;                                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_396A[0x7];                                     // Fixing Size Of Struct
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.ServerGetFriendLeaderboardRequest
struct FServerGetFriendLeaderboardRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EExternalFriendSources            ExternalPlatformFriends;                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_396B[0x3];                                     // Fixing Size After Last Property 
	int32                                        MaxResultsCount;                                   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartPosition;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_396D[0x4];                                     // Fixing Size After Last Property 
	class FString                                StatisticName;                                     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpecificVersion;                                // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_396E[0x3];                                     // Fixing Size After Last Property 
	int32                                        Version;                                           // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxToken;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerGetFriendsListRequest
struct FServerGetFriendsListRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EExternalFriendSources            ExternalPlatformFriends;                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_396F[0x7];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxToken;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerGetLeaderboardRequest
struct FServerGetLeaderboardRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResultsCount;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3970[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartPosition;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3971[0x4];                                     // Fixing Size After Last Property 
	class FString                                StatisticName;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpecificVersion;                                // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3972[0x3];                                     // Fixing Size After Last Property 
	int32                                        Version;                                           // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerGetLeaderboardAroundCharacterRequest
struct FServerGetLeaderboardAroundCharacterRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResultsCount;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3973[0x4];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ServerGetLeaderboardAroundUserRequest
struct FServerGetLeaderboardAroundUserRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResultsCount;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3974[0x4];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpecificVersion;                                // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3975[0x3];                                     // Fixing Size After Last Property 
	int32                                        Version;                                           // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerGetLeaderboardForUsersCharactersRequest
struct FServerGetLeaderboardForUsersCharactersRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayerCombinedInfoRequest
struct FServerGetPlayerCombinedInfoRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayerProfileRequest
struct FServerGetPlayerProfileRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayersSegmentsRequest
struct FServerGetPlayersSegmentsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayersInSegmentRequest
struct FServerGetPlayersInSegmentRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ContinuationToken;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GetProfilesAsync;                                  // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3977[0x3];                                     // Fixing Size After Last Property 
	int32                                        MaxBatchSize;                                      // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondsToLive;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3978[0x4];                                     // Fixing Size After Last Property 
	class FString                                SegmentId;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayerStatisticsRequest
struct FServerGetPlayerStatisticsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticNames;                                    // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            StatisticNameVersions;                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayerStatisticVersionsRequest
struct FServerGetPlayerStatisticVersionsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayerTagsRequest
struct FServerGetPlayerTagsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Namespace;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookIDsRequest
struct FServerGetPlayFabIDsFromFacebookIDsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                FacebookIDs;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest
struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                FacebookInstantGamesIds;                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromGenericIDsRequest
struct FServerGetPlayFabIDsFromGenericIDsRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            GenericIDs;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromNintendoServiceAccountIdsRequest
struct FServerGetPlayFabIDsFromNintendoServiceAccountIdsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                NintendoAccountIds;                                // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                NintendoSwitchDeviceIds;                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromPSNAccountIDsRequest
struct FServerGetPlayFabIDsFromPSNAccountIDsRequest : public FPlayFabRequestCommon
{
public:
	int32                                        IssuerId;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3979[0x4];                                     // Fixing Size After Last Property 
	class FString                                PSNAccountIDs;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromSteamIDsRequest
struct FServerGetPlayFabIDsFromSteamIDsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                SteamStringIDs;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromTwitchIDsRequest
struct FServerGetPlayFabIDsFromTwitchIDsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                TwitchIds;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerGetPlayFabIDsFromXboxLiveIDsRequest
struct FServerGetPlayFabIDsFromXboxLiveIDsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Sandbox;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxLiveAccountIDs;                                // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetPublisherDataRequest
struct FServerGetPublisherDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Keys;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerGetRandomResultTablesRequest
struct FServerGetRandomResultTablesRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TableIDs;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetServerCustomIDsFromPlayFabIDsRequest
struct FServerGetServerCustomIDsFromPlayFabIDsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabIds;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerGetSharedGroupDataRequest
struct FServerGetSharedGroupDataRequest : public FPlayFabRequestCommon
{
public:
	bool                                         GetMembers;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_397B[0x7];                                     // Fixing Size After Last Property 
	class FString                                Keys;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SharedGroupId;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerGetStoreItemsServerRequest
struct FServerGetStoreItemsServerRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StoreId;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct PlayFab.ServerGetTimeRequest
struct FServerGetTimeRequest : public FPlayFabRequestCommon
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerGetTitleDataRequest
struct FServerGetTitleDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Keys;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OverrideLabel;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct PlayFab.ServerGetTitleNewsRequest
struct FServerGetTitleNewsRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Count;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_397D[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetUserAccountInfoRequest
struct FServerGetUserAccountInfoRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerGetUserBansRequest
struct FServerGetUserBansRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerGetUserDataRequest
struct FServerGetUserDataRequest : public FPlayFabRequestCommon
{
public:
	int32                                        IfChangedFromDataVersion;                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_397E[0x4];                                     // Fixing Size After Last Property 
	class FString                                Keys;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerGetUserInventoryRequest
struct FServerGetUserInventoryRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerGrantCharacterToUserRequest
struct FServerGrantCharacterToUserRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterName;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterType;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.ServerGrantItemsToCharacterRequest
struct FServerGrantItemsToCharacterRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Annotation;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CatalogVersion;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterId;                                       // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemIds;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ServerGrantItemsToUserRequest
struct FServerGrantItemsToUserRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Annotation;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CatalogVersion;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemIds;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerGrantItemsToUsersRequest
struct FServerGrantItemsToUsersRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            ItemGrants;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerLinkNintendoServiceAccountRequest
struct FServerLinkNintendoServiceAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3980[0x7];                                     // Fixing Size After Last Property 
	class FString                                IdentityToken;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerLinkNintendoSwitchDeviceIdRequest
struct FServerLinkNintendoSwitchDeviceIdRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3981[0x7];                                     // Fixing Size After Last Property 
	class FString                                NintendoSwitchDeviceId;                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ServerLinkPSNAccountRequest
struct FServerLinkPSNAccountRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AuthCode;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3982[0x3];                                     // Fixing Size After Last Property 
	int32                                        IssuerId;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RedirectUri;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerLinkServerCustomIdRequest
struct FServerLinkServerCustomIdRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3983[0x7];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerCustomId;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerLinkSteamIdRequest
struct FServerLinkSteamIdRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3984[0x7];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SteamID;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerLinkXboxAccountRequest
struct FServerLinkXboxAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3985[0x7];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxToken;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerLoginWithServerCustomIdRequest
struct FServerLoginWithServerCustomIdRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3986[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerCustomId;                                    // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerLoginWithSteamIdRequest
struct FServerLoginWithSteamIdRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3987[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SteamID;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerLoginWithXboxRequest
struct FServerLoginWithXboxRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3988[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerLoginWithXboxIdRequest
struct FServerLoginWithXboxIdRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3989[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Sandbox;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxId;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerModifyItemUsesRequest
struct FServerModifyItemUsesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemInstanceId;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UsesToAdd;                                         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398A[0x4];                                     // Fixing Size Of Struct
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ServerMoveItemToCharacterFromCharacterRequest
struct FServerMoveItemToCharacterFromCharacterRequest : public FPlayFabRequestCommon
{
public:
	class FString                                GivingCharacterId;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemInstanceId;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceivingCharacterId;                              // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerMoveItemToCharacterFromUserRequest
struct FServerMoveItemToCharacterFromUserRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemInstanceId;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerMoveItemToUserFromCharacterRequest
struct FServerMoveItemToUserFromCharacterRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemInstanceId;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerNotifyMatchmakerPlayerLeftRequest
struct FServerNotifyMatchmakerPlayerLeftRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ServerRedeemCouponRequest
struct FServerRedeemCouponRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterId;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CouponCode;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerRedeemMatchmakerTicketRequest
struct FServerRedeemMatchmakerTicketRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Ticket;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerRefreshGameServerInstanceHeartbeatRequest
struct FServerRefreshGameServerInstanceHeartbeatRequest : public FPlayFabRequestCommon
{
public:
	class FString                                LobbyId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct PlayFab.ServerRegisterGameRequest
struct FServerRegisterGameRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Build;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameMode;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERegion                           Region;                                            // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398B[0x7];                                     // Fixing Size After Last Property 
	class FString                                ServerIPV4Address;                                 // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerIPV6Address;                                 // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerPort;                                        // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerPublicDNSName;                               // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Tags;                                              // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerRemoveFriendRequest
struct FServerRemoveFriendRequest : public FPlayFabRequestCommon
{
public:
	class FString                                FriendPlayFabId;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerRemoveGenericIDRequest
struct FServerRemoveGenericIDRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    GenericId;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerRemovePlayerTagRequest
struct FServerRemovePlayerTagRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TagName;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerRemoveSharedGroupMembersRequest
struct FServerRemoveSharedGroupMembersRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabIds;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SharedGroupId;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerReportPlayerServerRequest
struct FServerReportPlayerServerRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Comment;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReporteeId;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReporterId;                                        // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerRevokeAllBansForUserRequest
struct FServerRevokeAllBansForUserRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayFabId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerRevokeBansRequest
struct FServerRevokeBansRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BanIds;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerRevokeInventoryItemRequest
struct FServerRevokeInventoryItemRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemInstanceId;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerRevokeInventoryItemsRequest
struct FServerRevokeInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ServerSavePushNotificationTemplateRequest
struct FServerSavePushNotificationTemplateRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AndroidPayload;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IOSPayload;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    LocalizedPushNotificationTemplates;                // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerSendCustomAccountRecoveryEmailRequest
struct FServerSendCustomAccountRecoveryEmailRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Email;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EmailTemplateId;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerSendEmailFromTemplateRequest
struct FServerSendEmailFromTemplateRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EmailTemplateId;                                   // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct PlayFab.ServerSendPushNotificationRequest
struct FServerSendPushNotificationRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            AdvancedPlatformDelivery;                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Package;                                           // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Recipient;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Subject;                                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetPlatforms;                                   // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerSendPushNotificationFromTemplateRequest
struct FServerSendPushNotificationFromTemplateRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PushNotificationTemplateId;                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Recipient;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerSetFriendTagsRequest
struct FServerSetFriendTagsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                FriendPlayFabId;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tags;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerSetGameServerInstanceDataRequest
struct FServerSetGameServerInstanceDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                GameServerData;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerSetGameServerInstanceStateRequest
struct FServerSetGameServerInstanceStateRequest : public FPlayFabRequestCommon
{
public:
	class FString                                LobbyId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameInstanceState                State;                                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398C[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerSetGameServerInstanceTagsRequest
struct FServerSetGameServerInstanceTagsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                LobbyId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Tags;                                              // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerSetPlayerSecretRequest
struct FServerSetPlayerSecretRequest : public FPlayFabRequestCommon
{
public:
	class FString                                PlayerSecret;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerSetPublisherDataRequest
struct FServerSetPublisherDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Key;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerSetTitleDataRequest
struct FServerSetTitleDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                Key;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ServerSubtractCharacterVirtualCurrencyRequest
struct FServerSubtractCharacterVirtualCurrencyRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398D[0x4];                                     // Fixing Size After Last Property 
	class FString                                CharacterId;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VirtualCurrency;                                   // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerSubtractUserVirtualCurrencyRequest
struct FServerSubtractUserVirtualCurrencyRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398E[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VirtualCurrency;                                   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerUnlinkNintendoServiceAccountRequest
struct FServerUnlinkNintendoServiceAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerUnlinkNintendoSwitchDeviceIdRequest
struct FServerUnlinkNintendoSwitchDeviceIdRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NintendoSwitchDeviceId;                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerUnlinkPSNAccountRequest
struct FServerUnlinkPSNAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ServerUnlinkServerCustomIdRequest
struct FServerUnlinkServerCustomIdRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerCustomId;                                    // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerUnlinkSteamIdRequest
struct FServerUnlinkSteamIdRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.ServerUnlinkXboxAccountRequest
struct FServerUnlinkXboxAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.ServerUnlockContainerInstanceRequest
struct FServerUnlockContainerInstanceRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterId;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContainerItemInstanceId;                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeyItemInstanceId;                                 // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ServerUnlockContainerItemRequest
struct FServerUnlockContainerItemRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CatalogVersion;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterId;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContainerItemId;                                   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ServerUpdateAvatarUrlRequest
struct FServerUpdateAvatarUrlRequest : public FPlayFabRequestCommon
{
public:
	class FString                                ImageUrl;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.ServerUpdateBansRequest
struct FServerUpdateBansRequest : public FPlayFabRequestCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Bans;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ServerUpdateCharacterDataRequest
struct FServerUpdateCharacterDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Data;                                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeysToRemove;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUserDataPermission               Permission;                                        // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3993[0x7];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerUpdateCharacterStatisticsRequest
struct FServerUpdateCharacterStatisticsRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CharacterStatistics;                               // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerUpdatePlayerStatisticsRequest
struct FServerUpdatePlayerStatisticsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceUpdate;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3994[0x7];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Statistics;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerUpdateSharedGroupDataRequest
struct FServerUpdateSharedGroupDataRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Data;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeysToRemove;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUserDataPermission               Permission;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3995[0x7];                                     // Fixing Size After Last Property 
	class FString                                SharedGroupId;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerUpdateUserDataRequest
struct FServerUpdateUserDataRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Data;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeysToRemove;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUserDataPermission               Permission;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3996[0x7];                                     // Fixing Size After Last Property 
	class FString                                PlayFabId;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerUpdateUserInternalDataRequest
struct FServerUpdateUserInternalDataRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Data;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeysToRemove;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.ServerUpdateUserInventoryItemDataRequest
struct FServerUpdateUserInventoryItemDataRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Data;                                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemInstanceId;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeysToRemove;                                      // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.ServerWriteServerCharacterEventRequest
struct FServerWriteServerCharacterEventRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    Body;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterId;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ServerWriteServerPlayerEventRequest
struct FServerWriteServerPlayerEventRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    Body;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ServerWriteTitleEventRequest
struct FServerWriteTitleEventRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    Body;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


